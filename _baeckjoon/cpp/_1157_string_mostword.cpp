#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;
int alphabet[26];

int main() {
    std::fill_n(alphabet, 26, 0);
    string str;
    int max = -100;
    char maxChar;
    
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
        alphabet[str[i] - 'A']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            maxChar = (char) ((int) 'A' + i);
        }
        
    }
    
    // '?' 처리
    bool flag = true;
    for (int i = 0; i < 26 && flag; i++) {
        if (alphabet[i] == max) {
            for (int j = i+1; j < 26 && flag; j++) {
                if (alphabet[j] == max) {
                    maxChar = '?';
                    flag = false;
                }
            }
            flag = false;
        }
    }
    cout << maxChar;
}
