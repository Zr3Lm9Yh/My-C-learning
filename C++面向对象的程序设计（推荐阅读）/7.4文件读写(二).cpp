/*
�����ƶ��ļ�

ifstream��fstream�ĳ�Ա����:

istream& read(char* s,long n)
���ļ���ָ��ָ��ĵط���n���ֽڵ����ݣ������ڴ��ַs��Ȼ���ļ���ָ������ƶ�n���ֽ�
(��ios::in��ʽ���ļ�ʱ���ļ���ָ�뿪ʼָ���ļ���ͷ)

*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream fout("some.dat", ios::out | ios::binary);//����һ���ļ��������Զ����Ƶķ�ʽд���ļ�
	int x = 120;
	fout.write((const char *)(&x), sizeof(int));  //����read�ĵ�һ��������const char* Ҫ��ǿ������ת��
	fout.close();
	ifstream fin("some.dat", ios::in | ios::binary);//���ļ�������ݶ��������Ҹ�ֵ��y
	int y;
	fin.read((char *)&y, sizeof(int));
	fin.close();
	cout << y << endl;
	return 0;

}*/
/*
�Ӽ������뼸��ѧ���������ĳɼ������Զ������ļ���ʽ����
*/
/*#include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	ofstream OutFile("c:\\tmp\\st.dat", ios::out | ios::binary);
	while (cin >> s.name >> s.score)
		OutFile.write((char *)&s, sizeof(s));
	OutFile.close();
	return 0;

}//������� ctrl z+�س�������
*/
//���ļ�student.dat�ļ������ݶ�����������ʾ
/*#include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	ifstream inFile("c:\\tmp\\st.dat", ios::in | ios::binary); //�Զ����Ƶķ�ʽ���ļ�
	if (!inFile) {
		cout << "error" << endl;
		return 0;
	}
	while (inFile.read((char*)&s, sizeof(s))) {  //ÿ������ÿ��������ô��ȡ��
		int readedBytes = inFile.gcount(); //�����ղŶ��˶����ֽ�
		cout << s.name << "" << s.score << endl;
	}
	inFile.close();
	return 0;

}*/
//�������ļ���д
//��students.dat�ļ���Jane�����ָ�д��Mike
/* #include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	fstream iofile("c:\\tmp\\st.dat", ios::in | ios::out | ios::binary);
	if (!iofile) {
		cout << "�ļ���ȡʧ��";
		return 0;
	}
	iofile.seekp(2 * sizeof(s), ios::beg); //��λдָ�뵽��������¼
	iofile.write("Mike", strlen("Mike") + 1); 
	iofile.seekg(0, ios::beg);//��λ��ָ�뵽��ͷ
	while (iofile.read((char *)&s, sizeof(s)))
		cout << s.name << "" << s.score << endl;
	iofile.close();
	return 0;


}*/

//�����ǲ��ҷ�ʽ������£����Ǵ洢�ļ�������£��ö������ļ�Ҫ���÷���

//�ļ���������mycopyʾ��
/*
�÷�ʾ����mycopy src.dat dest.dat����ǰһ����������һ���ļ��У���һ��
����о�Ҫ������
*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc != 3) {
		cout << "File name missing" << endl;
		return 0;
	}
	ifstream inFile (argv[1], ios::binary | ios::in);//���ļ����ڶ�
	if (!inFile) {
		cout << "source file open error" << endl;
		return 0;
	}
	ofstream outFile(argv[2], ios::binary | ios::out);//���ļ�����д
	if (!outFile) {
		cout << "New file open error" << endl;
		inFile.close();
		return 0;
	}
	char c;
	while (inFile.get(c))//ÿ�ζ�ȡһ���ַ�
		outFile.put(c);
	outFile.close();
	inFile.close();
	return 0;



}
*/
//�������ļ����ı��ļ�������
//��סҪ��ios::binary




