/*
 * SevenSegs.h
 *
 *  Created on: 2013-6-3
 *      Author: hp620
 */

#ifndef SEVENSEGS_H_
#define SEVENSEGS_H_

static char translationCode_CA[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};//Common Anode
static char translationCode_CC[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//Common Cathod
static char bitsCode_4[] = {0xfe,0xfd,0xfb,0xf7};
struct SevenSegs{

};
void SevenSegs_init();
void SevenSegs_on();
void SevenSegs_off();
void SevenSegs_display(char *message);

//Class SevenSegs
//{
//private:
//	bool commonAnode,
//		 commonCathod;
//	char bit,
//		segA,
//		segB,
//		segC,
//		segD,
//		segE,
//		segF,
//		segG,
//		segDP;
//	char *message;
//	static char *translationCode_CA = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};//Common Anode
//	static char *translationCode_CC = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//Common Cathod
//	static char *bitsCode_4 = {0xfe,0xfd,0xfb,0xf7};
//public:
//	SevenSegs(bool commonAnode, char bit, char Sega, char Segb, char Segc, char Segd, \
			char Sege, char Segf, char Segg, char dp);//One Bit
//	SevenSegs(bool commonAnode, char bit1,char bit2,char bit3,char bit4, \
			char Sega, char Segb, char Segc, char Segd, \
			char Sege, char Segf, char Segg, char dp);//Four Bits
//	void SevenSegs_init();
//	void SevenSegs_on();
//	void SevenSegs_off();
//	void SevenSegs_display(char *message);
//};
#endif /* SEVENSEGS_H_ */
