/*
��Ϊ����������û�е����������Ժܶ��㷨����������
*/
/*
stack��ջ������
ջ�Ǻ���ȳ������ݽṹ��ֻ�ܲ��룬ɾ��������ջ����Ԫ��
����:
template<class T,class Cont=deque<T>>
class stack{
    .....
}
push ,pop ,top������ջ��Ԫ�ص����ã�

queue��stack��࣬����push�����ڶ�β���Ƚ��ȳ���pop�����ڶ�ͷ
back���Է��ض�βԪ�ص�����

priority_queue���ȶ���
ͨ���ö�������ʵ�֣���֤����Ԫ����������ǰ�档��ִ��pop����ʱ��ɾ����������Ԫ�أ�ִ��top������ʱ��
���ص������Ԫ�ص����á�Ĭ�ϵıȽ�����less<T>
*/
/*#include<queue>
#include<iostream>
using namespace std;
int main()
{
	priority_queue<double>pq1;
	pq1.push(3.2); pq1.push(9.8); pq1.push(5.4);
	pq1.push(6.7);
	while (!pq1.empty()) {
		cout << pq1.top() << "";
		pq1.pop();
	}
	cout << endl;
	priority_queue<double, vector<double>, greater<double>>pq2;
	pq2.push(3.2); pq2.push(9.8); pq2.push(9.8); pq2.push(5.4);
	while (!pq2.empty()) {
		cout << pq2.top() << "";
		pq1.pop();
	}
	return 0;
}*/
/*
empty()��Ա���������ж��������Ƿ�Ϊ��
size()��Ա����������������Ԫ�ظ���
*/

