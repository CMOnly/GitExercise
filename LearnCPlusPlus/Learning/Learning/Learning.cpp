// Learning.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "lmath.h"

using namespace std;


int main()
{
	int t,a,b,max_t;

	cout << "please input two value to a&&b:" << endl;
	cin >> a >> b;
	max_t = max_int(a,b);
	cout << "the max value is:" << max_t;
	cin >> t;
    return 0;
}

