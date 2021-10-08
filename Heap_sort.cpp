#include<bits/stdc++.h>
using namespace std;

void Max_heapify(int arr[],int i,int n)
{
  int left=2*i;
  int right=2*i+1;
  
  int largest=i;
  
  if(left<n && arr[left]>arr[i])
    largest=left;
  else
    largest=i;
    
  if(right<n && arr[right]> arr[largest])
    largest=right;
    
  if(largest != i){
    swap(arr[i],arr[largest]);
    Max_heapify(arr,largest, n); 
  }      
  

}



void build_heap(int arr[],int n)
{
  for(int i=n/2-1;i>=0;i--)
    Max_heapify(arr,i,n);

}

void heap_sort(int arr[], int n)
{
  build_heap(arr,n);   //building max heap
  
  for(int i=n-1;i>0;i--)
  {
     swap(arr[0],arr[i]);  // swaping max element to its proper position
    
     Max_heapify(arr,0,i);
  }

}


int main()
{
  int arr[]={10,0,17,1,25,47,35,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  heap_sort(arr,n);
  
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
  cout<<endl;  
}
