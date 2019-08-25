/* C++ Program - Selection Sort */

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort...\n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		for(j=i;j<size;j++)
		cout<<arr[j]<<" ";
			cout<<endl;
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
