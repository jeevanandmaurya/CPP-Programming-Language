#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Screen dimensions
const int WIDTH = 40;
const int HEIGHT = 20;

// Directions
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

// Snake and food position
int x, y, foodX, foodY, score;
vector<pair<int, int>> snake;
int snakeLength;

// Game over flag
bool gameOver;

// Draw the game board
void draw() {
    system("cls"); // Clear the console

    // Top border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    // Game area
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                cout << "#"; // Left border

            if (i == y && j == x)
                cout << "O"; // Snake head
            else if (i == foodY && j == foodX)
                cout << "F"; // Food
            else {
                bool print = false;
                for (int k = 0; k < snake.size(); k++) {
                    if (snake[k].first == j && snake[k].second == i) {
                        cout << "o"; // Snake body
                        print = true;
                    }
                }
                if (!print)
                    cout << " "; // Empty space
            }

            if (j == WIDTH - 1)
                cout << "#"; // Right border
        }
        cout << endl;
    }

    // Bottom border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    // Display score
    cout << "Score: " << score << endl;
}

// Input handling
void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            if (dir != RIGHT) dir = LEFT;
            break;
        case 'd':
            if (dir != LEFT) dir = RIGHT;
            break;
        case 'w':
            if (dir != DOWN) dir = UP;
            break;
        case 's':
            if (dir != UP) dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

// Game logic
void logic() {
    // Move the tail
    if (!snake.empty()) {
        snake.insert(snake.begin(), { x, y });
        if (snake.size() > snakeLength)
            snake.pop_back();
    }

    // Move the head
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    // Check for collisions
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) {
        gameOver = true;
    }
    for (auto segment : snake) {
        if (segment.first == x && segment.second == y) {
            gameOver = true;
        }
    }

    // Check if the snake eats the food
    if (x == foodX && y == foodY) {
        score += 10;
        snakeLength++;
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
    }
}

// Setup the game
void setup() {
    gameOver = false;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
    score = 0;
    snake.clear();
    snakeLength = 0;
}

int main() {
    srand(time(0));
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // Control game speed
    }

    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
