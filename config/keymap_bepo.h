#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ " │ « │ » │ ( │ ) │ @ │ + │ - │ / │ * │ = │ % │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ B │ É │ P │ O │ È │ ^ │ V │ D │ L │ J │ Z │ W │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ U │ I │ E │ , │ C │ T │ S │ R │ N │ M │ Ç │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ Ê │ À │ Y │ X │ . │ K │ ' │ Q │ G │ H │ F │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define BP_DLR   GRAVE    // $
#define BP_DQUO  N1       // "
#define BP_LDAQ  N2       // «
#define BP_RDAQ  N3       // »
#define BP_LPRN  N4       // (
#define BP_RPRN  N5       // )
#define BP_AT    N6       // @
#define BP_PLUS  N7       // +
#define BP_MINS  N8       // -
#define BP_SLSH  N9       // /
#define BP_ASTR  N0       // *
#define BP_EQL   MINUS    // =
#define BP_PERC  EQUAL    // %

// Row 2
#define BP_B     Q        // B
#define BP_EACU  W        // É
#define BP_P     E        // P
#define BP_O     R        // O
#define BP_EGRV  T        // È
#define BP_DCIR  Y        // ^ (dead)
#define BP_V     U        // V
#define BP_D     I        // D
#define BP_L     O        // L
#define BP_J     P        // J
#define BP_Z     LBKT     // Z
#define BP_W     RBKT     // W

// Row 3
#define BP_A     A        // A
#define BP_U     S        // U
#define BP_I     D        // I
#define BP_E     F        // E
#define BP_COMM  G        // ,
#define BP_C     H        // C
#define BP_T     J        // T
#define BP_S     K        // S
#define BP_R     L        // R
#define BP_N     SEMI     // N
#define BP_M     APOS     // M
#define BP_CCED  BACKSLASH // Ç

// Row 4
#define BP_ECIR  NUHS     // Ê
#define BP_AGRV  Z        // À
#define BP_Y     X        // Y
#define BP_X     C        // X
#define BP_DOT   V        // .
#define BP_K     B        // K
#define BP_QUOT  N        // '
#define BP_Q     M        // Q
#define BP_G     COMMA    // G
#define BP_H     DOT      // H
#define BP_F     SLASH    // F

/*
 * Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ ! │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │ ? │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define BP_HASH  LS(GRAVE)   // #
#define BP_1     LS(N1)      // 1
#define BP_2     LS(N2)      // 2
#define BP_3     LS(N3)      // 3
#define BP_4     LS(N4)      // 4
#define BP_5     LS(N5)      // 5
#define BP_6     LS(N6)      // 6
#define BP_7     LS(N7)      // 7
#define BP_8     LS(N8)      // 8
#define BP_9     LS(N9)      // 9
#define BP_0     LS(N0)      // 0
#define BP_DEG   LS(MINUS)   // °
#define BP_GRV   LS(EQUAL)   // `

// Row 2
#define BP_EXLM  LS(Y)       // !

// Row 3
#define BP_SCLN  LS(G)       // ;

// Row 4
#define BP_COLN  LS(V)       // :
#define BP_QUES  LS(N)       // ?

// Row 5
#define BP_NBSP  LS(SPACE)   // (non-breaking space)

/*
 * AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ – │ — │ < │ > │ [ │ ] │ ^ │ ± │ − │ ÷ │ × │ ≠ │ ‰ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ | │ ´ │ & │ Œ │ ` │ ¡ │ ˇ │ Ð │ / │ Ĳ │ Ə │ ˘ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Æ │ Ù │ ¨ │ € │   │ © │ Þ │ ẞ │ ® │ ~ │ ¯ │ ¸ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ \ │ { │ } │ … │ ~ │ ¿ │ ° │   │ † │ ˛ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │           _            │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define BP_NDSH  RA(GRAVE)      // –
#define BP_MDSH  RA(N1)         // —
#define BP_LABK  RA(N2)         // <
#define BP_RABK  RA(N3)         // >
#define BP_LBRC  RA(N4)         // [
#define BP_RBRC  RA(N5)         // ]
#define BP_CIRC  RA(N6)         // ^
#define BP_PLMN  RA(N7)         // ±
#define BP_MMNS  RA(N8)         // −
#define BP_DIV   RA(N9)         // ÷
#define BP_MUL   RA(N0)         // ×
#define BP_NEQL  RA(MINUS)      // ≠
#define BP_PERM  RA(EQUAL)      // ‰

// Row 2
#define BP_PIPE  RA(Q)          // |
#define BP_ACUT  RA(W)          // ´ (dead)
#define BP_AMPR  RA(E)          // &
#define BP_OE    RA(R)          // Œ
#define BP_DGRV  RA(T)          // ` (dead)
#define BP_IEXL  RA(Y)          // ¡
#define BP_CARN  RA(U)          // ˇ (dead)
#define BP_ETH   RA(I)          // Ð
#define BP_DSLS  RA(O)          // / (dead)
#define BP_IJ    RA(P)          // Ĳ
#define BP_SCHW  RA(LBKT)       // Ə
#define BP_BREV  RA(RBKT)       // ˘ (dead)

// Row 3
#define BP_AE    RA(A)          // Æ
#define BP_UGRV  RA(S)          // Ù
#define BP_DIAE  RA(D)          // ¨ (dead)
#define BP_EURO  RA(F)          // €
#define BP_COPY  RA(H)          // ©
#define BP_THRN  RA(J)          // Þ
#define BP_SS    RA(K)          // ẞ
#define BP_REGD  RA(L)          // ®
#define BP_DTIL  RA(SEMI)       // ~ (dead)
#define BP_MACR  RA(APOS)       // ¯ (dead)
#define BP_CEDL  RA(BACKSLASH)  // ¸ (dead)

// Row 4
#define BP_BSLS  RA(Z)          // (backslash)
#define BP_LCBR  RA(X)          // {
#define BP_RCBR  RA(C)          // }
#define BP_ELLP  RA(V)          // …
#define BP_TILD  RA(B)          // ~
#define BP_IQUE  RA(N)          // ¿
#define BP_RNGA  RA(M)          // ° (dead)
#define BP_DGRK  RA(COMMA)      // µ (dead Greek key)
#define BP_DAGG  RA(DOT)        // †
#define BP_OGON  RA(SLASH)      // ˛ (dead)

// Row 5
#define BP_UNDS  RA(SPACE)      // _

/*
 * Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¶ │ „ │ “ │ ” │ ≤ │ ≥ │   │ ¬ │ ¼ │ ½ │ ¾ │ ′ │ ″ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ¦ │ ˝ │ § │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │ ˙ │ ¤ │ ̛  │ ſ │   │   │ ™ │   │ º │ , │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │ ‘ │ ’ │ · │ ⌨ │ ̉  │ ̣  │   │ ‡ │ ª │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define BP_PARA  LS(RA(GRAVE))      // ¶
#define BP_DLQU  LS(RA(N1))         // „
#define BP_LDQU  LS(RA(N2))         // “
#define BP_RDQU  LS(RA(N3))         // ”
#define BP_LEQL  LS(RA(N4))         // ≤
#define BP_GEQL  LS(RA(N5))         // ≥
#define BP_NOT   LS(RA(N7))         // ¬
#define BP_QRTR  LS(RA(N8))         // ¼
#define BP_HALF  LS(RA(N9))         // ½
#define BP_TQTR  LS(RA(N0))         // ¾
#define BP_PRIM  LS(RA(MINUS))      // ′
#define BP_DPRM  LS(RA(EQUAL))      // ″

// Row 2
#define BP_BRKP  LS(RA(Q))          // ¦
#define BP_DACU  LS(RA(W))          // ˝ (dead)
#define BP_SECT  LS(RA(E))          // §

// Row 3
#define BP_DOTA  LS(RA(D))          // ˙ (dead)
#define BP_CURR  LS(RA(F))          // ¤ (dead)
#define BP_HORN  LS(RA(G))          // ̛  (dead)
#define BP_LNGS  LS(RA(H))          // ſ
#define BP_TM    LS(RA(L))          // ™
#define BP_MORD  LS(RA(APOS))       // º
#define BP_DCMM  LS(RA(BACKSLASH))  // , (dead)

// Row 4
#define BP_LSQU  LS(RA(X))          // ‘
#define BP_RSQU  LS(RA(C))          // ’
#define BP_MDDT  LS(RA(V))          // ·
#define BP_KEYB  LS(RA(B))          // ⌨
#define BP_HOKA  LS(RA(N))          // ̉  (dead)
#define BP_DOTB  LS(RA(M))          // ̣  (dead)
#define BP_DDAG  LS(RA(DOT))        // ‡
#define BP_FORD  LS(RA(SLASH))      // ª

// Row 5
#define BP_NNBS  LS(RA(SPACE))      // (narrow non-breaking space)

/* DEPRECATED (alias) */
#define BP_DOLLAR BP_DLR
#define BP_DOUBLE_QUOTE BP_DQUO
#define BP_DQOT BP_DQUO
#define BP_LEFT_GUILLEMET BP_LDAQ
#define BP_LGIL BP_LDAQ
#define BP_RIGHT_GUILLEMET BP_RDAQ
#define BP_RGIL BP_RDAQ
#define BP_LEFT_PAREN BP_LPRN
#define BP_RIGHT_PAREN BP_RPRN
#define BP_MINUS BP_MINS
#define BP_SLASH BP_SLSH
#define BP_ASTERISK BP_ASTR
#define BP_EQUAL BP_EQL
#define BP_PERCENT BP_PERC
#define BP_E_ACUTE BP_EACU
#define BP_ECUT BP_EACU
#define BP_E_GRAVE BP_EGRV
#define BP_DEAD_CIRCUMFLEX BP_DCIR
#define BP_DCRC BP_DCIR
#define BP_COMMA BP_COMM
#define BP_C_CEDILLA BP_CCED
#define BP_E_CIRCUMFLEX BP_ECIR
#define BP_ECRC BP_ECIR
#define BP_A_GRAVE BP_AGRV
#define BP_APOSTROPHE BP_QUOT
#define BP_APOS BP_QUOT
#define BP_DEGREE BP_DEG
#define BP_DEGR BP_DEG
#define BP_GRAVE BP_GRV
#define BP_EXCLAIM BP_EXLM
#define BP_SCOLON BP_SCLN
#define BP_COLON BP_COLN
#define BP_QUESTION BP_QUES
#define BP_QEST BP_QUES
#define BP_NON_BREAKING_SPACE BP_NBSP
#define BP_EN_DASH BP_NDSH
#define BP_EM_DASH BP_MDSH
#define BP_LESS BP_LABK
#define BP_GREATER BP_RABK
#define BP_GRTR BP_RABK
#define BP_LBRACKET BP_LBRC
#define BP_RBRACKET BP_RBRC
#define BP_CIRCUMFLEX BP_CIRC
#define BP_PLUS_MINUS BP_PLMN
#define BP_PSMS BP_PLMN
#define BP_MATH_MINUS BP_MMNS
#define BP_OBELUS BP_DIV
#define BP_OBEL BP_DIV
#define BP_DIVISION_SIGN BP_DIV
#define BP_DVSN BP_DIV
#define BP_TIMES BP_MUL
#define BP_TIMS BP_MUL
#define BP_DIFFERENT BP_NEQL
#define BP_DIFF BP_NEQL
#define BP_PERMILLE BP_PERM
#define BP_PMIL BP_PERM
#define BP_DEAD_ACUTE BP_ACUT
#define BP_DACT BP_ACUT
#define BP_AMPERSAND BP_AMPR
#define BP_OE_LIGATURE BP_OE
#define BP_DEAD_GRAVE BP_DGRV
#define BP_INVERTED_EXCLAIM BP_IEXL
#define BP_IXLM BP_IEXL
#define BP_DEAD_CARON BP_CARN
#define BP_DCAR BP_CARN
#define BP_DEAD_SLASH BP_DSLS
#define BP_DSLH BP_DSLS
#define BP_IJ_LIGATURE BP_IJ
#define BP_SCHWA BP_SCHW
#define BP_SCWA BP_SCHW
#define BP_DEAD_BREVE BP_BREV
#define BP_DBRV BP_BREV
#define BP_AE_LIGATURE BP_AE
#define BP_U_GRAVE BP_UGRV
#define BP_DEAD_TREMA BP_DIAE
#define BP_DTRM BP_DIAE
#define BP_TYPOGRAPHICAL_APOSTROPHE BP_COMM
#define BP_TAPO BP_COMM
#define BP_COPYRIGHT BP_COPY
#define BP_CPRT BP_COPY
#define BP_THORN BP_THRN
#define BP_SHARP_S BP_SS
#define BP_SRPS BP_SS
#define BP_REGISTERED_TRADEMARK BP_REGD
#define BP_RTM BP_REGD
#define BP_DEAD_TILDE BP_DTIL
#define BP_DTLD BP_DTIL
#define BP_DEAD_MACRON BP_MACR
#define BP_DMCR BP_MACR
#define BP_DEAD_CEDILLA BP_CEDL
#define BP_DCED BP_CEDL
#define BP_NONUS_SLASH BP_SLSH
#define BP_NUSL BP_SLSH
#define BP_BACKSLASH BP_BSLS
#define BP_LEFT_CURLY_BRACE BP_LCBR
#define BP_RIGHT_CURLY_BRACE BP_RCBR
#define BP_ELLIPSIS BP_ELLP
#define BP_ELPS BP_ELLP
#define BP_TILDE BP_TILD
#define BP_INVERTED_QUESTION BP_IQUE
#define BP_IQST BP_IQUE
#define BP_DEAD_RING BP_RNGA
#define BP_DRNG BP_RNGA
#define BP_DEAD_GREEK BP_DGRK
#define BP_DAGGER BP_DAGG
#define BP_DAGR BP_DAGG
#define BP_DEAD_OGONEK BP_OGON
#define BP_DOGO BP_OGON
#define BP_UNDERSCORE BP_UNDS
#define BP_PARAGRAPH BP_PARA
#define BP_PARG BP_PARA
#define BP_LOW_DOUBLE_QUOTE BP_DLQU
#define BP_LWQT BP_DLQU
#define BP_LEFT_DOUBLE_QUOTE BP_RDQU
#define BP_RIGHT_DOUBLE_QUOTE BP_RDQU
#define BP_LESS_OR_EQUAL BP_LEQL
#define BP_GREATER_OR_EQUAL BP_GEQL
#define BP_NEGATION BP_NOT
#define BP_NEGT BP_NOT
#define BP_ONE_QUARTER BP_QRTR
#define BP_1QRT BP_QRTR
#define BP_ONE_HALF BP_HALF
#define BP_1HLF BP_HALF
#define BP_THREE_QUARTERS BP_TQTR
#define BP_3QRT BP_TQTR
#define BP_MINUTES BP_PRIM
#define BP_MNUT BP_PRIM
#define BP_SECONDS BP_DPRM
#define BP_SCND BP_DPRM
#define BP_BROKEN_PIPE BP_BRKP
#define BP_BPIP BP_BRKP
#define BP_DEAD_DOUBLE_ACUTE BP_DACU
#define BP_DDCT BP_DACU
#define BP_SECTION BP_SECT
#define BP_GRAVE_BIS BP_GRV
#define BP_GRVB BP_GRV
#define BP_DEAD_DOT_ABOVE BP_DOTA
#define BP_DDTA BP_DOTA
#define BP_DEAD_CURRENCY BP_CURR
#define BP_DCUR BP_CURR
#define BP_DEAD_HORN BP_HORN
#define BP_DHRN BP_HORN
#define BP_LONG_S BP_LNGS
#define BP_TRADEMARK BP_TM
#define BP_ORDINAL_INDICATOR_O BP_MORD
#define BP_ORDO BP_MORD
#define BP_DEAD_COMMA BP_DCMM
#define BP_DCOM BP_DCMM
#define BP_LEFT_QUOTE BP_LSQU
#define BP_LQOT BP_LSQU
#define BP_RIGHT_QUOTE BP_RSQU
#define BP_RQOT BP_RSQU
#define BP_INTERPUNCT BP_MDDT
#define BP_IPCT BP_MDDT
#define BP_DEAD_HOOK_ABOVE BP_HOKA
#define BP_DHKA BP_HOKA
#define BP_DEAD_UNDERDOT BP_DOTB
#define BP_DUDT BP_DOTB
#define BP_DOUBLE_DAGGER BP_DDAG
#define BP_DDGR BP_DDAG
#define BP_ORDINAL_INDICATOR_A BP_FORD
#define BP_ORDA BP_FORD
#define BP_NARROW_NON_BREAKING_SPACE BP_NNBS
