#include <iostream>
using namespace std;

pair<int,int> twoSUm(int arr[],int size,int target ){
    pair<int,int>ans= make_pair(-1,-1);
    
    for(int i = 0;i<size;i++){
        for(int j = i+1; j< size;j++){
            if( arr[i] + arr[j] == target){
               ans.first = arr[i];
               ans.second= arr[j];
               return ans;
            }
        }
    }
    return ans;
}


void printingTriplet(int arr[] ,int n){
     int c=0;
for(int i = 0;i<n;i++){
   
    for(int j = 0; j<n;j++){
        for(int k = 0;k<n;k++){
            cout<<arr[i]<<" ,"<<arr[i]<<" ,"<<arr[k]<<endl;
            c++;
        }
    }
}
cout<<"Total triplet count "<<c<<endl;
}



int main(){

    int arr[4]={10,20,30,40};
    int n = 4;
    //printingTriplet(arr,n);
    // pair<int,int> ans = twoSUm(arr,5,30);
    // if(ans.first==-1 && ans.second==-1){
    //     cout<<"Pair not found : "<<endl;

    // }
    // else
    // {
    //     cout<<"Pair found : "<<ans.first<<" , "<<ans.second<<endl;
    // }

    return 0;
}