#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long


class Solution {
    public:
        long long maximumTripletValue(std::vector<int>& nums) {
            ll maxTriplet = 0;
            ll maxDiff = 0;
            ll maxEle = 0;
            for (ll num : nums) {
                maxTriplet = std::max(maxTriplet, maxDiff*num);
                maxDiff = std::max(maxDiff, maxEle - num);
                maxEle = std::max(maxEle, num);
            }
            return maxTriplet;
        }
};

int main() {
    Solution sol;
    
    // Debug/test cases
    std::vector<std::vector<int>> testCases = {
        {12, 6, 1, 2, 7},
        {1, 10, 3, 4, 19},
        {1, 2, 3}
    };
    
    for (size_t i = 0; i < testCases.size(); i++) {
        long long result = sol.maximumTripletValue(testCases[i]);
        std::cout << "Test " << i+1 << ": ";
        std::cout << "maximumTripletValue = " << result << std::endl;
    }
    
    return 0;
}
