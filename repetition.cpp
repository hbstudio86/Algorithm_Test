#include <iostream>

using namespace std;


int main(void) {
	//char ch;	//입력 받을 변수
	int cnt = 0,cmax = 0;	//같은 문자를 받았는지 카운팅
	char mch;	//저장 할 문자를 담을 변수
	string str;	//입력을 받을 문자열변수
	//cin >> mch;	//첫 문자를 넣기
	cin >> str;
	int szstr = str.length();	//문자열의 길이 
	mch = str[0];				//첫문자를 넣기
	cnt++;

	for (int i = 1; i < szstr; i++) {
		if (str[i] == mch)
			cnt++;
		else {
			mch = str[i];
			if (cmax < cnt) {
				cmax = cnt;
			}
			else {
				cnt = 1;
			}
		}
	}
	
	//while (cin >> ch) {
	//	if (ch == mch)	//같은 문자가 입력이 되면
	//		i++;		//문자 카운팅을 올린다
	//	else {			//다른 문자가 입력 되면
	//		i = 1;		//다시 1로 카운팅 변경
	//		mch = ch;
	//	}
	//}
	cout << cmax << endl;
	return 0;
}