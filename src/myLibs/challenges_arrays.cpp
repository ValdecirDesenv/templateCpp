
/*
 * TwoSumCh01.cpp
 *
 *  Created on: Apr. 7, 2024
 *      Author: vdc

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 */

#include "challenges_arrays.h"
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

Ch_arrays::Ch_arrays() {
}

Ch_arrays::~Ch_arrays() {
}

/*
 * Time Complexity: The time complexity of this implementation is O(n^2)
 * where n is the size of the input vector nums. This is because it uses nested
 * loops to iterate over the elements of nums.
 * Space Complexity: The space complexity of this implementation is O(1),
 * as it only uses a fixed-size vector index to store the result.*/

/// @param nums
/// @param target
/// @return
std::vector<int> Ch_arrays::twoSum (std::vector<int>& nums, int target){
	std::vector<int> index= {0,0};
	int element,next = 0;
	for(int i=0; i< nums.size() - 1 ; i++){
		element= nums[i];
		index[0] = i;
		next = target - element;
		if (next > 0){
			for(int j=1; j< nums.size(); j++){
				if (next == nums[j]){
					index[1]=j;
					return index;
				}
			}
		}
	}
	return index;

}
/*
 * This implementation has a time complexity of O(n) and a
 * space complexity of O(n), making it more efficient than the twoSum
 * implementation for larger input sizes.
 * */
/// @param nums
/// @param target
/// @return
std::vector<int> Ch_arrays::twoSumEfficient (std::vector<int>& nums, int target) {

    std::unordered_map<int, int> numMap; // Map to store number-index pairs

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement for current number
        if (numMap.find(complement) != numMap.end()) { // If complement found in the map
            return {numMap[complement], i}; // Return indices of complement and current number
        }
        numMap[nums[i]] = i; // Store the current number-index pair in the map
    }

    // If no solution found, return an empty vector
    return {};
}



/*
 *You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.
If you cannot achieve any profit, return 0.


Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed
because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.


Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
 * */
// The code is not in accordance with the requirements
int Ch_arrays::maxProfit(std::vector<int>& prices) {

	int indexMax = 0;
	int indexMin = 0;
	int value = prices[0];

	for(int i=1; i<prices.size();i++){
		if (value > prices[i]){
			value = prices[i];
			indexMin = i;
		}
	}
	if (indexMin == prices.size()){
		return 0;
	}
	value = prices[indexMin];
	for(int i=indexMin +1; i < prices.size();i++){
		if (value < prices[i]){
			value = prices[i];
			indexMax = i;
		}
	}
	if (indexMin  < indexMax){
		// return profit
		return prices[indexMax] - prices[indexMin];
	}

	return 0;
}
// It works but is not efficient
//int Ch_arrays::maxProfitEfficient(std::vector<int>& prices) {
//
//	int profit = 0;
//	for(int j=0; j<prices.size(); j++){
//		for(int i=j; i<prices.size(); i++){
//			if (prices[j] < prices[i]){ // An+1 > An -> true | An+1 = j & An = i
//				if (profit < (prices[i] - prices[j])){
//					profit = prices[i] - prices[j];
//				}
//			}
//
//		}
//	}
//	return profit;
//}#include <iostream>
/// @param prices
/// @return
/// This optimized implementation has a time complexity of O(n),
/// making it much more efficient than the original O(n^2) implementation.
int Ch_arrays::maxProfitEfficient(std::vector<int>& prices) {

    if (prices.size() < 2) {
        return 0; // If there are less than 2 prices, no profit can be made
    }

    int minPrice = prices[0]; // Initialize minPrice to the first element
    int maxProfit = 0; // Initialize maxProfit to 0

    for (int i = 1; i < prices.size(); ++i) {
        // Update minPrice to the minimum of current minPrice and current price
        minPrice = std::min(minPrice, prices[i]);

        // Update maxProfit to the maximum of current maxProfit and the profit if selling on current day
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}






