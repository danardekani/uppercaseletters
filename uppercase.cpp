#include <iostream>
using namespace std;

int main()
{
  char lowerCaseLetter, upperCaseLetter;
  int offset;

  cout << "Please enter a lowercase letter: ";
  cin >> lowerCaseLetter;

  offset = (int)(lowerCaseLetter - 'a');
  upperCaseLetter = (char)(offset + 'A');

  cout << "the uppercase letter of " << lowerCaseLetter << " is " << upperCaseLetter << endl;

  return 0;
}