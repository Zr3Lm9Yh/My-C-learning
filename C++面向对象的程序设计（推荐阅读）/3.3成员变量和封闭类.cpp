/*#include<cstdio>
#include<iostream>
using namespace std;
class CTyre {     //��̥��
private:
	int radius;  //�뾶
	int width;   //���
public:
	CTyre(int r,int w):radius(r),width(w){}//���������Ľ�����ʼ���б�
};                                      //����Ϊ��Ա�������ó�ʼֵ
class CEngine { //������

};
//�г�Ա������һ����ĳ�Ա����������Ķ��󣩵�����������
class CCar {
private:      //!!��ԥccar����������Ա��������ccar�����Ƿ����
	int price;
	CTyre tyre;
	CEngine engine;
public:
	CCar(int p, int tr, int tw);

};
CCar::CCar(int p, int tr, int w) :price(p), tyre(tr, w) {

};
int main() {
	CCar car(2000, 17, 225);
	return 0;

}*/
//�κζ����ʼ����ʱ�򣬶�һ�����������캯���ĵ��ã����캯���в����Ļ�����ε���
//�������������ײ���
/*
�κ����ɷ����������䣬��Ҫ�ñ��������ף������еĳ�Ա���������
��ʼ����
������������ͨ�������Ĺ��캯����ʼ���б�
��Ա�����ʼ���б��еĲ������������⸴�ӵı��ʽ�����԰���������������ֻҪ���ʽ�еĺ���������ж��������
*/


/*
����๹�캯��������������ִ��˳��

������������ʱ����ִ�����ж����Ա�Ĺ��캯����Ȼ���ִ�з����Ĺ��캯��
�����Ա�Ĺ��캯�����ô���Ͷ����Ա�����е�˵������һ�£��������ڳ�Ա��ʼ���б��г��ֵ�
�����޹�

�������Ķ�������ʱ����ִ�з���������������Ȼ����ִ�г�Ա�������������������͹��캯����
�����෴
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CTyre {
public:
	CTyre() { cout << "��CTyre����������" << endl; }
	~CTyre() { cout << "CTyre�������һ�����" << endl;}
};
class CEngine {
public:
	CEngine() { cout << "CEgine������������"; }
	CEngine() { cout << "CEgine������������"; }
};
class CCar {
private:
	CEngine engine;
	CTyre tyre;
public:
	CCar() { cout << "CCar����������" << endl; }
	~CCar() { cout << "CCar������������" << endl; }
};
int main() {
	CCar car;
	return 0;
}*/




