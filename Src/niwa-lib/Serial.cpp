/*
 * Serial.cpp
 *
 *  Created on: 2019/05/06
 *      Author: HidetoNiwa
 */

#include "Serial.h"

namespace niwa {

Serial::Serial() {
	// TODO Auto-generated constructor stub
	UART_HandleTypeDef huart2;
}

uint32_t Serial::printf(char buf[]){
	HAL_UART_Transmit(&huart2,(uint8_t *)buf,sizeof(buf),0xFFFF);
	return sizeof(buf);
}

Serial::~Serial() {
	// TODO Auto-generated destructor stub
}

} /* namespace niwa */
