/*
 * TwoSumCh01.h
 *
 *  Created on: Apr. 7, 2024
 *      Author: vdc
 */

#ifndef CH_ARRAYS_H_
#define CH_ARRAYS_H_
#include <vector>

class Ch_arrays {
public:
	Ch_arrays();
	virtual ~Ch_arrays();

	std::vector<int> twoSum (std::vector<int>& nums, int target);
	std::vector<int> twoSumEfficient (std::vector<int>& nums, int target);
	int maxProfit(std::vector<int>& prices);
	int maxProfitEfficient(std::vector<int>& prices);

};

#endif /* CH_ARRAYS_H_ */
