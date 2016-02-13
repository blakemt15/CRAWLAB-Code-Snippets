/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  SH2Tiny_Sample1EclipseV3                       */
/*      FILE         :  interrupt_handlers.c                           */
/*      DESCRIPTION  :  Interrupt Handler                              */
/*      CPU SERIES   :  SH2                                            */
/*      CPU TYPE     :  SH7047                                         */
/*  													               */
/*      This file is generated by KPIT Eclipse.                        */
/*  													               */
/***********************************************************************/                                                                    




#include "interrupt_handlers.h"
#include "iodefine.h"
#include "sci3.h"

// 2 Manual Reset PC
void INT_Manual_Reset_PC(void){  }
// 3 Manual Reset SP
void INT_Manual_Reset_SP(void){  }

// 4 Illegal code
void INT_Illegal_code(void){  }
// 5 Reserved

// 6 Illegal slot
void INT_Illegal_slot(void){  }
// 7 Reserved

// 8 Reserved

// 9 CPU Address error
void INT_CPU_Address(void){  }
// 10 DTC Address error
void INT_DTC_Address(void){  }
// 11 NMI
void INT_NMI(void){  }
// 12 User breakpoint trap
void INT_User_Break(void){  }
// 13 Reserved

// 14 H-UDI
void INT_H_UDI(void){  }
// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
void INT_TRAPA32(void){  }
// 33 TRAPA (User Vecter)
void INT_TRAPA33(void){  }
// 34 TRAPA (User Vecter)
void INT_TRAPA34(void){  }
// 35 TRAPA (User Vecter)
void INT_TRAPA35(void){  }
// 36 TRAPA (User Vecter)
void INT_TRAPA36(void){  }
// 37 TRAPA (User Vecter)
void INT_TRAPA37(void){  }
// 38 TRAPA (User Vecter)
void INT_TRAPA38(void){  }
// 39 TRAPA (User Vecter)
void INT_TRAPA39(void){  }
// 40 TRAPA (User Vecter)
void INT_TRAPA40(void){  }
// 41 TRAPA (User Vecter)
void INT_TRAPA41(void){  }
// 42 TRAPA (User Vecter)
void INT_TRAPA42(void){  }
// 43 TRAPA (User Vecter)
void INT_TRAPA43(void){  }
// 44 TRAPA (User Vecter)
void INT_TRAPA44(void){  }
// 45 TRAPA (User Vecter)
void INT_TRAPA45(void){  }
// 46 TRAPA (User Vecter)
void INT_TRAPA46(void){  }
// 47 TRAPA (User Vecter)
void INT_TRAPA47(void){  }
// 48 TRAPA (User Vecter)
void INT_TRAPA48(void){  }
// 49 TRAPA (User Vecter)
void INT_TRAPA49(void){  }
// 50 TRAPA (User Vecter)
void INT_TRAPA50(void){  }
// 51 TRAPA (User Vecter)
void INT_TRAPA51(void){  }
// 52 TRAPA (User Vecter)
void INT_TRAPA52(void){  }
// 53 TRAPA (User Vecter)
void INT_TRAPA53(void){  }
// 54 TRAPA (User Vecter)
void INT_TRAPA54(void){  }
// 55 TRAPA (User Vecter)
void INT_TRAPA55(void){  }
// 56 TRAPA (User Vecter)
void INT_TRAPA56(void){  }
// 57 TRAPA (User Vecter)
void INT_TRAPA57(void){  }
// 58 TRAPA (User Vecter)
void INT_TRAPA58(void){  }
// 59 TRAPA (User Vecter)
void INT_TRAPA59(void){  }
// 60 TRAPA (User Vecter)
void INT_TRAPA60(void){  }
// 61 TRAPA (User Vecter)
void INT_TRAPA61(void){  }
// 62 TRAPA (User Vecter)
void INT_TRAPA62(void){  }
// 63 TRAPA (User Vecter)
void INT_TRAPA63(void){  }
// 64 Interrupt IRQ0
void INT_IRQ0(void){  }
// 65 Interrupt IRQ1
void INT_IRQ1(void){  }
// 66 Interrupt IRQ2
void INT_IRQ2(void){  }
// 67 Interrupt IRQ3
void INT_IRQ3(void){  }
// 68 Reserved

// 69 Reserved

// 70 Reserved

// 71 Reserved

// 72 Reserved

// 73 Reserved

// 74 Reserved

// 75 Reserved

// 76 Reserved

// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 Reserved

// 81 Reserved

// 82 Reserved

// 83 Reserved

// 84 Reserved

// 85 Reserved

// 86 Reserved

// 87 Reserved

// 88 MTU0 TGIA0
void INT_MTU0_TGIA0(void){  }
// 89 MTU0 TGIB0
void INT_MTU0_TGIB0(void){  }
// 90 MTU0 TGIC0
void INT_MTU0_TGIC0(void){  }
// 91 MTU0 TGID0
void INT_MTU0_TGID0(void){  }
// 92 MTU0 TCIV0
void INT_MTU0_TCIV0(void){  }
// 93 Reserved

// 94 Reserved

// 95 Reserved

// 96 MTU1 TGIA1
void INT_MTU1_TGIA1(void){  }
// 97 MTU1 TGIB1
void INT_MTU1_TGIB1(void){  }
// 98 Reserved

// 99 Reserved

// 100 MTU1 TCIV1
void INT_MTU1_TCIV1(void){  }
// 101 MTU1 TCIU1
void INT_MTU1_TCIU1(void){  }
// 102 Reserved

// 103 Reserved

// 104 MTU2 TGIA2
void INT_MTU2_TGIA2(void){  }
// 105 MTU2 TGIB2
void INT_MTU2_TGIB2(void){  }
// 106 Reserved

// 107 Reserved

// 108 MTU2 TCIV2
void INT_MTU2_TCIV2(void){  }
// 109 MTU2 TCIU2
void INT_MTU2_TCIU2(void){  }
// 110 Reserved

// 111 Reserved

// 112 MTU3 TGIA3
void INT_MTU3_TGIA3(void){  }
// 113 MTU3 TGIB3
void INT_MTU3_TGIB3(void){  }
// 114 MTU3 TGIC3
void INT_MTU3_TGIC3(void){  }
// 115 MTU3 TGID3
void INT_MTU3_TGID3(void){  }
// 116 MTU3 TCIV3
void INT_MTU3_TCIV3(void){  }
// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 MTU4 TGIA4
void INT_MTU4_TGIA4(void){  }
// 121 MTU4 TGIB4
void INT_MTU4_TGIB4(void){  }
// 122 MTU4 TGIC4
void INT_MTU4_TGIC4(void){  }
// 123 MTU4 TGID4
void INT_MTU4_TGID4(void){  }
// 124 MTU4 TCIV4
void INT_MTU4_TCIV4(void){  }
// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 Reserved

// 129 Reserved

// 130 Reserved

// 131 Reserved

// 132 Reserved

// 133 Reserved

// 134 Reserved

// 135 Reserved

// 136 A/D ADI0
void INT_ADI0(void){  }
// 137 A/D ADI1
void INT_ADI1(void){  }
// 138 Reserved

// 139 Reserved

// 140 DTC SWDTEND
void INT_DTC_SWDTEND(void){  }
// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 CMT CMT0

void INT_CMT_CMT0(void)
{
	/*add your code here*/
}

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 CMT CMT1
//CMT has been moved to the main to facilitate the use of the interrupt for control
//void INT_CMT_CMT1(void){  }

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 WDT ITI
void INT_WDT_ITI(void){  }
// 153 Reserved

// 154 Reserved

// 155 Reserved

// 156 I/O MTUOEI
void INT_MTUOEI(void){  }
// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 Reserved

// 161 Reserved

// 162 Reserved

// 163 Reserved

// 164 Reserved

// 165 Reserved

// 166 Reserved

// 167 Reserved

// 168 SCI2 ERI2
void INT_SCI2_ERI2(void){  }
// 169 SCI2 RXI2
void INT_SCI2_RXI2(void){  }
// 170 SCI2 TXI2
void INT_SCI2_TXI2(void){  }
// 171 SCI2 TEI2
void INT_SCI2_TEI2(void){  }
// 172 SCI3 ERI3
void INT_SCI3_ERI3(void) {
	SCI3.SSR.BYTE &= 0x00;
}
// 173 SCI3 RXI3
void INT_SCI3_RXI3(void) {
	static short lnum=0,i;
	unsigned char sci3_rdata;
	sci3_rdata = SCI3.RDR;
	SCI3.SSR.BYTE &= ~0x40;
	data=sci3_rdata;
}
// 174 SCI3 TXI3
void INT_SCI3_TXI3(void) {
	SCI3.SSR.BIT.TDRE = 0;
}
// 175 SCI3 TEI3
void INT_SCI3_TEI3(void) {
	SCI3.SCR.BYTE	&= ~0x04;
}
// 176 SCI4 ERI4
void INT_SCI4_ERI4(void){  }
// 177 SCI4 RXI4
void INT_SCI4_RXI4(void){  }
// 178 SCI4 TXI4
void INT_SCI4_TXI4(void){  }
// 179 SCI4 TEI4
void INT_SCI4_TEI4(void){  }
// 180 MMT TGIM
void INT_MMT_TGIM(void){  }
// 181 MMT TGIN
void INT_MMT_TGIN(void){  }
// 182 Reserved

// 183 Reserved

// 184 A/D2 ADI2
void INT_ADI2(void){  }
// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 Reserved

// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 Reserved

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 Reserved

// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 I/O MMTOEI
void INT_MMTOEI(void){  }
// 201 Reserved

// 202 Reserved

// 203 Reserved

// 204 Reserved

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 HCAN2 ERS1
void INT_HCAN2_ERS1(void){  }
// 209 HCAN2 OVR1
void INT_HCAN2_OVR1(void){  }
// 210 HCAN2 RM1
void INT_HCAN2_RM1(void){  }
// 211 HCAN2 SLE1
void INT_HCAN2_SLE1(void){  }
// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 Reserved

// 217 Reserved

// 218 Reserved

// 219 Reserved

// 220 Reserved

// 221 Reserved

// 222 Reserved

// 223 Reserved

// 224 Reserved

// 225 Reserved

// 226 Reserved

// 227 Reserved

// 228 Reserved

// 229 Reserved

// 230 Reserved

// 231 Reserved

// 232 Reserved

// 233 Reserved

// 234 Reserved

// 235 Reserved

// 236 Reserved

// 237 Reserved

// 238 Reserved

// 239 Reserved

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved


// Dummy
void Dummy(void){  }
