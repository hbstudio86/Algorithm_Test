#include <iostream>

using namespace std;


int main(void) {
	//char ch;	//�Է� ���� ����
	int cnt = 0,cmax = 0;	//���� ���ڸ� �޾Ҵ��� ī����
	char mch;	//���� �� ���ڸ� ���� ����
	string str;	//�Է��� ���� ���ڿ�����
	//cin >> mch;	//ù ���ڸ� �ֱ�
	cin >> str;
	int szstr = str.length();	//���ڿ��� ���� 
	mch = str[0];				//ù���ڸ� �ֱ�
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
	//	if (ch == mch)	//���� ���ڰ� �Է��� �Ǹ�
	//		i++;		//���� ī������ �ø���
	//	else {			//�ٸ� ���ڰ� �Է� �Ǹ�
	//		i = 1;		//�ٽ� 1�� ī���� ����
	//		mch = ch;
	//	}
	//}
	cout << cmax << endl;
	return 0;
}