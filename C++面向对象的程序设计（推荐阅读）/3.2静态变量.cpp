/*
��̬��Ա����˵��ǰ�����static�ؼ��ֵĳ�Ա
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CRectangle {
private:
	int w, h;
	static int nTotalArea;  //��̬��Ա����
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal(); //��̬��Ա����
};*/
/*
��ͨ��Ա����ÿ��������Ե�һ�ݣ�����̬��Ա����һ����һ�ݣ�
Ϊ���ж�����

size of�����������㾲̬��Ա����

��ͨ��Ա��������������ĳ�����󣬶���̬��Ա����������������ĳ��
����

��˾�̬��Ա����Ҫͨ��������ܷ���

��η��ʾ�̬��Ա
1.����������Ա��
CRectangle::PrinTotal();
2.������.��Ա��
CRectangle r;r.PrintTotal();
��̬���Ǿ�������ĳ�������ϵ�
3.ָ��->��Ա��
CRectangle*p=&r; p->PrintTotal;
4.����.��Ա��
CRectangle & ref=r; int n=ref.nTotalNumber

��̬��Ա������������ȫ�ֱ���������һ�����󶼲����ڣ���ľ�̬��Ա����Ҳ����

��̬��Ա��������������ȥȫ�ֺ���

���þ�̬��Ա���ֻ��Ƶ�Ŀ���ǽ���ĳЩ������ص�ȫ������
�ͺ���д�������棬����ȥ��һ�����壬����ά�������

����һ����Ҫ��ʱ֪�������������������ͼ�δ������
����ͨ��ȫ�ֱ�������¼�����������
�þ�̬��Ա���������ȱ�����װ�����У��͸���������ά��

*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CRectangle {
private:
	int w, h;
	static int nTotalArea;
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal();
};
CRectangle::CRectangle(int w_, int h_) {
	w = w_;
	h = h_;
	nTotalNumber++;
	nTotalArea += w * h;
}
CRectangle::~CRectangle() {
	nTotalArea -= w * h;
	nTotalNumber--;

}*/
/*CRectangle::CRectangle(CRectangle&r) {
	w = r.w;
	h = r.h;  дһ�����ƹ��캯��������֣�û�����ӣ�ȴ��xi����Ŀ���ٵ�
	nTotalNumber++;                ���
	nTotalArea += w * h;
}*/
/*void CRectangle::PrintTotal() {
	cout << nTotalNumber << "," << nTotalArea << endl;
}
int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;
//���붨������ļ��жԾ�̬��Ա��������һ��˵�����ʼ��
//��������ܹ�ͨ�������Ӳ���ͨ��
int main() {
	CRectangle r1(3, 3), r2(2, 2);
	//cout << CRectangle::nTotalNumber;���ɷ���Ӵ
	CRectangle::PrintTotal();
	r1.PrintTotal();
	return 0;

}*/
//�ھ�̬��Ա�����У����ܷ��ʷǾ�̬��Ա������Ҳ���ܵ��÷Ǿ�̬��Ա������


