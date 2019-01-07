/*
multimap
template<class Key,class T,class Pred =less<Key>,class A=alloctor<T>>
class multimap{
      ....
	  typedef piar<const Key,T>value_type;
	  .....
}
     key����ؼ�������
*/
/*
multimap�е�Ԫ����<�ؼ��֣�ֵ>��ɣ�ÿ��Ԫ����һ��pair���󣬹ؼ���
����first��Ա��������������Key
*/
/*#include<iostream>
#include<map>
using namespace std;
int main() {
	typedef multimap<int, double, less<int >>mmid;
	mmid pairs;
	cout << "1(" << pairs.count(15) << endl;
	pairs.insert(mmid::value_type(15, 2.7));//typedef pair<cpnst Key,T>value_type
	pairs.insert(mmid::value_type(15, 99.3));
	cout << "2(" << pairs.count(15) << endl;//��ؼ��ֵ���15��Ԫ�ظ���
	pairs.insert(mmid::value_type(30, 111.11));
	pairs.insert(mmid::value_type(10, 22.22));
	pairs.insert(mmid::value_type(25, 33.333));
	pairs.insert(mmid::value_type(20, 9.3));
	for (mmid::const_iterator i = pairs.begin();
		i != pairs.end(); i++)
		cout << "(" << i->first << "," << i->second << "(" << ",";
}*/
//multimap����
/*
һ��ѧ���ɼ�¼��Ͳ�ѯϵͳ��
����������������
Add name id score
Query score

name�Ǹ��ַ������м�û�пո񣬴���ѧ��������id�Ǹ�����������ѧ��
��score�Ǹ���������ʾ������ѧ�Ų����ظ��������������п����ظ�

query��ʾ��ѯ�������������룬��������м�¼�з�����score�͵���߷ֻ����
��������ѧ�źͷ�����������ѧ�����������������ѧ�������Ǹ�ѧ������Ϣ
����Ҳ����������nobody

��������
Add jack 12 78
Query 78
Query 81
Add Percy 9 81
Add Marry 8 81
*/
//�����vector������Щ���ݵĻ���10��8��9�������
//����Ҫ�ù�������������Ϊ���Ǵ��ʱ����Ҫ�ظ���¼��
//���Ծ���Ҫmultimap
/*#include<iostream>
#include<map>
#include<string>
using namespace std;
class CStudent
{
public:
	struct Cinfo   //����ڲ������Զ�����
	{
		int id;
		string name;
	};
	int score;
	Cinfo info;//ѧ����������Ϣ
};
typedef multimap<int, CStudent::Cinfo>MAP_STD;//��������ڵ�ÿ��Ԫ�أ�����pair��
                                              //ģ��Ķ���Ȼ������first��Ա����
                                              //�����εģ�second��Ա����������
                                              //����ѧ����id
int main() {
	MAP_STD mp;
	CStudent st;
	string cmd;
	while (cin >> cmd) {
		if (cmd == "Add") {
			cin >> st.info.name >> st.info.id >> st.score;
			mp.insert(MAP_STD::value_type(st.score, st.info));
		}
		else if (cmd == "Query") {
			int score;
			cin >> score;
			MAP_STD::iterator p = mp.lower_bound(score);
			if (p != mp.begin()) {
				--p;
				score = p->first; //�Ȳ�ѯ�����͵���߷�
				MAP_STD::iterator maxp = p;
				int maxid = p->second.id;
				for (; p != mp.begin() && p->first == score; --p) {
					if (p->second.id > maxid) {
						maxp = p;
						maxid = p->second.id;
					}
				}
				if (p->first == score) {
					if (p->second.id > maxid) {
						maxp = p;
						maxid = p->second.id;
					}
				}
				cout << maxp->second.name << "" << maxp->second.id << ""
					<< maxp->first << endl;
			}
			else
				cout << "Nobody" << endl;
		}
	}
	return 0;

}*/
//�������������ڲ��ϵ�Ҫȥ�������ݣ�Ҫ���ϵ������������ѯ�����ܿ�
//mpinsert(MAP_STD::type(st.score,st.info));
//mp.insert(make_pair(st.score,st.info));
/*
map���治�ܹ�������Ԫ�أ�����first��Ա��������ͬ��
map��ģ���multimap��һ����
map��[]��Ա����
��pairsΪmapģ����Ķ���
pairs[key]
���ضԹؼ��ֵ���key��Ԫ�ص�ֵ�����ã����û�оͲ���һ���ؼ���Ϊkey��Ԫ�أ���
ֵ���޲ι��캯����ʼ��

eg  
map<int,double> pairs;
pairs[50]=5;
���޸�pairs�йؼ���Ϊ50��Ԫ�أ���ֵ���5
*/
//mapʾ��
/*#include<iostream>
#include<map>
using namespace std;
template<class Key,class Value>
ostream & operator<<(ostream &o, const pair<Key, Value>&p)
{
	o << "(" << p.first << "," << p.second << "";
	return o;
}
int main() {
	typedef map<int, double, less<int>>mmid;
	mmid pairs;
	cout << "1(" << pairs.count(15) << endl;
	pairs.insert(mmid::value_type(20, 9.3));
	mmid::iterator i;
	cout << "3(";
	for (i = pairs.begin(); i != pairs.end(); ++i)
		cout << *i << ",";
	cout << endl;
	cout << "4(";
	int n = pairs[40];
	for (i = pairs.begin(); i != pairs.end(); ++i)
		cout << *i << ",";
	cout << endl;
	cout << "5(";
	pairs[15] = 6.28;//�ѹؼ���Ϊ15��Ԫ�ص�ֵ��Ϊ6.28
	for (i = pairs.begin(); i != pairs.end(); i++)
		cout << *i << ",";
	return 0;

}*/


