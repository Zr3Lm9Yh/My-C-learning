/*
class base{};
class derived:public base{};  //�����Publicָ���ǹ�������
base b;
derived d;
1.������Ķ�����Ը�ֵ���������
  b=d;      ԭ��������������ǻ������
2.����������Գ�ʼ�����������
  base &br=d;
3.���������ĵ�ַ���Ը�ֵ����������ָ��
  base *pb=&d;
  
  ���������ʽ��private��protected�������������Ͳ�����
*/


/*
ֱ�ӻ���ͼ�ӻ���
A--B B--C C--D A--Bֱ�� A--D���
*/
/*#include<iostream>
using namespace std;
class Base {
public:
	int n;
	Base(int i) :n(i) {
		cout << "BASE" << n << "base�Ĺ��캯��������" << endl;
	}
	~Base() {
		cout << "Base" << n << "base����������������" << endl;
	}
};
class Derved :public Base {
public:
	Derved(int i) :Base(i) {
		cout << "����Base��ֱ�������Ĺ��캯��������" << endl;

	}
	~Derved() {
		cout << "����Base��ֱ����������������������" << endl;
	}
};
class MoreDerved :public Derved {
public:
	MoreDerved():Derved(18){
		cout << "base�ļ�����������������������" << endl;
	}            
	~MoreDerved() {
		cout << "base�ļ�����������������������" << endl;
	}
};
int main() {
	MoreDerved obj;
	return 0;

}*/
