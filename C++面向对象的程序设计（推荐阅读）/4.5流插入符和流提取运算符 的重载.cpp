/*
�����������������
*/
//cout<<5  ;��cout.operator<<(5);
//cout<<"this",��cout.opretor<<("this");	
/*
�����и�����
�������cout<<5<<"hola"

���ǿ��Խ�����ֵ���cout����
��
ostream & ostream::operator<<(int n){
             ....//���n�Ĵ���
			 return *this;
}

ostream & ostream::operator<<(const char *s)
{
             .....//���s�Ĵ���
			 return *this;
}
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CStudent {
public:
	int nAge;

};
ostream &*//*����ķ������ͣ��ر��н������������ostream�����ã�������cout*//* operator<<(ostream & o, const CStudent & s) {*/  //���o����ostream�Ķ���(cout)
	/*o << s.nAge;                                                                                          //Ϊ�˽�ʡ�����������������ostream������ & o
	return o;//����ֵ���� o�ͺ�����������֪���� int main�ķ���ֵΪʲôҪдreturn 0�˰� 
}
int main() {
	CStudent s;
	s.nAge = 5;
	cout << s << "hello";
	return 0;
}*/
/*
�ٶ�c��COMplx������Ķ�������ϣ��Щcout<<c,������a+bi����ʽ���c��ֵ��cinͬ������c.real=a,c.imag=b
*/
//����Ҫ����ֻ�����س�ȫ�ֺ�������Ϊ��ostream ��iostream�����д����cout��cin
/*#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex(double r = 0, double i = 0) :real(r), imag(i) {};
	friend ostream & operator<<(ostream &os, const Complex &c);
	friend istream & operator>>(istream & is, Complex &c);
};
ostream &operator <<(ostream &os, const Complex &c) {
	os << c.real << "+" << c.imag << "i";
	return os;
}
istream &operator>>(istream & is, Complex &c) {
	string s;
	is >> s;//��s�ַ�������a+bi����Ϊ�ַ������룬a+bi�м��м䲻�ո�
	int pos = s.find("+", 0);
	string sTmp = s.substr(0, pos);//���������ʵ�����ַ����ַ���
	c.real = atof(sTmp.c_str());
	//atof�⺯���ܽ�const char*ָ��ָ�������ת����float
	sTmp = s.substr(pos + 1, s.length() - pos - 2);
	//����������鲿��
	c.imag = atof(sTmp.c_str());
	return is;
}
int main() {
	Complex c;
	int n;
	cin >> c >> n;
	cout << c << "," << n;
	return 0;

}*/




