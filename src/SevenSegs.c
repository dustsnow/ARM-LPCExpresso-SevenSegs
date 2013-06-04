/*
 * SevenSegs.c
 *
 *  Created on: 2013-6-3
 *      Author: hp620
 */

#include "LPC17xx.h"
#include "SevenSegs.h"

void SevenSegs_init(){
	LPC_PINCON->PINSEL4	&= (~(0x3FFF));//0x3FFF = 11 1111 1111 1111; set function of port P2.0 ~ P2.6 as GPIO
	LPC_GPIO2->FIODIR |= (0x7F);//0x7F = 111 1111; Set the P2.0 ~ P2.6 to output
	LPC_PINCON->PINSEL0 &= (~(0xFF));//0xFF = 11 11 11 11; set function of port P0.0 ~ P0.3 as GPIO
	LPC_GPIO0->FIODIR &= (~(0x0F));//0x00 = 0000 0000; set the P0.0 ~ P0.3 to input
}

void SevenSegs_on(){
//	LPC_GPIO0->FIOSET &= (~((~(0xfe << 24)) >> 24));
//	LPC_GPIO2->FIOSET &= (~((~(0xff << 24))>>24));
	LPC_GPIO0->FIOSET &= 0xfe;
	LPC_GPIO2->FIOSET &= 0xff;
}
void SevenSegs_off(){
	LPC_GPIO0->FIOSET != 0x0f;
}
void SevenSegs_display(char *message){
	//assume 4 bits
	int i = 0;
	for(i=0;i<4;i++){
		LPC_GPIO0->FIOSET &= (~((~(bitsCode_4[i] << 24)) >> 24));
		char messageInHex = translationCode_CC[message[i]];
		LPC_GPIO2->FIOSET &= (~((~(messageInHex << 24))>>24));
	}
}

