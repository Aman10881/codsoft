#include <iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>
using namespace std;

int main() {

 string playAgain;
   do{ 
    srand(static_cast<unsigned>(time(0)));
   

    // Generate a random number between 1 and 100
    int RandomNumber = rand() % 100 + 1;

    int count = 0;
    int number = 0;

    cout << "Hey welcome to Guess the Number Game!" << endl;
    cout << "The number Will always  between 1 and 100. Can you guess it?" << endl;

    while (number != RandomNumber) {
        cout << "Enter your guess: ";
        cin >> number;
        count++;

        if (number < RandomNumber) {
            cout << "Too low" << endl;
        } else if (number > RandomNumber) {
            cout << "Too high" << endl;
        } else {
            cout << "Hurrah! You guessed the number " << RandomNumber << " in " << count << " attempts." << endl;
        }
    

    }
     cout << "Do you want to play again? (yes/no): ";
     cin >> playAgain;
   }while (playAgain == "yes" || playAgain == "YES");

    return 0;
}