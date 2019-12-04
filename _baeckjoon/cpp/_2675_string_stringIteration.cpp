#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    int R[T];
    string S[T];
    
    // input
    for (int i = 0; i < T; i++) {
        cin >> R[i];
        cin >> S[i];
    }
    
    // output
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < S[i].length(); j++) {
            for (int k = 0; k < R[i]; k++) {
                cout << S[i][j];
            }
        }
        cout << '\n';
    }
    
}
