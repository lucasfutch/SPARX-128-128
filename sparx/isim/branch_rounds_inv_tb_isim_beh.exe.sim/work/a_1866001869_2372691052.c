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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_rounds_inv_tb.vhd";



static void work_a_1866001869_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 7060);
    t5 = (t0 + 3496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7188);
    t5 = (t0 + 3560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 7316);
    t5 = (t0 + 3624);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 7444);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7572);
    t5 = (t0 + 3752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(103, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 128U);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 7700);
    t10 = 1;
    if (128U == 128U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(110, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t8 = (t0 + 7828);
    xsi_report(t8, 37U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 128U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 3496);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 128U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7865);
    t5 = (t0 + 3560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7993);
    t5 = (t0 + 3624);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 8121);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 8249);
    t5 = (t0 + 3752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(118, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 128U);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 8377);
    t10 = 1;
    if (128U == 128U)
        goto LAB30;

LAB31:    t10 = 0;

LAB32:    if (t10 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(128, ng0);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t8 = (t0 + 8505);
    xsi_report(t8, 37U, (unsigned char)2);
    goto LAB29;

LAB30:    t11 = 0;

LAB33:    if (t11 < 128U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB31;

LAB35:    t11 = (t11 + 1);
    goto LAB33;

LAB36:    goto LAB2;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

}


extern void work_a_1866001869_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1866001869_2372691052_p_0};
	xsi_register_didat("work_a_1866001869_2372691052", "isim/branch_rounds_inv_tb_isim_beh.exe.sim/work/a_1866001869_2372691052.didat");
	xsi_register_executes(pe);
}
