An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.


                            
#include <bits/stdc++.h> 
using namespace std;

bool isArmstrong(int num) {
    int k = to_string(num).length();
    int sum = 0;
    int n = num;

    while(n > 0){

        int ld = n % 10;
        // Add the digit raised to
        // the power of k to the sum
        sum += pow(ld, k); 
        // Remove the last digit
        // from the number
        n = n / 10;
    }
    
    return sum == num ? true : false;
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                            
                        