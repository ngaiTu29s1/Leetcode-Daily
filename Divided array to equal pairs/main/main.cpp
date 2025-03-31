#include <iostream>
#include <vector>
#include <set>

class Solution{
    public:
        bool divideArray(std::vector<int>& nums) {
            std::set<int> match_pairs;
            for (int num : nums) {
                if (!match_pairs.count(num))
                    match_pairs.insert(num);
                else
                    match_pairs.erase(num);
            }
            return match_pairs.empty();
        }
};

int main() {
    Solution sol;
    std::vector<int> nums1 = {3, 2, 3, 2, 2, 2}; // Expected Output: True
    std::vector<int> nums2 = {1, 2, 3, 4};       // Expected Output: False
    std::vector<int> nums3 = {1, 1, 2, 2, 3, 3}; // Expected Output: True
    std::vector<int> nums4 = {1, 1, 1, 2, 2};    // Expected Output: False
    std::vector<int> nums5 = {};                 // Expected Output: True
    std::vector<int> nums6 = {1};                // Expected Output: False
    std::vector<int> nums7 = {5, 5, 6, 6, 7, 7}; // Expected Output: True
    std::vector<int> nums8 = {4, 4, 4, 4, 4};    // Expected Output: False

    std::cout << sol.divideArray(nums1) << std::endl;
    std::cout << sol.divideArray(nums2) << std::endl;
    std::cout << sol.divideArray(nums3) << std::endl;
    std::cout << sol.divideArray(nums4) << std::endl;
    std::cout << sol.divideArray(nums5) << std::endl;
    std::cout << sol.divideArray(nums6) << std::endl;
    std::cout << sol.divideArray(nums7) << std::endl;
    std::cout << sol.divideArray(nums8) << std::endl;
    return 0;
}