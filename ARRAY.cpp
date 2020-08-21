#include <iostream >

/*  WAP to combine two arrays and then sort the array */
 using namespace std;
 int main()
 {
 	int a[100],b[100],c[100],i,j=0 ,temp=0,v,n,m;
 	cout<<"enter size of array a\n";
 	cin>>n;
 	cout<<"enter alements of array a\n";
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 cout<<"enter size of array b\n";
	 cin>>m;
	 cout<<"enter elemnts of array b\n";
	 for(i=0;i<m;i++)
	 {
	 	cin>>b[i];
	 }
	 cout<<"enter size of array c\n";
	 cin>>v;
	 cout<<  "combination of two arrays:\n";
	 for(i=0;i<n;i++)
	 {
	 	c[j]=a[i];
	 	j++;
	 }
	 for(i=0;i<m;i++)
	 {
	 	c[j]=b[i];
	 	j++;
	 }
	 for(j=0;j<v;j++)
	 {
	 	cout<<c[j]<<"\t" ;
	 }
	 for(i=0;i<v;i++)
	 	for(j=0;j<v-1;j++)
	  if(c[j]>c[j+1])
	 		{
	 			temp=c[j];
	 			c[j]=c[j+1];
	 			c[j+1]=temp;
			 }
	 	cout<<"\nsorted array:\n";
		 for(i=0;i<v;i++)
		 {
		 	cout<<c[i]<<"\t";
				   }	 	 
 }
