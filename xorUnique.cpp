#include <iostream>
#include<algorithm>
using namespace std;
int findUnique(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
         ans = ans^arr[i];
    }
    return ans;
}
void sortZeroOne(int arr[], int size){
//     int zeroCount=0;
//    // int oneCount=0;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==0){
//             zeroCount++;
//         }
//     }

    sort(arr,arr+size);
   // oneCount=size-zeroCount;
   // fill(arr,arr+zeroCount,0);
//    fill(arr,arr+zeroCount,0);
//    fill(arr+zeroCount,arr+size,1);

    // for(int i=0;i<zeroCount;i++)
    // {
    //     arr[i]=0;
    // }
    // for(int i = zeroCount;i<size;i++){
    //     arr[i]=1;
    // }
    
}


int main(){
    int arr[11]={1,0,1,1,0,0,1,0,1,1,0};
    int size = 11;
   // sortZeroOne(arr,size);
    // int ans = findUnique(arr,size);
    // cout<<"Unique number is : "<<ans<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}