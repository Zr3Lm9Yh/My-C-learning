/*
��̬ �Ĺؼ�����ͨ����ָ������õ���һ���麯��ʱ������ʱ��ȷ�����׵��õ��ǻ��໹��������
�ĺ���������ʱ��ȷ��----��� ��̬���ࡣ
*/
//��ʾ���뿴����ĳ���
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	int i;
	virtual void Print() { cout << "Base:Print"; }
};
class Derived :public Base {
public:
	int n;
	virtual void Print() {
		cout << "Drive:Print" << endl;
	}
};
int main() {
	Derived d;
	cout << sizeof(Base) << "," << sizeof(Derived);
	return 0;

}*/
/*
��̬ʵ�еĹؼ�----�麯����

ÿһ���麯�����ࣨ�����麯������������ࣩ����һ���麯����������κζ����ж�����
�麯�����ָ�롣�麯�������г��˸�����麯����ַ���������4���ֽھ����������麯�����
��ַ��

*/
/*#include<iostream>
using namespace std;
class A {
public:virtual void Func() { cout << "A::func" << endl; }
};
class B :public A {
public:
	virtual void Func() { cout << "B::func" << endl; }
};
int main() { 
	A a;
	A *pa = new B();
	pa->Func();
	long long *p1 = (long long *)&a;
	long long *p2 = (long long *)pa;
	*p2 = *p1;           //���︲�ǵ���b���麯��������ݸĳ���a
 	pa->Func();          //�����̬��Ȼ���õ���b���麯��������b���麯����������
	return 0;
}*/