#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	string str;													//입력받은 문자열
	int N;														//password 길이
	cin >> N >> str;											//password 길이, 문자열 순서로 입력 받는다.
	unordered_map<string, int> wordFreq;						//hash함수
	unordered_map<string, int> :: iterator itr;					//탐색을 위한 iterator
	string substring;											//password 길이만큼 끊어진 문자열 저장
	for (int i = 0; i < str.size() - N + 1; i++) {				//for문으로 가능한 문자열 갯수만큼 반복하여 mapping진행,
		substring = str.substr(i, N);
		wordFreq[substring]++;									
	}
	
	int max = 0;												//빈도수 최댓값 저장
	string password;											//password저장
	for (itr = wordFreq.begin(); itr != wordFreq.end(); itr++){ //iterator가 탐색한 부분의 빈도수가 최대보다 크면 password에 해당 단어 저장
		if ((itr->second) > max){								
			max = itr->second;
			password = itr->first;
		}
	}
	cout << password;											//password출력
}
