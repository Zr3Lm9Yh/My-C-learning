/*
1.���峣��
const int MAX_VAL=23��
const double Pi=3.14;
const char*SCHOOL_NAME="PKU";
����define������const

2.���峣��ָ��
������ͨ������ָ���޸���ָ�������
int n,m;
const int*p=&n;
*p=5;//�������
n=4;//ok
p=&m;//ok ����ָ���ָ����Ա˱仯

���ܰѳ���ָ�븳ֵ���ǳ���ָ��
const int*p1;int *p2;
p1=p2; //ok
p2=p1; //error
p2=(int *)p1;//ok,ǿ������ת��

��������������Ϊ����ָ���ʱ�򣨳������øı䣩�ɱ��⺯���ڲ���С�ĸı����ָ����
ָ�ط�������
void MyPrintf(const char *p)
{  
   strcpy(p,"this");//���뱨����ͼ�޸Ĳ���ָ�� strcpy�ĵ�һ��������char*,���Գ���
   printf("%s",p) //ok

   3.���Զ��峣���ã������������
}
*/