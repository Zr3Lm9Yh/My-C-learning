/*#include<cstdio>
#include<iostream>
using namespace std;
class Bug {
private:
	int nLegs;
	int nColor;
public:
	int nType;
	Bug(int leg, int color);
	void PrintBug() {};
};
class FlyBug :public Bug {
	int nWings;
public:
	FlyBug(int legs, int color, int wings);
};
Bug::Bug(int legs, int color) {
	nLegs = legs;
	nColor = color;
}
//�����FlyBug���캯��*/
/*FlyBug::FlyBug(int legs, int color, int wings) {
	nLegs = legs;  //�����ڹ��캯������ʻ����˽�б���
	nColor = color;//ͬ��
	nType = 1;  //ok
	nWings = wings;
}*/
//�ó�ʼ���б�Ϳ��Է�����
/*FlyBug::FlyBug(int legs, int color, int wings) :Bug(legs, color) {
	nWings = wings;
}
int main() {
	FlyBug fb(2, 3, 4);
	fb.PrintBug();
	fb.nType = 1;
//	fb.nLegs = 2;
	return 0;
}*/
/*
�ڴ���������Ķ�����ʱ����Ҫ���û���Ĺ��캯������ʼ������������дӻ���̳еĳ�Ա����ִ��һ��������Ĺ��캯��֮ǰ��������ִ�л����
���캯��

���û��๹�캯�������ַ�ʽ
--��ʾ��ʽ����������Ĺ��캯���У�Ϊ����Ĺ��캯���ṩ����
deriver����derived��arg_derived-list��:base(arg_base-list)
---��ʽ��ʽ ����������Ĺ��캯���У�ʡ�Ի��๹�캯��ʱ��������Ĺ��캯�����Զ����û����Ĭ�Ϲ��캯��

�ȹ���ĺ�����
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	int n;
	Base(int i):n(i)
	{
		cout << "base" << n << "����Ĺ��캯��������" << endl;
	}
	~Base() {
		cout << "Base" << n << "�������������������" << endl;
	}
};
class Derived:public Base {
public:
	Derived(int i):Base(i)
	{
		cout << "������Ĺ��캯��������" << endl;
	}
	~Derived() {
		cout << "���������������������" << endl;
	}
};
int main() {
	Derived obj(3); return 0;

}*/


/*
������Ա�����������Ĺ��캯����д��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Bug {
private:
	int nLegs;
	int nColor;
public:
	int nType;
	Bug(int legs, int color);
		void PrintBug() {};
};
class Skill {
public:
	Skill(int n){}
};
class FlyBug :public Bug {
	int nWings;
	Skill sk1, sk2;
public:
	FlyBug(int legs, int color, int wings);
};
FlyBug::FlyBug(int legs,int color,int wings):
	Bug(legs,color),sk1(5),sk2(color),nWings(wings){}
	*/
//������������Ĺ��캯��ִ��˳��
/*
�ڴ���������Ķ�����ʱ:
1.��ִ�л���Ĺ��캯�������� ��ʼ�����������ӻ���̳еĳ�Ա;
2.��ִ�г�Ա������Ĺ��캯�������Գ�ʼ������������г�Ա����
3.����ִ�����������Լ����캯��
*/

/*
���������պ��෴
3.
2.
1.
*/











