/*
������

����ָ��˳�������͹��������е�Ԫ��
�������÷���ָ������
��const�ͷ�const����
ͨ�����������Զ�ȡ��ָ���Ԫ��
ͨ����const�����������޸���ָ���Ԫ��
*/
/*
�������Ķ���
�����������ĵ������ķ�����
��������::iterator ������;
��
��������::const_iterator ������;
����һ��������ָ���Ԫ��
*������������

����������ʹ��++�Ĳ�������ʹָ�������е���һ��Ԫ�ء���������������������е�
���һ��Ԫ�صĺ��棬��ʱ��ʹ�����ͻ����
*/
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v; //һ�����intԪ�ص����飬һ��ʼ����û��Ԫ��
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4);
	vector<int>::const_iterator i;//����������
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ",";
	cout << endl;
	vector<int>::reverse_iterator r;//���������
	for (r = v.rbegin(); r != v.rend(); r++)
		cout << *r << ",";
	cout << endl;
	vector<int >::iterator j;//�ǳ���������
	for (j = v.begin(); j != v.end(); j++)
		*j = 100;
	for (i = v.begin(); i != v.end(); i++)
		cout << *i << ",";
	return 0;

}*/

/*
˫�������
++p,p++  ʹpָ�������е���һ��Ԫ��
--p,p--  ʹpָ����������һ��Ԫ��
*p  //ȡpָ���Ԫ��
p=p1   ��ֵ
p==p1��p��=p1 �ж��Ƿ���ȣ�����
���������
 ��˫����������еĲ���
 p+=i ��p����ƶ�i��Ԫ��
 p-=i ��p��ǰ�ƶ�i��Ԫ��
 p+i   ֵΪ��ָ��p����ĵ�i��Ԫ�صĵ�����
 p-i   ֵΪ��ָ��pǰ��ĵ�i��Ԫ�صĵ�����
 p[i]  ֵΪ:p����ĵ�i��Ԫ�ص�����
 p<p1,p<=p1,p>p1,p>=p1


 ����                     �����ϵĵ����������
 vector                       �������
 deque                        �������
 list                           ˫��
 set/multiset                   ˫��
 map/multimap                   ˫��

stack                       ��֧�ֵ�����
queue                       ��֧�ֵ�����
priority_queue              ��֧�ֵ�����

�е��㷨 ��sort��binary_search��Ҫͨ��������ʵ����������������е�Ԫ��
��ôlist�Լ������������Ͳ���֧���㷨
*/
//����vector���������¼�������
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v(6);
	v.push_back(1); v.push_back(2);
	v.push_back(3); v.push_back(4);
	v.push_back(5); v.push_back(6);
	int i;
	for (i = 0; i < v.size();)
		cout << v[i]; //�����±��������
	vector<int>::const_iterator ii;
	for (ii = v.begin(); ii != v.end(); ii++)
		cout << *ii;
	for (ii = v.begin(); ii != v.end(); ii++)
		cout << *ii;
	for (ii = v.begin(); ii < v.end(); ii++)
		cout << *ii;
	ii = v.begin();
	while (ii < v.end()) {
		cout << *ii;
		ii = ii + 2;
		//���һ������
	}

}*/
 /*
 list�ĵ�������˫�������
 ��ȷ�ı���list�ķ���
 list<int> v;
 list<int>::const_lierator ii;
 for(ii=v.begin();ii!=v.end();++ii)
          cout<<*ii

���������
   for(ii =v.begin();ii<<v.end();ii++)
         cout<<*ii;
	//˫���������֧��<,listû��[]��Ա����
	for(int i=0;i<v.size();i++)
		  cout<<v[i];
 */


/*
�㷨���
�㷨����һ��������ģ�壬�������<algorithm>�ж���
STL���ṩ���ڸ���������ͨ�õ��㷨��������ң������
�㷨ͨ�����������������е�Ԫ�ء�����㷨���Զ������е�һ���ֲ��������
�����������Ҫ����������һ������ʵ�ĵ�������һ������ֹԪ�صĺ���һ��Ԫ�صĵ�����
��������Ͳ���

�е��㷨����һ��������������find()�㷨���������в���һ��Ԫ�أ�������һ��ָ���Ԫ�ص�
������

�㷨���Դ���������Ҳ���Դ�����ͨ����
*/


/*
�㷨ʾ����find����
��������㷨������ģ�庯����д��
��ͬ�ı�����������㷨ģ���ǲ�һ��
template<class Init,class T>
Init find(Init first,Init last ,const T& val)

first��last�������������������ĵ����������Ǹ����������в��������
�����յ�[first,last )����������λ�ڲ��ҷ�Χ֮�еģ����յ㲻��
find[first,last)���ҵ���val��Ԫ��

��==������ж����

��������ֵ��һ��������������ҵ����õ�����ָ���ҵ���Ԫ�أ�����Ҳ���
����õ���������last
*/
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int  array[10] = { 10,20,30,40 };
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);
	if (p != v.end())
		cout << *p << endl;
	return 0;

}








