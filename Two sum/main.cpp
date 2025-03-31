#include <iostream>
#include <vector>
#include <map>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::vector<int> res;
            std::map<int, int> tracking;
            for (int i = 0; i < nums.size(); i++){
                int curr = nums[i];
                if (tracking.find(target - curr) != tracking.end()){
                    res.push_back(tracking[target - curr]);
                    res.push_back(i);
                    break;
                }
                tracking[curr] = i;
            }
            return res;
        }
    };

int main(){
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9; // Example target
    std::vector<int> solve = sol.twoSum(nums, target);
    std::cout << "Indices: ";
    for (int index : solve) {
        std::cout << index << " ";
    }
    std::cout << std::endl;
    return 0;
}