/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
public:
	Complex(double r, double i) :real(r), imag(i) {};
	Complex operator+(double r);
};
Complex Complex::operator+(double r) {
	return Complex(real + r, imag);
}
int main() {
	Complex c(2, 3);
	c + 3;
	cout << c.;

}*/
/*
һ������£������������Ϊ��ĳ�Ա�������ǱȽϺõ�ѡ��
����ʱ������Ϊ��Ա������������ʹ��Ҫ������Ϊ��ͨ�������ֲ��ܷ������˽�г�Ա
������Ҫ�����������Ϊ��Ԫ
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex(double r, double i) :real(r), imag(i) {};
	Complex operator+(double r);
	friend Complex operator+ (double r, const Complex &c);
};*/