#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;
    std::cout << "I have generated a random number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n";
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        }
    }

    return 0;
}
