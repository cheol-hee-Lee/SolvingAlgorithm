#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int sum = 0; // 합계는 0으로 초기화!
    string str;
    cin >> N;
    cin >> str;
    
    for (int i = 0; i < N; i++) {
        sum += str[i] - '0'; // 아스키 숫자를 int 숫자로 바꾸기 위해서 '0'을 빼서 구한다. 
    }
    
    cout << sum << '\n';
}
