/*
��ֵ�������=������

��ʱ��ϣ����ֵ������������Ϳ��Բ�ƥ�䣬����
����һ��int���ͱ�����ֵ��һ��complex���󣬻��һ��
char *���͵��ַ�����ֵ��һ���ַ������󣬴�ʱ��Ҫ���ظ�ֵ�����
��=��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class String {
private:
	char *str;
public:
	String() :str(new char[1]) {
		str[0] = 0;
	}
	const char *c_str() { return str; };
	String & operator = ( const char *s );
	~String() { delete[]str; }
};
String & String::operator=(const char *s)
{
	delete[]str;
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	return *this;
}
int main() {
	String s;
	s = "good luck";
	cout << s.c_str() << endl;
	s = "shenzhou 8";
	cout << s.c_str() << endl;
	return 0;

}*/
/*
��Ҫs1=s2��
�粻�����Լ��ĸ�ֵ���������ôs1=s2ʵ���ϵ���S1.str��s2.strָ���ͬһ���ط�

����S1���������������������ͷ�S1.strָ��Ŀռ䣬s2����ʱ��Ҫ�ͷ�һ�Σ�����
���
string & operator =��const string & s��{
            delete [] str;
			str=new char [strlen(s.str)+1]
			strcpy(str ,s.str);
			return *this;
*/
