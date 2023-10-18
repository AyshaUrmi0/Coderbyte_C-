// Longest Word

// Have the function LongestWord(sen) take the sen parameter being passed and return the largest word in the string. If there are two or more words that are the same length, return the first word from the string with that length. Ignore punctuation and assume sen will not be empty.




#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string LongestWord(string sen) {
    string longestWord;
    int maxLength = 0;

    string word;
    for (size_t i = 0; i < sen.length(); ++i) {
        char c = sen[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            word += c;
        } else if (!word.empty()) {
            if (word.length() > maxLength) {
                maxLength = word.length();
                longestWord = word;
            }
            word.clear();
        }
    }

    if (!word.empty() && word.length() > maxLength) {
        maxLength = word.length();
        longestWord = word;
    }

    return longestWord;
}

int main() {
    string sen = "fun&!! time";
    cout << LongestWord(sen) << endl;

    sen = "I love dogs";
    cout << LongestWord(sen) << endl;

    return 0;
}