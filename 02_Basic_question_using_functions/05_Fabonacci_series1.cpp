// write a programe for print fibonacci series n times
// fibonacci series = > 0   1   1   2   3   5   8   13  21(7 times or n =7)
#include<iostream>
using namespace std;
void fibo(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    
    for(int i=1;i<=n;i++){
        int nm = a+b;
        a=b;
        b= nm;
        
        cout<<nm<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    fibo(n);
}