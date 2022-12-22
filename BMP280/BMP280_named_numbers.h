/*
 * BMP280_named_numbers.h
 *
 *  Created on: Jul 23, 2017
 *      Author: JJH
 *      from https://github.com/wg0z/MSP430-BMP280-SoftSPI-4Wire
 */

#ifndef BMP280_NAMED_NUMBERS_H_
#define BMP280_NAMED_NUMBERS_H_


#define REG_WRITE 0x00
#define REG_READ  0x80

#define ID_REG 0x50
#define RESET_REG 0x60
#define STATUS_REG 0x73
#define CTL_MEAS_REG 0x74
#define CONFIG_REG 0x75
#define PRESS_HIGH 0x77
#define PRESS_MID 0x78
#define PRESS_LOW 0x79
#define TEMP_HIGH 0x7a
#define TEMP_MID 0x7b
#define TEMP_LOW 0x7c

#define MEASURING_BIT_MASK 0x8

#endif /* BMP280_NAMED_NUMBERS_H_ */
