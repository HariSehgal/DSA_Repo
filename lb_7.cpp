#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long array[n];
    long long moves = 0;

    for (int i = 0 ; i < n ; i++){

        cin >> array[i];

    }

    for(int i = 0 ; i < n - 1 ; i++){

        if (array[i] > array[i+1]){
            moves = moves + (array[i] - array[i+1]);
            array[i+1] = array[i];
        }
    }

    cout << moves << endl;
    return 0;
}