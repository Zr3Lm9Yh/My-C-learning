/*
��Ԫ

��Ԫ��Ϊ��Ԫ��������Ԫ������

1.��Ԫ������һ�������Ԫ���������������ĳ�Ա�����������Ԫ���������Ǹ�ȫ�ֺ�����
���Է��ʸ����˽�г�Ա
*/

/*#include<cstdio>
#include<iostream>
using namespace std;
class CCar;
class CDriver {
public:
	void ModifyCar(CCar * pCar);
};
class CCar {
private:
	int price;
	friend int MostEXPECAR(CCar cars[], int total);//������Ԫ
	friend void CDriver::ModifyCar(CCar * pCar);//������Ԫ
};
void CDriver::ModifyCar(CCar *pCar) {
	pCar->price += 1000;         //Ϊʲô�ܹ�����price ��Ϊ��������ѽ
}
int MostEXPECAR(CCar cars[], int total) {
	int tmpMax = -1;
	for (int i = 0; i < total; ++i)
		if (cars[i].price > tmpMax)
			tmpMax = cars[i].price;
	return tmpMax;

 }
int main() {
	return 0;
}*/

/*
��Ԫ�ࣺ���A��B����Ԫ�࣬��ôA�Ķ���Ա�������Է���B��˽�г�Ա
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CCar {
private:
	int price;
	friend class CDriver;
};
class CDriver {
public:
	CCar mycar;
	void Mod() {
		mycar.price += 1000;  ��Ϊcdriver��ccar����Ԫ�࣬���Կ��Է���˽�г�Ա��
	}
};*/
//��Ԫ֮��Ĺ�ϵ ���ܴ��ݣ����ܼ̳�


