/*
������������ص���
                       ios
             istream        ostream
     ifstream    iostream               ofstream
	             fstream
	����Ķ�������������
	iostream�ȿ��Զ�Ҳ����д

istream��������������࣬cin���Ǹ���Ķ���
ostream��������������࣬cout���Ǹ���Ķ���
ifstream�������ļ���д���ݵ���
ofstream���������ļ��������ݵ���
isotream�Ǽ������������������
fstream�Ǽ��ܴ��ļ���ȡ���ݣ��������ļ�д�����ݵ���

cin��Ӧ�ڱ�׼�����������ڴӼ��̶�ȡ���ݣ�Ҳ���Ա����¶�����ļ��ж�ȡ����
cout��Ӧ�ڱ�׼���������������Ļ������ݣ�Ҳ���Ա��������ļ�д������
*/
/*#pragma warning(disable:4996)
#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	freopen("text.txt", "w", stdout);
	if (y == 0)
		cerr << "error" << endl;
	else
		cout << x / y;
	return 0;

}*/
/*#pragma warning (disable:4996)
#include<iostream>
using namespace std;
int main() {
	double f; int n;
	freopen("t.txt", "r",stdin);
	cin >> f >> n;
	cout << f << "," << endl;
	return 0;

}*/
//�ж�����������
/*int x;
while (cin >> x) {

}*/
/*
���ȥ���ļ��Ļ�
�ļ��������������ͽ�����
���̵Ļ�����ctrl+z�ͽ�����
*/
/*
istream��ĳ�Ա����
istream & getline(char *buf,int bufSize);
���������ж�ȡbufSize-1���ַ���������buf,�����\nΪֹ
istream & getline(char *buf,int buffSize,char delim);
���������ж�ȡbufSize���ֽڵ�������������delim�ַ�λ��
*/
/*
bool eof�������ж��������Ƿ����
int peek������������һ���ַ�������������ȥ��
istream &putback��char c�������ַ�ch�Ż�������
istream &ignore����������ɾ��nCount���ַ�������EOFʱ����
*/
/*#include<iostream>
using namespace std;
int main() {
	int x;
	char buf[100];
	cin >> x;
	cin.getline(buf, 90);
	cout << buf << endl;
	return 0;

}
*/



