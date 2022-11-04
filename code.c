int Tab [] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
  TRISA=0;
  TRISB=0;
  PORTB= Tab[4]; PORTA=0; PORTA=1;    /*  or Tab[4];PORTA.f0=0;PORTA.f0=1; */
  PORTB= Tab[7]; PORTA=0; PORTA=2;    /*  or Tab[7];PORTA.f1=0;PORTA.f1=1; */
  PORTB= Tab[1]; PORTA=0; PORTA=4;    /*  or Tab[1];PORTA.f2=0;PORTA.f2=1; */
  PORTB= Tab[9]; PORTA=0; PORTA=8;    /*  or Tab[9];PORTA.f3=0;PORTA.f3=1; */

}

/* afficher 4719 dans le PIC