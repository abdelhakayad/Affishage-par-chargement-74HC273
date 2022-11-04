#line 1 "C:/Users/hk/Desktop/ISIS & mikroC ex/Affishage par chargement (76HC273)/code.c"
int Tab [] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
 TRISA=0;
 TRISB=0;
 PORTB= Tab[4]; PORTA=0; PORTA=1;
 PORTB= Tab[7]; PORTA=0; PORTA=2;
 PORTB= Tab[1]; PORTA=0; PORTA=4;
 PORTB= Tab[9]; PORTA=0; PORTA=8;

}
