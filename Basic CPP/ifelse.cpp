#include <iostream>


using namespace std;

int main()
{

   int age;
   cin>>age;
   if(age>=18){

    if (age>=60)
    {
        //Check for Older People
        //Also Applies for women:)
       cout<<"You are Elligible to Drive,Drive Crefully"; 
    }else{
        cout<<"You are Elligible to Drive"; 

    }
   }else{

    cout<<"You are Not Elligible to Drive";

   }

    return 0;
}