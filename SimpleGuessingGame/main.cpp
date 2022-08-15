//
//  main.cpp
//  SimpleGuessingGame
//
//  Created by Baptiste  Domange on 15/08/2022.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// The entry point for our program when using GCC
int main()
{
    // Generate unique random numbers using the current time
    srand(static_cast<unsigned int>(time(NULL)));
    // Get a random number between 0 and 99
    unsigned int numberToGuess = rand() % 100;
    
    cout << "Guess a number between 0 and 99" << endl;
    
    unsigned int playersNumber {};
    cin >> playersNumber;
    
    cout << "You guessed: "
        << playersNumber
        << " The actual number was: "
        << numberToGuess
        << endl;
    return 0;
}
