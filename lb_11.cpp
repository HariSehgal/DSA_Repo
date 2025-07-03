#include<iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;
    long long count_five = 0;

    while(n > 0){

        n = n / 5;
        count_five = count_five + n; 

    }

    cout << count_five << endl;

    return 0;
}