class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;

    for (int n = low; n <= high; ++n) {     
        int k = n;
        int numberOfDigits = (int)log10(k) + 1;

        if (numberOfDigits % 2 == 0) {
            int tmp_sum = 0;
            int size = 1;
            // int tempN = n;  

            while (size <= numberOfDigits / 2) {
                int t = k % 10;
                tmp_sum += t;
                k/= 10;
                size++;
            }

            size = 1;

            while (size <= numberOfDigits / 2) {
                int t = k % 10;
                tmp_sum -= t;
                k /= 10;
                size++;
            }

            if (tmp_sum == 0) {
                cnt++;
            }
        }
    }

    return cnt;
    }
};