#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int p,int q,int r)
{
   int n1=q-p+1;
   int n2=r-q;
   
   int L[n1+1],R[n2+1];
   
   for(int i=0;i<n1;i++)
   {
     L[i]=arr[p+i];
   }
   for(int i=0;i<n2;i++)
   {
     
     R[i]=arr[q+1+i];
   
   }
   
   L[n1]=INT_MAX;
   R[n2]=INT_MAX;
   
   int i=0,j=0;
   
   for(int k=p;k<=r;k++)
   {
     if(L[i]<=R[j])
       arr[k]=L[i++];
     else
       arr[k]=R[j++];  
   
   }
}


void merge_sort(int arr[],int p,int r)
{
   if(p<r){
   
   int q=(p+r)/2;
   
   merge_sort(arr,p,q);
   merge_sort(arr,q+1,r);
   merge(arr,p,q,r);

   }
}


int main()
{
  int arr[]={10,0,17,1,25,47,35,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  merge_sort(arr,0,n-1);
  
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
  cout<<endl;  
}
