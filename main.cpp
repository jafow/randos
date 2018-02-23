#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void handle_guess (int g, int sec) {
    cout << "This guess is " << g << " but sec is " << sec << endl;
}

int main() {
    int secret_num;
    int guess;

    srand (time(NULL));

    secret_num = rand() % 100; 
    guess = 11;
    handle_guess(guess, secret_num);
    return 0;
} 
