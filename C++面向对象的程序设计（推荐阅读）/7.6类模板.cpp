/*
Ϊ�˶���ʡ�ض����һ�����Ƶ��࣬���Զ�����ģ��
Ȼ������ģ�����ɲ�ͬ����Ŷ 

��ģ��Ķ���
templete<class ���Ͳ�����class���Ͳ���2��������>//���Ͳ�����
class ��ģ����
{
  
  ��Ա�����ͳ�Ա����
  ��Ա������д��
  ����ֵ����  ��ģ����<���Ͳ������б�>::��Ա��������������
  {  ....
  }
  };

  ����ģ�嶨�����
  ��ģ����<��ʵ���Ͳ�����> ������(���캯��ʵ�α�)

*/
//��ģ��ʾ��:pair��ģ��
/*#include<cstdio>
#include<iostream>
using namespace std;
template<class T1,class T2>
class Pair
{
public:
	T1 key;       //�ؼ���
	T2 value;        //ֵ
	Pair(T1 k,T2 v) :key(k), value(v) {};
	bool operator <(const Pair<T1, T2>&p)const;
};
template<class T1,class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2>&p)const
{
	return key < p.key;
}
int main() {
	Pair<string, int>student("tom", 19);
	//ʵ��������һ���� Pair<string ,int>��������Ͳ�����������
	cout << student.key << "" << student.value;
	return 0;
}*/
/*
����������ģ��������Ĺ��̽���ģ���ʵ����������ģ��ʵ�����õ�
�������ģ����

ͬһ����ģ�������ģ�����ǲ����ݵ�
pair<string ,int>*p
pair<string ,double>a;
p=&a;
*/

/*
����ģ����Ϊ��ģ���Ա
*/
/*#include<iostream>
using namespace std;
template <class T>
class A
{
public:
	template<class T2>
	void Func(T2 t) { cout << t; }//��Ա����ģ��
};
int main() {
	A<int>a;
	a.Func('k');
	a.Func("hello");
	return 0;
}*/
/*
��ģ��������Ͳ���
��ģ���<���Ͳ�����>�п��Գ��ַ����Ͳ���
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T,int size> //�����int size����ָ���Ƿ����Ͳ���
class cArray {
	T array[size];
public:
	void Print() {
		for (int i = 0; i < size; ++i)
			cout << array[i] << endl;
	}
};
cArray<double, 40>a2;
cArray<int, 50>a3;*/
//a2��a3���ڲ�ͬ����







