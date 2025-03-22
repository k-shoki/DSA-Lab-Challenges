#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndex;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numIndex.find(complement) != numIndex.end()) {
                return {numIndex[complement], i};
            }

            numIndex[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> result = solution.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}


