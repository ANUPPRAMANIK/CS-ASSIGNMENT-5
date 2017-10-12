#include<iostream>
using namespace std;
void max(int a, int arr[])
{
	int maxi=arr[0];
	for(int i=0;i<a;i++)
	{
		if(arr[i]>maxi)
		maxi=arr[i];
		}
		cout<<" \nthe maximum element of the array is: "<<maxi;
		}
		void min(int a, int arr[])
		{
			int mini=arr[0];
			for(int i=0;i<a;i++)
			{
				if(arr[i]<mini)
				mini=arr[i];
				}
				cout<<" \nthe minimum element of the array is: "<<mini;
				}
				main() {
					int b,size1=0,size2=0;
					cout<<" enter the size of the first array ";
					cin>>size1;
					int arr1[size1];
					cout<<" \nenter the elements of first array ";
					for(int b=0;b<size1;b++) 
					{
						cout<<" \nelement "<<(b+1)<<" : ";
						cin>>arr1[b];
						}
						cout<<" \nenter the size of the second array ";
						cin>>size2;
						int arr2[size2];
						cout<<" \nenter the elements of second array ";
						for(b=0;b<size2;b++)
						{
							cout<<" \nelement "<<(b+1)<<" : ";
							cin>>arr2[b];
							}
							int c=size1+size2;
							int newarr[c];
							for(int d=0;d<size1;d++)
							newarr[d]=arr1[d];
							for(int d=size1;d<size1+size2;d++)
							newarr[d]=arr2[d-size1];
							max(c,newarr);
							min(c,newarr);
							}
