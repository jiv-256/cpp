/*
    pattern for n = 4 ;
                        
                16  15  14  13
                12  11  10  9
                8   7   6   5   
                4   3   2   1
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n,value;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    value = n*n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    return 0;
}
