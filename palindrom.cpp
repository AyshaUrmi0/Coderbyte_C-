// Palindrome 

// Have the function Palindrome(str) take the str parameter being passed and return the string true if the parameter is a palindrome, (the string is the same forward as it is backward) otherwise return the string false. 
// For example: "racecar" is also "racecar" backwards. 
// Punctuation and numbers will not be part of the string. 


#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 


void Palindrome(string str) 
{ 
	
	transform(str.begin(), str.end(), str.begin(), ::tolower); 
	
	
	str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
	
	string s1 = str; 
	string s2 = str; 
	
	reverse(s1.begin(), s1.end()); 
	
	
	if (s1 == s2) 
		cout << "True"<<endl; 
	else
		cout << "False"<<endl; 
} 

 
int main() 
{ 
	string str; 
    cout<< "Enter a string:" <<endl;
    getline(cin, str);



	Palindrome(str);

	return 0; 
}
