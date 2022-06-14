#include <iostream>
#include <climits>
using namespace std;
// Take input n no elements of array and sort out maximum or minimum number from them.
int main( )
{
	int n;
    cin >> n;   // Taking input of n interger
    
    int arr[n];   // Decleration of an array
    int maxNo= INT_MIN; // INT_MAX will provide possible minimum number of array
    int minNo = INT_MAX;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //for (int i=0; i<n; i++){
    //        maxNo=max(maxNo,arr[i]);
    //        minNo=min(minNo,arr[i]);
    //   }
   for(int i=0; i<n; i++){
       if(arr[i]>maxNo){
           maxNo=arr[i];
       }
       if(arr[i]<minNo){
           minNo=arr[i];
       }
   }
 cout<<maxNo<<" "<<minNo<<" ";
    
	return 0;
}
