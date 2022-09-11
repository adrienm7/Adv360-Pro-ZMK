/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Rangée des chiffres
#define FR_AMPR 	N1    		 	   // &
#define FR_LEAC 	N2    		       // é
#define FR_DQUO 	N3   		 	   // "
#define FR_QUOT 	N4   	     	   // '
#define FR_LPRN 	N5   		  	   // (
#define FR_MINUS 	N6   		  	   // -
#define FR_LEGR 	N7  		  	   // è
#define FR_UNDS 	N8   		 	   // _
#define FR_LCCE 	N9   		  	   // ç
#define FR_LAGR 	N0   		 	   // à
#define FR_RPRN 	MINUS		 	   // )
#define FR_EQUAL 	EQUAL 		  	   // =
// Rangée du haut
#define FR_A    	Q   		 	   // A
#define FR_Z   		W   		 	   // Z
#define FR_E   		E   		  	   // E
#define FR_R   		R   		  	   // R
#define FR_T    	T   		 	   // T
#define FR_Y   		Y   		 	   // Y
#define FR_U  		U   		 	   // U
#define FR_I  		I    		 	   // I
#define FR_O   		O    		  	   // O
#define FR_P   		P    		 	   // P
#define FR_CIR		LEFT_BRACKET  	   // ^ (dead)
#define FR_DLLR  	RIGHT_BRACKET	   // $
// Rangée du milieu
#define FR_Q  		A   		 	   // Q
#define FR_S   		S 		 	 	   // S
#define FR_D  		D  			 	   // D
#define FR_F   		F   		 	   // F
#define FR_G  		G   		 	   // G
#define FR_H   		H   		 	   // H
#define FR_J   		J   		 	   // J
#define FR_K   		K   		 	   // K
#define FR_L   		L   		 	   // L
#define FR_M   		SEMICOLON 	 	   // M
#define FR_LUGR 	SINGLE_QUOTE  	   // ù
#define FR_ASTR  	BACKSLASH  	   	   // *
// Rangée du bas
#define FR_LABK 	NON_US_BACKSLASH   // <
#define FR_W    	Z   		  	   // W
#define FR_X   		X    		  	   // X
#define FR_C   		C    		 	   // C
#define FR_V    	V    		 	   // V
#define FR_B    	B    		 	   // B
#define FR_N    	N    		 	   // N
#define FR_COMM 	M   		 	   // ,
#define FR_SCLN 	COMMA 		 	   // ;
#define FR_COLN 	DOT  		  	   // :
#define FR_EXLM 	SLASH 		  	   // !



/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Rangée des chiffres
#define FR_1    	LS(FR_AMPR)		   // 1
#define FR_2    	LS(FR_LEAC) 	   // 2
#define FR_3    	LS(FR_DQUO) 	   // 3
#define FR_4    	LS(FR_QUOT) 	   // 4
#define FR_5    	LS(FR_LPRN) 	   // 5
#define FR_6    	LS(FR_MINUS) 	   // 6
#define FR_7    	LS(FR_LEGR) 	   // 7
#define FR_8    	LS(FR_EXLM) 	   // 8
#define FR_9    	LS(FR_LCCE) 	   // 9
#define FR_0    	LS(FR_LAGR) 	   // 0
#define FR_DEG  	LS(FR_RPRN) 	   // °
#define FR_PLUS 	LS(FR_EQUAL) 	   // +
// Rangée du haut
#define FR_DIAE 	LS(FR_CIRC)		   // ¨ (dead)
#define FR_PND  	LS(FR_DLLR) 	   // £
// Rangée du milieu
#define FR_PRCNT 	LS(FR_LUGR) 	   // %
// Rangée du bas
#define FR_RABK 	LS(FR_LABK) 	   // >
#define FR_QUES 	LS(FR_COMM) 	   // ?
#define FR_DOT  	LS(FR_SCLN) 	   // .
#define FR_SLSH 	LS(FR_COLN) 	   // /
#define FR_SECT 	LS(FR_EXLM) 	   // §



/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │   │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Rangée des chiffres
#define FR_TILD 	RA(FR_LEAC)    	   // ~ (dead)
#define FR_HASH    	RA(FR_DQUO) 	   // #
#define FR_LBRC    	RA(FR_QUOT) 	   // {
#define FR_LBKT    	RA(FR_LPRN) 	   // [
#define FR_PIPE    	RA(FR_MINUS) 	   // |
#define FR_GRV    	RA(FR_LEGR) 	   // ` (dead)
#define FR_BSLS    	RA(FR_EXLM) 	   // (backslash)
#define FR_AT    	RA(FR_LAGR) 	   // @
#define FR_RBKT  	RA(FR_RPRN) 	   // ]
#define FR_RBRC 	RA(FR_EQUAL) 	   // }
// Rangée du haut
#define FR_EUR	 	RA(FR_E)  		   // €