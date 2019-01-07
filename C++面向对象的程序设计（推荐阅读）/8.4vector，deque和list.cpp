/*#include<iostream>
#include<vector>
using namespace std;
template<class T>
void PrintVector(T s, T e)
{
	for (; s != e; ++s)
		cout << *s << "";
	cout << endl;
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	vector<int>v(a, a + 5);//������a�Ž�v������
	cout << "1(" << v.end() - v.begin() << endl;
	//������Ϊ����ʾ������������������໥�Ӽ�
	cout << "2("; PrintVector(v.begin(), v.end());
	v.insert(v.begin() + 2, 13);//��һ��Ԫ����һ��������ָ����Ҫ������������ĸ�λ��
	cout << "3("; PrintVector(v.begin() , v.end());
	v.erase(v.begin() + 2);//ɾ��λ��begin()+2��Ԫ��
	cout << "4("; PrintVector(v.begin(), v.end());
	vector<int>v2(4, 100); //v2 ��4��Ԫ�أ�����100
	v2.insert(v2.begin(), v.begin() + 1, v.begin() + 3);
	//��v��һ�β���v2�Ŀ�ͷ
	cout << "5(v2:"; PrintVector(v2.begin(), v2.end());
	v.erase(v.begin() + 1, v.begin() + 3);//ɾ��v�ϵ�һ�������� 2��3
	cout << "6)"; PrintVector(v.begin(), v.end());
	//6)1 4  5
	return 0;

}*/

//��vectorʵ�ֶ�ά����
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int> >v(3);
	//v��3��Ԫ�أ�ÿ��Ԫ�ض���vector<int>����
	for (int i = 0; i < v.size(); ++i)
		for (int j = 0; j < 4; ++j)
			v[i].push_back(j);
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			cout << v[i][j] << "";
		cout << endl;

	}
	return 0;

}*/
/*
deque  ˫�����
����ʹ����vector�Ĳ�����������deque
deque����push_front(��Ԫ�ز��뵽ǰ��)��pop_front��ɾ����ǰ���Ԫ�أ�����
���Ӷ��ǳ�����
*/
/*
˫������
list ����������������֧���������

list����
���κ�λ�ò���ɾ�����ǳ���ʱ�� ����֧�������ȡ��
���˾�������˳���������еĳ�Ա�������⣬��֧��8����Ա����
push_front: ��ǰ�����
pop_front:   ɾ��ǰ���Ԫ��
sort:      ����(list��֧��STL ���㷨sort)
remove: ɾ����ָ��ֵ��ȵ�����Ԫ��
unique:  ɾ�����к�ǰһ��Ԫ����ͬ��Ԫ�أ�Ҫ����Ԫ�ز��ظ�����unique֮ǰ����sort��
merge:   �ϲ�������������ձ��ϲ����Ǹ�
reverse:  �ߵ�����
splice: ��ָ��λ��ǰ�������һ�����е�һ������Ԫ�أ�������һ������ɾ���������Ԫ�� 
*/
/*#include<list>
#include<iostream>
#include<algorithm>
using namespace std;
class A {
private:
	int n;
public:
	A(int n_) { n = n_; }
	friend bool operator<(const A& a1, const A &a2);
	friend bool operator==(const A &a1, const A &a2);
	friend ostream & operator<<(iostream & o, const A &a);
	template<class T>
	void PrintList(const list<T>&lst) {
		typename list<T>::const_iterator i;
		i = lst.begin();
		for (i = lst.begin(); i != lst.end(); i++)
			cout << *i << ",";
	}
};//typename����˵��list<T>::const_iterator�Ǹ�����
int main() {
	list<A> lst1, lst2;
	lst1.push_back(1); lst1.push_back(3);
	lst1.push_back(2); lst1.push_back(4);
	lst1.push_back(2);
	lst2.push_back(10); lst2.push_front(20);
	lst2.push_back(30); lst2.push_back(30);
	lst2.push_back(30); lst2.push_front(40);
	lst2.push_back(40);
	cout << "1("; PrintList(lst1); cout << endl;
	lst2.sort();
	cout << "2("; PrintList(lst2); cout << endl;
	cout << "3("; PrintList(lst2); cout << endl;
	lst2.pop_front();
	cout << "4)"; PrintList(lst2); cout << endl;
	lst1.remove(2);//ɾ�����к�A��2����ȵ�Ԫ��
	cout << "5("; PrintList(lst1); cout << endl;
	lst2.unique();//ɾ�����к�ǰһ��Ԫ����ȵ�Ԫ��
	cout << "6("; PrintList(lst2); cout << endl;
	lst1.merge(lst2);//�ϲ�lst2��lst1�����lst2
	cout << "7("; PrintList(lst1); cout << endl;
	cout << "8"; PrintList(lst2); cout << endl;
	lst1.reverse();
	cout << "9("; PrintList(lst1); cout << endl;
	lst2.push_back(100); lst2.push_back(200);
	lst2.push_back(300); lst2.push_back(400);
	list<A>::iterator p1, p2, p3;
	p1 = find(lst1.begin(), lst1.end(), 3);
	p2 = find(lst2.begin(), lst2.end(), 200);
	p3 = find(lst2.begin(), lst2.end(), 400);
	lst1.splice(p1, lst2, p2, p3);
	//��[p2,p3)����p1֮ǰ������lst2��ɾ��[p2,p3)
	cout << "10)"; PrintList(lst1); cout << endl;
	cout << "11)"; PrintList(lst2); cout << endl;
	return 0;
}*/









