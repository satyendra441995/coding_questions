#include<bits/stdc++.h>
using namespace std;
// bubble sort
void bubble_sort(int arr[],int n)
{
  int i,j,swapped=0;
  
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        swapped=1;
      
      }
    
    }
    if(swapped==0)
      break;
  
  }


}

// driver code 
int main()
{
  int arr[]={10,0,17,1,25,47,35,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  bubble_sort(arr,n);
  
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
  cout<<endl;  
}
