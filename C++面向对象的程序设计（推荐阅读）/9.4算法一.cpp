/*
STL�е��㷨������Է�Ϊ��������
1.���������㷨
2.��ֵ�㷨 
3.ɾ���㷨
4.�����㷨
5.�����㷨
6.���������㷨
7.��ֵ�㷨

������㷨���������汾��
����==�ж��Ƿ����
�����ж�С�ڣ�������ʽ��

�����������汾��min_element
itertor min_element(iterator first,iterator last);
itertor min_element(iterator first,iterator last,Pred op)//���op�������Լ������op�����
���Լ�����Ļ�����ôѡ��Ϳ����ж��ֶ���
*/


/*
���������㷨

���㷨�����޸��㷨�����õ����������
������˳�������͹�������
ʱ�临�Ӷȶ���O��n��

�㷨������
min                 �����������н�С��       
max                 ͬ��            
min_elelment        ���������Сֵ             !!!�Ƚ��������Զ���
max_element         ����������ֵ
for_each            �������ÿ��Ԫ�ض���ĳ�ֲ���Ŷ
count
count_if
find
find_if
find_end
find_first_of
adjacent_find
search              
*/

/*#include<iostream>
#include<algorithm>
using namespace std;
class A {
public:
	int n;
	A(int i):n(i){}
};
bool operator<(const A&a1, const A&a2) {
	cout << "<called" << endl;
	if (a1.n == 3 && a2.n == 7)
		return true;
	return false;
}
int main() {
	A aa[] = { 3,5,7,2,1 };
	cout << min_element(aa, aa + 5)->n << endl;
	cout << max_element(aa, aa + 5)->n << endl;
	return 0;

}*/

/*
��ֵ�㷨

���㷨���޸�Դ�����Ŀ������Ԫ�ص�ֵ
ֵ���޸ĵ��Ǹ����䣬�����������ڹ��������ģ���Ϊ����������������������˵ģ�

for_each
copy           ����һ�����䵽��
copy_backwark  ����һ�����䵽�𴦣���Ŀ�������ǴӺ���ǰ�޸�
transform      ��һ�������Ԫ�ر��κ󿽱�����һ������
swap_ranges    �������� ���������
fill           ��ĳ��ֵȥ�������
fill_n         ��ĳ�������Ľ��ȥ���n��Ԫ��
replace         �滻
  
*/

/*#include<vector>
#include<iostream>
#include<numeric>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
class CLessThen9 {
public:
	bool operator()(int n) { return n < 9;}
};
void outputSquare(int value) { cout << value * value << ""; }
int calculateCube(int value) { return value * value*value; }

int main() {
	const int SIZE = 10;
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a2[] = { 100,2,8,1,50,3,8,9,10,2 };
	vector<int>v(a1, a1 + SIZE);
	ostream_iterator<int>output(cout, " ");
	random_shuffle(v.begin(), v.end()); //���Ƴ����Ҫд���
	cout << endl << "1)";
	copy(v.begin(), v.end(), output);
	copy(a2, a2 + SIZE, v.begin());
	cout << endl << "2(";
	cout << count(v.begin(), v.end(), 8);
	cout << endl << "3(";
	cout << count_if(v.begin(), v.end(), CLessThen9()); //!!!�����()���Ƕ����� �������op��e��=ture�������������
	cout << endl << "4(";
	cout << *(min_element(v.begin(), v.end()));
	cout << endl << "5(";
	cout << *(max_element(v.begin(), v.end()));
	cout << endl << "6(";
	cout << accumulate(v.begin(), v.end(), 0);
	cout << endl << "7)";
	for_each(v.begin(), v.end(), outputSquare);
	vector<int>cubes(SIZE);
	transform(a1, a1 + SIZE, cubes.begin(), calculateCube);
	cout << endl << "8(";
	copy(cubes.begin(), cubes.end(), output);
	return 0;


}*/
//Ϊʲôcopy����������ķ�����ô����
/*
copy����ģ��

copy��Դ����
template<class _II,class _OI>   ����ǵ�����
inline _OI copy(_II_F,_II_L,_OI_X)
{
   for����_F��=_L;++_X,++_F)
   *_X=*_F;
   return (_X);
}
*/
/*#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {
	int a[4] = { 1,2,3,4 };
	My_ostream_iterator<int>oit(cout, "*");
	copy(a, a + 4, oit);
	ofstream oFile("text.texxt", ios::out);
	My_ostream_iterator<int>oitf(oFile, "*");
	copy(a, a + 4, oitf);
	oFile.close();
	return 0;
}
   ̫����  ������
*/



















