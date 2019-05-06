/*
 * Serial.h
 *
 *  Created on: 2019/05/06
 *      Author: totot
 */

#ifndef NIWA_LIB_SERIAL_H_
#define NIWA_LIB_SERIAL_H_

#include "stm32f4xx_hal.h"

namespace niwa {

class Serial {
public:
	Serial();
	uint32_t printf(char buf[]);
	virtual ~Serial();
};

} /* namespace niwa */

#endif /* NIWA_LIB_SERIAL_H_ */
