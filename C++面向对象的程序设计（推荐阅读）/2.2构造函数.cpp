/*
��Ա������һ��
��Ա��������ͬ�������в����������з���ֵ��void Ҳ���У�
�����ǶԶ������ʼ���������Ա��������ʼֵ
���������û��д���캯���������������һ��Ĭ�ϵ��޲����Ĺ��캯��
Ĭ�Ϲ��캯���޲����������κβ���

��������˹��캯�����������������Ĭ�ϵ��޲����Ĺ��캯��
��������ʯ���캯���Զ����á�����һ�����ɣ�����Ҳ����������ִ�й��캯��
һ��������кܶ�����캯��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private:
	double real, image;
public: void Set(double r, double i);
};  //������Ĭ�Ϲ��캯��
Complex c1;//Ĭ�Ϲ��캯��������
Complex *pc = new Complex;//Ĭ�Ϲ��캯��������
*/
//�Լ�д�����캯��
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private :
	double real, image;
public:
	Complex(double r, double i = 0);

};
Complex::Complex(double r, double i) {
	real = r; image = i;
}
Complex c1;//û�в���
Complex *pc = new Complex; //û�в���
Complex c1(2);
*/
/*
�����ж�����캯�����������������Ͳ�ͬ
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, image;
public:
	void Set(double r, double i);
	Complex(double r, double i);
	Complex(double r);
	Complex(Complex c1, Complex c2);





};
Complex::Complex(double r, double i)
{
	real = r; 
	image = i;
}
Complex::Complex(double r) {
	real = r; image = 0;

}
Complex::Complex(Complex c1, Complex c2) {
	real = c1.real + c2.real;
	image = c1.image + c2.image;
}
Complex c1(3), c2(1, 0), c3(c1, c2);
//����С���������������ʲô���ͣ��ж��ٸ���������������
int main() {
	cout << c1.real << c2.real << c3.real;
	return 0;

}*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CSample {
	int x;
public:
	CSample() {
		cout << " 1 called" << endl;
	}
	CSample(int n) {
		x = n;
		cout << " 2   calles" << endl;
	}
};
int main() {
	CSample array1[3];
	cout << "1" << endl;
	CSample array2[2] = { 4,5 }
	cout << "2" << endl;
	CSample array3[2] = { 3 };
	cout << "step3" << endl;
	CSample *array4 = new CSample[2];
	delete[]array4;
	return 0;

}*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Test {
public:
	Test(int  n){}
	Test(int n,int m){}
	Test(){}
};
Test array1[3] = { 1,Test(1,2) };
//���Test�ֱ��ã�1����2����3����ʼ��
Test array2[3] = { Test(2,3),Test(1,2),1 };
*/


