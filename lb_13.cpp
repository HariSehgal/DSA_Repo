#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){

        cin >> arr[i];

    }

    int profit = 0;
    int buy = arr[0];

    for(int i = 1 ; i < n ; i++){
        int sell = arr[i];

        if(sell > buy){
            profit = max(profit, sell-buy);
        }else{
            buy = sell;
        }
    }

    cout << profit;

    return 0;
}