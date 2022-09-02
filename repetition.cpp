#include <iostream>

using namespace std;

int main(void) {
	int cnt = 1,cmax = 1;	//같은 문자를 받았는지 카운팅
	char mch;	//저장 할 문자를 담을 변수
	string str;	//입력을 받을 문자열변수
	cin >> str;
	int szstr = str.length();	//문자열의 길이 
	mch = str[0];				//첫문자를 넣기

	for (int i = 1; i < szstr; i++) {
		if (str[i] == mch)
			cnt++;
		else {
			mch = str[i];
			cnt = 1;
		}
		if (cmax < cnt)
			cmax = cnt;
	}
	cout << cmax << endl;
	return 0;
}