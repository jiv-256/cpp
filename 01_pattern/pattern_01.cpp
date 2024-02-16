/*
    pattern for n = 4 ;

                4   3   2   1
                4   3   2   1
                4   3   2   1   
                4   3   2   1
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}