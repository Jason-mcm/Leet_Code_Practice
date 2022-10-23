//
// Created by Jason McMillan on 10/17/22.
//

#include <map>
#include <vector>
#include <iostream>

/**
 * returns indices of two numbers that add up to target
 * @param nums vector of integers
 * @param target target value
 * @return std::vector<int>
 */
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> dict;
    for (int i = 0; i < nums.size(); i++) {
        int compliment = target - nums[i];
        if (dict.find(compliment) != dict.end()) {
            return {dict[i], i};
        }
        dict[i] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums {2,7,11,15};
    int target = 7;
    std::vector<int> result = twoSum(nums, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
