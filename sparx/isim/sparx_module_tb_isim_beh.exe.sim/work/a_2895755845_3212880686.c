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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_rounds_inv.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2895755845_3212880686_p_0(char *t0)
{
    char t4[16];
    char t10[16];
    char t15[16];
    char t20[16];
    char t25[16];
    char t30[16];
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 8328U);
    t7 = (t0 + 8344U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t0 + 8360U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t4, (char)97, t9, t12, (char)101);
    t13 = (t0 + 2472U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 8376U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t8, t10, (char)97, t14, t17, (char)101);
    t18 = (t0 + 2632U);
    t19 = *((char **)t18);
    t21 = ((IEEE_P_2592010699) + 4024);
    t22 = (t0 + 8392U);
    t18 = xsi_base_array_concat(t18, t20, t21, (char)97, t13, t15, (char)97, t19, t22, (char)101);
    t23 = (t0 + 2792U);
    t24 = *((char **)t23);
    t26 = ((IEEE_P_2592010699) + 4024);
    t27 = (t0 + 8408U);
    t23 = xsi_base_array_concat(t23, t25, t26, (char)97, t18, t20, (char)97, t24, t27, (char)101);
    t28 = (t0 + 2952U);
    t29 = *((char **)t28);
    t31 = ((IEEE_P_2592010699) + 4024);
    t32 = (t0 + 8424U);
    t28 = xsi_base_array_concat(t28, t30, t31, (char)97, t23, t25, (char)97, t29, t32, (char)101);
    t33 = (t0 + 3112U);
    t34 = *((char **)t33);
    t36 = ((IEEE_P_2592010699) + 4024);
    t37 = (t0 + 8440U);
    t33 = xsi_base_array_concat(t33, t35, t36, (char)97, t28, t30, (char)97, t34, t37, (char)101);
    t38 = (16U + 16U);
    t39 = (t38 + 16U);
    t40 = (t39 + 16U);
    t41 = (t40 + 16U);
    t42 = (t41 + 16U);
    t43 = (t42 + 16U);
    t44 = (t43 + 16U);
    t45 = (128U != t44);
    if (t45 == 1)
        goto LAB5;

LAB6:    t46 = (t0 + 4832);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t33, 128U);
    xsi_driver_first_trans_fast_port(t46);

LAB2:    t51 = (t0 + 4752);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(128U, t44, 0);
    goto LAB6;

}


extern void work_a_2895755845_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2895755845_3212880686_p_0};
	xsi_register_didat("work_a_2895755845_3212880686", "isim/sparx_module_tb_isim_beh.exe.sim/work/a_2895755845_3212880686.didat");
	xsi_register_executes(pe);
}
