#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0, b = sqrt(c);
        long long square;

        do{
            square = pow(a, 2) + pow(b, 2);
            if (square > c)
                b--;
            else if (square < c)
                a++;
            else if (square == c)
                return true;
        } while (a <= b);
        return false;
    }
};

int main() {
    Solution* solution = new Solution;
    cout << solution->judgeSquareSum(1000) << endl;
    return 0;
}