#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int sum = 0;

    for(int i = 0; i <= n ; i++){
        
        if(i % 2 == 0){
            sum = sum + i;
        }

    }
    cout << sum << endl;
    return 0;
}