//
//  main.cpp
//  Lab 1
//
//  Created by Shohjahon Karimberganov on 8/26/25.
//

#include <iostream>
using namespace std;

int sumOfDigits (int number) {
    int sum = 0;
    int last = 0;
    while (number > 0) {
        last = number%10;
        sum = sum + last;
        number = number/10;
    }
    return sum;
};

int findMax(const int* arr, int size) {
    if (size <= 0) {
        return -1;
    }
    
    const int* max_ptr = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max_ptr) {
            max_ptr = arr + i;
        }
    }
    
    return *max_ptr;
}

bool isPrime (int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
//    int number;
//    cin>>number;
//    cout<<sumOfDigits(number)<<endl;
////    
//    int n;
//    cin >> n;
//    int *arr = new int[n];
//    for (int i = 0; i < n; ++i) {
//        cin>>arr[i];
//    }
//    
//    int maxNumber = findMax(arr, n);
//    cout<<maxNumber;
    
    int n;
    cin >> n;
    for (int i = 2; i<= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
