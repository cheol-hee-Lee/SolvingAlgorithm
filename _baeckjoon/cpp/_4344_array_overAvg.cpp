#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    // mistake : declaration 
    int C;
    cin >> C; // test case
    int numOfStudent[C];
    int** studentScore = new int*[C];
    int sum[C] = {0, }; // each sum
    double avg[C]; // each average
    int overAvg[C] = {0, }; // each overAvg
    double overAvgPct[C]; 
    
    // test case
    for (int i = 0; i < C; i++) {
        cin >> numOfStudent[i];
        studentScore[i] = new int[numOfStudent[i]];
        for (int j = 0; j < numOfStudent[i]; j++) {
            cin >> studentScore[i][j];
            sum[i] += studentScore[i][j];
        }
        avg[i] = sum[i] / (numOfStudent[i] * 1.0);
        
        // overAvg
        for (int j = 0; j < numOfStudent[i]; j++) {
            if (studentScore[i][j] > avg[i]) {
                overAvg[i]++;
            }
        }
        // overAvgPct
        // mistake : round, *, /
        overAvgPct[i] = round(overAvg[i] / (numOfStudent[i] * 1.0) * 100 * 1000 ) / 1000.0;
    }
    
    // mistake : 3 number after dot, \n 
    for (int i = 0; i < C; i++) {
        printf("%.3f%\n", overAvgPct[i]);
    }
    
    
    return 0;
}
