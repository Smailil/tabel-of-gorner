#include <iostream>
using namespace std;
int main()
{
	int x,b,p=0,k=1;
	cin >> x;
	int arr[x];
	for (int i=0; i<x; i++)
	{
		cin >> b;
		arr[i]=b;
	}
	cout << x;
	b = 0;
	for (int i=0;i<x; i++)
	{
		cout << " " << arr[i];
	}
	for (int i=1; ((i<=arr[x-1])||(i<=(-1)*arr[x-1])); i++)
	{
		if (arr[x-1]%i==0)
		{
			while(p<2)
			{
				cout << endl;
				cout << i*k;
				for (int l=0; l < x; l++)
				{
					b=b+arr[l];
					cout << " " << b;
						b=b*i*k;
				}
				p++;
				k*=(-1);
				b=0;
			}
		p=0;
		}
	}
}



