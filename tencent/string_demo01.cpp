//可以将String对象赋值给另一个String对象(=)
//可以用加号将两个String对象合并起来
//strObj.size()可以获得字符串对象的长度
//C语言风格strcpy,strcat,strlen,strcmp 
#include <bits/stdc++.h>

using namespace std;

int main(){
	char charr1[20];
	char charr2[20] = "jachin";
	string str1;
	string str2 = "panther";
	
	str1 = str2;//copy str2 to str1
	cout << (&str1 == &str2) << endl;
	strcpy(charr1, charr2);//copy charr2 to charr1
	str1 += "paste";//add paste to end str1;
	strcat(charr1, "jack");//add jack to end to of charr1
	
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << "the string " << str1 << " contains " << len1 << " characters " << endl;
	cout << "the string " << charr1 << " contains " << len2 << " characters " << endl;
	
	return 0;
}
