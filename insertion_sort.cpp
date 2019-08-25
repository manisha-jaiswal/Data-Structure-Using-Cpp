/* C++ Program - Insertion Sort */

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
	cout<<"Sorting array using Insertion sort ... \n";
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		for(j=i-1;j>=0 && (temp<arr[j]);j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
		for(j=0;j<size;j++)
		{
			cout<<arr[j]<<" ";
			
		}
		cout<<endl;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
