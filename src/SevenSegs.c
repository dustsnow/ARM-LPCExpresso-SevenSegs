/*
 * SevenSegs.c
 *
 *  Created on: 2013-6-3
 *      Author: hp620
 */

#include "LPC17xx.h"
#include "SevenSegs.h"

void SevenSegs_init(){
//	LPC_PINCON->PINSEL4	&= (~(0x3FFF));//0x3FFF = 11 1111 1111 1111; set function of port P2.0 ~ P2.6 as GPIO
//	LPC_GPIO2->FIODIR |= (0x7F);//0x7F = 111 1111; Set the P2.0 ~ P2.6 to output
//	LPC_PINCON->PINSEL0 &= (~(0xFF));//0xFF = 11 11 11 11; set function of port P0.0 ~ P0.3 as GPIO
//	LPC_GPIO0->FIODIR &= (~(0x0F));//0x00 = 0000 0000; set the P0.0 ~ P0.3 to input

//	LPC_PINCON->PINSEL0 &= (~(3));
//	LPC_GPIO0->FIODIR |= (1);
//	LPC_PINCON->PINSEL0 &= (~(3<<2));
//	LPC_GPIO0->FIODIR |= (1<<1);

	LPC_PINCON->PINSEL0 &= (~(0xFF));
	LPC_GPIO0->FIODIR |= (0xF);

	LPC_PINCON->PINSEL4	&= (~(0x3FFF));
	LPC_GPIO2->FIODIR |= (0x7F);
//	LPC_PINCON->PINSEL4	&= (~(3));
//	LPC_GPIO2->FIODIR |= (1);
//
//	LPC_PINCON->PINSEL4	&= (~(3<<2));
//	LPC_GPIO2->FIODIR |= (1<<1);
//
//	LPC_PINCON->PINSEL4	&= (~(1023<<4));
//	LPC_GPIO2->FIODIR |= (31<<2);

//	LPC_PINCON->PINSEL1 &= (~(3));
//	LPC_GPIO0->FIODIR |= (1<<16);
//
//		LPC_PINCON->PINSEL1	&= (~(3 << 12));
//		LPC_GPIO0->FIODIR |= (1 << 22);
//
//		LPC_PINCON->PINSEL1	&= (~(3 << 10));
//		LPC_GPIO0->FIODIR |= (1 << 21);
//
//		LPC_PINCON->PINSEL4	&= (~(3));
//		LPC_GPIO2->FIODIR |= (1);
//
//		LPC_PINCON->PINSEL4	&= (~(3<<2));
//		LPC_GPIO2->FIODIR |= (1<<1);
//
//		LPC_PINCON->PINSEL4	&= (~(15<<4));
//		LPC_GPIO2->FIODIR |= (3<<2);
}

void SevenSegs_on(){
//	LPC_GPIO0->FIOSET &= (~((~(0xfe << 24)) >> 24));
//	LPC_GPIO2->FIOSET &= (~((~(0xff << 24))>>24));

	LPC_GPIO0->FIOSET = (1<<3);

	LPC_GPIO2->FIOSET = (0);
//	LPC_GPIO2->FIOSET = (0<<1);
//	LPC_GPIO2->FIOSET = (0<<2);
//	LPC_GPIO0->FIOSET = (1 << 16);
//
//	LPC_GPIO0->FIOSET = (1 << 22);
//
//	LPC_GPIO0->FIOSET = (1 << 21);
//
//	LPC_GPIO2->FIOSET = (1);
//
//	LPC_GPIO2->FIOSET = (1<<1);
//
//	LPC_GPIO2->FIOSET = (3<<2);
}
void SevenSegs_off(){
//	LPC_GPIO0->FIOSET != 0x0f;
	LPC_GPIO0->FIOCLR = (1);

//	LPC_GPIO0->FIOCLR = (1 << 16);
//
//	LPC_GPIO0->FIOCLR = (1 << 22);
//
//	LPC_GPIO0->FIOCLR = (1 << 21);
//
//	LPC_GPIO2->FIOCLR = (1);
//
//	LPC_GPIO2->FIOCLR = (1<<1);
//
//	LPC_GPIO2->FIOCLR = (3<<2);
}
void SevenSegs_display(char *message){
//	//assume 4 bits
//	int i = 0;
//	for(i=0;i<4;i++){
//		LPC_GPIO0->FIOSET &= (~((~(bitsCode_4[i] << 24)) >> 24));
//		char messageInHex = translationCode_CC[message[i]];
//		LPC_GPIO2->FIOSET &= (~((~(messageInHex << 24))>>24));
//	}
}

