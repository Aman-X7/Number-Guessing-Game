
#include <iostream>

using namespace std;

int main()
{
   

   int randomnumber = rand() % 100 + 1; // create a random number in range 1-100
   cout << "Welcome to guess a number game.guess any number from 1 to 100!" << endl;
   int trial = 1;
   int guess = 0;


   while (guess != randomnumber){
        cout << "Enter the number of  your guess! ";
        cin >> guess; //taking input for the number guessed by the user
            if (guess < randomnumber) {
                cout << "oops! - too low.You can  Try again." << endl;
            }else if (guess > randomnumber) {
                cout << "Too high.You can  Try again. "  << endl;
            }
        trial ++;
        }
        
        string comment;
        if (trial < 10) {
            comment = " - you are a superstar!";
        } else if (trial > 30) {
            comment = "Uhm.. That took you a long time.";
        }
        cout << "Great job you  took " << trial << "  total attempts!" << comment;

    return 0;
}
