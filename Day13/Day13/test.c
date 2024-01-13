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
//	struct B sb;//结构体成员变量也是结构体
//};
//
struct Stu {
	char name[20];
	int age;
	char sex[5];
	char id[20];
}s1,s2;//分号不能丢,s1、s2是结构体变量，是全局变量
////int main() {
////	//s是局部变量
	struct Stu s ={"张三",30,"男","20191112537"};//创建对象
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
//}n1 = { 10,{4,5},NULL };//结构体嵌套初始化

//int main() {
//	//struct Node n2 = { 20,{5,6},NULL };
//	
//
//	//.    ->
//	printf("%s\n", s.id);//.
//	struct Stu* ps = &s;
//	printf("%s\n", ps->id);//->ps是结构体指针
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
	//s是局部变量
	    struct Stu s = { "张三",30,"男","20191112537" };//创建对象
	//写一个函数打印s的内容
	    print1(s);//传值调用
	    print2(&s);//传值调用

	    return 0;
}