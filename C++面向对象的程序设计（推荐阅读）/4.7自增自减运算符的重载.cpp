/*
Ϊ�����������Լ��������ǰ����֮��

ǰ���������ΪһԪ���������
����Ϊ��Ա������
T & operator++();
T & operator--();
����Ϊȫ�ֺ���:
T1 & operator++(T2);
T1 & operator--(T2);

�����������Ϊ��Ԫ��������أ���дһ��û�õĲ���:
����Ϊ��Ա������
T operator++(int );
T operator--(int );
����Ϊȫ�ֺ�����
T operator++(T2,int );
T operator--(T2,int );
��vs�У�obj++Ҳ����ǰ������
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CDemo {
private:
	int n;
public:
	CDemo(int i = 0):n(i){}
	CDemo & operator++();
	CDemo operator++(int);
	operator int() { return n; }   //ǿ������ת������������ת��Ϊn
	friend CDemo & operator--(CDemo &);
	friend CDemo operator--(CDemo &, int);
};
CDemo & CDemo::operator++() {       //����д�Ϳ��Է���˽�б���
	++n;                           
	return *this;
}//++s��Ϊ s.operator++();
CDemo CDemo::operator++(int k) {
	CDemo tmp(*this);//��¼�޸�ǰ�Ķ���
	n++;
	return tmp;//�����޸�ǰ�Ķ���
}//s++��Ϊs.operator++(0);
CDemo & operator--(CDemo &d) {
	d.n--;
	return d;
}
CDemo operator--(CDemo &d, int) {
	CDemo tmp(d);
	d.n--;
	return tmp;
}

int main() {
	CDemo d(5);
	cout << (d++) << ",";
	cout << d << ",";
	cout << (++d) << ",";
	cout << d << endl;
	cout << (d--) << ",";
	cout << d << ",";
	cout << (--d) << ",";
	cout << d << endl;
	return 0;

}*/
//��c++����++a�ķ���ֵ����a������
//��ѭ������++i��i++��Ҫ���
/*
1.c++���������µ��������
2.���غ�������ĺ���Ӧ�÷����ճ�ϰ��
3.��������ز��ı�����������ȼ�
4.������������ܹ�������"."".*""::","?:","sizeof"
5.���������(),[],->��ֵ�����=ʱ����������غ�����������Ϊ���
��Ա����������ע���³�Ա�����ı�ʾ��ʽ����һȥ����=�����أ�

*/


