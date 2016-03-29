/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  SH2Tiny_Sample1EclipseV3                       */
/*      FILE         :  vector_table.c                                 */
/*      DESCRIPTION  :  Vector Table                                   */
/*      CPU SERIES   :  SH2                                            */
/*      CPU TYPE     :  SH7047                                         */
/*  													               */
/*      This file is generated by KPIT Eclipse.                        */
/*  													               */
/***********************************************************************/ 
                                                                           



#include "interrupt_handlers.h"

typedef void (*fp) (void);
extern void PowerON_Reset (void);
extern void stack (void);

#define VECT_SECT          __attribute__ ((section (".vects")))

const void  *HardwareVectors[] VECT_SECT  = {
//;<<VECTOR DATA PowerON_Reset  (POWER ON RESET)>>
//;0 Power On Reset PC
     PowerON_Reset ,
//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP
    (fp)stack,
//;<<VECTOR DATA PowerON_Reset  (MANUAL RESET)>>
//;2 Manual Reset PC
    INT_Manual_Reset_PC,
//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP
    INT_Manual_Reset_SP,
// 4 Illegal code
     INT_Illegal_code,
// 5 Reserved
    (fp)0,
// 6 Illegal slot
     INT_Illegal_slot,
// 7 Reserved
    (fp)0,
// 8 Reserved
    (fp)0,
// 9 CPU Address error
     INT_CPU_Address,
// 10 DTC Address error
     INT_DTC_Address,
// 11 NMI
     INT_NMI,
// 12 User breakpoint trap
     INT_User_Break,
// 13 Reserved
    (fp)0,
// 14 H-UDI
     INT_H_UDI,
// 15 Reserved
    (fp)0,
// 16 Reserved
    (fp)0,
// 17 Reserved
    (fp)0,
// 18 Reserved
    (fp)0,
// 19 Reserved
    (fp)0,
// 20 Reserved
    (fp)0,
// 21 Reserved
    (fp)0,
// 22 Reserved
    (fp)0,
// 23 Reserved
    (fp)0,
// 24 Reserved
    (fp)0,
// 25 Reserved
    (fp)0,
// 26 Reserved
    (fp)0,
// 27 Reserved
    (fp)0,
// 28 Reserved
    (fp)0,
// 29 Reserved
    (fp)0,
// 30 Reserved
    (fp)0,
// 31 Reserved
    (fp)0,
// 32 TRAPA (User Vecter)
     INT_TRAPA32,
// 33 TRAPA (User Vecter)
     INT_TRAPA33,
// 34 TRAPA (User Vecter)
     INT_TRAPA34,
// 35 TRAPA (User Vecter)
     INT_TRAPA35,
// 36 TRAPA (User Vecter)
     INT_TRAPA36,
// 37 TRAPA (User Vecter)
     INT_TRAPA37,
// 38 TRAPA (User Vecter)
     INT_TRAPA38,
// 39 TRAPA (User Vecter)
     INT_TRAPA39,
// 40 TRAPA (User Vecter)
     INT_TRAPA40,
// 41 TRAPA (User Vecter)
     INT_TRAPA41,
// 42 TRAPA (User Vecter)
     INT_TRAPA42,
// 43 TRAPA (User Vecter)
     INT_TRAPA43,
// 44 TRAPA (User Vecter)
     INT_TRAPA44,
// 45 TRAPA (User Vecter)
     INT_TRAPA45,
// 46 TRAPA (User Vecter)
     INT_TRAPA46,
// 47 TRAPA (User Vecter)
     INT_TRAPA47,
// 48 TRAPA (User Vecter)
     INT_TRAPA48,
// 49 TRAPA (User Vecter)
     INT_TRAPA49,
// 50 TRAPA (User Vecter)
     INT_TRAPA50,
// 51 TRAPA (User Vecter)
     INT_TRAPA51,
// 52 TRAPA (User Vecter)
     INT_TRAPA52,
// 53 TRAPA (User Vecter)
     INT_TRAPA53,
// 54 TRAPA (User Vecter)
     INT_TRAPA54,
// 55 TRAPA (User Vecter)
     INT_TRAPA55,
// 56 TRAPA (User Vecter)
     INT_TRAPA56,
// 57 TRAPA (User Vecter)
     INT_TRAPA57,
// 58 TRAPA (User Vecter)
     INT_TRAPA58,
// 59 TRAPA (User Vecter)
     INT_TRAPA59,
// 60 TRAPA (User Vecter)
     INT_TRAPA60,
// 61 TRAPA (User Vecter)
     INT_TRAPA61,
// 62 TRAPA (User Vecter)
     INT_TRAPA62,
// 63 TRAPA (User Vecter)
     INT_TRAPA63,
// 64 Interrupt IRQ0
     INT_IRQ0,
// 65 Interrupt IRQ1
     INT_IRQ1,
// 66 Interrupt IRQ2
     INT_IRQ2,
// 67 Interrupt IRQ3
     INT_IRQ3,
// 68 Reserved
    (fp)0,
// 69 Reserved
    (fp)0,
// 70 Reserved
    (fp)0,
// 71 Reserved
    (fp)0,
// 72 Reserved
    (fp)0,
// 73 Reserved
    (fp)0,
// 74 Reserved
    (fp)0,
// 75 Reserved
    (fp)0,
// 76 Reserved
    (fp)0,
// 77 Reserved
    (fp)0,
// 78 Reserved
    (fp)0,
// 79 Reserved
    (fp)0,
// 80 Reserved
    (fp)0,
// 81 Reserved
    (fp)0,
// 82 Reserved
    (fp)0,
// 83 Reserved
    (fp)0,
// 84 Reserved
    (fp)0,
// 85 ReservedB
    (fp)0,
// 86 Reserved
    (fp)0,
// 87 Reserved
    (fp)0,
// 88 MTU0 TGIA0
     INT_MTU0_TGIA0,
// 89 MTU0 TGIB0
     INT_MTU0_TGIB0,
// 90 MTU0 TGIC0
     INT_MTU0_TGIC0,
// 91 MTU0 TGID0
     INT_MTU0_TGID0,
// 92 MTU0 TCIV0
     INT_MTU0_TCIV0,
// 93 Reserved
    (fp)0,
// 94 Reserved
    (fp)0,
// 95 Reserved
    (fp)0,
// 96 MTU1 TGIA1
     INT_MTU1_TGIA1,
// 97 MTU1 TGIB1
     INT_MTU1_TGIB1,
// 98 Reserved
    (fp)0,
// 99 Reserved
    (fp)0,
// 100 MTU1 TCIV1
     INT_MTU1_TCIV1,
// 101 MTU1 TCIU1
     INT_MTU1_TCIU1,
// 102 Reserved
    (fp)0,
// 103 Reserved
    (fp)0,
// 104 MTU2 TGIA2
     INT_MTU2_TGIA2,
// 105 MTU2 TGIB2
     INT_MTU2_TGIB2,
// 106 Reserved
    (fp)0,
// 107 Reserved
    (fp)0,
// 108 MTU2 TCIV2
     INT_MTU2_TCIV2,
// 109 MTU2 TCIU2
     INT_MTU2_TCIU2,
// 110 Reserved
    (fp)0,
// 111 Reserved
    (fp)0,
// 112 MTU3 TGIA3
     INT_MTU3_TGIA3,
// 113 MTU3 TGIB3
     INT_MTU3_TGIB3,
// 114 MTU3 TGIC3
     INT_MTU3_TGIC3,
// 115 MTU3 TGID3
     INT_MTU3_TGID3,
// 116 MTU3 TCIV3
     INT_MTU3_TCIV3,
// 117 Reserved
    (fp)0,
// 118 Reserved
    (fp)0,
// 119 Reserved
    (fp)0,
// 120 MTU4 TGIA4
     INT_MTU4_TGIA4,
// 121 MTU4 TGIB4
     INT_MTU4_TGIB4,
// 122 MTU4 TGIC4
     INT_MTU4_TGIC4,
// 123 MTU4 TGID4
     INT_MTU4_TGID4,
// 124 MTU4 TCIV4
     INT_MTU4_TCIV4,
// 125 Reserved
    (fp)0,
// 126 Reserved
    (fp)0,
// 127 Reserved
    (fp)0,
// 128 Reserved
    (fp)0,
// 129 Reserved
    (fp)0,
// 130 Reserved
    (fp)0,
// 131 Reserved
    (fp)0,
// 132 Reserved
    (fp)0,
// 133 Reserved
    (fp)0,
// 134 Reserved
    (fp)0,
// 135 Reserved
    (fp)0,
// 136 A/D ADI0
     INT_ADI0,
// 137 A/D ADI1
     INT_ADI1,
// 138 Reserved
    (fp)0,
// 139 Reserved
    (fp)0,
// 140 DTC SWDTEND
     INT_DTC_SWDTEND,
// 141 Reserved
    (fp)0,
// 142 Reserved
    (fp)0,
// 143 Reserved
    (fp)0,
// 144 CMT CMT0
     INT_CMT_CMT0,
// 145 Reserved
    (fp)0,
// 146 Reserved
    (fp)0,
// 147 Reserved
    (fp)0,
// 148 CMT CMT1
     INT_CMT_CMT1,
// 149 Reserved
    (fp)0,
// 150 Reserved
    (fp)0,
// 151 Reserved
    (fp)0,
// 152 WDT ITI
     INT_WDT_ITI,
// 153 Reserved
    (fp)0,
// 154 Reserved
    (fp)0,
// 155 Reserved
    (fp)0,
// 156 I/O MTUOEI
     INT_MTUOEI,
// 157 Reserved
    (fp)0,
// 158 Reserved
    (fp)0,
// 159 Reserved
    (fp)0,
// 160 Reserved
    (fp)0,
// 161 Reserved
    (fp)0,
// 162 Reserved
    (fp)0,
// 163 Reserved
    (fp)0,
// 164 Reserved
    (fp)0,
// 165 Reserved
    (fp)0,
// 166 Reserved
    (fp)0,
// 167 Reserved
    (fp)0,
// 168 SCI2 ERI2
     INT_SCI2_ERI2,
// 169 SCI2 RXI2
     INT_SCI2_RXI2,
// 170 SCI2 TXI2
     INT_SCI2_TXI2,
// 171 SCI2 TEI2
     INT_SCI2_TEI2,
// 172 SCI3 ERI3
     INT_SCI3_ERI3,
// 173 SCI3 RXI3
     INT_SCI3_RXI3,
// 174 SCI3 TXI3
     INT_SCI3_TXI3,
// 175 SCI3 TEI3
     INT_SCI3_TEI3,
// 176 SCI4 ERI4
     INT_SCI4_ERI4,
// 177 SCI4 RXI4
     INT_SCI4_RXI4,
// 178 SCI4 TXI4
     INT_SCI4_TXI4,
// 179 SCI4 TEI4
     INT_SCI4_TEI4,
// 180 MMT TGIM
     INT_MMT_TGIM,
// 181 MMT TGIN
     INT_MMT_TGIN,
// 182 Reserved
    (fp)0,
// 183 Reserved
    (fp)0,
// 184 A/D2 ADI2
     INT_ADI2,
// 185 Reserved
    (fp)0,
// 186 Reserved
    (fp)0,
// 187 Reserved
    (fp)0,
// 188 Reserved
    (fp)0,
// 189 Reserved
    (fp)0,
// 190 Reserved
    (fp)0,
// 191 Reserved
    (fp)0,
// 192 Reserved
    (fp)0,
// 193 Reserved
    (fp)0,
// 194 Reserved
    (fp)0,
// 195 Reserved
    (fp)0,
// 196 Reserved
    (fp)0,
// 197 Reserved
    (fp)0,
// 198 Reserved
    (fp)0,
// 199 Reserved
    (fp)0,
// 200 I/O MMTOEI
     INT_MMTOEI,
// 201 Reserved
    (fp)0,
// 202 Reserved
    (fp)0,
// 203 Reserved
    (fp)0,
// 204 Reserved
    (fp)0,
// 205 Reserved
    (fp)0,
// 206 Reserved
    (fp)0,
// 207 Reserved
    (fp)0,
// 208 HCAN2 ERS1
     INT_HCAN2_ERS1,
// 209 HCAN2 OVR1
     INT_HCAN2_OVR1,
// 210 HCAN2 RM1
     INT_HCAN2_RM1,
// 211 HCAN2 SLE1
     INT_HCAN2_SLE1,
// 212 Reserved
    (fp)0,
// 213 Reserved
    (fp)0,
// 214 Reserved
    (fp)0,
// 215 Reserved
    (fp)0,
// 216 Reserved
    (fp)0,
// 217 Reserved
    (fp)0,
// 218 Reserved
    (fp)0,
// 219 Reserved
    (fp)0,
// 220 Reserved
    (fp)0,
// 221 Reserved
    (fp)0,
// 222 Reserved
    (fp)0,
// 223 Reserved
    (fp)0,
// 224 Reserved
    (fp)0,
// 225 Reserved
    (fp)0,
// 226 Reserved
    (fp)0,
// 227 Reserved
    (fp)0,
// 228 Reserved
    (fp)0,
// 229 Reserved
    (fp)0,
// 230 Reserved
    (fp)0,
// 231 Reserved
    (fp)0,
// 232 Reserved
    (fp)0,
// 233 Reserved
    (fp)0,
// 234 Reserved
    (fp)0,
// 235 Reserved
    (fp)0,
// 236 Reserved
    (fp)0,
// 237 Reserved
    (fp)0,
// 238 Reserved
    (fp)0,
// 239 Reserved
    (fp)0,
// 240 Reserved
    (fp)0,
// 241 Reserved
    (fp)0,
// 242 Reserved
    (fp)0,
// 243 Reserved
    (fp)0,
// 244 Reserved
    (fp)0,
// 245 Reserved
    (fp)0,
// 246 Reserved
    (fp)0,
// 247 Reserved
    (fp)0,
// 248 Reserved
    (fp)0,
// 249 Reserved
    (fp)0,
// 250 Reserved
    (fp)0,
// 251 Reserved
    (fp)0,
// 252 Reserved
    (fp)0,
// 253 Reserved
    (fp)0,
// 254 Reserved
    (fp)0,
// 255 Reserved
    (fp)0
};

