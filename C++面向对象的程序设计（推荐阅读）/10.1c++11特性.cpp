/*
auto 
���ڶ�������������������Զ��жϱ���������
auto i=100��
auto p=new A������   
*/
/*#include<iostream>
using namespace std;
class A {

};
A operator +(int n, const A& a)
{
	return a;
}
template<class T1,class T2>
auto add(T1 x, T2 y) {
	return x + y;

}
int main() {
	auto d = add(100, 1.5);
	auto k = add(100, A());
	cout << d;
	return 0;

}*/

/*
decltype�ؼ���
����ʽ������
int i;
double t;
struct A{double x;};
const A* a=new A()

decltype(a)  x1;   A*
decltype(i)  x2;  int
decltype(a->x) x3; double 
*/

/*
����ָ�� shared_ptr
*/
/*#include<memory>
#include<iostream>
using namespace std;
struct A {
	int n;
	A(int v=0):n(v){}
	~A() { cout << n << "destructor" << endl; }
};
int main()
{
	shared_ptr<A>sp1(new A(2)); //SP1�й� A��2��
	shared_ptr<A>sp2(sp1);//sp2Ҳ�й�A��2��
	cout << "1(" << sp1->n << "," << sp2->n << endl;
	shared_ptr<A>sp3;
	A*p = sp1.get();
	cout << "2" << p->n << endl;
	sp3 = sp1;//ʹ��sp3Ҳ�й�A��2��
	cout << "3(" << (*sp3).n << endl;
	sp1.reset(); //sp1�����й�
	if (!sp1)
		cout << "4(sp1 is null" << endl;
	A*q = new A(3);
	sp1.reset(q);//sp1�й�q
	cout << "5(" << sp1->n << endl;
	shared_ptr<A>sp4(sp1);//sp4�й�A��3��
	shared_ptr<A>sp5;
	//sp5.reset(q)���ף��ᵼ�³������ //����A����������
	sp1.reset(); //sp1 �����й�A��3��
	cout << "before end main" << endl;
	sp4.reset();  //sp4�����й�A��3��  //���ʱ��û���й�A��3�����ᱻ�Զ�����
	cout << "end main" << endl;        
	return 0; //��������� ��delete��A��2��



}*/


/*
��ָ��nullptr
*/

/*
���ڷ�Χ��forѭ��
*/

//���������޸�ֵ��
/*#include<iostream>
#include<vector>
using namespace std;
struct A { int n; A(int i):n(i){} };
int main() {
	int ary[] = { 1,2,3,4,5 };
	for (int & e : ary)
		e *= 10;
	for (int e : ary)
		cout << e << ",";
	cout << endl;
	vector<A>st(ary, ary + 5);
	for (auto & it : st)
		it.n *= 10;
	for (A it : st)
		cout << it.n << ",";
	return 0;
}*/

/*
��ֵ���ú�move����
��ֵ��һ����˵������ȡ��ַ�ı��ʽ��������ֵ
��ȡ��ַ�ģ�������ֵ
*/
//class A{};
//A &r = A();//error A()����������������ֵ
//��ֵ����ֻ��������ֵlike this
//A a;
//A &r = a;
//A &&r = a;//error �޷�����ֵ�󶨵���ֵ
//A &&r = A(); ����Ϳ���

/*
��ҪĿ������߳������е�Ч�ʣ�������Ҫ��������Ķ����������Ĵ���
*/
/*#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#pragma warning(disable :4996)
using namespace std;
class String
{
public:
	char *str;
	String() :str(new char[1]) { str[0] = 0; }
	String(const char *s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	String(const String &s) {
		cout << "copy constructor called" << endl;//��������
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	String & operator =(const String &s) {
		cout << "copy operator=called" << endl;
		if (str != s.str) {
			delete[]str;
			str = new char[strlen(s.str) + 1];
			strcpy(str, s.str);
		}
		return *this;
	}
	//move constructor
	String(String &&s) :str(s.str) {
		cout << "move constructor called" << endl;
		s.str = new char[1];
		s.str[0] = 0;
	}
	//move assignment
	String &operator=(String &&s) {
		cout << "move operator=called" << endl;
		if (str != s.str) {
			delete[]str;
			str = s.str;
			s.str = new char[1];
			s, str[0] = 0;
		}
		return *this;
	}
	~String() { delete[]str; }
};
template<class T>
void MoveSwap(T &a, T&b) {
	T tmp(move(a));//std::move(a)Ϊ��ֵ����������move constructor
	a = move(b);//move(b)Ϊ��ֵ����˻����move assignment
	b = move(tmp);//move(tmp)Ϊ��ֵ����˻����move assignment
}
//�������ʱ��Ҫ���ں�ab��ֵ���޸�
int main()
{
	String s;
	s = String("ok"); //String("ok")����ֵ������move oprator=
	cout << "********" << endl;
	String &&r = String("this");
	cout << r.str << endl;
	String s1 = "hello", s2 = "word";
	MoveSwap(s1, s2);
	cout << s2.str << endl;
	return 0;

}*/











