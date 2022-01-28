#include<iostream>
using namespace std;
int isDivisor(int n)
{
	int sum=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i == 0)
		{
			if(n/i == i)
			sum+=i;
			else{
				sum+=n/i;
				sum+=i;
			}
		}
	}
	return sum;
}
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i == 0)
		{
			if(n/i!=i)
			{
				sum+=isDivisor(n/i);
				sum+=isDivisor(i);
			}				
			else{
				sum+=isDivisor(i);
			}

		}
	}
	cout<<sum<<endl;
}