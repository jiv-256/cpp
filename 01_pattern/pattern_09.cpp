/*
    pattern for n = 4 ;

                D
                C   D
                B   C   D
                A   B   C   D
            
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch ;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        ch = 'A' + n - i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
    
        cout<<endl;
    }
    return 0;
}
