 /*
 ��try catch���쳣�Ĵ���
 */
/*#include<iostream>
using namespace std;
int main()
{
	double m, n;
	cin >> m >> n;
	try {
		cout << "before dividing" << endl;
		if (n == 0)
			throw - 1;//�׳������쳣    //�����쳣������catch��������
		else
			cout << m / n << endl;
		cout << "after dividing" << endl;
	}
	catch (double d) {
		cout << "catch(double)" << d << endl;
	}
	catch (int e) {
		cout << "catch(int)" << e << endl;
	}
	cout << "fished" << endl;
	return 0;

}*/
/*#include<iostream>
#include<string>
using namespace std;
class CException
{
public:
	string msg;  //msg��������쳣����Ϣ��
	CException(string s):msg(s){}
};
double Devide(double x, double y)
{
	if (y == 0)
		throw CException("devided by zero");
	cout << "in Devide" << endl;
	return x / y;
}
int CountTax(int salary)
{
	try {
		if (salary < 0)
			throw - 1;
		cout << "conting tax" << endl;
	}
	catch (int) {
		cout << "salary<0" << endl;
	}
	cout << "tax counted" << endl;
	return salary * 0.15;
}
int main()
{
	double f = 1.2;
	try {
		CountTax(-1);
		f = Devide(3, 0);
		cout << "end of try block" << endl;
	}
	catch (CException e) {
		cout << e.msg << endl;
	}
	cout << "f=" << f << endl;
	cout << "finished" << endl;
	return 0;

}*/
/*
c++��׼�쳣��
��Щ�඼�Ǵ�exception�����������ġ�
���õļ����쳣��
*/
/*
bad_cast
����dynamic_cast���дӶ�̬������󣨻����ã�
������������õ�ǿ������ת���ǣ����ת����
����ȫ�ģ�����׳����쳣
*/
/*#include<iostream>
#include<stdexcept>
#include<typeinfo>
using namespace std;
class Base
{
	virtual void func(){}
};
class Derived :public Base
{
public:
	void Print(){}
};
void PrintObj(Base &b)
{
	try {
		Derived &rd = dynamic_cast<Derived&>(b);
		//�����Ͳ���ȫ�����׳�bad_cast�쳣
		rd.Print();
	}
	catch (bad_cast&e) {
		cerr << e.what() << endl;
	}
}
int main()
{
	Base b;
	PrintObj(b);
	return 0;

}*/
/*
bad_alloc
����new��������ж�̬�ڴ����ʱ�����û���㹻��neicun
����ᷢ�����쳣
*/
/*#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try {
		char*p = new char[0x7fffffff];
	}
	catch (bad_alloc&e) {
		cerr << e.what() << endl;
	}
	return 0;

}*/
/*
out_of_range
��vector��string��at��Ա���������±����Ԫ��ʱ
����±�Խ�磬�ͻ��׳������쳣

*/
/*#include<iostream>
#include<stdexcept>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int>v(10);
	try {
		v.at(100) = 100;//�±�Խ��
	}
	catch (out_of_range&e) {
		cerr << e.what() << endl; 
	}
	string s = "hello";
	try {
		char c = s.at(100);//�׳�out_of_range�쳣
	}
	catch (out_of_range&e) {
		cerr << e.what() << endl;
	}
	return 0;

}*/


