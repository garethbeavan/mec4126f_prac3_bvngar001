// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>
// GLOBAL VARIABLES ----------------------------------------------------------|

struct age_data {
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t age;
};

struct age_data my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY
void init_LCD(void);
void delay();

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	my_age.day = 21;
	my_age.month = 11;
	my_age.year = 2001;
	my_age.age = 21;

	init_LCD();
	char string[3];

	while(1)
	{
		for(int i=0; i<= my_age.age; i++)
		{
			lcd_command(CLEAR);
			sprintf(string, "%d", i);
			lcd_putstring(string);
			delay(120000);
		}
	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|



