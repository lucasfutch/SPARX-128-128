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
    char t23[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4840);
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

LAB5:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3112U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2792U);
    t10 = *((char **)t3);
    t3 = (t0 + 9366);
    t12 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    if (t12 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 8168U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t23, t3, t1, 1);
    t7 = (t0 + 4936);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 3U);
    xsi_driver_first_trans_fast(t7);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(89, ng0);
    t16 = (t0 + 9369);
    t18 = (t0 + 4936);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 3U);
    xsi_driver_first_trans_fast(t18);
    goto LAB12;

LAB14:    t13 = 0;

LAB17:    if (t13 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t10 + t13);
    t15 = (t3 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

}

static void work_a_0895618651_3212880686_p_1(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9372);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9375);
    t4 = 1;
    if (3U == 3U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5064);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5128);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 4856);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t8 = (t0 + 5000);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 128U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5064);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 128U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(106, ng0);
    t8 = (t0 + 2632U);
    t9 = *((char **)t8);
    t8 = (t0 + 8152U);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t10 = (t0 + 8088U);
    t12 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t14, t9, t8, t11, t10);
    t13 = (t14 + 12U);
    t15 = *((unsigned int *)t13);
    t16 = (1U * t15);
    t17 = (128U != t16);
    if (t17 == 1)
        goto LAB19;

LAB20:    t18 = (t0 + 5128);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 128U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 3U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_size_not_matching(128U, t16, 0);
    goto LAB20;

}


extern void work_a_0895618651_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0895618651_3212880686_p_0,(void *)work_a_0895618651_3212880686_p_1};
	xsi_register_didat("work_a_0895618651_3212880686", "isim/encrypt_tb_isim_beh.exe.sim/work/a_0895618651_3212880686.didat");
	xsi_register_executes(pe);
}
