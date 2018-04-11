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

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 3752U);
    t7 = *((char **)t3);
    t3 = (t0 + 13468);
    t9 = 1;
    if (2U == 2U)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13470);
    t2 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t2 = 0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13472);
    t2 = 1;
    if (2U == 2U)
        goto LAB27;

LAB28:    t2 = 0;

LAB29:    if (t2 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13474);
    t2 = 1;
    if (2U == 2U)
        goto LAB35;

LAB36:    t2 = 0;

LAB37:    if (t2 != 0)
        goto LAB33;

LAB34:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(108, ng0);
    t13 = (t0 + 2472U);
    t14 = *((char **)t13);
    t13 = (t0 + 7216);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 128U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 12244U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 7280);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 7344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
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

LAB17:    xsi_set_current_line(112, ng0);
    t11 = (t0 + 2632U);
    t12 = *((char **)t11);
    t11 = (t0 + 7408);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 12244U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 7280);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 7344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
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

LAB25:    xsi_set_current_line(116, ng0);
    t11 = (t0 + 2792U);
    t12 = *((char **)t11);
    t11 = (t0 + 7472);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 12244U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t3, t1, 1);
    t7 = (t0 + 7280);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 7344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
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

LAB33:    xsi_set_current_line(120, ng0);
    t11 = (t0 + 2952U);
    t12 = *((char **)t11);
    t11 = (t0 + 7536);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 13476);
    t4 = (t0 + 7280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 7344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
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
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 13478);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB10:    t6 = (t0 + 13480);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB11:    t9 = (t0 + 13482);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB12:    t12 = (t0 + 13484);
    t14 = xsi_mem_cmp(t12, t3, 2U);
    if (t14 == 1)
        goto LAB8;

LAB13:
LAB9:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(138, ng0);

LAB17:    t2 = (t0 + 7056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB5:    xsi_set_current_line(139, ng0);
    t15 = (t0 + 7600);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = 1;
    xsi_driver_first_trans_fast(t15);
    goto LAB4;

LAB6:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 3;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 4;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB14:;
LAB15:    t3 = (t0 + 7056);
    *((int *)t3) = 0;
    goto LAB2;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}

static void work_a_3643414621_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 13486);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 12036U);
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
    t12 = (t0 + 3752U);
    t15 = *((char **)t12);
    t12 = (t0 + 12244U);
    t16 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t2, t6, t7, t15, t12);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t1, t16, t2, 1);
    t18 = (t0 + 7664);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 5U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 7072);
    *((int *)t23) = 1;

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

LAB0:    xsi_set_current_line(152, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7088);
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

LAB0:    xsi_set_current_line(153, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7792);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7104);
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

LAB0:    xsi_set_current_line(154, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 7856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7120);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3643414621_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(155, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7136);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3643414621_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643414621_3212880686_p_0,(void *)work_a_3643414621_3212880686_p_1,(void *)work_a_3643414621_3212880686_p_2,(void *)work_a_3643414621_3212880686_p_3,(void *)work_a_3643414621_3212880686_p_4,(void *)work_a_3643414621_3212880686_p_5,(void *)work_a_3643414621_3212880686_p_6};
	xsi_register_didat("work_a_3643414621_3212880686", "isim/encrypt_tb_isim_beh.exe.sim/work/a_3643414621_3212880686.didat");
	xsi_register_executes(pe);
}
