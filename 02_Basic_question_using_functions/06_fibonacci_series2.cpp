// write a programe for print fibonacci series till n 
// fibonacci series = > 0   1   1   2   3   5   8   13  21.......n
#include<iostream>
using namespace std;
void fibo(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int i = a+b;
    while(i<=n){
        int nm = a+b;
        a=b;
        b= i;
        cout<<nm<<" ";
        i = a+b;
    }
    
}
int main(){
    int n;
    cin>>n;
    fibo(n);
}