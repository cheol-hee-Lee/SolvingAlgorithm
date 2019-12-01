#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string ox[T];
    int score[T] = {0, };
    int correct = 0;
    
    for (int i = 0; i < T; i++) {
        cin >> ox[i];
        // score 계산
        for (int j = 0; j < ox[i].length(); j++) {
            if (ox[i][j] == 'O') {
                correct++;
                score[i] += correct; 
            } else if (ox[i][j] == 'X') {
                correct = 0;
            }
        }
        // mistake : initialize correct value
        correct = 0;
    }
    
    
    
    for (int i = 0; i < T; i++) {
        cout << score[i] << '\n';
    }
    
    
    return 0;
}
