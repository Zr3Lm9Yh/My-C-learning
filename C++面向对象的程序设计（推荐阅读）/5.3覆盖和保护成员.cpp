/*
��������Զ���һ���ͻ����Աͬ���ĳ�Ա����и��ǡ����������з��������Աʱ��ȱʡ������Ƿ�����������
����ĳ�Ա�����������ж���ĳ�Ա��Ҫ���������з����ɻ��ඨ���ͬ����Աʱ��Ҫʹ�����������::
*/

/*#include<cstdio>
#include<iostream>
using namespace std;
class base {
	int j;
public:
	int i;
	void func();
};
class derived :public base {
	int i;
	void access();
	void func();
};
void derived::access() {
	j = 5;//error
	i = 5; //���õ���������
	base::i = 5; //���õ��ǻ���
	func();   //������
	base::func();  //�����
}
*/
//һ����˵����������಻����ͬ����Ա����

/*
��һ�ִ�ȡȨ��˵������protected
�����protected��Ա�����Ա����º�������
---����ĳ�Ա����
---�������Ԫ����
---������ĳ�Ա�������Է��ʵ�ǰ����Ļ���ı�����Ա
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Father {
private:
	int nPrivate;
public:
	int nPublic;
protected:
	int nPropected;

};
class Son :public Father {
	void AccessfATher() {
		nPublic = 1;
		//nPrivate = 1;
		nPropected = 1;//ok.�����Ǵӻ���̳е�protected��Ա
		Son f;
		f.nPropected = 1;//wrong ,f���ǵ�ǰ����
	}
};
int main() {
	Father f;
	Son s;
	f.nPublic = 1;
	s.nPublic = 1;
	f.
}*/

