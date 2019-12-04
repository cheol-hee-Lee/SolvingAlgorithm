#include <iostream>
#include <string>

using namespace std;

int arr[26];


int main() {
    string str;
    cin >> str;
    std::fill_n(arr, 26, -1); // 배열의 원소를 모두 -1로 
    
    for (int i = 0; i < str.length(); i++) {
        int alphabet = (int) (str[i] - 'a');
        if (arr[alphabet] == -1) {
            arr[alphabet] = i;
        }
    } 
    
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
}
