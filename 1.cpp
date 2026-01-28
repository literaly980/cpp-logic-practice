#include <iostream>

using namespace std;

int main() {
 
    for (int i = 100; i <= 999; i++) {
        if (i % 47 == 6 || i % 53 == 45) {
            cout << i << " ";
        }
    }

    return 0;
}