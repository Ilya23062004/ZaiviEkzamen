//Задача F

#include <iostream>
#include <cmath>

using namespace std;

int dlin(int i)
{
	int cnt=0;
	while (i!=0)
	{
		i/=10;
		cnt++;
	}
return cnt;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int max=a, count=0;

	for (int i=a; i<=b; i++)
	if (i<-9 || i>9)
	{
		int d = i/pow(10, dlin(i)-2);
		int f = i%100;
		int razn=d-f;
		if (razn!=0 && i%razn==0)
		{
			count++;
			if (i>max) max = i;
		}	
	}

if (count==0) max=0;
cout << count << " " << max;

return 0;
}
