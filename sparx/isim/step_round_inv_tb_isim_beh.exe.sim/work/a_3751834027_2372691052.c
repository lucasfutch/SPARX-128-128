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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/step_round_inv_tb.vhd";



static void work_a_3751834027_2372691052_p_0(char *t0)
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

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3040);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6396);
    t5 = (t0 + 3616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6412);
    t5 = (t0 + 3680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6428);
    t5 = (t0 + 3744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6444);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(103, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3040);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 6460);
    t10 = 1;
    if (16U == 16U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 6500);
    t10 = 1;
    if (16U == 16U)
        goto LAB22;

LAB23:    t10 = 0;

LAB24:    if (t10 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(116, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3040);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t8 = (t0 + 6476);
    xsi_report(t8, 24U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 16U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    t8 = (t0 + 6516);
    xsi_report(t8, 24U, (unsigned char)2);
    goto LAB21;

LAB22:    t11 = 0;

LAB25:    if (t11 < 16U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB23;

LAB27:    t11 = (t11 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6540);
    t5 = (t0 + 3616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 6556);
    t5 = (t0 + 3680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 6572);
    t5 = (t0 + 3744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6588);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(125, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3040);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 6604);
    t10 = 1;
    if (16U == 16U)
        goto LAB38;

LAB39:    t10 = 0;

LAB40:    if (t10 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 6644);
    t10 = 1;
    if (16U == 16U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(142, ng0);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t8 = (t0 + 6620);
    xsi_report(t8, 24U, (unsigned char)2);
    goto LAB37;

LAB38:    t11 = 0;

LAB41:    if (t11 < 16U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB39;

LAB43:    t11 = (t11 + 1);
    goto LAB41;

LAB44:    t8 = (t0 + 6660);
    xsi_report(t8, 24U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 16U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    goto LAB2;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

}


extern void work_a_3751834027_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3751834027_2372691052_p_0};
	xsi_register_didat("work_a_3751834027_2372691052", "isim/step_round_inv_tb_isim_beh.exe.sim/work/a_3751834027_2372691052.didat");
	xsi_register_executes(pe);
}
