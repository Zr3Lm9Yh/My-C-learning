//�������ط�������
/*
c++Ԥ������������ֻ�����ڻ����������͵����㣺���Σ�ʵ�ͣ��ַ��ͣ��߼���
+��-����������.>> !,
�������ڶ��������


���������
��������أ����Ƕ����е��������c++��Ԥ������������������صĺ��壬ʹͬ
һ����������ڲ�ͬ�����ǵ��²�ͬ��������Ϊ

��������ص�Ŀ���ǣ���չc++�ṩ������������÷�Χ��ʹ֮�ܹ������ڶ���

ͬһ������Բ�ͬ���͵Ĳ�����������������Ϊ�ǲ�ͬ��

*/
//��������ص���ָ���Ǻ�������
/*
��������Ϊ��ͨ������Ҳ��������Ϊ��Ա����
��������ı��ʽת���ɶ�����������ĵ���
��������Ĳ�����ת����������Ĳ���
��������������ʱ������ʵ�ε����;��������ĸ����������
*/
//��������ص���ʽ
/*
����ֵ����  operator ��������βα�
{
      ������
}

*/
//���� 
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
	Complex(double r=0.0,double i=0.0):real(r),imag(i){}
	Complex operator -(const Complex &c);

};
Complex operator +(const Complex &a, const Complex &b) {
	return Complex(a.real + b.real, a.imag + b.imag);
}
Complex Complex::operator-(const Complex &c) {
	return Complex(this->real - c.real, imag - c.imag);

}
//���س�Ϊ��Ա����ʱ����������Ϊ�����Ŀ����һ��
//����Ϊ��ͨ����ʱ����������Ϊ�������Ŀ
int main() {
	Complex a(4, 4), b(1, 1), c;
	c = a + b;
	cout << c.real << "," << (a - b).imag << endl;
	cout << (a - b).real << "," << (a - b).imag << endl;
	return 0;

 }*/
/*c = a + b; �ȼ���c = operator +(a + b); ������ͨ��������������
a - b  �ȼ��� a.operator -(b);  ���ǳ�Ա����ֻҪһ������*/

