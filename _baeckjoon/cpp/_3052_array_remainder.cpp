#include <iostream>

using namespace std;

int main()
{
    int num;
    int rmd[42] = {0 ,};
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (!rmd[num % 42]++) {
            sum++;
        }
    }
    
    cout << sum;

    return 0;
}
