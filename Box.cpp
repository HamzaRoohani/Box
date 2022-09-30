#include<iostream>
using namespace std;
int main()
{
	int box,boxsize,package;
	cout<<"Enter how much boxes u want to input: ";
	cin>>box;
	for(int i=box;i<=boxsize;i++)
	{
	for(int i=1;i<=boxsize;i++)
	{
			cout<<"Enter the box"<<i<<" Size: ";
			cin>>boxsize;
			int sum=0;
	if(boxsize==0)
	{
		cout<<"Zero cannot be a box size: Program terminating"<<endl;
		break;
	}
	else
		{
			int j=1;
		do{
			cout<<"Packages "<<j<<" for Box "<<i<<": ";
			cin>>package;
			sum+=package;
			if(sum==boxsize)
			{
				cout<<"Box is full"<<endl;
			}
			if(sum>boxsize)
			{
				cout<<"Box size is full: cannot enter the last package"<<endl;
			}
			j++;
		}
		while(sum<boxsize);
}
}
	system("pause");
	return 0;
}
}
