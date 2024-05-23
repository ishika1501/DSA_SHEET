


class Solution {
public:
    int reverse(int x) {
         long r = 0;
        while (x) {
            r = r * 10 + x % 10;
            x = x / 10;
        }
        if (r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        return int(r);
    }
};


How it Handles Negative Numbers:

The code works seamlessly for negative numbers because the process of extracting, appending, 
and removing digits is independent of the sign. Here's the step-by-step breakdown for x = -123:

Iteration 1:
r = 0 * 10 - 123 % 10 = 0 - 3 (Extract -3, r becomes -3)
x = -123 / 10 = -12 (Remove last digit)

Iteration 2:
r = -3 * 10 - 12 % 10 = -30 - 2 (Extract -2, r becomes -32)
x = -12 / 10 = -1 (Remove last digit)

Iteration 3:
r = -32 * 10 - 1 % 10 = -320 - 1 (Extract -1, r becomes -321)
x = -1 / 10 = 0 (Remove last digit; loop ends)
The final value of r is -321, which is the answer
