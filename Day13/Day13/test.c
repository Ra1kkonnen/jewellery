#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//struct B {
//	char c;
//	short s;
//	double d;
//};
//struct C {
//	struct B sb;//�ṹ���Ա����Ҳ�ǽṹ��
//};
//
struct Stu {
	char name[20];
	int age;
	char sex[5];
	char id[20];
}s1,s2;//�ֺŲ��ܶ�,s1��s2�ǽṹ���������ȫ�ֱ���
////int main() {
////	//s�Ǿֲ�����
	struct Stu s ={"����",30,"��","20191112537"};//��������
////
//	return 0;
//}


//struct Point {
//	int x;
//	int y;
//}p1;
//
//struct Node {
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL };//�ṹ��Ƕ�׳�ʼ��

//int main() {
//	//struct Node n2 = { 20,{5,6},NULL };
//	
//
//	//.    ->
//	printf("%s\n", s.id);//.
//	struct Stu* ps = &s;
//	printf("%s\n", ps->id);//->ps�ǽṹ��ָ��
//
//
//
//	return 0;
//}


	void print1(struct Stu t) {
		printf("%s %d %s %s",t.name,t.age,t.sex,t.id);
}
	void print2(struct Stu* ps) {
		printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->id);

	}
    int main() {
	//s�Ǿֲ�����
	    struct Stu s = { "����",30,"��","20191112537" };//��������
	//дһ��������ӡs������
	    print1(s);//��ֵ����
	    print2(&s);//��ֵ����

	    return 0;
}