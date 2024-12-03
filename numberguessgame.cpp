//NUMBER GUESSING GAME

#include <iostream>
#include <ctime>
using namespace std;
int main()
{

    int g; //For storing guessed number

    srand(time(NULL)); //Random number generator
    int n=(rand()%100)+1; //Generate number between 1 to 100 and its stored in n

    cout<<" WELCOME TO NUMBER GUESSING GAME"<<endl;
    do
    {
        cout<<"Enter your guess from 1 to 100= "<<endl; //ask the user to enter a guess
        cin>>g; //store the guess number in g
        if(g>n)
        {
            cout<<"Guess is too high"<<endl;

        }
        else if(g<n)
        {
            cout<<"Guess is too low"<<endl;

        }
        else
        {
            cout<<"Correct"<<endl;
            cout<<"Congrats"<<endl;
        }


    }while(g!=n); //do until user guesses the correct number

}
