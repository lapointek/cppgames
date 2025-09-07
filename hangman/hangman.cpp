#include <iostream>
using namespace std;

void PlayGame();
void WantToPlayAgain();

int main() {

  do {

  } while (WantToPlayAgain())

      return 0;
}

void WantToPlayAgain() {}

void PlayGame() {
  const int MAX_LENGTH_OF_SECRET_PHRASE = 256;
  char secretPhrase[MAX_LENGTH_OF_SECRET_PHRASE];
  const int MAX_NUMBER_OF_GUESSES = 6;

  char *hiddenPhrase = nullptr;
  int numberOfGuessesLeft = MAX_NUMBER_OF_GUESSES;
}
