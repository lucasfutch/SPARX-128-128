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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/key_schedule.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3643414621_3212880686_p_0(char *t0)
{
    char t19[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 12412);
    t4 = (t0 + 6696);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3592U);
    t7 = *((char **)t3);
    t3 = (t0 + 12402);
    t9 = 1;
    if (2U == 2U)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 12404);
    t2 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t2 = 0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 12406);
    t2 = 1;
    if (2U == 2U)
        goto LAB27;

LAB28:    t2 = 0;

LAB29:    if (t2 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 12408);
    t2 = 1;
    if (2U == 2U)
        goto LAB35;

LAB36:    t2 = 0;

LAB37:    if (t2 != 0)
        goto LAB33;

LAB34:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(79, ng0);
    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t13 = (t0 + 6632);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 128U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 11196U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 6696);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    t10 = 0;

LAB14:    if (t10 < 2U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t11 = (t7 + t10);
    t12 = (t3 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB12;

LAB16:    t10 = (t10 + 1);
    goto LAB14;

LAB17:    xsi_set_current_line(83, ng0);
    t11 = (t0 + 2472U);
    t12 = *((char **)t11);
    t11 = (t0 + 6760);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 11196U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 6696);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB19:    t10 = 0;

LAB22:    if (t10 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t7 = (t3 + t10);
    t8 = (t1 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB20;

LAB24:    t10 = (t10 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(87, ng0);
    t11 = (t0 + 2632U);
    t12 = *((char **)t11);
    t11 = (t0 + 6824);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 11196U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 6696);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB27:    t10 = 0;

LAB30:    if (t10 < 2U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t7 = (t3 + t10);
    t8 = (t1 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB28;

LAB32:    t10 = (t10 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(91, ng0);
    t11 = (t0 + 2792U);
    t12 = *((char **)t11);
    t11 = (t0 + 6888);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 12410);
    t4 = (t0 + 6696);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB35:    t10 = 0;

LAB38:    if (t10 < 2U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t7 = (t3 + t10);
    t8 = (t1 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB36;

LAB40:    t10 = (t10 + 1);
    goto LAB38;

}

static void work_a_3643414621_3212880686_p_1(char *t0)
{
    char t1[16];
    char t2[16];
    char t7[16];
    char t10[16];
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 12414);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 10988U);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t4, t9, (char)97, t3, t10, (char)101);
    t12 = (t0 + 3592U);
    t15 = *((char **)t12);
    t12 = (t0 + 11196U);
    t16 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t2, t6, t7, t15, t12);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t1, t16, t2, 1);
    t18 = (t0 + 6952);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 6U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 6488);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3643414621_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7016);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6504);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3643414621_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6520);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3643414621_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6536);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3643414621_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6552);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3643414621_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643414621_3212880686_p_0,(void *)work_a_3643414621_3212880686_p_1,(void *)work_a_3643414621_3212880686_p_2,(void *)work_a_3643414621_3212880686_p_3,(void *)work_a_3643414621_3212880686_p_4,(void *)work_a_3643414621_3212880686_p_5};
	xsi_register_didat("work_a_3643414621_3212880686", "isim/decrypt_tb_isim_beh.exe.sim/work/a_3643414621_3212880686.didat");
	xsi_register_executes(pe);
}
