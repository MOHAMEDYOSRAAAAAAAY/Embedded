/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: YOSRY
 */
#include <avr/io.h>
#include <util/delay.h>
int main(void){
	DDRA = 0b00011111 ;
	while(1){	PORTA = 0b00000001;
for (int  i = 0 ; i < 5 ;i ++){

			_delay_ms(500);
			PORTA <<= 1;

}
						}
return 0;	}
