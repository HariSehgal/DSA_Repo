#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    long long n;
    cin >> n;

    long long sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }

    if(sum % 2 != 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        
        vector<long long>arr1;
        vector<long long>arr2;

        long long i = 2;
        long long checker = 1;
        
        arr1.push_back(checker);
        
        while (checker <= sum / 2){

            checker = checker + i;
            arr1.push_back(i);
            i++;

        }

        long long element = checker - ( sum / 2);


        auto it = find(arr1.begin(), arr1.end(), element);
        if( it != arr1.end() ){
            arr1.erase(it);
        }

        arr2.push_back(element);

        for(i ; i <= n ; i++){
            arr2.push_back(i);
        }

        cout << arr1.size() << endl;
        
        for(int j = 0 ; j < arr1.size() ; j++){
            cout << arr1[j] << " ";
        }

        cout << endl << arr2.size() << endl;

        for(int j = 0 ; j < arr2.size() ; j++){
            cout << arr2[j] << " ";
        }

    }
    return 0;
}