#include <iostream>
using namespace std;

int main() {
    int sum = 0;  // This variable is declared but never used
    for (int i = 1; i <= 50; i++) {
        if ((i % 7) == 0)
            cout << i << " ";
    }
    return 0;
}
