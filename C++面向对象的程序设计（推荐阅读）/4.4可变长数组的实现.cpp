/*
Ҫ��д�ɱ䳤���������飬ʹ֮��������ʹ��
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CArray {
	int size;//����Ԫ�صĸ���
	int *ptr;//ָ��̬���������
public:
	CArray(int s = 0);//��ͨ���캯����s��������Ԫ�صĸ���
	CArray(CArray &a);//���ƹ��캯��
	~CArray();
	void push_back(int v);//����������β�����һ��Ԫ��v
	CArray&operator=(const CArray&a);//�����������ĸ�ֵ��������Ĳ���
	int length() { return size; }//���������Ԫ�ظ���
	int &CArray::operator[](int i) {
		return ptr[i];
	}

};
CArray::CArray(int s) :size(s) {
	if (s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}
CArray::CArray(CArray &a) {
	if (!a.ptr) {
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int)*a.size);
	size = a.size;
}
CArray::~CArray() {
	if (ptr)delete[]ptr;
}
CArray &CArray::operator=(const CArray &a) {
	//��ֵ�ŵ�������ʹ=��߶������ŵ����飬��С�����ݶ����ұߵĶ���һ��
	if (ptr == a.ptr) //��ֹa=a�����ĸ�ֵ���³���
		return *this;
	if (a.ptr == NULL) {
		if (ptr)delete[]ptr;
		ptr = NULL;
		size = 0;
		return *this;
	}
}
void CArray::push_back(int v) {//����������һ��Ԫ��
	if (ptr) {
		int *tmpPtr = new int[size + 1];
		memcpy(tmpPtr, ptr, sizeof(int)*size);
		delete[]ptr;
		ptr = tmpPtr;
	}
	else
		ptr = new int[1];
	ptr[size++] = v;

}

int main() {
	CArray a;                       //Ҫ�ö�̬������ڴ����������Ԫ�أ���Ҫ
                                         //һ��ָ���Ա����
	for (int i = 0; i < 5; ++i)
		a.push_back(i);
	CArray a2, a3;
	a2 = a;
	for (int i = 0; i < a.length(); ++i)
		cout << a2[i] << "";
	a2 = a3;
	for (int i = 0; i < a2.length(); ++i)
		cout << a2[i] << "";
	cout << endl;
	a[3] = 100;
	CArray a4(a);
	for (int i = 0; i < a4.length(); ++i)
		cout << a4[i] << "";
		return 0;

}*/