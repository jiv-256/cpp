// write a programe for calculating factorial (nCr = n! / r! * (n - r)!)

#include<iostream>
using namespace std;

int numerator(int n){
    int num = 1; // Initialize num to 1
    for(int i = n; i >= 1; i--){
        num = num * i;
    }
    return num;
}

int denominator(int n, int r){
    int part1 = 1;  // r!
    for(int i = r; i >= 1; i--){
        part1 = part1 * i;
    }
    int part2 = 1;  // (n-r)!
    int k = n - r;
    for(int i = k; i >= 1; i--){
        part2 = part2 * i;
    }
    return part1 * part2;
}

int factorial(int n, int r){
    int fac = numerator(n) / denominator(n, r);
    return fac;
}

int main(){
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    cout << "Factorial nCr: " << factorial(n, r) << endl;
    return 0;
}



