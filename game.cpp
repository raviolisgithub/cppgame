//Including the modules
#include <iostream>
#include <stdlib.h>

//Creating our namespace
using namespace std;

//Creating the function (The whole game!)
int main() {
     srand (time(NULL));
 int number = rand() % 100+1;
 int guess = 0;

 cout << number << endl;
 do {
      cout << "Guess a number between 1 and 100: ";
  cin >> guess;

  if ( guess > number) { cout << "Too high.\n" << endl; }
  else if ( guess < number ) { cout << "Too low.\n" << endl; }
  else {
    cout << "That's right!\n" << endl;
    exit(0);
  }
 } while ( number != guess );
 return 0;
}

//Code finished.