/*
 * BMP280_prototypes.h
 *
 *  Created on: Jul 11, 2017
 *      Author: JJH
 *      from https://github.com/wg0z/MSP430-BMP280-SoftSPI-4Wire
 */

#ifndef BMP280_PROTOTYPES_H_
#define BMP280_PROTOTYPES_H_


void BMP280_if_init( void );
void BMP280_force_conversions( void );

unsigned BMP280_readID( void );
unsigned BMP280_readStatus( void );
unsigned BMP280_readTemperature( void );
unsigned BMP280_readPressure( void );

#endif /* BMP280_PROTOTYPES_H_ */
