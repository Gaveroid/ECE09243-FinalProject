//  from code made by J J Hastings WG0Z11
#include <msp430.h>
#include "BMP280_named_numbers.h"
#include "BMP280_prototypes.h"

static unsigned temp, pres, id;

void softDelay( void )
{
    volatile unsigned ix = 500;
    do
    {
        ix--;
    }
    while ( ix );
}

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop wdt

    BMP280_if_init();

    id = BMP280_readID(); // 0x58, usually

    for(;;)
    {
        BMP280_force_conversions();
        softDelay();

        do {} while (BMP280_readStatus() & MEASURING_BIT_MASK);

        temp = BMP280_readTemperature();
        pres = BMP280_readPressure();
    }

}
