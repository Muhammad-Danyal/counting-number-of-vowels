#include<iostream>
#include<string>
using namespace std;
int isvowel(string s);

int main() {
	string s;	
	cout << "Enter any word\n";
	cin >> s;	
	cout << isvowel(s);
	return 0;
}

int isvowel(string s) {
	char x;
	int sum = 0;
	for (int i = 0; i<s.length(); i++)
	{
		x= toupper(s[i]);
		if (x == 'a'|| x=='e'||x=='i'||x== 'o'||x== 'u' || x == 'A'||x== 'E'||x =='I'||x== 'O'||x== 'U') {
			sum = sum + 1;
		}	
	}
		return sum;
}