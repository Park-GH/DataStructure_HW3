#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	string str;													//�Է¹��� ���ڿ�
	int N;														//password ����
	cin >> N >> str;											//password ����, ���ڿ� ������ �Է� �޴´�.
	unordered_map<string, int> wordFreq;						//hash�Լ�
	unordered_map<string, int> :: iterator itr;					//Ž���� ���� iterator
	string substring;											//password ���̸�ŭ ������ ���ڿ� ����
	for (int i = 0; i < str.size() - N + 1; i++) {				//for������ ������ ���ڿ� ������ŭ �ݺ��Ͽ� mapping����,
		substring = str.substr(i, N);
		wordFreq[substring]++;									
	}
	
	int max = 0;												//�󵵼� �ִ� ����
	string password;											//password����
	for (itr = wordFreq.begin(); itr != wordFreq.end(); itr++){ //iterator�� Ž���� �κ��� �󵵼��� �ִ뺸�� ũ�� password�� �ش� �ܾ� ����
		if ((itr->second) > max){								
			max = itr->second;
			password = itr->first;
		}
	}
	cout << password;											//password���
}
