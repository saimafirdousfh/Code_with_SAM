#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}
void print1(vector<char>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}
int main(){
  vector <int> v;
  // while(1){
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  //   cout<<"Capacity = "<<v.capacity()<<"  size = "<<v.size()<<endl;
  // }
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);
  // v.pop_back();
  // cout<<endl;
  // v.pop_back();
  // print(v);

  //taking input in array vector wala array
  //insert array size 
 //  int n;
 //  cout<<"Enter the size of array"<<endl;
  
 //  cin>>n;
 //  cout<<"enter the array elements: "<<endl;
  
 //  for(int i=0;i<n;i++){
 //    int d;
 //    cin>>d;
 //    v.push_back(d);
 //  }
  
 //  cout<<"Printing array element : "<<endl;
 //  print(v);

 //  for(int i =0;i<10;i++){
 //    v.push_back(44);
 //  }
 //  cout<<endl;
 //  cout<<"Printing array after adding more elements :"<<endl;
 // print(v);
 //  //new vector of specified size and some default value
 //  cout<<endl;
 //  cout<<"New arr with size and default value : " <<endl;
 //  vector<int>arr(5,1);
 //  print(arr);



  vector<char>a;
  a.push_back('a');
  a.push_back('b');
  a.push_back('c');
  print1(a);
  
}