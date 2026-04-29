class Solution {
public:
    bool isArmstrong(int n) {
        int temp = n;
        int sum = 0;
        int digit = 0;

        // count digits
        while (temp != 0) {
            temp = temp / 10;
            digit++;
        }

        temp = n;

        // calculate Armstrong sum
        while (temp != 0) {
            int ld = temp % 10;
            sum += pow(ld, digit);
            temp = temp / 10;
        }

        return sum == n;
    }
};