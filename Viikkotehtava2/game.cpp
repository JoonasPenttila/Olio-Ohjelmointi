#include <ctime>
#include "game.h"

Game::Game() {
    maxNumber = 40;
    numOfGuesses = 0;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with "
         << maxNumber << " as a maximun value " << endl;

    cout << "Arvaa numero 1-" << maxNumber << endl;

    while (true) {

        cin >> playerGuess;

        if (randomNumber == playerGuess) {
            cout << "Oikein!" << endl;
            numOfGuesses += 1;
            printGameResult();
            break;

        } else if (randomNumber < playerGuess) {
            cout << "Arvottu numero on pienempi kuin " << playerGuess << endl;
            numOfGuesses += 1;

        } else if (randomNumber > playerGuess) {
            cout << "Arvottu numero on suurempi kuin " << playerGuess << endl;
            numOfGuesses += 1;
        }
    }
}

Game::~Game()
{
    cout << "GAME DESTURCTOR : object cleared from stack memory" << endl;
}

void Game::printGameResult()
{
    cout << "Oikea numero " << randomNumber << endl;

    cout << "Arvaukset: "
         << numOfGuesses
         << endl;


}
