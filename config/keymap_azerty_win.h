

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ @ │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ ` │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
//#define FR_AT   NON_US_HASH   // @
#define FR_AMPR N1    // &
#define FR_LEAC N2    // é
#define FR_DQUO N3    // "
#define FR_QUOT N4    // '
#define FR_LPRN N5    // (
#define FR_SECT N6    // §
#define FR_LEGR N7    // è
#define FR_EXLM N8    // !
#define FR_LCCE N9    // ç
#define FR_LAGR N0    // à
#define FR_RPRN MINUS // )
#define FR_MINUS EQUAL  // -
// Row 2
#define FR_A    Q    // A
#define FR_Z    W    // Z
#define FR_E    E    // E
#define FR_R    R    // R
#define FR_T    T    // T
#define FR_Y    Y    // Y
#define FR_U    U    // U
#define FR_I    I    // I
#define FR_O    O    // O
#define FR_P    P    // P
#define FR_CIRC LEFT_BRACKET // ^
#define FR_DLLR  RIGHT_BRACKET // $
// Row 3
#define FR_Q    A    // Q
#define FR_S    S    // S
#define FR_D    D    // D
#define FR_F    F    // F
#define FR_G    G    // G
#define FR_H    H    // H
#define FR_J    J    // J
#define FR_K    K    // K
#define FR_L    L    // L
#define FR_M    SEMICOLON // M
#define FR_LUGR SINGLE_QUOTE // ù
#define FR_GRV  BACKSLASH // `
// Row 4
#define FR_LABK NON_US_BACKSLASH // <
#define FR_W    Z    // W
#define FR_X    X    // X
#define FR_C    C    // C
#define FR_V    V    // V
#define FR_B    B    // B
#define FR_N    N    // N
#define FR_COMM M    // ,
#define FR_SCLN COMMA // ;
#define FR_COLN DOT  // :
#define FR_EQUAL  SLASH // =

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ _ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ £ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ + │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FR_AT   GRAVE    // @
#define FR_AMPS N1    // &
#define FR_LEAC N2    // é
#define FR_DQUO N3    // "
#define FR_QUOT N4    // '
#define FR_LPAR N5    // (
#define FR_SECT N6    // §
#define FR_LEGR N7    // è
#define FR_EXLM N8    // !
#define FR_LCCE N9    // ç
#define FR_LAGR N0    // à
#define FR_RPAR MINUS // )
#define FR_MINS EQUAL  // -

#define FR_HASH LS(FR_AT) // #
#define FR_1    LS(FR_AMPR) // 1
#define FR_2    LS(FR_LEAC) // 2
#define FR_3    LS(FR_DQUO) // 3
#define FR_4    LS(FR_QUOT) // 4
#define FR_5    LS(FR_LPRN) // 5
#define FR_6    LS(FR_SECT) // 6
#define FR_7    LS(FR_LEGR) // 7
#define FR_8    LS(FR_EXLM) // 8
#define FR_9    LS(FR_LCCE) // 9
#define FR_0    LS(FR_LAGR) // 0
#define FR_DEG  LS(FR_RPRN) // °
#define FR_UNDS LS(FR_MINS) // _
// Row 2
#define FR_DIAE LS(FR_CIRC) // ¨ (dead)
#define FR_ASTR LS(FR_DLLR)  // *
// Row 3
#define FR_PRCNT LS(FR_LUGR) // %
#define FR_PND  LS(FR_GRV)  // £
// Row 4
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_COMM) // ?
#define FR_DOT  LS(FR_SCLN) // .
#define FR_SLSH LS(FR_COLN) // /
#define FR_PLUS LS(FR_EQUAL)  // +

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ • │  │ ë │ “ │ ‘ │ { │ ¶ │ « │ ¡ │ Ç │ Ø │ } │ — │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Æ │ Â │ Ê │ ® │ † │ Ú │ º │ î │ Œ │ π │ Ô │ € │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ ‡ │ Ò │ ∂ │ ƒ │ ﬁ │ Ì │ Ï │ È │ ¬ │ µ │ Ù │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ‹ │ ≈ │ © │ ◊ │ ß │ ~ │ ∞ │ … │ ÷ │ ≠ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FR_BULT LA(FR_AT)   // •
#define FR_APPL LA(FR_AMPR) //  (Apple logo)
#define FR_LEDI LA(FR_LEAC) // ë
#define FR_LDQU LA(FR_DQUO) // “
#define FR_LSQU LA(FR_QUOT) // ‘
#define FR_LBRC LA(FR_LPRN) // {
#define FR_PILC LA(FR_SECT) // ¶
#define FR_LDAQ LA(FR_LEGR) // «
#define FR_IEXL LA(FR_EXLM) // ¡
#define FR_CCCE LA(FR_LCCE) // Ç
#define FR_OSTR LA(FR_LAGR) // Ø
#define FR_RBRC LA(FR_RPRN) // }
#define FR_MDSH LA(FR_MINS) // —
// Row 2
#define FR_AE   LA(FR_A)    // Æ
#define FR_CACI LA(FR_Z)    // Â
#define FR_ECIR LA(FR_E)    // Ê
#define FR_REGD LA(FR_R)    // ®
#define FR_DAGG LA(FR_T)    // †
#define FR_CUAC LA(FR_Y)    // Ú
#define FR_MORD LA(FR_U)    // º
#define FR_LICI LA(FR_I)    // î
#define FR_OE   LA(FR_O)    // Œ
#define FR_PI   LA(FR_P)    // π
#define FR_OCIR LA(FR_CIRC) // Ô
#define FR_EURO LA(FR_DLLR)  // €
// Row 3
#define FR_DDAG LA(FR_Q)    // ‡
#define FR_COGR LA(FR_S)    // Ò
#define FR_PDIF LA(FR_D)    // ∂
#define FR_FHK  LA(FR_F)    // ƒ
#define FR_FI   LA(FR_G)    // ﬁ
#define FR_CIGR LA(FR_H)    // Ì
#define FR_CIDI LA(FR_J)    // Ï
#define FR_CEGR LA(FR_K)    // È
#define FR_NOT  LA(FR_L)    // ¬
#define FR_MICR LA(FR_M)    // µ
#define FR_CUGR LA(FR_LUGR) // Ù
// Row 4
#define FR_LTEQ LA(FR_LABK) // ≤
#define FR_LSAQ LA(FR_W)    // ‹
#define FR_AEQL LA(FR_X)    // ≈
#define FR_COPY LA(FR_C)    // ©
#define FR_LOZN LA(FR_V)    // ◊
#define FR_SS   LA(FR_B)    // ß
#define FR_TILD LA(FR_N)    // ~ (dead)
#define FR_INFN LA(FR_COMM) // ∞
#define FR_ELLP LA(FR_SCLN) // …
#define FR_DIV  LA(FR_COLN) // ÷
#define FR_NEQL LA(FR_EQUAL)  // ≠

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ Ÿ │ ´ │ „ │   │   │ [ │ å │ » │ Û │ Á │   │ ] │ – │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │ Å │   │ ‚ │ ™ │   │ ª │ ï │   │ ∏ │   │ ¥ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Ω │ ∑ │ ∆ │ · │ ﬂ │ Î │ Í │ Ë │ | │ Ó │ ‰ │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ › │ ⁄ │ ¢ │ √ │ ∫ │ ı │ ¿ │   │ \ │ ± │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FR_CYDI LS(LA(FR_AT))   // Ÿ
#define FR_ACUT LS(LA(FR_AMPR)) // ´ (dead)
#define FR_DLQU LS(LA(FR_LEAC)) // „
#define FR_LBKT LS(LA(FR_LPRN)) // [
#define FR_LARI LS(LA(FR_SECT)) // å
#define FR_RDAQ LS(LA(FR_LEGR)) // »
#define FR_CUCI LS(LA(FR_EXLM)) // Û
#define FR_CAAC LS(LA(FR_LCCE)) // Á
#define FR_RBKT LS(LA(FR_RPRN)) // ]
#define FR_NDSH LS(LA(FR_MINS)) // –
// Row 2
#define FR_CARI LS(LA(FR_Z))    // Å
#define FR_SLQU LS(LA(FR_R))    // ‚
#define FR_TM   LS(LA(FR_T))    // ™
#define FR_FORD LS(LA(FR_U))    // ª
#define FR_LIDI LS(LA(FR_I))    // ï
#define FR_NARP LS(LA(FR_P))    // ∏
#define FR_YEN  LS(LA(FR_DLLR))  // ¥
// Row 3
#define FR_OMEG LS(LA(FR_Q))    // Ω
#define FR_NARS LS(LA(FR_S))    // ∑
#define FR_INCR LS(LA(FR_D))    // ∆
#define FR_MDDT LS(LA(FR_F))    // ·
#define FR_FL   LS(LA(FR_G))    // ﬂ
#define FR_CICI LS(LA(FR_H))    // Î
#define FR_CIAC LS(LA(FR_J))    // Í
#define FR_CEDI LS(LA(FR_K))    // Ë
#define FR_PIPE LS(LA(FR_L))    // |
#define FR_COAC LS(LA(FR_M))    // Ó
#define FR_PERM LS(LA(FR_LUGR)) // ‰
// Row 4
#define FR_GTEQ LS(LA(FR_LABK)) // ≥
#define FR_RSAQ LS(LA(FR_W))    // ›
#define FR_FRSL LS(LA(FR_X))    // ⁄
#define FR_CENT LS(LA(FR_C))    // ¢
#define FR_SQRT LS(LA(FR_V))    // √
#define FR_INTG LS(LA(FR_B))    // ∫
#define FR_DLSI LS(LA(FR_N))    // ı
#define FR_IQUE LS(LA(FR_COMM)) // ¿
#define FR_BSLS LS(LA(FR_COLN)) // (backslash)
#define FR_PLMN LS(LA(FR_EQUAL))  // ±