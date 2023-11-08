// swap.h文件
#include <ctime>
#include <iostream>

// 实现两个数字交换的函数声明
void swap1(int a, int b);
// 实现两个地址交换的函数声明
void swap2(int *a, int *b);
// pg29中的利用冒泡排序实现对整型数组的升序排序的封装函数
void arr1(int *arr, int c);
void printarr(int arr[], int c);
// pg32
struct students;
struct teachers;
void function1(teachers teachersarr[], int len);
void PrintfInfo(teachers teachersarr[], int len);
