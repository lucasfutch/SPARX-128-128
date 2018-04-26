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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/step_round_inv.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1297897030_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 6620U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 6524U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (16U != t9);
    if (t10 == 1)
        goto LAB2;

LAB3:    t11 = (t0 + 4032);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6636U);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 6540U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (16U != t9);
    if (t10 == 1)
        goto LAB4;

LAB5:    t11 = (t0 + 4096);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast_port(t11);
    t2 = (t0 + 3952);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(16U, t9, 0);
    goto LAB3;

LAB4:    xsi_size_not_matching(16U, t9, 0);
    goto LAB5;

}


extern void work_a_1297897030_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1297897030_3212880686_p_0};
	xsi_register_didat("work_a_1297897030_3212880686", "isim/decrypt_tb_isim_beh.exe.sim/work/a_1297897030_3212880686.didat");
	xsi_register_executes(pe);
}
