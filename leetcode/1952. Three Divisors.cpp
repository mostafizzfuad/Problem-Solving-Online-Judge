class Solution {
public:
    bool isThree(int n) {

        // int sq = sqrt(n);
        int sq;

        /// find sqrt without library function
        for (int i = 1; i <= n; i++) {
            if (i * i >= n) {
                if (i * i == n)
                    sq = i;
                else
                    sq = i - 1;
                break;
            }
        }

        int count = 0;
        for (int i = 1; i <= sq; i++) {
            if (n % i == 0) {
                if (n / i == i)
                    count++;
                else
                    count += 2;
            }
        }

        bool ans = (count == 3);
        return ans;
    }
};