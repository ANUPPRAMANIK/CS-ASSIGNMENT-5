#include<iostream>
using namespace std;
void large(int a,int arr[],int b)
{
	for(int i=0;i<a;i++)
	for(int j=i+1;j<a;j++)
	if(arr[i]<arr[j])
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
		cout<<" \nthe b'th largest element is: "<<arr[b-1];
		}
		void small(int a,int arr[],int b)
		{
			for(int i=0;i<a;i++)
			for(int j=i+1;j<a;j++)
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
				cout<<" \nthe b'th smallest element is: "<<arr[b-1];
				}
				main() {
					int size=0,B=0;
					cout<<" enter the size of the array "; 
					cin>>size;
					int arr[size];
					cout<<" \nenter the elements of array ";
					for(int c=0;c<size;c++)
					{
						cout<<" \nelement "<<(c+1)<<" : ";
						cin>>arr[c];
						}
						cout<<" \nenter the value of b ";
						cin>>B;
						large(size,arr,B);
						small(size,arr,B);
						}
