/*
�麯��

����Ķ����У�ǰ����Virtual�ؼ��ֵĳ�Ա���������麯����
class base{
   virtual int get()
};
int base::get(){}
virtual�ؼ���ֻ�����ඨ����ĺ��������У�
д������ʱ����
���캯���;�̬��Ա�����������麯��

�麯������ͨ���������������麯���ܹ������̬������ͨ�ĺ�������
*/

/*
��̬�ı�����ʽ
*/
/*       һ
�������ָ���ظ����Ը�ֵ������ָ��
ͨ������ָ����û�����������е�ͬ���麯��ʱ:
1.����ָ��ָ��һ������Ķ���,��ô�������ǻ�����麯��:
2.����ָ��ָ��һ��������Ķ���,��ô�����õ�����������麯��
���ֻ��ƾͽ��� ��̬
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CBase {
public:
	virtual void SomeVirtualFunc(){}
};
class CDrived :public CBase {
public:
	virtual void SomeVirtualFunc(){}
};
int main() {
	CDrived ODervied;
	CBase *p = &ODervied;
	p->SomeVirtualFunc();//�����ĸ��麯��ȡ����pָ���������͵Ķ���
	return 0;

}*/


// �� 
/*
������Ķ�����Ը�ֵ�����������
ͨ���������õ��û�����������ͬ���麯��ʱ:
1.�����������õ���һ������Ķ���,��ô������
���ǻ�����麯����
2.�����������õ���һ��������Ķ���,��ô����
�õ�������������麯��

���ֻ���Ҳ���� ��̬
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CBase {
public:
	virtual void SomeVirtualFunc() {}
};
class CDrived :public CBase {
public:
	virtual void SomeVirtualFunc() {}
};
int main(){
	CDrived Odaawd;
	CBase &r = Odaawd;
	r.SomeVirtualFunc(); //�����ĸ��麯��ȡ����r�����������͵Ķ���
	return 0;
}*/
//��̬�ļ�ʾ��
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
public:
	virtual void Print ()
	{
		cout << "A::print" << endl;
	}
};
class B :public A {
public:
	virtual void Print() {
		cout << "B print" << endl;
	}
};
class D :public A {
public:
	virtual void Print() { cout << "D::print" << endl; }
};
class E :public B {
	virtual void Print() { cout << "E::Print" << endl; }
};
int main(){
	A a; B b; E e; D d;
	A*pa = &a;
	B*pb = &b;
	E*pe = &e;
	D*pd = &d;
	pa->Print();
	pa = pb;
	pa->Print();
	pa = pd;
	pa->Print();
	pa = pe;
	pa->Print();
	return 0;

}*/
/*
��̬������
���������ĳ��������ʹ�ö�̬���ܹ���ǿ����Ŀ������ԣ���������Ҫ�޸Ļ����ӹ��ܵ�ʱ��,��Ҫ
�Ķ������Ӵ������
*/
