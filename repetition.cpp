#include <iostream>

using namespace std;

int main(void) {
	int cnt = 1,cmax = 1;	//���� ���ڸ� �޾Ҵ��� ī����
	char mch;	//���� �� ���ڸ� ���� ����
	string str;	//�Է��� ���� ���ڿ�����
	cin >> str;
	int szstr = str.length();	//���ڿ��� ���� 
	mch = str[0];				//ù���ڸ� �ֱ�

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