/* C++ Program - Bubble Sort */

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int n, i, arr[50], j, temp;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<(n-i); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		
		}
			for(j=0;j<(n);j++)
		cout<<arr[j]<<" ";
			cout<<endl;
	}
	cout<<"\n Elements sorted successfully..!!\n";
	cout<<"\n Sorted list in ascending order :\n\n";
	for(j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
	getch();
	return 0;
}
