/*
��������
��һ���������������"()"
*/
//eg
/*#include<cstdio>
#include<iostream>
using namespace std;
class CMyAverage {
public:
	double operator()(int a1, int a2, int a3 ) {
		return (double)(a1 + a2 + a3) / 3;
	}
};
int main() {
	CMyAverage average;//��������
	cout << average(3, 2, 3);//�ȼ���average.operator()(3,2,3
	return 0;

}*/

/*#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
int SumSquares(int total,int value)
{
	return total + value * value;
}
template<class T>  //ģ�庯�������ͬ��������[first,last)�е�Ԫ��
void PrintInterval(T first, T last) //���first��last�붼���������
{
	for (; first != last; ++first)
		cout << *first << "";
	cout << endl;
}
template<class T>
class SumPowers {
private:
	int power;
public:
	SumPowers(int p):power(p){}
	const T operator()(const T&total, const T & value)
	{//����value��power�η����ӵ�total��
		T v = value;
		for (int i = 0; i < power - 1; ++i)
			v = v * value;
		return total + v;


	}
};
int main() {
	const int SIZE = 10;
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v(a1, a1 + SIZE);
	cout << "1)"; PrintInterval(v.begin(), v.end());
	int result = accumulate(v.begin(), v.end(),0,SumSquares);
	cout << "2(ƽ����:" << result << endl;
	result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(3));//�������ʵ���Ͼ��Ǹ���������
	cout << "3(������:" << result << endl;
	result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(4));
	cout << "4)4�η���" << result;
	return 0;

}*/
//������ĳ���ֻ�õ��˾ֲ����������Ժ�������ܺ���
//�����������������һ���Ӧ��֪���������󵽵���ʲô��
//�������������ȫ�ֱ���
/*
STL�еĺ���������ģ��
����ģ������������ɺ�������
equal_to
greater
less
.......
<functional>
*/
/*
greater����������ģ��
template<class T>
struct greater:public binay function<T,T,bool>{
   bool operator()
(const T&x,const T& y)const{
    return x>y;
      }
}


list ������sort��Ա����
void sort()
void sort(Compare op)
�Լ�����op�ȽϹ������ǿ�op(x,y)�ķ���ֵ
��Ϊtrue����ΪxС��y
*/
/*#include<list>
#include<iostream>
using namespace std;
class MyLess {
public:
	bool operator()(const int &c1, const int&c2) {
		return (c1 % 10) < (c2 % 10);
	}
};
template<class T>
void Print(T first, T last) {
	for (; first != last; ++first)cout << *firest << ",";
}
int main() {
	const int SIZE = 5;
	int a[SIZE] = { 5,21,14,2,3 };
	list<int>lst(a, a + SIZE);
	lst.sort(MyLess());
	Print(lst.begin(), lst.end());
	cout << endl;
	lst.sort(greater<int>());//greater<int>()�Ǹ���������
                            //	greater�Ǹ���ģ�壬greater<int>��һ����
	Print(lst.begin(), lst.end());
	cout << endl;
	return 0;

}*/
/*
STL��ʹ���Զ���Ĵ�С��ϵ
����������STL������㷨�����ǿ����ú������������Զ���Ƚ�����
���Զ����˱Ƚ���op������£���������˵���ȼ�
xС��y
op(x,y)����ֵΪtrue
y����x
*/

/*
����д��MyMaxģ��
*/
/*#include<iostream>
#include<iterator>
using namespace std;
class MyLess {
public:
	bool operator()(int a1,int a2) {
		if ((a1 % 10) < (a2 % 10))
			return true;
		else
			return false;
	}
};
bool MyCompare(int a1, int a2) {
	if ((a1 % 10) < (a2 % 10))
		return false;
	else
		return true;
}
int main() {
	int a[] = { 35,7,13,19,12 };
	cout << *MyMax(a, a + 5, MyLess())
		<< endl;
	cout << *MyMax(a, a + 5, MyCompare)
		<< endl;
	return 0;
}
template <class T,class Pred>
T MyMax(T first, T last, Pred myless)
{
	T temMax = first;
	for (; first != last; ++first)
		if (myless(*tmpMax, *first))  //�����myless�����Ǻ���ָ�룬Ҳ�����Ǻ�������
			                              //���������myless��������Ļ�������operator.()��Ա����
			                        //Ȼ���Ա����������з���ֵ��
			tmpMax = first;
	return temMax;
}
*/










