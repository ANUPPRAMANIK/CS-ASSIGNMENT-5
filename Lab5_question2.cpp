#include<iostream>
using namespace std;
void max(int a, int arr[])
{
	int maxi=arr[0];
	for(int i=0; i<a;i++)
	{
		if(arr[i]>maxi)
		maxi=arr[i];
		}
		cout<<" \nthe maximum element of the array is: "<<maxi;
		}
		void min(int a, int arr[])
		{
			int mini=arr[0];
			for(int i=0; i<a;i++)
			{
				if(arr[i]<mini)
				mini=arr[i];
				}
				cout<<" \nthe minimum element of the array is: "<<mini;
				}
				void mean(int a, int arr[])
				{
					int sum=0;
					for(int i=0;i<a;i++)
					{
						sum=sum+arr[i];
						}
						float mean=0;
						mean=((float)sum/5);
						cout<<" \nthe mean of the array elements is: "<<mean;
						}
						void sort(int b,int arr[])
						{
							for(int i=0; i<(b-1); i++)
							{
								for(int j=0; j<(b-i-1); j++)
								{
									if(arr[j]>arr[j+1])
									{
										int temp=arr[j];
										arr[j]=arr[j+1];
										arr[j+1]=temp;
										}
										}
										}
										cout<<" \nsorted list in ascending order: ";
										for(int c=0; c<b; c++)
										{
											cout<<arr[c]<<" ";
											}
											cout;
											}
											void med(int a, int arr[])
											{
												int med;
												if(a%2==0)
												{
													med=(arr[a/2]+arr[(a+1)/2])/2;
													}
													else
													{
														int ind=(a+1)/2;
														med=arr[ind];
														}
														cout<<" \nthe median of the array elements is: "<<med;
														}
														void mode(int a, int arr[])
														{
															int num=arr[0];
															int mode=num;
															int count=1;
															int countmode=1;
															for (int i=1; i<a; i++)
															{
																if (arr[i]==num)
																{
																++count;
																}
																else
																{ 
																if (count>countmode)
																{
																	countmode=count;
																	mode=num;
																	}
																	count=1;
																	num=arr[i];
																	}
																	}
																	cout<<" \nthe mode of the array elements is: "<<mode;
																	}
																	main() {
																		int size=0;
																		cout<<" \nenter the size of the array(1 to 100) ";
																		cin>>size;
																		int arr[size];
																		cout<<" \nenter the elements of array ";
																		for(int d=0;d<size;d++)
																		{
																			cout<<" \nelement "<<(d+1)<<" : ";
																			cin>>arr[d];
																			}
																			max(size,arr);
																			min(size,arr);
																			mean(size,arr);
																			mode(size,arr);
																			sort(size,arr);
																			mode(size,arr);
																			}
