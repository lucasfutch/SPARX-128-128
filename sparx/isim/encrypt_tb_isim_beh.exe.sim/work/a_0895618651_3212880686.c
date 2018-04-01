/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/encrypt.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0895618651_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2632U);
    t8 = *((char **)t3);
    t3 = (t0 + 7568U);
    t9 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t8, t3, 1);
    t10 = (t0 + 4512);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 3U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 8765);
    t2 = 1;
    if (3U == 3U)
        goto LAB11;

LAB12:    t2 = 0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 8771);
    t2 = 1;
    if (3U == 3U)
        goto LAB19;

LAB20:    t2 = 0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 4576);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 4640);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 8774);
    t2 = 1;
    if (3U == 3U)
        goto LAB28;

LAB29:    t2 = 0;

LAB30:    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 4704);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB26:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(90, ng0);
    t10 = (t0 + 8768);
    t12 = (t0 + 4512);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t10, 3U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    t15 = 0;

LAB14:    if (t15 < 3U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB12;

LAB16:    t15 = (t15 + 1);
    goto LAB14;

LAB17:    xsi_set_current_line(93, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 4576);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t11, 128U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4640);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB19:    t15 = 0;

LAB22:    if (t15 < 3U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB20;

LAB24:    t15 = (t15 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(101, ng0);
    t10 = (t0 + 2472U);
    t11 = *((char **)t10);
    t10 = (t0 + 7552U);
    t12 = (t0 + 1832U);
    t13 = *((char **)t12);
    t12 = (t0 + 7488U);
    t14 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t7, t11, t10, t13, t12);
    t16 = (t7 + 12U);
    t18 = *((unsigned int *)t16);
    t19 = (1U * t18);
    t5 = (128U != t19);
    if (t5 == 1)
        goto LAB34;

LAB35:    t17 = (t0 + 4704);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 128U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB26;

LAB28:    t15 = 0;

LAB31:    if (t15 < 3U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB29;

LAB33:    t15 = (t15 + 1);
    goto LAB31;

LAB34:    xsi_size_not_matching(128U, t19, 0);
    goto LAB35;

}


extern void work_a_0895618651_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0895618651_3212880686_p_0};
	xsi_register_didat("work_a_0895618651_3212880686", "isim/encrypt_tb_isim_beh.exe.sim/work/a_0895618651_3212880686.didat");
	xsi_register_executes(pe);
}
