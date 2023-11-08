/* 
#include "ownplayed31.h"

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
    cout << "a = " << &a << endl;
	cout << "b = " << &b << endl;
}
void swap2(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a = " << &a << endl;
	cout << "b = " << &b << endl;
    cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
   
}
void arr1(int *arr,int c)//c为数组元素个数
{
    for (int i = 0; i < c -1; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] >arr[j+1] )
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printarr(int arr[],int c)//c为数组元素个数
{   for (int i = 0; i < c; i++)
{
        cout << arr[i] << endl;
    }
}
//pg32
struct students {
    string studentsname;
    int score;
};
struct teachers {
    string teachersname;
    students students_arr[7];
};
void function1(teachers teachersarr[], int len) {
    for (int i = 0; i < len; i++) {
        string AllName = "ABCDEFG";
        teachersarr[i].teachersname = AllName[i];
        for (int j = 0; j < 7; j++) {
            teachersarr[i].students_arr[j].studentsname = AllName[j];
            teachersarr[i].students_arr[j].score = rand() % 51 + 50;
        }
    }
}
void PrintfInfo(teachers teachersarr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "教师" << teachersarr[i].teachersname << endl;
        for (int j = 0; j < 7; j++) {
            cout << "\t姓名：" << teachersarr[i].students_arr[j].studentsname
                 << "成绩：" << teachersarr[i].students_arr[j].score << endl;
        }
    }
} */