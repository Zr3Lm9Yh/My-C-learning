/*
��ģ����̳�
1.��ģ�����ģ������
2.��ģ���ģ��������
3.��ģ�����ͨ������
4.��ͨ���ģ��������
*/
//��ģ�����ģ������
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T1,class T2>
class A {
	T1 v1; T2 v2;
};
template<class T1,class T2>
class B :public A<T2, T1> {
	T1 v3; T2 v4;
};
template <class T>
class C :public B<T, T> {
	T v5;
};
int main() {
	B<int, double>obj1;
	C<int>obj2;
	return 0;
}*/
//��ģ���ģ��������
/*#include<iostream>
using namespace std;
template<class T1,class T2>
class A {
	T1 v1; T2 v2;
};
template<class T>
class B :public A<int, double> {
	T v;
};
int main() {
	B<char>obj1;     //�Զ���������ģ����A<int,double>��B<char>
	return 0;
}*/
//��ģ�����ͨ������
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
	int v1;
};
template<class T>
class B :public A {      //���д�Bʵ�����õ����࣬����AΪ����
	T v;
};
int main() {
	B<char> obj1;
	return 0;
}*/
//��ͨ���ģ��������
/*#include<iostream>
using namespace std;
template <class T>
class A {
	T v1;
	int nl;
};
class B :public A<int> {
	double v;
};
int main() {
	B obj1;
	return 0;

}*/

/*
��ģ������Ԫ

�������࣬��ĳ�Ա������Ϊ��ģ�����Ԫ
����ģ����Ϊ��ģ�����Ԫ
����ģ����Ϊ�����Ԫ
��ģ����Ϊ��ģ�����Ԫ
*/
//�������࣬��ĳ�Ա������Ϊ��ģ�����Ԫ
/*#include<cstdio>
#include<iostream>
using namespace std;
void Func1() {};
class A{};
class B {
public:
	void Func(){}
};
template <class T>
class Tmp1
{
	friend void Func1();
	friend class A;
	friend void B::Func();
};*///�κδ�Tmp1ʵ�������࣬��������������Ԫ
//����ģ����Ϊ��ģ�����Ԫ
/*#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
template <class T1,class T2>
class Pair
{
private:
	T1 key;  //�ؼ���
	T2 value;  //ֵ
public:
	Pair(T1 k, T2 v) :key(k), value(v) {};
	bool operator<(const Pair<T1, T2>&p)const;
	template <class T3,class T4>
	friend ostream &operator<<(ostream &o, const Pair<T3, T4>&p);
};
template<class T1,class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2>&p)const {
	return key < p.key;
}
template<class T1,class T2>
ostream &operator<<(ostream &o, const Pair<T1, T2>&p)
{
	o << "(" << p.key << "," << p.value << ")";
	return o;
}
int main()
{
	Pair<string, int>student("tpm", 29);
	Pair<int, double>obj(12, 3.14);
	cout << student << "" << obj;
	return 0;

}*/
//����� template<class T1,class T2>���ɵĺ���������Pairģ�������Ԫ 
//����ģ����Ϊ�����Ԫ
/*#include<iostream>
using namespace std;
class A {
	int v;
public:
	A(int n):v(n){}
    template <class T>
	friend void Print(const T & p);
};
template<class T>
void Print(const T & p)
{
	cout << p.v;
}
int main() {
	A a(4);
	Print(a);    //�����a�ʺò���
	return 0;
}*/
//��ģ����Ϊ��ģ�����Ԫ
/*#include<iostream>
using namespace std;
template<class T>
class B {
	T v;
public:
	B(T n):v(n){}
	template <class T2>
	friend class A;
};
template <class T>
class A {
public:
	void Func() {
		B<int>o(10);
		cout << o.v << endl;
	}
};
int main() {
	A<double>a;
	a.Func();
	return 0;

}*/
//��ģ����stactic��Ա
//��ģ����Զ��徲̬��Ա����ô�Ӹ���ģ��ʵ�����õ���������
//������ͬ���ľ�̬��Ա
/*#include<iostream>
using namespace std;
template<class T>
class A {
private:
	static int count;
public:
	A() { count++; }
	~A() { couny--; }
	A(A &) { cout++; }
	static void PrintConut() { cout << count << endl; }

};
template<>int  A<int>::count = 0;
template<>int  A<double>::count = 0;

int main() {
	A<int> ia;;
	A<double> da;
	ia.PrintConut();
	da.PrintConut();
	return 0;
}*/