//�����д��������һ�����ã��������ʼ��Ϊ����ĳ������
/*
������&������=ĳ��������
int n=4��
int &r =n��  //r������n��r��������int &
//ĳ�����������ã��ȼ�������������൱�����������һ������

*/
/*#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n = 7;
	int &r = n;
	r = 4;
	cout << r;
	cout << n;
	n= 5;
	cout << r;
	return 0;

}*/
/*
���õĸ����������ʱ��һ��Ҫ�����ʼ��������ĳ������
*/
/*
��ʼ��������һֱ���øñ��������������ñ�ı�����
*/
/*
����ֻ�����ñ������������ó���
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	double a = 4, b = 5;
	double &r1 = a;
	double &r2 = r1;
	r2 = 10;
	cout << a << endl;
	r1 = b;
	cout << a << endl;
	return 0;

}*/
//!!!!!!!why!!!!!!
/*#include<iostream>
#include<cstdio>
using namespace std;
void Swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;

}
int main() {
	int a = 2;
	int b = 3;
	Swap(a, b);
	cout << a << b;
	return 0;

}*/
//n1��n2��ֵ���ᱻ�ı�
//�����Ͻڿ�ѧ��ָ�뷢������ֵ����ͨ��*����&��ȥ��ַ��������

//����c++�����ã��ͷ���ĵö��ˣ����ԶԲ���������
/*#include<cstdio>
#include<iostream>
using namespace std;
void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int n1 = 3;
	int n2 = 4;
	Swap(n1, n2);
		cout << n1 << n2;
	return 0;

}*/
//����Ҳ������Ϊ�����ķ���ֵ
/*#include<cstdio>
#include<iostream>
using namespace std;
int n = 4;
int & SetValue() { return n;}
int main() {
	SetValue() = 40;
	cout << n ;
	return 0;

}*/
/*
���õ���һ���÷���������
�ڶ�������ʱ��const�ؼ���
int n;
const int &r=n;

�������ǲ���ͨ��������ȥ�޸����õ�����
int n=100;
const int &r=n;
r=200;  //�����޸�n��ֵ����Ȼ����Ҫ����
n=300;

const T &��T & �ǲ�ͬ�����ͣ������໥ת��

*/


