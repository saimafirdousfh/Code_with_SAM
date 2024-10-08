#include <iostream>
using namespace std;
int main(){
    // for(int i =0;i<5;i++){
    //     for(int j = 0;j<5;j++){
    //         cout<<" * ";
    //     }cout<<endl;
    // }
    // int n;
    // cin>>n;

    //squRE PATTERN

    //row -> outer loop 
    //col -> inner loop 

    // for (int i =0;i<n;i++)
    // {
    //    for(int j=0;j<n;j++){
    //     cout<<" * ";
    //    }cout<<endl;
    


    // }


    //RECTANGLE PATTERN 
    
    // 
    //hollow rectangle
    int row ,col;
    cout<<"Enter row and col ";
    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j = 0;j< col;j++){
            if(i==0 || i==row-1){
                cout<<"* ";
            }else{
                if(j== 0 || j == col-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }cout<<endl;
    }


}