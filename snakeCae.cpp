
// Snake Case

// Have the function SnakeCase(str) take the str parameter being passed and return it in proper snake case format where each word is lowercase and separated from adjacent words via an underscore. The string will only contain letters and some combination of delimiter punctuation characters separating each word.
// For example: if str is "BOB loves-coding" then your program should return the string bob_loves_coding.




#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string SnakeCase(string str) {
  // Convert all non-alphanumeric characters to spaces
  for (int i = 0; i < str.length(); i++) {
    if (!isalnum(str[i])) {
      str[i] = ' ';
    }
  }

  // Replace spaces with underscores
  replace(str.begin(), str.end(), ' ', '_');

  // Convert the string to lowercase
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  return str;
}

int main() {
  string input ;
  cout<<"Enter the string:"<< endl;
  getline(cin,input);
  cout << SnakeCase(input) << endl;

  return 0;
}