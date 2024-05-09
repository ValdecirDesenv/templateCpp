#ifndef REGULARLOOPS_H_
#define REGULARLOOPS_H_
#include <cstdint>
#include <iostream>

class Regular_loops {
private:
	uint16_t lookNumber = 6;
public:
	Regular_loops();
	virtual ~Regular_loops();

	void runAllLoops();

};

#endif /* CHALLENGES_ARRAYS_H_ */