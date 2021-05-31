
// Задача G 

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n,m,x,y,color,a;
	int mas[100][100];
	cin >> n >> m;
	cin >> x >> y;
	cin >> color;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin >> a;
			mas[i][j] = a;
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			mas[x-1][y-1]=color;
			mas[x][y]=color;
			mas[x-1][y]=color;
			mas[x-2][y]=color;
			mas[x-1][y+1]=color;
		}			
	}
	cout << endl;
	cout << endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	}
