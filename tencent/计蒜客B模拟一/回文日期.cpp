/**
 * 2020 �� 0202 �� 0202 ����һ���ر������,
 * ��Ϊ 2020020220200202 ��һ����������
 * ͬ��,20202020 �� 0202 �� 2020 �� 0202 ʱ 0202 �ֺ� 20202020 �� 0202 �� 2222
 * ʵ����,������ʱ�̲����ټ������ܹ������ 1000 \sim 99991000��9999 ���,�ж��� 
 */
 
#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

bool isHuiwen(string s){
	int len = s.size();
	for(int i = 0; i < len/2; i++ ){
		if(s[len-1-i] != s[i]){
			return false;
			break;
		}
	}
	return true;
}
//��һ���Ӧ���·��ж����� 
int getDay(int year, int month){
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;
		case 2: return (!(year % 4) && (year % 100) || !(year % 400))? 29:28;
		default: return 0;
	}
}
//�ж������ʱ���Ƿ���Ч 
inline bool isValid(int year, int month, int day, int hour = 0, int minute = 0, int second = 0){
	return
		year >= 1000 && year <= 9999
		&& month >= 1 && month <= 12
		&& day >=1 && day <= getDay(year, month)
		&& hour >= 0 && hour < 24
		&& minute >= 0 && minute < 60
		&& second >= 0 && second < 60; 
}

inline int D(int a, int b){
	return a * 10 + b; 
}

inline int D(int a, int b, int c, int d){
	return a * 1000 + b * 100 + c * 10 + d;
}

#define LOOP(X, L, R) for(int X = L; X <= R; ++X)

int sum = 0;
int qiuhe(){
	LOOP(a, 1000, 9999)
		LOOP(b, 1, 12)
			LOOP(c, 1, 31)
				LOOP(d, 0, 24)
					LOOP(e, 0, 60)
						LOOP(f, 0, 60)
							sum += isValid(a, b, c, d, e, f);
	return sum;
} 


int main(){
	
	int result = 0;
	LOOP(a, 1, 9)
		LOOP(b, 0, 3)	
			LOOP(c, 0, 9)
				LOOP(d, 0, 1)
					result += isValid(D(a, b, c, d),D(d, c), D(b, a));
	printf("%d\n", result);
	result = 0;
	LOOP(a, 1, 9)
		LOOP(b, 0, 5)	
			LOOP(c, 0, 9)
				LOOP(d, 0, 2)
					LOOP(e, 0, 1)
						LOOP(f, 0 ,3)
							result += isValid(D(a, b, c, d), D(e, f), D(f, e), D(d, c), D(b, a));
	printf("%d\n", result);
	result = 0;
	LOOP(a, 1, 9)
		LOOP(b, 0, 5)	
			LOOP(c, 0, 9)
				LOOP(d, 0, 5)
					LOOP(e, 0, 1)
						LOOP(f, 0, 2)
							LOOP(g, 1, 2)
								result += isValid(D(a, b, c, d), D(e, f), D(g, g), D(f, e), D(d, c), D(b, a));
	printf("%d\n", result);
	
	//printf("%d\n",qiuhe());
	return 0;
}
