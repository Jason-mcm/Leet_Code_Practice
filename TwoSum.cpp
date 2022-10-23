//
// Created by Jason McMillan on 10/17/22.
//

#include "TwoSum.h"
#include <map>
#include <vector>
#include <iostream>

std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> dict;
    for (int i = 0; i < nums.size(); i++) {
        int compliment = target - nums[i];
        if (dict.find(compliment) != dict.end()) {
            return std::vector<int> {dict[i], i};
        }
        dict[i] = i;
    }
}

//int main() {
//    std::vector<int> nums {2,7,11,15};
//    int target = 7;
//    TwoSum twoSum;
//    std::vector<int> result = twoSum.twoSum(nums, target);
//    for (int i : result) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
