/*
�����ļ�
#include<fstream>  //����ͷ�ļ�

ofstream outFile("clients.dat",ios::out|ios::binary); //�����ļ�

-clients.dat Ҫ�������ļ�������
-ios::out    �ļ��Ĵ򿪷�ʽ
  ios:out ������ļ���ɾ��ԭ���ļ�����
  ios::app  ������ļ�������ԭ�����ݣ�������β�����
- ios::binary �Զ������ļ���ʽ���ļ�

�����ļ� Ҳ�����ȴ���ofstream��������open������
ofstream fout;
fout.open("test.out",ios::out|ios::binary);

�ж��Ƿ�򿪳ɹ�
if(!fout){
     cout<<"file open error!"<<endl;
}
�ļ������Ը�������·��Ҳ���Ը������·������û�н���·����Ϣ��ʱ�򣬾����ڵ�ǰ�ļ��´���
*/

/*
�ļ����ľ���·�������·��

����·��:
"c:\\tmp\\mydir\\some.txt"
���·��
"\\tmp\\mydir\\some.txt" //��ǰ�̷��ĸ�Ŀ¼�µ�tmp\dir\some.txt

*/

/*
�ļ��Ķ�дָ��

�������� �ļ���һ����ָ��
��������ļ���һ��дָ��
������������ļ�����һ����дָ��
��ʶ�ļ������ĵ�ǰλ�ã���ָ�������
��д�����ͽ��е�����

�ļ���дָ��
ofstream fout("a1.out",ios::app); //����ӷ�ʽ��
long location=fout.tellp();       //ȡ��дָ��
locatio=10;              
fout.seekp(location);             //��дָ���ƶ���10���ֽڴ�
fout.seekp(location,ios::beg);    //��ͷ��location
fout.seekp(location,ios::cur);    //�ӵ�ǰλ����location
fout.seekp(location,ios::end);    //��β����location

�ļ��Ķ�ָ��
ifstream fin("a1.in",ios::ate);  //���ļ�����λ�ļ�ָ�뵽�ļ�β
long location =fin.tellg();      //ȡ�ö�ָ���λ��
location=10L;
fin.seekg(location);    //����ָ���ƶ�����10���ֽڴ�
fin.seekg(location,ios::beg); //��ͷ��location
fin.seekg(location,ios::cur); //�ӵ�ǰλ����
fin.seekg(location,ios::end);//��β����location

location�����Ǹ���
*/

/*
�ַ��ļ���д

��Ϊ�ļ���Ҳ�������������ĳ�Ա����������������Ҳͬ��
�������ļ���
*/

/*
дһ�����򣬽��ļ�in.txt�������������������out.txt
���� ��in.txt������Ϊ
1 234 45 6 879
��ִ�б���������ɵ�out.txt������Ϊ
1 6 9 45 234 879
*/
/*
����cout��ostream�Ķ���ofsteam��osteam��������
���Կ��������� destFile<<v[i]<<"";
*/
/*#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v;
	ifstream srcFile("in.txt", ios::in);         //���ļ����ж�
	ofstream destFile("out.txt", ios::out);      //���ļ�����д
	int x;
	while (srcFile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		destFile << v[i] << "";
	destFile.close();
	destFile.close();
	return 0;


}*/




