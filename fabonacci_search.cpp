#include<iostream>

using namespace std;

void FibonacciSearch(int *a, int start, int end, int *fab, int index, int item)
{
	int i, mid;
	mid = start+fab[index-2];

	if(item == a[mid])
	{
		cout<<"\n item found at "<<mid<<" index.";
		return;
	}
	else if(item == a[start])
	{
		cout<<"\n item found at "<<start<<" index.";
		return;
	}
	else if(item == a[end])
	{
		cout<<"\n item found at "<<end<<" index.";
		return;
	}
	else if(mid == start || mid == end)
	{
		cout<<"\nElement not found";
		return;
	}
	else if(item > a[mid])
		FibonacciSearch(a, mid, end, fab, index-1, item);
	else
		FibonacciSearch(a, start, mid, fab, index-2, item);
}

main()
{
	int n, i, fab[20], a[20]={1, 9, 18, 24, 27, 35, 38, 41, 49, 53, 55, 66, 67, 72, 75, 77, 81, 89, 90, 97};
	char ch;

	fab[0] = 0;
	fab[1] = 1;
	i = 1;
	while(fab[i] < 20)
	{
		i++;
		fab[i] = fab[i-1]+fab[i-2];
	}
	cout<<"\nEnter the Element to be searched:(1,9,18,24,27,35,38,41,49,53,55,66,67,72,75,77,77,81,89,90,97) ";
	cin>>n;

	FibonacciSearch(a, 0, 19, fab, i, n);
	return 0;
}
