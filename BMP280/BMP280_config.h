/*
 * BMP280_config.h
 *
 *  Created on: Jul 11, 2017
 *      Author: JJH
 *      from https://github.com/wg0z/MSP430-BMP280-SoftSPI-4Wire
 */

#ifndef BMP280_CONFIG_H_
#define BMP280_CONFIG_H_


#define CLK_OUTPORT P1OUT
#define CLK_DIRPORT P1DIR
#define CLK_BIT_NUM 5
#define CLK_BIT_MASK (1 << CLK_BIT_NUM)

// MOSI is data from MCU to BMP280
#define MOSI_OUTPORT P1OUT
#define MOSI_DIRPORT P1DIR
#define MOSI_BIT_NUM 6
#define MOSI_BIT_MASK (1 << MOSI_BIT_NUM)

#define CS_OUTPORT P1OUT
#define CS_DIRPORT P1DIR
#define CS_BIT_NUM 4
#define CS_BIT_MASK (1 << CS_BIT_NUM)

// MISO is data from BMP to MCU
#define MISO_INPORT P1IN
#define MISO_DIRPORT P1DIR
#define MISO_BIT_NUM 7
#define MISO_BIT_MASK (1 << MISO_BIT_NUM)



#endif /* BMP280_CONFIG_H_ */
