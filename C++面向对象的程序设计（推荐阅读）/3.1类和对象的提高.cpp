/*
thisָ��

����c���Ե�������ָ���Ա���������õĶ���

�Ǿ�̬��Ա�����У�����ֱ��ʹ��this������ָ��ú������õĶ����ָ��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
	void Print() {
		cout << real << "," << imag;
	}
	Complex(double r, double i): real(r), imag(i) {

		}
	Complex AddOne() {
		this->real++;   //�ȼ���REAL++
		this->Print();  //�ȼ���Print
		return *this;
	}
};
int main() {
	Complex c1(1, 1), c2(0, 0);
	c2 = c1.AddOne();
	return 0;

}*/
//this ָ�������
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
	int i;
public:
	void Heelo() {
		cout << "hola" << endl;

	}
};
int main() {
	A*p = NULL;
	p->Heelo();
}*/
//��̬��Ա��������ʹ��thisָ��
//��Ϊ��̬��Ա����������������ĳ������
//��ˣ���̬��Ա����ʵ�����ĸ��������ǳ�����д���Ĳ�������
//���Ǿ�̬��Ա�Ĳ�������Ҫ��һ ��