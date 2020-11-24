#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	string str;
	int num;
	cin >> num >> str;
	unordered_map<string, int> wordFreq;
	unordered_map<string, int> :: iterator itr;

	string word;
	for (int i = 0; i < str.size() - num + 1; i++) {
		word = str.substr(i, num);
		wordFreq[word]++;
	}

	int max = 0;
	string password;
	for (itr = wordFreq.begin(); itr != wordFreq.end(); itr++){
		if ((itr->second) > max){
			max = itr->second;
			password = itr->first;
		}
	}
	cout << password;
}
