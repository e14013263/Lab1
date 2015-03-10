#include <iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	while (i != 1)
	{
		cout<<i<<" ";
		if((i%2)==0)
			i=i/2;
		else
			i=3*i+1;
	}
	cout<<i<<" ";
	system("PAUSE");
	
	return 0;
}