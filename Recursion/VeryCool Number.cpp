#include <iostream>
using namespace std;

int countCoolness(int num, int k) {
    int count = 0;
    int pattern = 5; 

    for (int i = 1; i <= num; i++) {
        int coolness = 0;
        int n = i;

        while (n > 0) {
            if ((n & 7) == pattern) 
                coolness++;
            n >>= 1;
        }

        if (coolness >= k)
            count++;
    }

    return count;
}

int main() {
    int r, k;
    cin >> r >> k;

    int result = countCoolness(r, k);
    cout << result << endl;

    return 0;
}
