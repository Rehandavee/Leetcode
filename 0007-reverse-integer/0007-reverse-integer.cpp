class Solution {
public:
    int reverse(int x) {
        long long temp = 0;

        while (x != 0) {
            int num = x % 10;
            temp = temp * 10 + num;
            x = x / 10;
        }

        if (temp > INT_MAX || temp < INT_MIN)
            return 0;

        return temp;
    }
};