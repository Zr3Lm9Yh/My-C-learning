/*
char *ԭ��һֱ�������ַ�������ѽ

string��
 --string����ģ����
   typedef basic_string<char>string;

ʹ��string��Ҫ����ͷ�ļ�<string>

string����ĳ�ʼ��
----string s1("hello");
----string mooth="March";
----string s2(8,'x');

���ǿ��Խ��ַ���ֵ��string����
--string s;
--s='n';
*/
/*#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[]) {
	string s1("hlola");
	cout << s1 << endl;
	string s2(8, 'x');
	cout << s2 << endl;
	string month = "March";
	cout << month << endl;
	string s;
	s = 'n';
	cout << s << endl;
	return 0;

}*/
/*
string ����ĳ����ó�Ա����length()��ȡ��
string s("hello");
cout<<s.lentth()<<endl;
string ֧������ȡ�����
--string stringObject;
--cin>>stringObjext;
string֧��getline����
--string s;
--getline(cin,s);
*/
/*
string�ĸ�ֵ������
��=��ֵ
-string s1("cat"),s2;
s1=s2;
��assign��Ա��������
-string s1����cat������s3;
s3.assign(s1);
��assign��Ա�������ָ���
--string s1("catpig",s3);
s3.assign(s1,1,3)
//��s1���±�Ϊ1���ַ���ʼ����3���ַ�
�����ַ�����
s2[5]=s1[3]='a';
�������string���ַ�
string s1����hello����
for(int i=0;i<s1.length();++i)
        cout<<s1.at(i)<<endl;
		cout<<s1[i]<<endl;
��Ա����������Ϊ��飬���������Χ�����׳�out_of_range�쳣
���±������[]������Χ���
��+����������ַ���
string s1����good������s2����morining������
s1+=s2;
cout<<s1;��������˵��goodmorining
Ҳ�����ó�Ա����append�����ַ���
s1.append(s2);
cout<<s1;
s2.append(s1,3,s1.size())
cout>>s2;ָ���ַ������


�Ƚ�string
�ù�ϵ������Ƚ�string�Ĵ�С
==,>,>=,<,<=,!=
����ֵ��bool���ͣ���������true�����򷵻�false

�ó�Ա����compare�Ƚ�string�Ĵ�С
s1.compare��s2����ȷ���0�����ڷ���1,С�ڷ���-1
*/
/*
�Ӵ�
��Ա����substr
string s1("hello world"),s2;
s2=s1.substr(4,5);//�±�4��ʼ5���ַ�
cout<<s2<<endl;

��Ա����swap�����ַ���

Ѱ��string�е��ַ���
��Ա����find����
--string s1��"hello world"��;
--s1.find("lo");

����ܹ��ҵ�������l����λ�õ��±�  

��Ա����erase()
s1.erase(5)����ȥ���±�5�Լ�֮����ַ�

��Ա����replace
string s1("hello wodrld")
s1.replace(2,3,"haha")
cout<<s1;

insert()
string s1("hello word")
string s2("show insert")
s1.insert(5,s2)//��s2����s1�±�5
��λ��

ת����c����ʽchar*�ַ���
c_str()
string s1("hello world")
printf("%s\n",s1.c_str())
s1.c_str()���ش�ͳ��const char*�����ַ������Ҹ��ַ�����
\0��β


*/


