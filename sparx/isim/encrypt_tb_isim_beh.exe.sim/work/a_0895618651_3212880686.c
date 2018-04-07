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
    char t10[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3112U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 10000);
    t4 = (t0 + 5464);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast(t4);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2792U);
    t11 = *((char **)t3);
    t3 = (t0 + 8796U);
    t12 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t10, t11, t3, 1);
    t13 = (t0 + 5464);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 3U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 9994);
    t2 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t2 = 0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(91, ng0);
    t12 = (t0 + 9997);
    t14 = (t0 + 5464);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t12, 3U);
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    t18 = 0;

LAB17:    if (t18 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t7 = (t3 + t18);
    t11 = (t1 + t18);
    if (*((unsigned char *)t7) != *((unsigned char *)t11))
        goto LAB15;

LAB19:    t18 = (t18 + 1);
    goto LAB17;

}

static void work_a_0895618651_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 10003);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(101, ng0);

LAB11:    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(102, ng0);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t6 = (t0 + 5528);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 5352);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_0895618651_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 10006);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 5592);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(105, ng0);

LAB11:    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(106, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5592);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 5368);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_0895618651_3212880686_p_3(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 10009);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 128U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(109, ng0);

LAB13:    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(110, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t7 = (t0 + 8780U);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 8716U);
    t11 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t6, t8, t7, t10, t9);
    t12 = (t6 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (128U != t14);
    if (t15 == 1)
        goto LAB9;

LAB10:    t16 = (t0 + 5656);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 128U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB4;

LAB8:;
LAB9:    xsi_size_not_matching(128U, t14, 0);
    goto LAB10;

LAB11:    t3 = (t0 + 5384);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_0895618651_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0895618651_3212880686_p_0,(void *)work_a_0895618651_3212880686_p_1,(void *)work_a_0895618651_3212880686_p_2,(void *)work_a_0895618651_3212880686_p_3};
	xsi_register_didat("work_a_0895618651_3212880686", "isim/encrypt_tb_isim_beh.exe.sim/work/a_0895618651_3212880686.didat");
	xsi_register_executes(pe);
}
