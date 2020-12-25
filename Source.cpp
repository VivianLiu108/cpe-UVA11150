#include<iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a)
	{
		int org = a;
		int sum1 = a, sum2 = a, sum3 = a;
		while (org / 3)
		{
			sum1 += org / 3;
			org = org / 3 + org % 3;
		}
		org = a + 1;
		while (org / 3)
		{
			sum2 += org / 3;
			org = org / 3 + org % 3;
			
			if (org / 3 == 0 && org % 3 == 0)
				sum2 = 0;
		}
		org = a + 2;
		while (org / 3)
		{
			sum3 += org / 3;
			org = org / 3 + org % 3;
			
			if (org / 3 == 0 && org % 3 < 2)
				sum3 = 0;
		}
		int out;
		if (sum1 >= sum2 && sum1 >= sum3)
			out = sum1;
		if (sum2 >= sum1 && sum2 >= sum3)
			out = sum2;
		if (sum3 >= sum2 && sum3 >= sum1)
			out = sum3;
		cout << out << endl;
	}
}