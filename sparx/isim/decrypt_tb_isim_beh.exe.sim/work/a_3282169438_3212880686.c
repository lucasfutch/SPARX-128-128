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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/decrypt.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3282169438_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 4872U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 4552U);
    t7 = *((char **)t3);
    t3 = (t0 + 4392U);
    t8 = *((char **)t3);
    t3 = (t0 + 12476U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t3);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (128U * t11);
    t13 = (0U + t12);
    t14 = (t0 + 7224);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 128U);
    xsi_driver_first_trans_delta(t14, t13, 128U, 0LL);
    goto LAB6;

}

static void work_a_3282169438_3212880686_p_1(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 1832U);
    t8 = *((char **)t3);
    t3 = (t0 + 12204U);
    t9 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t8, t3, 1);
    t10 = (t0 + 7288);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 12476U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t3, t1, 1);
    t8 = (t0 + 7352);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 7416);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 128U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t1 = (t0 + 12460U);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t19 = (t18 - 0);
    t15 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 32, 1, t18);
    t20 = (128U * t15);
    t21 = (0 + t20);
    t8 = (t3 + t21);
    t9 = (t0 + 7608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 128U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 18835);
    t2 = 1;
    if (2U == 2U)
        goto LAB47;

LAB48:    t2 = 0;

LAB49:    if (t2 != 0)
        goto LAB44;

LAB46:
LAB45:
LAB9:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 18839);
    t2 = 1;
    if (4U == 4U)
        goto LAB56;

LAB57:    t2 = 0;

LAB58:    if (t2 != 0)
        goto LAB53;

LAB55:
LAB54:    goto LAB6;

LAB8:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t1 = (t0 + 18825);
    t6 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t6 = 0;

LAB16:    if (t6 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 18827);
    t2 = 1;
    if (2U == 2U)
        goto LAB22;

LAB23:    t2 = 0;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 18829);
    t2 = 1;
    if (2U == 2U)
        goto LAB30;

LAB31:    t2 = 0;

LAB32:    if (t2 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 18831);
    t2 = 1;
    if (2U == 2U)
        goto LAB38;

LAB39:    t2 = 0;

LAB40:    if (t2 != 0)
        goto LAB36;

LAB37:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(137, ng0);
    t11 = (t0 + 2792U);
    t12 = *((char **)t11);
    t11 = (t0 + 7480);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 128U);
    xsi_driver_first_trans_fast(t11);
    goto LAB12;

LAB14:    t15 = 0;

LAB17:    if (t15 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t9 = (t4 + t15);
    t10 = (t1 + t15);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB15;

LAB19:    t15 = (t15 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(139, ng0);
    t10 = (t0 + 2952U);
    t11 = *((char **)t10);
    t10 = (t0 + 7480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t11, 128U);
    xsi_driver_first_trans_fast(t10);
    goto LAB12;

LAB22:    t15 = 0;

LAB25:    if (t15 < 2U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB23;

LAB27:    t15 = (t15 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(141, ng0);
    t10 = (t0 + 3112U);
    t11 = *((char **)t10);
    t10 = (t0 + 7480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t11, 128U);
    xsi_driver_first_trans_fast(t10);
    goto LAB12;

LAB30:    t15 = 0;

LAB33:    if (t15 < 2U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB31;

LAB35:    t15 = (t15 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(143, ng0);
    t10 = (t0 + 3272U);
    t11 = *((char **)t10);
    t10 = (t0 + 7480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t11, 128U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 12220U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t3, t1, 1);
    t8 = (t0 + 7544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 18833);
    t4 = (t0 + 7288);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB38:    t15 = 0;

LAB41:    if (t15 < 2U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB39;

LAB43:    t15 = (t15 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(157, ng0);
    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 7672);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t11, 128U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 12220U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t3, t1, 1);
    t8 = (t0 + 7544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 18837);
    t4 = (t0 + 7288);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 4232U);
    t3 = *((char **)t1);
    t1 = (t0 + 12460U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t7, t3, t1, 4);
    t8 = (t0 + 7736);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast(t8);
    goto LAB45;

LAB47:    t15 = 0;

LAB50:    if (t15 < 2U)
        goto LAB51;
    else
        goto LAB49;

LAB51:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB48;

LAB52:    t15 = (t15 + 1);
    goto LAB50;

LAB53:    xsi_set_current_line(167, ng0);
    t10 = (t0 + 18843);
    t12 = (t0 + 7544);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t10, 4U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 7800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 18847);
    t4 = (t0 + 7352);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB54;

LAB56:    t15 = 0;

LAB59:    if (t15 < 4U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t8 = (t3 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB57;

LAB61:    t15 = (t15 + 1);
    goto LAB59;

}

static void work_a_3282169438_3212880686_p_2(char *t0)
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

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 18853);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 7864);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(181, ng0);

LAB11:    t2 = (t0 + 7128);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(182, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 7864);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 7128);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_3282169438_3212880686_p_3(char *t0)
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

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 18857);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 7928);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 128U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(185, ng0);

LAB11:    t2 = (t0 + 7144);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(186, ng0);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t6 = (t0 + 7928);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 128U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 7144);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}


extern void work_a_3282169438_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3282169438_3212880686_p_0,(void *)work_a_3282169438_3212880686_p_1,(void *)work_a_3282169438_3212880686_p_2,(void *)work_a_3282169438_3212880686_p_3};
	xsi_register_didat("work_a_3282169438_3212880686", "isim/decrypt_tb_isim_beh.exe.sim/work/a_3282169438_3212880686.didat");
	xsi_register_executes(pe);
}
