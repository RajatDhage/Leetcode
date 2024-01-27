class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        vector<pair<int, int>> pairs;

        // Create pairs of (alice, bob) values
        for (int i = 0; i < aliceValues.size(); i++) {
            pairs.push_back({aliceValues[i], bobValues[i]});
        }

        // Sort pairs based on the sum in descending order
        //Lambda function compares two pairs (a and b) based on the sum of their first and second elements. The function returns true if the sum of a is greater than the sum of b, indicating that a should come before b in the sorted order.
        sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
            return (a.first + a.second) > (b.first + b.second);
        });

        int aliceTotal = 0, bobTotal = 0;

        for (int i = 0; i < pairs.size(); i++) {
            if (i % 2 == 0) {
                aliceTotal += pairs[i].first;
            } else {
                bobTotal += pairs[i].second;
            }
        }
        
        if (aliceTotal > bobTotal) {
            return 1;
        } else if (bobTotal > aliceTotal) {
            return -1;
        } else {
            return 0;
        }
    }
};