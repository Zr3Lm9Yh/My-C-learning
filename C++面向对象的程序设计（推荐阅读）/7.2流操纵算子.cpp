/*
��������ϣ����10���� 16������� ��Ҫ�õ�

���������Ļ���:����������dec��oct��8���ƣ���hex��16���ƣ���setbase
���������ľ��ȣ�precision��setprecision��
���������setw��width��
���û��Զ�������������

ʹ��������������Ҫ�õ�#include<iomanip>
*/
/*#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	int n = 10;
	cout << n << endl;
	cout << hex << n << "\n"
		<< dec << n << "\n" <<
		oct << n << endl;
	return 0;

}*/
/*cout.precision
cout<<setprecision*/
/*setiosflags(ios::fixed) ���㷽ʽ����*/
//���ÿ�ȵ�����������
/*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int w = 4;
	char string[10];
	cin.width(5);
	while (cin >> string) {
		cout.width(w++);
		cout << string << endl;
		cin.width(5);
	}
	return 0;
	    
}*///�����������1234567890����������
//����ÿ4��4����������ȥ��
//���ȱʡ�Ļ�Ҫ�ÿո�ȥ��������w++���Ծ��д�λ������
//����������ֶ�����һ���Ե�
/*#include<cstdio>
#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	int n = 141;
	cout << "1)" << hex << n << "" << dec << n << oct << n << endl;
	//�ֱ���16���ƣ�ʮ���ƣ��˽����Ⱥ����n
	double x = 1234567.89, y = 12.34567;
	cout << "2(" << setprecision(5) << x << "" << y << "" << endl;
	//������λ��Ч����
	cout << "3(" << fixed << setprecision(5) << x << "" << y << endl;
	//����С�����5��λ����
	cout << "4(" << scientific << setprecision(5) << x << "" << y << endl;
	//�Կ�ѧ������������ұ���С�������λ����
	return 0;
} */ 
//�û��Զ�������������
//ʵ�����Ǹ�����������ֵ��ostream������
/*
ostream &tab(ostream &output){
return output<<'t';                //tab�Ǹ�������Ҳ�Ǹ�����������
cout<<"aa"<<tab<<"bb"<<endl;
}
*/



