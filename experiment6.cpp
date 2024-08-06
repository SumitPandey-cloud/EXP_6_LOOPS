#include <iostream>
using namespace std;

int main() {
    // 1. Counter using simple loops
    cout << "Counting from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 2. Pattern
    cout << "Pattern:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "  *";
        }
        cout << "\n";
    }
    cout << "\n";

    // 3. Nested loops
    // Nested for (matrix)
    cout << "3x3 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << i * 3 + j + 1 << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Nested while
    cout << "Nested while loop:\n";
    int a = 0;
    while (a < 3) {
        int b = 0;
        while (b < 3) {
            cout << "(" << a << "," << b << ") ";
            b++;
        }
        cout << "\n";
        a++;
    }
    cout << "\n";

    // Nested do-while
    cout << "Nested do-while loop:\n";
    int x = 0;
    do {
        int y = 0;
        do {
            cout << x + y << " ";
            y++;
        } while (y < 3);
        cout << "\n";
        x++;
    } while (x < 3);
    cout << "\n";

    // 4. For inside while, while inside for
    cout << "For inside while:\n";
    int count = 0;
    while (count < 3) {
        for (int i = 0; i < 3; i++) {
            cout << count * 3 + i << " ";
        }
        cout << "\n";
        count++;
    }
    cout << "\n";

    cout << "While inside for:\n";
    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (j < 3) {
            cout << i << j << " ";
            j++;
        }
        cout << "\n";
    }

    return 0;
}