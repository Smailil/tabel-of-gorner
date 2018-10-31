#include <iostream>
using namespace std;
int main()
{
	int x,b,p=0,k=1,la=-1;
	cout << "Max Ctepen: "
	cin >> x;
	int atat[x];
	x++;
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
						if (b==0)
						{
							la++;
							if (k==1)
								atat[la]=i;
							else
								atat[la]=i*k;
						}
				}
				p++;
				k*=(-1);
				b=0;
			}
		p=0;
		}
	}
	cout << endl;
	for(int i=0; i<x-1; i++)
	{
		cout << "x" << 1+i << " = " << atat[i] << ", ";
	}
}



