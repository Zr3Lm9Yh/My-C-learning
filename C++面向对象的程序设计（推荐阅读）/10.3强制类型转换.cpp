/*
static_cast,interpret_cast
const_cast ,dynamic_cast

ָ����ָ��֮���ת�����վͱȽϴ�
*/

/*
1.static_cast
 static_castY�������бȽϡ���Ȼ���͵ͷ��յ�ת��

*/
/*#include<iostream>
using namespace std;
class A
{
public:
	operator int() { return 1; }
	operator char*() { return NULL; }
};
int main()
{
	A a;
	int n;
	char *p = "New Dragon Inn";
	n = static_cast<int>(3.14);
	n = static_cast<int>(a);
}*/
/*
reinterpret_cast
����ָ��֮���ת��
*/
/*#include<iostream>
using namespace std;
class A
{
public:
	int i;
	int j;
	A(int n):i(n),j(n){}
};
int main()
{
	A a(100);
	int &r = reinterpret_cast<int&>(a);//ǿ����r����a
	r = 200;//��a.i���200
	cout << a.i << "," << a.j << endl;
	int n = 300;
	A *pa = reinterpret_cast<A*>(&n);//ǿ����paָ��n
	pa->i = 400;
	pa->j = 500;
	cout << n << endl;

}*/

/*
const_cast
�������г�const���Ե�ת������const����ת����ͬ���͵ķ�const����
*/
/*
/*
dynamic_cast
ר�����ڶ�̬�����ָ������ã�ǿ��ת��Ϊ�������ָ�������/
ר�����ڶ�̬�����ָ������ã�ǿ��ת��Ϊ�������ָ�������/
*/
