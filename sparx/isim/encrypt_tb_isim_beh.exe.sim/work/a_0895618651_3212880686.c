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
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0895618651_3212880686_p_0(char *t0)
{
    char t18[16];
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
    char *t12;
    char *t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 3752U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t8);
    t3 = (t0 + 6000);
    t10 = (t3 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 6064);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 6128);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 6192);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 11743);
    t2 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t2 = 0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 11746);
    t2 = 1;
    if (3U == 3U)
        goto LAB22;

LAB23:    t2 = 0;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 6256);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 6320);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB12:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10032U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t18, t3, t1, 1);
    t7 = (t0 + 6384);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(105, ng0);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t11 = (t0 + 6256);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 6320);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 128U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    t14 = 0;

LAB17:    if (t14 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t7 = (t3 + t14);
    t10 = (t1 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t10))
        goto LAB15;

LAB19:    t14 = (t14 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 3272U);
    t12 = *((char **)t11);
    t11 = (t0 + 10016U);
    t13 = (t0 + 2472U);
    t15 = *((char **)t13);
    t13 = (t0 + 9936U);
    t16 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t18, t12, t11, t15, t13);
    t17 = (t18 + 12U);
    t19 = *((unsigned int *)t17);
    t20 = (1U * t19);
    t5 = (128U != t20);
    if (t5 == 1)
        goto LAB28;

LAB29:    t21 = (t0 + 6320);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 128U);
    xsi_driver_first_trans_fast_port(t21);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 11749);
    t4 = (t0 + 6384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB22:    t14 = 0;

LAB25:    if (t14 < 3U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t7 = (t3 + t14);
    t10 = (t1 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t10))
        goto LAB23;

LAB27:    t14 = (t14 + 1);
    goto LAB25;

LAB28:    xsi_size_not_matching(128U, t20, 0);
    goto LAB29;

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

LAB0:    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6448);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(150, ng0);

LAB11:    t2 = (t0 + 5904);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(151, ng0);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t6 = (t0 + 6448);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 5904);
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

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 11755);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 6512);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(154, ng0);

LAB11:    t2 = (t0 + 5920);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(155, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 6512);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 5920);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}


extern void work_a_0895618651_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0895618651_3212880686_p_0,(void *)work_a_0895618651_3212880686_p_1,(void *)work_a_0895618651_3212880686_p_2};
	xsi_register_didat("work_a_0895618651_3212880686", "isim/encrypt_tb_isim_beh.exe.sim/work/a_0895618651_3212880686.didat");
	xsi_register_executes(pe);
}
