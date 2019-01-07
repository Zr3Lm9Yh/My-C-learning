/*
�������崦�����

�������崦�����:�������ɸ���������Ĳ���,��Ҫ��
���������������ʱҪָ����״��

input:
��һ���Ǽ���������Ŀn��������100��������n��,ÿ����һ����ĸc��ͷ
��c��'R',�����һ�����Σ����к�����������������ֱ��Ǿ��εĿ�͸�
��c��'C�������Ҳ��һ��Բ�����к������һ�������������
��c�ǡ�T���������һ�������Σ����к�������������������������ߵĳ��� 
*/
/*#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class CShape {
public:
	virtual double Area() = 0;//���麯��
	virtual void PrintInfo() = 0;
};
class Cttt :public CShape {
public:
	int k;
	virtual double Area();
	virtual void PrintInfo();
};
class CRectangle :public CShape {
public:
	int w, h;
	virtual double Area() ;
	virtual void PrintInfo() ;
};
class CCricle :public CShape {
public:
	int r;
	virtual double Area() ;
	virtual void PrintInfo() ;
};
class CTriangle :public CShape {
public:
	int a, b, c;
	virtual double Area();
	virtual void PrintInfo();
};
double Cttt::Area() {
	return k * k*k;
}
void Cttt::PrintInfo() {
	cout << "Cttt" << Area() << endl;
}


double CRectangle::Area() {
	return w * h;
}
void CRectangle::PrintInfo() {
	cout << "CRectangle:" << Area() << endl;
}
double CCricle::Area() {
	return 3.14*r*r;
}
void CCricle::PrintInfo() {
	cout << "CCricle" << Area() << endl;
}
double CTriangle::Area() {
	double p = (a + b + c) / 2.0;          //���׹�ʽ���Ҹ���Ҫ�ÿ�����
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
void CTriangle::PrintInfo() {
	cout << "CR=Triangle" << Area() << endl;
}
CShape *pShapes[100];  //������������ÿһ��������һ�������ָ�룬
  //��ԥ�ǻ����ָ�룬���Կ���ָ��������Ķ����������ǿ��������
//�����ÿһ��Ԫ��ȥָ��ͬ�������壬���м���������new�����Ķ���
//���ǵĵ�ַ���ͱ��ŵ���������ȥ�ˣ����򼴶Ի���ָ�������������
int MyCompare(const void *s1, const void*s2); //��������Լ�д
int main() {
	int i; int n;
	CRectangle *pr; CCricle *pc; CTriangle *pt; Cttt *pm;
	cin >> n;
	for (i = 0; i < n; i++) {
		char c;
		cin >> c;
		switch (c)
		{
		case'R':
			pr = new CRectangle();
			cin >> pr->w >> pr->h;
			pShapes[i] = pr;
			break;
		case'C':
			pc = new CCricle();
			cin >> pc->r;
			pShapes[i] = pc;
			break;
		case'T':
			pt = new CTriangle();
			cin >> pt->a >> pt->b >> pt->c;
			pShapes[i] = pt;
			break;
		case'M':
			pm = new Cttt();
			cin >> pm->k;
			pShapes[i] = pm;
			break;
		
		}
		
	}
	qsort(pShapes, n, sizeof(CShape*), MyCompare);
	for (i = 0; i < n; i++)
		pShapes[i]->PrintInfo();          //�����Ƕ�̬������
	return 0;

}
int MyCompare(const void*s1, const void *s2) {
	double a1, a2;
	CShape **p1; //s1,s2��void *������д��s1����ȡ��s1ָ�������
	CShape **p2;
	p1 = (CShape**)s1;//s1,s2ָ��pshapes�е�Ԫ�أ�����Ԫ�ص�������CShape*
	p2 = (CShape**)s2;//��p1 p2��ָ��ָ���ָ�룬����ΪCShape**
	a1 = (*p1)->Area();//*p1��������Cshape*���ǻ���ָ�룬�ʴ˾�Ϊ��̬
	a2 = (*p2)->Area();       //����������Ҳ�Ƕ�̬
	if (a1 < a2)
		return -1;
	else if (a2 < a1)
		return 1;
	else
		return 0;
}*/
/*
!!!�û���ָ��������ָ���������������ָ�룬Ȼ����������飬���ܶԸ����������������ֲ�����
�Ǻܳ���������
*/


//��̬����һ������
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	void fun1() { fun2(); }
	virtual void fun2() { cout << "���õ��ǻ���Base��fun2" << endl; }
};
class Derived :public Base {
public:
	virtual void fun2() { cout << "���õ���������D��fun2" << endl; }
};
int main() {
	Derived d;
	Base *pBase = &d;
	pBase->fun1();
	return 0;

}*/
//�ڷǹ��캯���������������ĳ�Ա�����е����麯�����Ƕ�̬!!!
//�ڹ��캯�������������ĳ�Ա�����е����麯�������Ƕ�̬�����Լ���������
/*#include<cstdio>
#include<iostream>
using namespace std;
class myclass {
public:
	virtual void hello() { cout << "hello from myclass" << endl; }
	virtual void bye() { cout << "bye from myclass" << endl; }
};
class son :public myclass {
public:
	void hello() { cout << "hello from son" << endl; };
	son() { hello(); };
	~son() { bye(); };
};
class grandson :public son {
public:
	void hello() { cout << "hello from grandson" << endl; }
	void bye() { cout << "bye from grandson" << endl;}
	grandson() { cout << "constrycting grandson" << endl; }
	~grandson() { cout << "destructing grandson" << endl; }
};
int main() {
	grandson gson;
	son *pson;
	pson = &gson;
	pson->hello();
	return 0;

}*/
//������ǲ����ڻ���Ĺ��캯����ִ����������麯���������ڻ���Ĺ��캯�������麯���Ͳ��Ƕ�̬
//�����ĵ���Ҳ��ͬ��
















