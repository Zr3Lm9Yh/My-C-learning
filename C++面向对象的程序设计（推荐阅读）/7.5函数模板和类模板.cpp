/*
c++Ϊ�˼��ٿ����ߵĺ�ˮ
������ 
�̳� �� ���ͳ�����ƣ�ģ�壩
*/

/*����ģ��*/
/*
������������ģ��
swap(int x,int y)
{
   int tmp=a;
   a=b;
   b=tmp;
}
swap(double a,double b)
{
   double tmp=a;
   a=b;
   b=tmp;
}
ÿ��д��ʱ�����Ƕ�Ҫȥд����ͬ���͵ĺ������ɲ�����дһ��ģ��
ֻ������һ��
*/
/*
����ģ��ĸ�ʽ
template<class ���Ͳ���1��class ���Ͳ���2��������>
����ֵ���� ģ�������βα�
{
    ������
};
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
template <class T>
void Swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a = 3;
	int b = 9.8;
	Swap(a, b);
	double x = 3.06;
	double y = 9.05;
	
	Swap(x, y);
	cout << a << b << x << y << endl;
	return 0;

}*/
/*
���������Ԫ�ص�MaxElement����ģ��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T>
T MaxElement(T a[], int size) {
	T temMax = a[0];
	for (int i = 1; i < size; ++i)
		if (tmpMax < a[i])
			tmpMax = a[i];
	return tmpMax;
}*/

/*
��ͨ������ʵ��������ģ��
*/
/*#include<iostream>
using namespace std;
template<class T>//����ָ�������Ͳ�����
T Inc(T n) {      //�������βα�
	return n + 2;
}
int main() {
	cout << Inc<double>(3) / 2;   //�����ʵ���������Զ�����ת�����ܹ�ƥ��ĺ���
	return 0;

}*/

//����ģ��������أ�ֻҪ���ǵ��βα�����Ͳ�����ͬ�ͼ���
/*
1.������ͨ����
2.��ģ�庯��
3.��ʵ�ξ���ת���ĺ���
*/
//����ĺ���ʵ�����������������
#include<cstdio>
#include<iostream>
using namespace std;
/*template<class T>
T Max(T a, T b) {
	cout << "ģ�庯��1������" << endl;
	return 0;
}*/
/*template <class T,class T2>
T Max(T a, T2 b) {
	cout << "ģ�庯��2������" << endl;
	return 0;
}
double Max(double a, double b) {
	cout << "MyMax" << endl;
	return 0;
}
int main() {
	int i = 4, j = 5;
	Max(1.2, 3.4);
	Max(i, j);
	Max(1.2, 3);
	return 0;

}*/
/*#include<iostream>
using namespace std;
template<class T,class Pred>       //��Ȼ���s��e��x���Ǹ���ַָ�룬���op�Ǹ�����ָ��
void Map(T s, T e, T x, Pred op) {  //���ģ���ǰ�һ�����䳤�ȵĶ������ŵ���һ���ط�ȥ��
	for (; s != e; ++s, ++x) {
		*x = op(*s);
	}                                
}



int Cube(int x) { return x * x*x; }
double Square(double x) { return x * x; }

int a[5] = { 1,2,3,4,5 }, b[5];
double d[5] = { 1.1,2.1,3.1,4.1,5.1 }, c[5];*/
//ʵ���������º���:
/*void Map(int *s, int *e, int *x, double(*op)(double)) {
	for (; s != e; ++s; ++x) {
		*= op(*s);
	}
}*/
/*int main() {
	Map(a, a + 5, b, Square);
	for (int i = 0; i < 5; ++i)
		cout << b[i] << ",";
	cout << endl;
	Map(a, a + 5, b, Square);
	for (int i = 0; i < 5; ++i)
		cout << b[i] << ",";
	cout << endl;
	Map(d, d + 5, c, Square);
	for (int i = 0; i < 5; ++i)
		cout << c[i] << ",";
	cout << endl;
	return 0;

}*/









