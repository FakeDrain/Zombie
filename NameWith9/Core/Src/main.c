//#include "STM32F4xx.h"
//#include <stdlib.h>
#include <string.h>

#define RCCAHB1En *((int *)0x40023830)
#define GPIODmodreg *((int *)0x40020c00)
#define GPIODdatareg *((int *)0x40020c14)

//My LEDs are from D1 to D9 with ninth serves as space
//GPIODdatareg=0x000001ff maks
void init_leds(){
	RCCAHB1En=1<<3;
	GPIODmodreg= 0x00055555;
}
void A(){
	GPIODdatareg=0x00000041;
}
void B(){
	GPIODdatareg=0x00000042;
}
void C(){
	GPIODdatareg=0x00000043;
}
void D(){
	GPIODdatareg=0x00000044;
}
void E(){
	GPIODdatareg=0x00000045;
}
void F(){
	GPIODdatareg=0x00000046;
}
void G(){
	GPIODdatareg=0x00000047;
}
void H(){
	GPIODdatareg=0x00000048;
}
void I(){
	GPIODdatareg=0x00000049;
}
void J(){
	GPIODdatareg=0x0000004a;
}
void K(){
	GPIODdatareg=0x0000004b;
}
void L(){
	GPIODdatareg=0x0000004c;
}
void M(){
	GPIODdatareg=0x0000004d;
}
void N(){
	GPIODdatareg=0x0000004e;
}
void O(){
	GPIODdatareg=0x0000004f;
}
void P(){
	GPIODdatareg=0x00000050;
}
void Q(){
	GPIODdatareg=0x00000051;
}
void R(){
	GPIODdatareg=0x00000052;
}
void S(){
	GPIODdatareg=0x00000053;
}
void T(){
	GPIODdatareg=0x00000054;
}
void U(){
	GPIODdatareg=0x00000055;
}
void V(){
	GPIODdatareg=0x00000056;
}
void W(){
	GPIODdatareg=0x00000057;
}
void X(){
	GPIODdatareg=0x00000058;
}
void Y(){
	GPIODdatareg=0x00000059;
}
void Z(){
	GPIODdatareg=0x0000005a;
}
void Space(){
	GPIODdatareg=0x00000100;
}

void delay(){
	int counter = 0;
	while (counter < 1){//1 is to make debugging easier
		++counter;
		}
}
int main(){
	init_leds();
	char zomb[]= "CEM DENIZ ERDOGAN";
	int k,j= strlen(zomb);
	for (k = 0; k < j; k++){
	            if(zomb[k]=='A'){
	                A();
	                delay();
	            }
	            if(zomb[k]=='B'){
	            	 B();
	            	 delay();
	            }
	            if(zomb[k]=='C'){
	            	 C();
	            	 delay();
	            }
	            if(zomb[k]=='D'){
	            	  D();
	            	  delay();
	            }
	            if(zomb[k]=='E'){
	            	  E();
	            	  delay();
	            	            }
	            if(zomb[k]=='F'){
	            	  F();
	            	  delay();
	            	            }
	            if(zomb[k]=='G'){
	            	  G();
	            	  delay();
	            	            }
	            if(zomb[k]=='H'){
	            	  H();
	            	  delay();
	            	            }
	            if(zomb[k]=='I'){
	            	  I();
	            	  delay();
	            	            }
	            if(zomb[k]=='J'){
	            	  J();
	            	  delay();
	            	            }
	            if(zomb[k]=='K'){
	            	  K();
	            	  delay();
	            	            }
	            if(zomb[k]=='L'){
	            	  L();
	            	  delay();
	            	            }
	            if(zomb[k]=='M'){
	            	  M();
	            	  delay();
	            	            }
	            if(zomb[k]=='N'){
	            	  N();
	            	  delay();
	            	            }
	            if(zomb[k]=='O'){
	            	  O();
	            	  delay();
	            	            }
	            if(zomb[k]=='P'){
	            	  P();
	            	  delay();
	            	            }
	            if(zomb[k]=='Q'){
	            	  Q();
	            	  delay();
	            	            }
	            if(zomb[k]=='R'){
	            	  R();
	            	  delay();
	            	            }
	            if(zomb[k]=='S'){
	            	  S();
	            	  delay();
	            	            }
	            if(zomb[k]=='T'){
	            	  T();
	            	  delay();
	            	            }
	            if(zomb[k]=='U'){
	            	  U();
	            	  delay();
	            	            }
	            if(zomb[k]=='V'){
	            	  V();
	            	  delay();
	            	            }
	            if(zomb[k]=='W'){
	            	  W();
	            	  delay();
	            	            }
	            if(zomb[k]=='X'){
	            	  X();
	            	  delay();
	            	            }
	            if(zomb[k]=='Y'){
	            	  Y();
	            	  delay();
	            	            }
	            if(zomb[k]=='Z'){
	            	  Z();
	            	  delay();
	            	            }
	            if(zomb[k]==' '){
	            	  Space();
	            	  delay();//The code after every space does a "C" briefly for no reason            	            	            	  C();
	            	            }

	}

}
