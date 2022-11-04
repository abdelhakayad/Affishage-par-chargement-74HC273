
_main:

	CLRF       TRISA+0
	CLRF       TRISB+0
	MOVF       _Tab+8, 0
	MOVWF      PORTB+0
	CLRF       PORTA+0
	MOVLW      1
	MOVWF      PORTA+0
	MOVF       _Tab+14, 0
	MOVWF      PORTB+0
	CLRF       PORTA+0
	MOVLW      2
	MOVWF      PORTA+0
	MOVF       _Tab+2, 0
	MOVWF      PORTB+0
	CLRF       PORTA+0
	MOVLW      4
	MOVWF      PORTA+0
	MOVF       _Tab+18, 0
	MOVWF      PORTB+0
	CLRF       PORTA+0
	MOVLW      8
	MOVWF      PORTA+0
L_end_main:
	GOTO       $+0
; end of _main
