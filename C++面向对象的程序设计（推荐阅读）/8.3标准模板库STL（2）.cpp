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
��ȷ����list�ķ���
list<int >v;
list<int>::const_iterator ii;
for(ii=v.begin();ii!=v.end();++ii)
       cout<<*ii;
����������� 
for(ii=v.begin();ii<v.end();i++)
	   cout<<*ii;
	//˫���������֧��<��listû��[]��Ա����
	for(int i=0;i<v.size();++i)
	cout<<v[i];
*/
/*
�㷨����һ��������ģ�壬�������<algorithm>�ж���
STL���ṩ���ڸ���������ͨ�õ��㷨��������������

�㷨ͨ�������������������е�Ԫ�ء�����㷨���Զ������е�һ���ֲ�������в�����
�����Ҫ����������һ������ʼԪ�صĵ�������һ��ʱ����ֹԪ�صĵ���������������Ͳ���

�е��㷨����һ��������������find()�㷨���������в���һ��Ԫ�أ�������һ��ָ���Ԫ�صĵ�����

�㷨���Դ���������Ҳ���Դ�����ͨ����
*/

/*
�㷨ʵ��:find()
�㷨�������ͨ��ģ�庯����д�������ڲ�ͬ������
template<class Init,class T>
Init find(Inlt first,Inlt last,const T&val);
first��last�����������������ĵ����������Ǹ����������в�������������յ�[first,last)
����������λ�ڲ��ҷ�Χ֮�еģ����յ㲻�ǡ�find��[fiest,last)���ҵ���val��Ԫ��
��==������ж����

��������ֵ��һ��������������ҵ�����õ�����ָ���ҵ���Ԫ�أ�����Ҳ���
��õ���������last
*/
/*#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int array[10] = { 10,20,30,40 };
	vector<int>v;
	v.push_back(1); v.push_back(2);
	v.push_back(3); v.push_back(4);
	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);   //��v.end����Ҳû��ָ�����һ��Ԫ�أ�ָ��������һ��Ԫ�ػ�Ҫ�����λ��
	if (p != v.end())
		cout << *p << endl;
	p = find(v.begin(), v.end(), 9);
	if (p == v.end())
		cout << "not found" << endl;
	p = find(v.begin() + 1, v.end() - 2, 1);//���������Ĳ�������[2,3)
	if (p != v.end())
		cout << *p << endl;
	int *pp = find(array, array + 4, 20);//�������ǵ�����
	cout << *pp << endl;                 //����*pp���ص����Ǹ���
	return 0;

}*/
/*
STL��"��""С"�ĸ���
���������ڲ���Ԫ���Ǵ�С���������
��Щ�㷨Ҫ��������������Ǵ�С��������ģ���Ϊ"���������㷨"
eg��binary_search
��Щ�㷨���������д�С��������"��Ϊ�����㷨"
eg��sort
����һЩ�������㷨���õ�"��"��С���ĸ���
 
 ����Դ�����Զ����С����Ĺ���

ʹ��STLʱ����ȱʡ������£���������˵���ȼ�
1.x��yС
2.��ʾʽx<yΪ��
3.y��x��
*/
/*
STL����ȵĸ���
 
 ��ʱ"x��y"��ȵȼ���x==yΪ��
 
 ������Ϊ����������㷨����˳�����find

 ��ʱx��y��ȵȼ���---xС��y��yС��xͬʱΪ��----  !!�����С�ڳ���ԴҲ�����Լ�����ֻ������ֵ
                                |
								|
						    �Ǿ���Ϊx��y���
 ��:�й������㷨 binary_search
 ������������ĳ�Ա����find
*/
//STL��"���"������ʾ
/*#include<iostream>
#include<algorithm>
using namespace std;
class A
{
	int v;
public:
	A(int n):v(n){}
	bool operator<(const A &a2)const {
		cout << v << "<" << a2.v << "?" << endl;
		return false;
	}
	bool operator==(const A &a2)const {
		cout << v << "==" << a2.v << "?" << endl;
		return v == a2.v;
	}

};

int main() {
	A a[] = { A(1),A(2),A(3),A(4),A(5) };
	cout << binary_search(a, a + 4, A(9));
	return 0;

}*/







