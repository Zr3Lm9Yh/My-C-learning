/*
3.ɾ���㷨
ɾ��һ���������ĳЩԪ��

ɾ��Ԫ�غ����¿�λ�ã�Ȼ��ȥ��䣬���û�б�����ϵĿ�λ�ã�ά����ԭ����ֵ����
ɾ���㷨�������ڹ�������
remove          ɾ�������е���ĳ��ֵ��Ԫ��
remove_if  
remove_copy
remove_copy_if
unique           ɾ��������������ȵ�Ԫ�أ�ֻ����һ��  ������ȥ�أ�
unique_copy
*/
/*
ͬ�� uniqueҲ�����أ��������汾�ĺ���
һ����== һ�����˸����������Լ��Ķ���ĺ������������Ƚ�

removeɾ���Ǳ�ɿ�λ�ã�������ĸ���û�м���
*/
/*#include<vector>
#include<iostream>
#include<numeric>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main() {
	int a[5] = { 1,2,3,2,5 };
	int b[6] = { 1,2,3,2,5,6 };
	ostream_iterator<int>oit(cout, ",");
	int *p = remove(a, a + 5, 2);
	cout << "1("; copy(a, a + 5, oit); cout << endl;
	cout << "2(" << p - a << endl;
	vector<int>v(b, b + 6);
	remove(v.begin(), v.end(), oit); cout << endl;
	cout << "4("; cout << v.size() << endl;
	return 0;
}*/
/*
4.�����㷨

�����㷨�ı�������Ԫ�ص�˳��
���ǲ��ı�Ԫ�ص�ֵ
�����㷨�������ڹ�������
�㷨���Ӷ���O��n��

reverse                     �ߵ�����
next_permutation        �������Ϊ��һ������(�����Զ���Ƚ���)
prev_permutation        �������Ϊ��һ�����У����Զ���Ƚ�����
random_shuffle          ������������Ԫ�ص�˳��
stable_patition         ����������ĳ��������Ԫ���Ƶ�ǰ��
                        �������Ԫ���Ƶ����棬�������ǵ��Ⱥ�˳�򲻱�


*/
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string str = "231";
	char szStr[] = "324";
	while (next_permutation(str.begin(), str.end())) {
		cout << str << endl;
	}
	cout << "****" << endl;
	while (next_permutation(szStr, szStr + 3)) {
		cout << szStr << endl;
	}
	sort(str.begin(), str.end());
	cout << "****" << endl;
	while (next_permutation(str.begin(), str.end()))
	{
		cout << str << endl;
	}
	return 0;

}*/
/*#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
#include<string>
using namespace std;
int main() {
	int a[] = { 8,7,10 };
	list<int>is(a, a + 3);
	while (next_permutation(is.begin(), is.end())) {
		list<int>::iterator i;
		for (i = is.begin(); i != is.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	return 0;

}*/

/*
5.�����㷨

�����㷨��������������ҵ�
sort                          
stable_sort

ͬ��sort��������
template<class Ranlt>
void  sort(Ranlt first,Ranlt last);
��������
�ж�x�Ƿ�Ӧ��y��ǰ���Ϳ�x<y�Ƿ�Ϊtrue

template<class Ranlt,class Pred>
void sort(Ranlt first,Ranlt last,Pred pr) !!!���pr�Ǻ������󣬻��ߺ���ָ��

sortʵ�����ǿ�������

stable_sort�ǹ鲢����


*/

/*
6.���������㷨
Ҫ���������������Ǵ�С�����ź����
��Ҫ������ʵ�����֧��
���������㷨�����ù���������list
binary_search             �ж������Ƿ���ĳ��Ԫ��
lower_bound              �����һ����С��ĳ��ֵ��Ԫ�ص�λ��
upper_bound              �ҵ�һ������ĳ��ֵԪ�ص�λ��
equal_bound                ͬʱ
merge                     �ϲ������������䵽������������ȥ
set_union                 ����ϲ�����
set_intersection           �󽻲�����
set_different               ���
inplace_merge                ��������������ԭ�غϲ�


*/

/*#include<vector>
#include<bitset>
#include<iostream>
#include<numeric>
#include<list>
#include<algorithm>
using namespace std;
bool Greater10(int n) {
	return n > 10;

}
int main()
{
	const int SIZE = 10;
	int a1[] = { 2,8,1,50,3,100,8,9,10,2 };
	vector<int>v(a1, a1 + SIZE);
	ostream_iterator<int>output(cout, "");
	vector<int>::iterator location;
	location = find(v.begin(), v.end(), 10);
	if (location != v.end()) {
		cout << endl << "1(" << location - v.begin();
	}
	location = find_if(v.begin(), v.end(), Greater10);
	if (location != v.end())
		cout << endl << "2)" << location - v.begin();
	sort(v.begin(), v.end());
	if (binary_search(v.begin(), v.end(), 9)) {
		cout << endl << "3)" << "9 found";
	}
}*/
/*
bitset

template<size_t N>
class bitset
{
...
}
ʵ��ʹ�õ�ʱ��,N�Ǹ����γ���
��bitset<40>bst;
bst��һ����40λ��ɵĶ���
��bitset�������Է���ط����κ�һλ

bitset�ĳ�Ա����// �Լ�baidu
*/














