#include <iostream> 

#include <omp.h> 

#include <cstdlib> 

#include <cstdio> 

#include <cstring> 

using namespace std; 

 

void parallelBubbleSort(int *arr,int n) 

{ 

int first=0; 

for(int i=0;i<n-1;i++) 

{ 

first=i%2; 

#pragma omp  parallel for default(none) shared(arr,first,n) 

for(int j=first;j<n-1;j=j+2) 

{ 

if(arr[j]>=arr[j+1]) 

{ 

int temp=arr[j]; 

arr[j]=arr[j+1]; 

arr[j+1]=temp; 

} 

} 

} 

} 

 

void print(int *arr, int n) 

{ 

for(int i=0;i<n;i++) 

{ 

cout<<"\t"<<arr[i]; 

} 

} 

 

 

 

 

int main()  

{ 

int *a,n,i; 

cout<<"\n Enter Total No Of Elements :-\t"; 

    	cin>>n; 

a= new int[n]; 

 

  	 cout<<"\n Enter Elements :-\t"; 

  	 for(i=0;i<n;i++) 

  	 { 

        		cin>>a[i]; 

    	 } 

 

parallelBubbleSort(a,n); 

 

cout<<"\n After Sorting :-\t"; 

print(a,n); 

 

return 0; 

} 
