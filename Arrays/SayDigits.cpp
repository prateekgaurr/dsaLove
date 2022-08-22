#include <bits/stdc++.h>
using namespace std;

string names[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void sayDigits(long n){
    if(n<=0)
        return;

    sayDigits(n / 10);

    cout << endl
         << names[n % 10];
}

int main(){

    sayDigits(3207273);
}