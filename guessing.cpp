#include <iostream>

using namespace std;

/*
  Guessing Game  By: Ethan Chesire
  The computer will pick a random number between 0 and 100, inclusive.
  The user will guess a number, and the computer will tell you if it is
  too high, too low, or correct. If it is correct, it will display how
  many guesses it took you, and ask if you want to play again.
*/

int main()
{
  // creating all variable you'll use
  bool guessright = false;
  int nguess = 0;
  int input = 0;
  bool playing = true;

  
  while (playing == true) {
    //setting up the random number
    srand(time(NULL));
    int nrandom = rand()%101;
    nguess = 0;

    //Bacicaly the start of the game, asking you to make your first guess 
    guessright = false;
    cout << "Make a guess..." << endl;
    //The guessing loop telling you if you went to high, low, or got it correct.
    while (guessright == false) {
      cin >> input;
      cout << endl;
      //if you got it correct
      if (input == nrandom) {
	cout << "Congradulations, you are correct!" << endl;
	nguess++ ;
	cout << ":D Nice, you only guessed \"" << nguess << "\" times!" << endl << endl;
	guessright = true;
      }
      //if your guess was to low
      else if (input <= nrandom) {
	cout << "Your guess was to low :(" << endl;
	cout << "Guess again..." << endl;
	nguess++ ;
      }
      //if your guess was to high
      else if (input >= nrandom) {
	cout << "Your guess was to high :(" << endl;
	cout << "Guess again..." << endl;
	nguess++ ;
      }
    }

    //the play again sequence
    cout << "Do you want to play again?" << endl;
    cout << "1 - Restart | 2 - End Game" << endl;
    cin >> input;
    if (input == 1)
      cout << "restarting..." << endl << endl;
    else if (input == 2) {
      cout << "Thank you for playing" << endl;
      cout << "Bye" << endl;
      playing = false;
    }
  }
  return 0;
}
