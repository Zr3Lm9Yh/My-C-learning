/*
����ת�����캯����Ŀ����ʵ�����͵��Զ�ת��
ֻ��һ�����������Ҳ��Ǹ��ƹ��캯���Ĺ��캯����һ��Ϳ��Ե�����ת�����캯��
*/
//����ת�����캯����ʵ��
/*#include<iostream>
#include<cstdio>
using namespace std;
class  Complex {
public:
	double real, imag;
	Complex(int i) {
		cout << "InConstruct called" << endl;
		real = i; imag = 0;
	}
	Complex(double r, double i) { real = r; imag = i; }
};
int main() {
	Complex c1(7, 8);
	Complex c2 = 12;
	c1 = 9;  //9��ת������ʱ��compelex����
	cout << c1.real << "," << c1.imag << endl;
	return 0;

}*/

//ֻҪ�ж��� ���ɣ���һ��Ҫ�ù��캯����ʼ������������

/*
��������

������������ͬ����ǰ��Ӹ�~��û�з���ֵ�� ������һ����
�����һ����������

���������ڶ�������ʱ���Զ������á����Զ��������������ڶ�������ǰ
���ƺ����������ͷŷ���ռ䡣

����������ʱ��ûд���������������������ȱʡ����������ȱʡ��������ʲô
Ҳ����

*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class String {
private:
	char *p;
public:
	String() {
		p = new char[10];
	}
	~String();
};
String::~String() {
	delete[]p;
}*/
//��������������
//���������������ڽ���ʱ�����������ÿһ��Ԫ�ص������������ᱻ����
/*#include<cstdio>
#include<iostream>
using namespace std;
class Ctest {
public:
	~Ctest() {
		cout << "�鿴�����������˶��ٴ�";
	}
};
int main() {
	Ctest araay[2];
	cout << "end main" << endl;
	Ctest *pTest;
	pTest = new Ctest;
	delete pTest;
	pTest = new Ctest[3];
	delete[]pTest;
	return 0;


}*/
//��newһ���������飬��ô��delete�ͷ�ʱӦ��д[]������ֻdeleteһ�����󣨼�ֻ����һ��
//�������飩
/*#include<iostream>
#include<cstdio>
using namespace std;
class Cmyclass {
public:
	~Cmyclass() {
		cout << "dewadad" << endl;
	}
 };
Cmyclass obj;
Cmyclass fun(Cmyclass sobj) { //������������Ҳ�ᵼ����������������
	return sobj;     //��������������
}                    //�������÷���ʱ������ʱ���󷵻�
int main() {
	obj = fun(obj);       //�������õķ���ֵ����ʱ���󣩱�
	return 0;            //���ù��󣬸���ʱ�������������������
}*/