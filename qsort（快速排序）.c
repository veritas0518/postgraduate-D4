#include<stdio.h>
#include<stdlib.h>//这是qsort函数的头文件
#include<string.h>//这是strcmp函数的头文件
typedef struct stu {
	char name[20];
	int age;
}stu;
void Bubble_sort(int arr[], int sz) {
	int i;
	for (i = 0; i < sz - 1; i++) {
		int temp = 0;
		int j;
		for (j = 0; j < sz - 1 - i; j++);
		if (arr[j] > arr[j + 1])
			temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
	}

}
void cmp_int(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
void test1() {                                  //用qsort函数排列整形数组
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}


int cmp_float(const void* e1, const void* e2) {
	return ((int)(*(float*)e1-*(float*)e2));
}
void test2() {
	float f[] = { 9.0 , 8.0 , 7.0 , 6.0 , 5.0 , 4.0 , 3.0 , 2.0 , 1.0 };
	int sz2 = sizeof(f) / sizeof(f[0]);
	qsort(f, sz2, sizeof(f[0]), cmp_float);
	int j;
	for (j = 0; j < sz2; j++) {
		printf("%f ", f[j]);
	}
}


int cmp_stu_by_age(const void* e1, const void* e2) {
	return ((stu*)e1)->age - ((stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2) {
	//比较名字就是比较字符串
	//字符串比较不能直接用 > = < 比较，应该用 strcmp 函数
	return strcmp( ( (stu*)e1) ->name, ( (stu*)e2) ->name );
}
void test3() {
	 stu s[3]={
		{"张三",20},
		{"李四",30},
		{"王五",10}
	};
	 int sz3 = sizeof(s) / sizeof(s[0]);
	 qsort(s, sz3,sizeof(s[0]), cmp_stu_by_age);
	 qsort(s, sz3, sizeof(s[0]), cmp_stu_by_name);

	 int i;
	 for (i = 0; i < sz3; i++) {
		 printf("%d ", s->age);
		
		 printf("%s \n", s->name);  //打印有误
	 }
}


int main() {


	int a = 10;
	void* p = &a;  //void* 类型的指针可以接受任意类型的地址！！
				   //void* 类型的指针不能进行解引用操作
				   //void* 类型的指针不能进行+ -整数的操作
	//test1();
	//test2();
	test3();
return 0;
}