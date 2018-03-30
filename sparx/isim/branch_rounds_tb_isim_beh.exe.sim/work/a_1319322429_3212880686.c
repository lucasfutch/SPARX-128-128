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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/A_function.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_4109847776_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1319322429_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 5856U);
    t5 = ieee_p_1242562249_sub_4109847776_1035706684(IEEE_P_1242562249, t2, t4, t3, 9);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5872U);
    t8 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t5, t2, t7, t6);
    t9 = (t0 + 3760);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 16U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 3648);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1319322429_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3664);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1319322429_3212880686_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5872U);
    t5 = ieee_p_1242562249_sub_4109847776_1035706684(IEEE_P_1242562249, t2, t4, t3, 2);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 5920U);
    t8 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t5, t2, t7, t6);
    t9 = (t1 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t12 = (16U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 3888);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 16U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 3680);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t11, 0);
    goto LAB6;

}


extern void work_a_1319322429_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1319322429_3212880686_p_0,(void *)work_a_1319322429_3212880686_p_1,(void *)work_a_1319322429_3212880686_p_2};
	xsi_register_didat("work_a_1319322429_3212880686", "isim/branch_rounds_tb_isim_beh.exe.sim/work/a_1319322429_3212880686.didat");
	xsi_register_executes(pe);
}
