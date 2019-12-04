#include <cstdio>
#include <iostream>

using namespace std;


bool isHansu(int n) {
    if (n < 100) {
       return true; 
    }
    // 세자리 수
    if (100 <= n && n <= 999) {
        if ((n / 10)%10 - n % 10 == (n / 100) % 10 - (n / 10) % 10) {
            return true;
        }
    }
    
    // 네자리 수
    // if (n == 1000) {
    //     return true;
    // }
    
    return false;
}

int main() {
    int N;
    int sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (isHansu(i)) {
            sum++;
        }
    }
    
    cout << sum;
}

