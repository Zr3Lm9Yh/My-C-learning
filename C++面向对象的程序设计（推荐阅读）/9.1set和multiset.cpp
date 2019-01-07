/*
��׼ģ�������Ĺ�������
set��mutiset��map��multimap
�ڲ�Ԫ���������У���Ԫ�ز����λ��ȴ��������ֵ�������ٶȿ�
���˸��������еĺ����⣬��֧�����³�Ա����
find:���ҵ���ĳ��ֵ��Ԫ�أ�xС��y��yС��xͬʱ��������Ϊ���
lower_bound:����ĳ���½�
upper_bound:����ĳ���Ͻ�
eaual_range:ͬʱ�����Ͻ���½�
count:�������ĳ��ֵ��Ԫ�ظ���(xС��y��yС��xͬʱ��������Ϊ���)
insert:���Բ���һ��Ԫ�ػ�һ������
*/
/*
pairģ��Ԥ��֪ʶ
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
template<class _T1,class _T2>
struct pair {
	typedef _T1 first_type;
	typedef _T2 second_type;
	_T1 first;
	_T2 second;
	pair():first(),second(){}
	pair(const_T1&_a,const_T2&_b):first(_a),second(_b){}
	template<class_U1,class_p>
	:first(_p.first),second(_p.second){}
};
//map/mutimap��������ŵĶ���pairģ����Ķ���,�Ұ�first��С����
//����
//���������캯���÷�ʵ��
pair<int, int>
p(pair<double, double>(5.5, 4.6));
//p.first = 5;//p.second=6;
*/
/*
multiset
template<class Key,class Pred=less<key>>
  class A=alloctor<key>
 class multiset{....};
 Pred�����͵ı���������multiset�е�Ԫ�أ���һ������һ��С������ô�����
 multiset���й����У��Ƚ�����Ԫ��x��y�Ĵ�С����������������һ��Pred����
 �ı������ٶ�λop�������ʽop��x��y������ֵΪtrue����x��yС
 Pred��ȱʡ������less<Key>

 lessģ��Ķ���
 template<class T>
 struct less:public binary_function<T,T,bool>
 {bool operator()(const T&x,const T&y){return x<y}const;}
 //lessģ���ǿ�С�ں����Ƚϴ�С��

 ����ڶ��������������͵Ļ����õ�ȱʡop���Ƚϴ�С��
*/
/*
multiset�ĳ�Ա����
iterator find(const T &val);
�������в���ֵΪval��Ԫ�أ������������������Ҳ���������end()
����ȽϵĹ�����С�ڣ�С��ͬʱ�������Ǹ��ж�
iterator insert��const T &val����val���뵽���������ص�����

*/
/*
multiset���÷�
*/
/*#include<set>
using namespace std;
class A {};
int main() {
	multiset<A>a;//����mutiset���ÿһ��Ԫ�ض���class A���͵Ķ���
	a.insert(A());
}*/
/*
multiset<A>a;
�͵ȼ���
multiset<A,less<A>>a;
������Ԫ��ʱ��multiset�Ὣ������Ԫ�غ�����Ԫ�ؽ��бȽϵģ�����lessģ��
����<���бȽϵģ����ԣ��ⶼҪ��A�Ķ����ܹ�<�Ƚϣ���Ҫ����<������

*/
/*#include<iostream>
#include<set>//ʹ��multiset��Ҫ����ͷ�ļ�
using namespace std;
template<class T>
void Print(T first, T last)
{
	for (; first != last; ++first)
		cout << *first << "";
	cout << endl;
}
class A {
private:
	int n;
public:
	A(int n_) { n = n_; }
	friend bool operator<(const A&a1, const A&a2) { return a1.n < a2.n; }
	friend ostream & operator<<(ostream & o, const A&a2) { o << a2.n; return o; }
	friend class MyLess;

};
struct MyLess {
	bool operator()(const A &a1,const A &a2)
	{
		return (a1.n % 10) < (a2.n % 10);
	}
}; //����λ�����Ƚϴ�С
typedef multiset<A>MSET1;//MSET1��"<"���Ƚϴ�С ��Ϊmulitset<A>д�����Ƚϳ��ͻ��˸�����
typedef multiset<A, MyLess>MSET2;//MSET2��mysless::operator()���Ƚϴ�С
int main() {
	const int SIZE = 6;
	A a[SIZE] = { 4,22,19,8,33,40 };
	MSET1 m1;
	m1.insert(a, a + SIZE);
	m1.insert(22);
	cout << "1)" << m1.count(22) << endl;
	cout << "2)" ; Print(m1.begin(), m1.end());
	MSET1::iterator pp = m1.find(19);
	if (pp != m1.end())
		cout << "found" << endl;
	cout << "3"; cout << *m1.lower_bound(22) << ","
		<< *m1.upper_bound(22) << endl;
	pp = m1.erase(m1.lower_bound(22), m1.upper_bound(22));
	//ppָ����Ǳ�ɾ������һ��Ԫ��
	MSET2 m2;
	m2.insert(a, a + SIZE);
	cout << "6("; Print(m2.begin(), m2.end());
	return 0;

}//iterator lower_bound(const T & val)��
//����һ������λ��it��ʹ��[begin(),it)�����е�Ԫ�ض���valС
//���ҵ��ĵ�������ָ��22
*/
/*
set��multiset����������set�����ǲ������ظ���Ԫ��
*/
/*#include<iostream>
#include<set>
using namespace std;
int main() {
	typedef set<int>::iterator IT;
	int a[5] = { 3,4,6,1,2 };
	set<int>st(a, a + 5);
	pair<IT, bool>result;
	result = st.insert(5);
	if (result.second)//����ɹ����������Ԫ��
		cout << *result.first << "insertes" << endl;
	if (st.insert(5).second)
		cout << *result.first << endl;
	else
		cout << *result.first << "already exists" << endl;
	pair<IT, IT>bounds = st.equal_range(4);
	cout << *bounds.first << "," << *bounds.second;
	return 0;
 
}*/








