#include <iostream>
#include <string>
using namespace std;

// Class & Objects
// Class -> Blueprint of entities
// Object -> entities in real world

class Player
{
    // Blueprint of player

public:
    int health;
    int kills;
    string name;
    string team;

    void status()
    {
        if (health > 0)
        {
            cout << "Alive\n";
        }
        else
        {
            cout << "dead\n";
        }
    }
    int weight()
    {
        return mass * 10;
    }

private:
    int mass = 70;
    int x, y;
    int velX, velY;
};

int main()
{

    // Player player;
    // player.name="Player";
    // cout<<player.name;

    Player player[20];

    // ScoreBoard
    cout << "Scoreboard:\n TEAM                         NAME             HEALTH   KILLS" << endl;

    // Terroristt
    for (int i = 0; i < 20; i++)
    {
        player[i].name = "Player_" + to_string(i);
        int temp = rand();
        if (i < 10)
        {
            player[i].team = "Terrorist";
        }
        else
        {
            player[i].team = "Counter Terrorist";
        }

        player[i].health = 10 * (rand() % 10+1);
        player[i].kills = rand() % 50;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << player[i].team;
        if (i < 10)
        {

            for (int i = 0; i < 9; i++)
            {
                cout << " ";
            }
        }

        cout << "            " << player[i].name << "         " << player[i].health << "       " << player[i].kills << endl;
    }

    cout << "\n";

    player[0].status();
    cout << player[0].weight();
    return 0;
}
