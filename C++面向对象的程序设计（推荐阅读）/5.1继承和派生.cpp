/*
�̳У��ڶ���һ���µ���B ʱ�����������ĳ�����е���A ���ƣ�ָ����Bӵ��A��ȫ�����ԣ�
��ô�Ϳ��԰�A��Ϊһ�����࣬����B��Ϊ��Ϊ�����һ�������ࣨ���ࣩ

��������ͨ����������޸ĺ�����õ��ġ����������У����������µĳ�Ա�����ͳ�Ա����
������һ������󣬿��Զ���ʹ�ã��������ڻ��ࡣ

������ӵ��ȫ����Ա�����ͳ�Ա������������private��protected��public

��������ĸ�����Ա�����У����ܷ��ʻ����е�private��Ա
*/
/*
�������д��
class ��������:public ������{

}
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CStudent {
private:
	string sName;
	int nAge;
public:
	bool isThreegood() {

	};
	void setName(const string & name) {
		sName = name;
	}
};
class CUndergraduateStudent :public CStudent {
private:
	int nDepartment;
public:
	bool isThreegood() {};//�Ի���ĸ��ǣ���������޸�
	bool canbaoyan() {};
};*/

/*
�����������ڴ�ռ�

������������������ڻ�������������ټ������������ĳ�Ա�����������������������У������Ż������
���һ��۶���Ĵ洢λ��λ����������������ĳ�Ա����֮ǰ
class CBase{
    int v1,v2;

};
class CDeriver:public CBase{
   int v3;

};
*/


/*
�̳�ʵ������ѧ������
*/
/*#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
class CStudent {
private:
	string name;
	string id;
	char gender;
	int age;
public:
	void Printinfo();
	void Setinfo(const string & name_, const string & id_, int age_, char gender_);
	string GetName() { return name; }
};
class CundergruateStuuent :public CStudent {
private:
	string department;
public:
	void Qualifeforbaoya() {
		cout << "qualified for baoyan" << endl;
	}
	void Printfo() {
		CStudent::Printinfo();       //���û����printinfo
		cout << "department:" << department << endl;
	}
	void setinfo(const string &name_, const string &id_, int age_, char gender_, const string &department_) {
		CStudent::Setinfo(name_, id_, age_, gender_);//���û����setinfo
		department = department_;
	}
};
int main() {
	CundergruateStuuent s2;
	s2.setinfo("Harry potter", "111821313", 19, 'M', "C  S");
	cout << s2.GetName() << "";
	s2.Qualifeforbaoya();
	s2.Printinfo();
	return 0;

}*/










