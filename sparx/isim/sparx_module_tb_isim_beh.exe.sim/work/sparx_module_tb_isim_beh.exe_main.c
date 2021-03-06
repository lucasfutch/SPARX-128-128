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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *IEEE_P_1242562249;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_1319322429_3212880686_init();
    work_a_0917142430_3212880686_init();
    work_a_3643414621_3212880686_init();
    work_a_0410025212_3212880686_init();
    work_a_2733400542_3212880686_init();
    work_a_3171454166_3212880686_init();
    work_a_3377299185_3212880686_init();
    work_a_0895618651_3212880686_init();
    work_a_0221607791_3212880686_init();
    work_a_4294944431_3212880686_init();
    work_a_1297897030_3212880686_init();
    work_a_1114877877_3212880686_init();
    work_a_2895755845_3212880686_init();
    work_a_3282169438_3212880686_init();
    work_a_3781532485_3212880686_init();
    work_a_3790133976_2372691052_init();


    xsi_register_tops("work_a_3790133976_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}
