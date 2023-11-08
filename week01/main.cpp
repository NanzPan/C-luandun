// #include<iostream>

// int main() {
//     std::cout << "Hello World!" << std::endl;
//     getchar();
//     return 0;
// }

// // 1、宏常量
// #include <iostream>
// #define day 7
// using namespace std;
// int main() {
//     std::cout << "一周里总共有 " << day << " 天" << std::endl;
//     // day = 8;  //报错，宏常量不可以修改

//     // 2、const修饰变量
//     const int month = 12;
//     std::cout << "一年里总共有 " << month << " 个月份" << std::endl;
//      //month = 24; //报错，常量是不可以修改的

//     system("pause");

//     return 0;
// }

// pg2
// sizeof

// #include <iostream>
// using namespace std;
// int main(){

// cout << sizeof(int) << endl;
// cout << sizeof(long) << endl;
// cout << sizeof(long long) << endl;
// cout << sizeof(short) << endl;

// }

// #include <iostream>
// using namespace std;
// int main() {
//     float d1 = 3.14f;
//     double d2 = 3.14;

//     cout << d1 << endl;
//     cout << d2 << endl;

//     cout << sizeof(d1) << endl;
//     cout << sizeof(d2) << endl;

//     // science calculator

//     cout << "f2 = " << 6e2;
//     cout << "f3 = " << 6e-2;

//     cin.get();

//     return 0;
// }

// // pg3
// #include <iostream>
// using namespace std;
// int main() {
//     char ch = 'a';
//     cout << ch << endl;
//     cout << int(ch) << endl;

//     int ah = 36;
//     cout << char(ah) << endl;

//     cin.get();
//     return 0;
// }

// pg4
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "hel\nlo" << endl;
//     cout << "\thello" << endl;
//     cout << "\\" << endl; //wtf?
// //see
//     int a = 92;
//     cout << char(a) << endl; //this's it!

//     }

// pg5
//  #include <iostream>
//  using namespace std;
//  int main(){
//      string str1 = "hello world";
//      cout << str1 << endl;

//     char str2[] = "hello c++";
//     cout << str2 << endl;

//     cin.get();
// }

// pg6
// #include <iostream>
// using namespace std;
// int main()

// {
//     int a = 0;
//     cout << "please enter an int variable :" << endl;
//     cin >> a;
//     cout << a << endl;

//     cin.ignore();  // 忽略换行符,从而清除输入缓冲区，可以避免潜在的输入问题

//     string b;
//     cout << "please enter an string variable : " << endl;
//     getline(cin, b);
//     cout << b << endl;

//     bool c = false;
//     cout << "please enter an bool variable :" << endl;
//     cin >> c;
//     cout << c << endl;
//     return EXIT_SUCCESS;
// }

// pg7
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int a = 10,b = 3;
//      cout << a/b << endl;
//      cout << a%b << endl;
//      b = 4;
//      cout << a/b << endl;
//      cout << a%b << endl;
//      float c = 3.164f,d = 2.235f;
//      cout << c/d << endl;

//     cin.get();
//     cin.ignore();

// }
//
// #include <iostream>
// using namespace std;
// int main(){

// 	int a2 = 10;
// 	int b2 = ++a2 * 10;
// 	cout << b2 << endl;

// 	//后置递增先计算表达式，后对变量进行++
// 	int a3 = 10;
// 	int b3 = a3++ * 10;
// 	cout << b3 << endl;

// 	cin.get();

// 	return EXIT_SUCCESS;
// }

// pg8与非异或门
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int a,b = 10;
//      cout << (a && b) << endl;
//      a+=2;
//      cout << (a && b) << endl;
//      cout << (a || b) << endl;

//     cin.get();
//     return EXIT_SUCCESS;

// }

// pg9if循环
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 0;
//     cout << "请输入您的分数：" << endl;
//     cin >> a;

//     if (a > 660) {
//         cout << "我可以报考哈工大了！！" << endl;

//     }

//     else if (0 < a && a < 660) {
//         cout << "这个大学还可以上" << endl;

//     } else if (a < 0) {
//         cout << "请输入正确的分数" << endl;

//     } else {
//         cout << "请输入数字！" << endl;
//     }

//     cin.get();
//     return EXIT_SUCCESS;
// }

// pg10
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c = 0;
//     cout << "TheWeightOf PigA:" << endl;
//     cin >> a;
//     cout << "TheWeightOf PigB:" << endl;
//     cin >> b;
//     cout << "TheWeightOf PigC:" << endl;
//     cin >> c;

//     if (a > b && a > c) {
//         cout << "PigA is heavy" << endl;

//     }
//     else if(b > c) {
//         cout << "PigB is heavy" << endl;

//     }
//     else{
//         cout << "PigC is heavy" << endl;
//     }
//     cin.get();
//     return EXIT_SUCCESS;
// }
// pg11猜数字
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     int a = 0;
//     cout << "猜数字\n请输入一个数字：" << endl;
//     srand((unsigned int)time(NULL));
//     int num = rand() % 100 + 1;//%
//     x(100)：这是对rand()函数生成的随机数取模操作。取模操作会将生成的随机数限制在0到x-1(99)之间。
//     while(1)
//     {
//         cin >> a;
//         if (a > num) {
//             cout << "所猜数字过大，尝试小一点！" << endl;

//         } else if (a < num) {
//             /* code */
//             cout << "所猜数字过小，尝试大一点！" << endl;
//         } else {
//             cout << "猜对了！！" << endl;
//             break;
//         }
//     }
//     cin.get();
//     return EXIT_SUCCESS;
// }

// pg12
// #include <cmath>
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 100,result, unit, ten, hundred;
//     do
//     {
//         unit = num % 10;
//         ten = (num / 10) % 10;
//         hundred = num / 100;
//         result = (pow(unit, 3) + pow(ten, 3) + pow(hundred, 3));
//         if (num == result) {
//             cout << result << endl;
//         }
//         num++;

//     } while (num <1000);

//     return EXIT_SUCCESS;
// }
// //pg13
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     for (int i = 1; i < 101;i++) {
//         if (i % 10 == 7 || i / 10 == 7|| i % 7 == 0) {
//             cout << "桥桌子" << endl;
//         }
//     else
//     {
//             cout << i << endl;
//         }
//     }
//     return EXIT_SUCCESS;
// }
// pg14
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i < 101; i++ )
//     {
//        for (int j = 1; j < 10; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//     }
//     return EXIT_SUCCESS;
// }
// pg15
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i < 10;i++) {
//         for (int j = 1; j <= i; j++) {
//             int a = i * j;
//             cout << i <<" * "<< j << "=" << a << "  ";
//             if (j == i) {
//                 cout << endl;
//             }
//         }
//     }
//     return EXIT_SUCCESS;
// }
// pg16
// #include <iostream>
// using namespace std;
// int main() {
// 	//在嵌套循环语句中使用break，退出内层循环
// 	for (int i = 0; i < 10; i++)
// 	{
// 		for (int j = 0; j < 10; j++)
// 		{
// 			if (j == 5)
// 			{
// 				break;
// 			}
// 			cout << "*" << " ";
// 		}
// 		cout << endl;
// 	}

// 	system("pause");

// 	return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
// 	//2、在循环语句中用break
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i == 5)
// 		{
// 			break; //跳出循环语句
// 		}
// 		cout << i << endl;
// 	}

// 	system("pause");

// 	return 0;
// }

// int main() {

// 	for (int i = 0; i < 100; i++)
// 	{
// 		if (i % 2 == 0)
// 		{
// 			continue;
// 		}
// 		cout << i << endl;
// 	}

// 	system("pause");

// 	return 0;
// }
// pg17
// #include <iostream>
// using namespace std;

// int main() {

// 	//数组名用途
// 	//1、可以获取整个数组占用内存空间大小
// 	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

// 	cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
// 	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
// 	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

// 	//2、可以通过数组名获取到数组首地址
// 	cout << "数组首地址为： " << arr << endl;
// //数组首地址即为数组中第一个元素地址 	cout << "数组中第一个元素地址为： "
// << &arr[0] << endl; 	cout << "数组中第二个元素地址为： " << &arr[1] << endl;

// 	//arr = 100; 错误，数组名是常量，因此不可以赋值

//     cin.get();

//     return 0;
// }

// pg18
//  #include <iostream>
//  using namespace std;
//  int main() {
//      int arr[5] = {600, 320, 630, 440, 250};
//      int max = arr[0];
//      int sz = sizeof(arr) / sizeof(arr[0]);
//      for (int i = 0; i < sz; i++) {
//          if (arr[i] >max ) {
//              max = arr[i];
//          }

//     }
//      cout << max << endl;

//     return EXIT_SUCCESS;
// }
// pg19数组倒置
// #include <iostream>
// #include <ctime>
// using namespace std;
// int main() {
//     int a[7] = {1, 5, 6, 8, 9, 4, 7};
//     int b[7];
//     for (int i = 0; i < 7; i++)
//     {
//         b[6-i] = a[i];
//     }
//     for (int i = 0; i < 7; i++) {
//         cout << b[i]<< endl;
//      }
//      return EXIT_SUCCESS;
// }
// pg19
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     int a[7] = {1, 5, 6, 8, 9, 4, 7};
//     int c[7];
//     for (int i = 0; i < 7; i++)
//     {
//         c[6-i] = a[i];
//     }
//     for (int i = 0; i < 7; i++) {
//         cout << c[i]<< endl;
//      }
//      return EXIT_SUCCESS;
// }
// pg20
// #include <ctime>
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[13] = {
//         4, 989, 4, 8356, 4, 878, 451, 25, 56, 8, 879, 745, 654,
//     };
//     for (int i = 0; i < 13 - 1; i++) {
//         for (int j = 0; j < 13 - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 13; i++) {
//         cout << arr[i] << endl;
//     }

//     return EXIT_SUCCESS;
// }

// pg21
// #include <ctime>
// #include <iostream>
// using namespace std;
// int main() {
//     //二维数组数组名
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     cout << "二维数组大小： " << sizeof(arr) << endl;
//     cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
//     cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;

//     cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
//     cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

//     //地址
//     cout << "二维数组首地址：" << arr << endl;
//     cout << "二维数组第一行地址：" << arr[0] << endl;
//     cout << "二维数组第二行地址：" << arr[1] << endl;

//     cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
//     cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;

//     system("pause");

//     return 0;
// }pg22
// #include <iostream>
// #include <ctime>
// using namespace std;
// int main(){
//     int score[3][3] = {
//         {100, 100, 100},
//         {90, 50, 100},
//         {60, 70, 80},
//     };
//     string names[3] = {"zhangsan", "lisi", "wangwu"};
//     for (int i = 0; i < 3; i++) {
//         int totalscore = 0;
//         for (int j = 0; j < 3; j++) {
//             totalscore += score[i][j];
//         };
//         cout << names[i] << "总分为:" << totalscore << endl;
//     }
//     cin.get();
//     return EXIT_SUCCESS;
// };
// pg23
// #include <iostream>
// using namespace std;
// void swap(int num1, int num2)
// {
// 	cout << "交换前：" << endl;
// 	cout << "num1 = " << num1 << endl;
// 	cout << "num2 = " << num2 << endl;

// 	int temp = num1;
// 	num1 = num2;
// 	num2 = temp;

// 	cout << "交换后：" << endl;
// 	cout << "num1 = " << num1 << endl;
// 	cout << "num2 = " << num2 << endl;

// 	//return ; 当函数声明时候，不需要返回值，可以不写return
// }

// int main() {

// 	int a = 10;
// 	int b = 20;

// 	swap(a, b);

// 	cout << "mian中的 a = " << a << endl;
// 	cout << "mian中的 b = " << b << endl;

// 	system("pause");

// 	return 0;
// }
// pg24
// 声明可以多次，定义只能一次
// 声明
// #include <iostream>
// using namespace std;
// int max(int a, int b);
// int max(int a, int b);
// //定义
// int max(int a, int b)
// {
// 	return a > b ? a : b;
// }

// int main() {

// 	int a = 100;
// 	int b = 200;

// 	cout << max(a, b) << endl;

// 	system("pause");

// 	return 0;
// }
// main函数文件,创建temp.cpp(定义函数),ownplayed31.h(7.31.声明函数)
// #include "ownplayed31.h"
// int main() {

// 	int a = 100;
// 	int b = 200;
// 	swap(a, b);

// 	return 0;
// }

// pg25空指针
// #include "ownplayed31.h"
// int main() {
//     int *p = NULL;
//     cout << *p << endl;
//     return EXIT_SUCCESS;
// }
// pg26指针常量与常量指针
// #include "ownplayed31.h"
// int main() {

// 	int a = 10;
// 	int b = 10;

// 	//const修饰的是指针，指针指向可以改，指针指向的值不可以更改
// 	const int * p1 = &a;
// 	p1 = &b; //正确
// 	//*p1 = 100;  报错

// 	//const修饰的是常量，指针指向不可以改，指针指向的值可以更改
// 	int * const p2 = &a;
// 	//p2 = &b; //错误
// 	*p2 = 100; //正确

//     //const既修饰指针又修饰常量
// 	const int * const p3 = &a;
// 	//p3 = &b; //错误
// 	//*p3 = 100; //错误

// 	system("pause");

// 	return 0;
// }
// pg27指针访问数组
// #include "ownplayed31.h"
// int main() { int arr[] ={1,6,5,8,4,574,4,6,4,654,1,564,61,3,568};
//     int *a = arr;
//     cout <<"首元素："<< arr[0]<< endl;
//     cout << "指针访问的首元素：" << *a << endl;
//     for (int i = 0; i < 15; i++) {
//         cout << *a << " ";
//         a++;
//         //指针p向后偏移一个元素,p++实际上就是使指针的值+1,以移动到下一个存储单元:
//     }
//     return EXIT_SUCCESS;
// }
// pg28
// #include "ownplayed31.h"
// int main() {
//     int a = 20;
//     int b = 10;
//     swap1(a, b);  //值传递不能改变实参
//     cout << a << endl;
//     cout << b << endl;

//     swap2(&a, &b);  //地址传递可以改变实参
//     cout << a << endl;
//     cout << b << endl;

//     return EXIT_SUCCESS;
// }

// pg29封装冒泡排序并指针升序数组元素
// #include "ownplayed31.h"
// int main() {
//     int arr3[15] = {177, 287, 3,  47,  51,  68, 95, 64,
//                     564, 641, 24, 561, 231, 54, 234};
//     arr1(arr3, 15);
//     printarr(
//         arr3,
//         15);  //总结：当数组名传入到函数作为参数时，被退化为指向首元素的指针
// }
// pg30
// #include "ownplayed31.h"
// struct stu {
//     string name;
//     long long num;
//     int score;
// };

// int main() {
//     stu stu1 = {"pzn", 2021463010798, 660};
//     stu *p = &stu1;
//     cout << "原来score：" << stu1.score << endl;
//     p->score = 665;
//     cout << "改变后的score：" << stu1.score << endl;
//     //通过->可以修改结构体的成员，也可以访问

//     cout << "姓名:" << p->name << endl
//          << "学号:" << p->num << endl
//          << "分数：" << p->score;

//     return EXIT_SUCCESS;
// }
// pg31
// #include "ownplayed31.h"
// struct teacher{
//     string t_name;
//     int t_num;
//     int teacher_exp;
//     struct students stu;
// };
// struct students {
//     string name;
//     int st_num;
//     int score;
// };
// int main() {
//     teacher t1;
//     t1.t_name = "wangwu";
//     t1.t_num = 2021465;
//     t1.teacher_exp = 15;

//     t1.stu.name = "pzi";
//     t1.stu.st_num = 2022468;
//     t1.stu.score = 99;

// };
// pg32,看
// #include "ownplayed31.h"
// struct students {
//     string studentsname;
//     int score;
// };
// struct teachers {
//     string teachersname;
//     students students_arr[7];
// };
// int main() {
//     srand((unsigned int)time(NULL));
//     teachers teachersarr[5];
//     int len = sizeof(teachersarr) / sizeof(teachers);
//     function1(teachersarr, len);
//     PrintfInfo(teachersarr, len);

//     return EXIT_SUCCESS;
// }
// pg33
/* #include "ownplayed31.h"
struct Hero {
    string name;
    int age;
    string gender;
};
void Bubblearr(Hero *heroarr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (heroarr[j]->age > heroarr[j + 1]->age) {
                Hero *temp = heroarr
                    [j];
//在进行指针的交换时，我们只需交换指针本身而不需要改变指针指向的对象，
                          //因为这样就能够实现对结构体指针数组的排序，而不会影响结构体对象本身。
                heroarr[j] = heroarr[j + 1];
                heroarr[j + 1] = temp;
            }
        }
    }
}
void HeroPrint(Hero *heroarr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "name:" << heroarr[i]->name << "  gender:" << heroarr[i]->gender
             << "  age:" << heroarr[i]->age << endl;

    }  //结构体指针指向操作符
}

int main() {
    Hero heroarr[5] = {
        {"刘备", 23, "男"}, {"关羽", 22, "男"}, {"张飞", 20, "男"},
        {"赵云", 21, "男"}, {"貂蝉", 19, "女"},
    };

    int len = sizeof(heroarr) / sizeof(Hero);
    Hero *heroPionterarr[5];  //创建一个结构体指针数组 Hero* heroPtrArr[5];
                              //并将每个元素指向对应的 heroarr 中的结构体对象
    for (int i = 0; i < 5; i++) {
        heroPionterarr[i] = &heroarr[i];
    }
    Bubblearr(heroPionterarr, len);
    HeroPrint(heroPionterarr, len);

    return EXIT_SUCCESS;
}
 */
/* #include "ownplayed31.h"
using namespace std;
int* func() {
    int* a = new int(10);
    return a;
}

int main() {
    int* p = func();

    cout << *p << endl;
    cout << *p << endl;

    system("pause");

    return 0;
} */

/* #include <iostream>

#include "string.h"
#define MAX 1000
using namespace std;

// 菜单界面
void showmenu() {
    cout << "1,添加联系人" << endl;
    cout << "2,显示联系人" << endl;
    cout << "3,删除联系人" << endl;
    cout << "4,查找联系人" << endl;
    cout << "5,修改联系人" << endl;
    cout << "6,清空联系人" << endl;
    cout << "0,退出通信录" << endl;
};
struct Person {
    string r_name;
    int r_gender;
    int r_age;
    string r_phone_num;
};
struct Addressbook {
    // 最大人数是1000
    struct Person personArray[MAX];
    int r_size;
};
// 添加联系人
void addPerson(Addressbook* abs) {
    // 判断通信录是否满人
    if (abs->r_size == MAX) {
        cout << "满人了" << endl;
        return;
    } else {
        string name;
        cout << "qing shu ru xing ming " << endl;
        cin >> name;
        abs->personArray[abs->r_size].r_name = name;
    }
};

int main() {
    // 创建通信录结构体变量
    Addressbook abs;
    abs.r_size = 0;
    int select = 0;
    while (true) {
        showmenu();
        cin >> select;
        switch (select) {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "欢迎下场使用" << endl;
                return 0;
                break;
            default:
                break;
        }
    }
    system("pause");
} */

/* 
    @pg 引用
    **作用： **给变量起别名
    **语法：** `数据类型 &别名 = 原名`
 */
/* #include "iostream"

int main()
{
    int a = 10;
    int &b = a;

    std::cout <<"a = "<< a << std::endl;
    std::cout <<"b = "<< b << std::endl;

    b = 100;

    std::cout <<"a = "<< a << std::endl;
    std::cout <<"b = "<< b << std::endl;

    system("pause");

    return 0;
} */

/* //引用 函数引用
#include "iostream"

// 引用交换数字
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    //交换数字
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
        std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    return 0;
} */

/* //引用 引用做函数返回值
#include "iostream"
//加了一个 & 相当于用引用的方式进行返回 a
int& test01()
{
    //int a = 10;
    static int a = 10;
    return a;
}
int main()
{
    // 给a起别名，右边值就是 返回值a
    int &ref = test01();
    std::cout << ref << std::endl;    
    std::cout << ref << std::endl;    
} */