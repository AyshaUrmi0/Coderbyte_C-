// Alphabet Soup

// Have the function AlphabetSoup(str) take the str string parameter being passed and return the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols will not be included in the string.






#include <iostream>
#include <algorithm>

using namespace std;

string AlphabetSoup(string str) {
  sort(str.begin(), str.end());
  return str;
}

int main() {
  string input;
  cout<<"Enter a string:"<<endl;    
  getline(cin,input);
  cout << AlphabetSoup(input) << endl;

  return 0;
}