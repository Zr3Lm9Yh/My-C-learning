/*
���壺ֻ��һ������������ͬ����������

���������  X::X( X& )����X::X(const X &)����ѡһ��
�����ܹ��Գ���������Ϊ����
���û�ж��帴�ƹ��캯������ô����������Ĭ�ϸ�ֵ����
������Ĭ�ϵĸ��ƹ��캯����ɸ��ƹ��ܡ�
*/
/*
#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private:
	double real, image;

};
Complex c1;//�����޲�ȱʡ���캯��
Complex c2(c1);//����ȱʡ�ĸ��ƹ��캯������c2��ʼ���ɺ�c1һ��
*/
//�Լ�����һ�����ƹ��캯��
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public :
	double real, imagel;
		Complex() {}
		Complex(const Complex &c) {
			real = c.real;
			imagel = c.imagel;
			cout << "over";

		}
};
int main() {
	Complex c1;
	Complex c2(c1);
	return 0;

}*/
//���ƹ��캯�������õ��������
//1.����һ������ȥ��ʼ��ͬ�����һ�������ʱ��
/*
Complex c2��c1����
Complex c2=c1  ��ʼ����䣬�Ǹ�ֵ���
2.���ĳ������һ����������A�Ķ�����ô�ú���������ʱ
����A�ĸ��ƹ��캯����������
3.��������ķ���ֵ��һ����A�Ķ���ʱ����������ʱ��A�ĸ��ƹ��캯��������
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
public:
	int v;
	A(int n) { v = n; };
	A(const A&a) {
		v = a.v;
		cout << "copy constructor called";
	}
};
A Func() {
	A b(4);
	return b;
}
int main() {
	cout << Func().v << endl;
	return 0;
}


//������������X::X(X)�Ĺ��캯��*/ 
