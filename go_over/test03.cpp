//
// Created by Administrator on 2019/11/4.
//

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
//int main()
//{
//    cout<<setiosflags(ios::left|ios::showpoint);  // 设左对齐，以一般实数方式显示
//    cout.precision(5);       // 设置除小数点外有五位有效数字
//    cout<<123.456789<<endl;
//    cout.width(10);          // 设置显示域宽10
//    cout.fill('*');          // 在显示区域空白处用*填充
//    cout<<resetiosflags(ios::left);  // 清除状态左对齐
//    cout<<setiosflags(ios::right);   // 设置右对齐
//    cout<<123.456789<<endl;
//    cout<<setiosflags(ios::left|ios::fixed);    // 设左对齐，以固定小数位显示
//    cout.precision(3);    // 设置实数显示三位小数
//    cout<<999.123456<<endl;
//    cout<<resetiosflags(ios::left|ios::fixed);  //清除状态左对齐和定点格式
//    cout<<setiosflags(ios::left|ios::scientific);    //设置左对齐，以科学技术法显示
//    cout.precision(3);   //设置保留三位小数
//    cout<<123.45678<<endl;
//    return 0;
//}

/**
*   日期和时间的操作
*/
int main()
{
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    cout << "1970 have pass s:" << now << endl;

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << "year: "<< 1900 + ltm->tm_year << endl;
    cout << "month: "<< 1 + ltm->tm_mon<< endl;
    cout << "date: "<<  ltm->tm_mday << endl;
    cout << "time: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}