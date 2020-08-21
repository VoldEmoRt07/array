#include<iostream>
/* WAP to find duplicate elements from an array and then after remove the duplicate elements */

using namespace std;
 int main()
 {
 	int a[100],i,j,k,n;
 	cout<<"enter size of array\n";
 	cin>>n;
 	cout<<"enter elements of array:\n ";
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;  ) 
		 {
		 	if(a[i]==a[j])
		 	{
		 		for(k=j;k<n-1;k++)
		 		a[k]=a[k+1];
		 		n--;
			 }
			 else
			 j++;
		 	
		 }
	 }
	 cout<<"new array:\n";
	 for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<"\t";
	 }
 }
