/*#include<cstdio>
#include<iostream>
using namespace std;
class Demo {
	int id;
public:
	Demo(int i) {
		id = i;      //��ʵ�ϣ������������ת�����캯��
		cout << "id=" << id << "���ĸ������������" << endl;
	}
	~Demo() {
		cout << "id=" << id << "���ĸ�������������" << endl;
	}
};
Demo d1(1);
void func() {
	static Demo d2(2);   //��̬�ľֲ���������������,�ڳ����������
	Demo d3(3);            
	cout << "func" << endl;
}
int main() {
	Demo d4(4);
	d4 = 6;    //�и�����ת�����캯���Ĵ���ѽ
	cout << "main" << endl;
	{
		Demo d5(5);                //�ֲ������ڻ����ŵ��ұ߾Ͳ�����
	}
	func();
	cout << "main ends" << endl;
	return 0;

}*/
//������new �����Ķ����������������Ҳ��������//