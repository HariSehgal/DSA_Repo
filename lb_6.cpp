#include<iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;
    long long array[n+1]{0};

    for(int i = 1 ; i < n ; i++){
        long long x;
        cin >> x;

        array[x] = x;
    }

    for(int i = 1 ; i <=n ; i++){
        if(array[i] == 0){
            cout << i;
        }
    }
    return 0;
}