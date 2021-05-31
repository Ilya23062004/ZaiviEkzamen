//  Задача B

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	bool flag=true;
	string s,t;
	int max1=0;
	ifstream fin("input.txt");
	fin>>s;
	for (int i=0;i<s.size();i++)
	{
		for (int j=i;j<s.size();j++)
		{
				int max=j-i;
			if (s[i]==s[j] && j-i>1 && max>max1) 
			{
				max1=max;
				t=s[i];
				flag=false;
			}
		
			if (s[i]==s[j] && j-i==1 && flag==true) 
			{
				t=s[i];
				max1=1;
			}
			if (s[i]!=s[j] && flag==true) 
			{
				cout<<0;
				break;
			}
		}
	}
	cout << t << " " << max1-1;
	fin.close();
}
