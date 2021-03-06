#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

//<2013/4/1-23413-jessicatseng, [Pelican] Integrate MTK ZCV table

#define Q_MAX_POS_50	2427//2490
#define Q_MAX_POS_25	2404//2468
#define Q_MAX_POS_0		2244//2310
#define Q_MAX_NEG_10	2018//1858

#define Q_MAX_POS_50_H_CURRENT	2413//2472
#define Q_MAX_POS_25_H_CURRENT	2385//2430
#define Q_MAX_POS_0_H_CURRENT		2100//1837
#define Q_MAX_NEG_10_H_CURRENT	960 //1030

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

//<2013/5/27-25339-jessicatseng, [5860] Modify CAR_TUNE_VALUE to 83 for HW AP
//<2013/1/23-20879-jessicatseng, [Pelican] Modify CAR_TUNE_VALUE to 96
#define CAR_TUNE_VALUE			83 //96	//93 //1.00
//>2013/1/23-20879-jessicatseng
//>2013/5/27-25339-jessicatseng

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0   , 4163},         
	{1   , 4145},         
	{3   , 4129},         
	{4   , 4114},         
	{6   , 4100},         
	{7   , 4088},         
	{9   , 4077},         
	{10  , 4068},         
	{12  , 4058},         
	{13  , 4049},         
	{15  , 4040},         
	{16  , 4032},         
	{18  , 4024},         
	{19  , 4013},         
	{21  , 3996},         
	{22  , 3958},         
	{24  , 3931},         
	{25  , 3918},         
	{27  , 3908},         
	{28  , 3899},         
	{30  , 3891},         
	{31  , 3883},         
	{33  , 3875},         
	{34  , 3867},         
	{35  , 3859},         
	{37  , 3850},         
	{38  , 3842},         
	{40  , 3833},         
	{41  , 3824},         
	{43  , 3818},         
	{44  , 3811},         
	{46  , 3805},         
	{47  , 3800},         
	{49  , 3796},         
	{50  , 3792},         
	{52  , 3788},         
	{53  , 3786},         
	{55  , 3782},         
	{56  , 3780},         
	{58  , 3778},         
	{59  , 3774},         
	{61  , 3772},         
	{62  , 3769},         
	{64  , 3765},         
	{65  , 3761},         
	{67  , 3758},         
	{68  , 3754},         
	{70  , 3750},         
	{71  , 3745},         
	{72  , 3741},         
	{74  , 3735},         
	{75  , 3730},         
	{77  , 3725},         
	{78  , 3721},         
	{80  , 3714},         
	{81  , 3709},         
	{83  , 3703},         
	{84  , 3697},         
	{86  , 3690},         
	{87  , 3683},         
	{88  , 3678},          
	{90  , 3674},
	{90  , 3670},
	{91  , 3667},
	{92  , 3664},
	{93  , 3661},
	{93  , 3658},
	{94  , 3656},
	{95  , 3653},
	{95  , 3650},
	{96  , 3648}, 
	{96  , 3646},
	{96  , 3645},
	{97  , 3642},
	{97  , 3640},
	{98  , 3638}, 
	{98  , 3637},	    
	{98  , 3634}, 
	{98  , 3634}, 
	{99  , 3631}, 
	{99  , 3630}, 
	{99  , 3628}, 
	{99  , 3627}, 
	{100 , 3627}, 
	{100 , 3625}, 
	{100 , 3400} 
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{              
	{0   , 4182},
	{1   , 4166},
	{3   , 4150},
	{4   , 4112},
	{5   , 4078},
	{7   , 4059},
	{8   , 4045},
	{9   , 4032},
	{11  , 4020},
	{12  , 4009},
	{13  , 4001},
	{15  , 3991},
	{16  , 3982},
	{17  , 3974},
	{19  , 3967},
	{20  , 3961},
	{21  , 3954},
	{23  , 3947},
	{24  , 3940},
	{25  , 3933},
	{27  , 3926},
	{28  , 3918},
	{29  , 3910},
	{31  , 3903},
	{32  , 3895},
	{33  , 3887},
	{35  , 3879},
	{36  , 3871},
	{37  , 3862},
	{39  , 3854},
	{40  , 3846},
	{41  , 3838},
	{43  , 3832},
	{44  , 3825},
	{45  , 3820},
	{47  , 3815},
	{48  , 3810},
	{49  , 3805},
	{51  , 3802},
	{52  , 3798},
	{53  , 3795},
	{55  , 3791},
	{56  , 3789},
	{57  , 3787},
	{59  , 3784},
	{60  , 3781},
	{61  , 3779},
	{63  , 3777},
	{64  , 3775},
	{65  , 3773},
	{67  , 3772},
	{68  , 3770},
	{69  , 3768},
	{71  , 3766},
	{72  , 3763},
	{73  , 3760},
	{75  , 3757},
	{76  , 3752},
	{77  , 3747},
	{79  , 3742},
	{80  , 3737},
	{81  , 3731},
	{83  , 3724},
	{84  , 3717},
	{85  , 3709},
	{87  , 3699},
	{88  , 3688},
	{89  , 3677},
	{91  , 3669},
	{92  , 3662},
	{93  , 3652},
	{95  , 3639},
	{96  , 3615},
	{97  , 3563},
	{98  , 3513},
	{99  , 3486},
	{99  , 3467},
	{99  , 3452},
	{99  , 3440},
	{100 , 3431},
	{100 , 3424},
	{100 , 3417},
	{100 , 3413},
	{100 , 3409},
	{100 , 3405},
	{100 , 3400}
};             

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{              
	{0   , 4180},
	{1   , 4158},
	{2   , 4139},
	{4   , 4126},
	{5   , 4112},
	{6   , 4100},
	{7   , 4090},
	{9   , 4079},
	{10  , 4070},
	{11  , 4060},
	{12  , 4049},
	{14  , 4038},
	{15  , 4028},
	{16  , 4017},
	{17  , 4008},
	{19  , 3999},
	{20  , 3990},
	{21  , 3984},
	{22  , 3976},
	{24  , 3969},
	{25  , 3962},
	{26  , 3955},
	{27  , 3947},
	{29  , 3939},
	{30  , 3933},
	{31  , 3926},
	{32  , 3919},
	{34  , 3913},
	{35  , 3906},
	{36  , 3899},
	{37  , 3893},
	{38  , 3885},
	{40  , 3877},
	{41  , 3868},
	{42  , 3859},
	{43  , 3851},
	{45  , 3842},
	{46  , 3834},
	{47  , 3828},
	{48  , 3823},
	{50  , 3817},
	{51  , 3813},
	{52  , 3809},
	{53  , 3805},
	{55  , 3802},
	{56  , 3798},
	{57  , 3795},
	{58  , 3793},
	{60  , 3790},
	{61  , 3787},
	{62  , 3785},
	{63  , 3783},
	{65  , 3781},
	{66  , 3779},
	{67  , 3778},
	{68  , 3776},
	{70  , 3774},
	{71  , 3772},
	{72  , 3768},
	{73  , 3764},
	{75  , 3759},
	{76  , 3754},
	{77  , 3749},
	{78  , 3745},
	{79  , 3740},
	{81  , 3736},
	{82  , 3733},
	{83  , 3727},
	{84  , 3720},
	{86  , 3713},
	{87  , 3706},
	{88  , 3698},
	{89  , 3687},
	{91  , 3681},
	{92  , 3678},
	{93  , 3673},
	{94  , 3667},
	{96  , 3653},
	{97  , 3613},
	{98  , 3550},
	{99  , 3466},
	{100 , 3340},
	{100 , 3278},
	{100 , 3265},
	{100 , 3260},
	{100 , 3260}
};             

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{              
	{0   , 4191},
	{1   , 4169},
	{2   , 4151},
	{4   , 4135},
	{5   , 4122},
	{6   , 4109},
	{7   , 4097},
	{9   , 4085},
	{10  , 4074},
	{11  , 4065},
	{12  , 4054},
	{14  , 4044},
	{15  , 4035},
	{16  , 4025},
	{17  , 4015},
	{18  , 4007},
	{20  , 3998},
	{21  , 3989},
	{22  , 3981},
	{23  , 3973},
	{25  , 3965},
	{26  , 3957},
	{27  , 3950},
	{28  , 3943},
	{30  , 3935},
	{31  , 3928},
	{32  , 3922},
	{33  , 3915},
	{34  , 3909},
	{36  , 3902},
	{37  , 3897},
	{38  , 3889},
	{39  , 3883},
	{41  , 3876},
	{42  , 3867},
	{43  , 3859},
	{44  , 3847},
	{45  , 3838},
	{47  , 3830},
	{48  , 3825},
	{49  , 3819},
	{50  , 3814},
	{52  , 3810},
	{53  , 3805},
	{54  , 3802},
	{55  , 3798},
	{57  , 3795},
	{58  , 3792},
	{59  , 3789},
	{60  , 3786},
	{61  , 3784},
	{63  , 3781},
	{64  , 3778},
	{65  , 3776},
	{66  , 3774},
	{68  , 3772},
	{69  , 3770},
	{70  , 3768},
	{71  , 3762},
	{73  , 3753},
	{74  , 3746},
	{75  , 3741},
	{76  , 3736},
	{77  , 3731},
	{79  , 3727},
	{80  , 3722},
	{81  , 3719},
	{82  , 3714},
	{84  , 3708},
	{85  , 3701},
	{86  , 3694},
	{87  , 3687},
	{89  , 3678},
	{90  , 3670},
	{91  , 3666},
	{92  , 3662},
	{93  , 3657},
	{95  , 3649},
	{96  , 3628},
	{97  , 3582},
	{98  , 3521},
	{100 , 3438},
	{100 , 3317},
	{100 , 3261},
	{100 , 3252},
	{100 , 3252}
};             

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }
};      

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{              
	{288  , 4163},
	{443  , 4145},
	{455  , 4129},
	{455  , 4114},
	{455  , 4100},
	{458  , 4088},
	{460  , 4077},
	{468  , 4068},
	{470  , 4058},
	{478  , 4049},
	{485  , 4040},
	{498  , 4032},
	{515  , 4024},
	{540  , 4013},
	{585  , 3996},
	{693  , 3958},
	{875  , 3931},
	{900  , 3918},
	{918  , 3908},
	{928  , 3899},
	{938  , 3891},
	{948  , 3883},
	{960  , 3875},
	{965  , 3867},
	{973  , 3859},
	{975  , 3850},
	{978  , 3842},
	{980  , 3833},
	{983  , 3824},
	{990  , 3818},
	{990  , 3811},
	{993  , 3805},
	{998  , 3800},
	{1005 , 3796},
	{1005 , 3792},
	{1008 , 3788},
	{1013 , 3786},
	{1013 , 3782},
	{1020 , 3780},
	{1025 , 3778},
	{1025 , 3774},
	{1030 , 3772},
	{1035 , 3769},
	{1038 , 3765},
	{1040 , 3761},
	{1050 , 3758},
	{1058 , 3754},
	{1065 , 3750},
	{1070 , 3745},
	{1080 , 3741},
	{1088 , 3735},
	{1093 , 3730},
	{1103 , 3725},
	{1120 , 3721},
	{1128 , 3714},
	{1143 , 3709},
	{1155 , 3703},
	{1173 , 3697},
	{1190 , 3690},
	{1208 , 3683},
	{1198 , 3678},
	{1185 , 3674},
	{1178 , 3670},
	{1168 , 3667},
	{1163 , 3664},
	{1153 , 3661},
	{1145 , 3658},
	{1143 , 3656},
	{1133 , 3653},
	{1128 , 3650},
	{1123 , 3648},
	{1118 , 3646},
	{1115 , 3645},
	{1108 , 3642},
	{1100 , 3640},
	{1100 , 3638},
	{1093 , 3637},
	{1088 , 3634},
	{1088 , 3634},
	{1083 , 3631},
	{1080 , 3630},
	{1070 , 3628},
	{1068 , 3627},
	{1068 , 3627},
	{1068 , 3625},
	{503  , 3400}
};             

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{              
	{235 , 4182},
	{235 , 4166},
	{248 , 4150},
	{250 , 4112},
	{345 , 4078},
	{370 , 4059},
	{383 , 4045},
	{383 , 4032},
	{385 , 4020},
	{383 , 4009},
	{385 , 4001},
	{388 , 3991},
	{385 , 3982},
	{385 , 3974},
	{388 , 3967},
	{393 , 3961},
	{398 , 3954},
	{400 , 3947},
	{405 , 3940},
	{405 , 3933},
	{405 , 3926},
	{405 , 3918},
	{403 , 3910},
	{408 , 3903},
	{408 , 3895},
	{405 , 3887},
	{408 , 3879},
	{410 , 3871},
	{408 , 3862},
	{408 , 3854},
	{408 , 3846},
	{408 , 3838},
	{413 , 3832},
	{413 , 3825},
	{415 , 3820},
	{415 , 3815},
	{418 , 3810},
	{418 , 3805},
	{423 , 3802},
	{423 , 3798},
	{428 , 3795},
	{428 , 3791},
	{435 , 3789},
	{438 , 3787},
	{438 , 3784},
	{440 , 3781},
	{440 , 3779},
	{443 , 3777},
	{445 , 3775},
	{448 , 3773},
	{453 , 3772},
	{455 , 3770},
	{458 , 3768},
	{463 , 3766},
	{460 , 3763},
	{465 , 3760},
	{470 , 3757},
	{468 , 3752},
	{473 , 3747},
	{478 , 3742},
	{483 , 3737},
	{488 , 3731},
	{490 , 3724},
	{495 , 3717},
	{503 , 3709},
	{510 , 3699},
	{518 , 3688},
	{528 , 3677},
	{545 , 3669},
	{573 , 3662},
	{610 , 3652},
	{658 , 3639},
	{708 , 3615},
	{768 , 3563},
	{785 , 3513},
	{718 , 3486},
	{670 , 3467},
	{633 , 3452},
	{605 , 3440},
	{583 , 3431},
	{560 , 3424},
	{550 , 3417},
	{540 , 3413},
	{525 , 3409},
	{520 , 3405},
	{510 , 3400}
}; 

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{              
	{140 , 4180},
	{138 , 4158},
	{138 , 4139},
	{143 , 4126},
	{138 , 4112},
	{140 , 4100},
	{140 , 4090},
	{138 , 4079},
	{143 , 4070},
	{145 , 4060},
	{145 , 4049},
	{145 , 4038},
	{150 , 4028},
	{145 , 4017},
	{150 , 4008},
	{150 , 3999},
	{148 , 3990},
	{153 , 3984},
	{150 , 3976},
	{153 , 3969},
	{160 , 3962},
	{163 , 3955},
	{160 , 3947},
	{163 , 3939},
	{165 , 3933},
	{165 , 3926},
	{168 , 3919},
	{168 , 3913},
	{168 , 3906},
	{168 , 3899},
	{168 , 3893},
	{165 , 3885},
	{165 , 3877},
	{160 , 3868},
	{155 , 3859},
	{153 , 3851},
	{148 , 3842},
	{143 , 3834},
	{143 , 3828},
	{145 , 3823},
	{140 , 3817},
	{143 , 3813},
	{140 , 3809},
	{140 , 3805},
	{143 , 3802},
	{143 , 3798},
	{143 , 3795},
	{148 , 3793},
	{148 , 3790},
	{148 , 3787},
	{150 , 3785},
	{150 , 3783},
	{153 , 3781},
	{155 , 3779},
	{158 , 3778},
	{155 , 3776},
	{155 , 3774},
	{155 , 3772},
	{153 , 3768},
	{150 , 3764},
	{148 , 3759},
	{145 , 3754},
	{145 , 3749},
	{145 , 3745},
	{143 , 3740},
	{145 , 3736},
	{150 , 3733},
	{148 , 3727},
	{148 , 3720},
	{150 , 3713},
	{150 , 3706},
	{153 , 3698},
	{148 , 3687},
	{150 , 3681},
	{158 , 3678},
	{160 , 3673},
	{168 , 3667},
	{173 , 3653},
	{165 , 3613},
	{170 , 3550},
	{183 , 3466},
	{205 , 3340},
	{198 , 3278},
	{165 , 3265},
	{153 , 3260},
	{153 , 3260}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{              
	{115 , 4191},
	{98  , 4169},
	{100 , 4151},
	{98  , 4135},
	{100 , 4122},
	{98  , 4109},
	{100 , 4097},
	{98  , 4085},
	{95  , 4074},
	{98  , 4065},
	{98  , 4054},
	{100 , 4044},
	{103 , 4035},
	{100 , 4025},
	{100 , 4015},
	{103 , 4007},
	{103 , 3998},
	{103 , 3989},
	{105 , 3981},
	{105 , 3973},
	{105 , 3965},
	{105 , 3957},
	{105 , 3950},
	{108 , 3943},
	{110 , 3935},
	{113 , 3928},
	{115 , 3922},
	{115 , 3915},
	{115 , 3909},
	{115 , 3902},
	{120 , 3897},
	{118 , 3889},
	{123 , 3883},
	{120 , 3876},
	{118 , 3867},
	{118 , 3859},
	{108 , 3847},
	{103 , 3838},
	{98  , 3830},
	{103 , 3825},
	{100 , 3819},
	{98  , 3814},
	{100 , 3810},
	{98  , 3805},
	{100 , 3802},
	{100 , 3798},
	{100 , 3795},
	{100 , 3792},
	{103 , 3789},
	{103 , 3786},
	{103 , 3784},
	{105 , 3781},
	{103 , 3778},
	{105 , 3776},
	{105 , 3774},
	{108 , 3772},
	{108 , 3770},
	{113 , 3768},
	{105 , 3762},
	{98  , 3753},
	{100 , 3746},
	{100 , 3741},
	{100 , 3736},
	{100 , 3731},
	{103 , 3727},
	{98  , 3722},
	{103 , 3719},
	{103 , 3714},
	{103 , 3708},
	{103 , 3701},
	{98  , 3694},
	{100 , 3687},
	{100 , 3678},
	{103 , 3670},
	{105 , 3666},
	{105 , 3662},
	{108 , 3657},
	{113 , 3649},
	{110 , 3628},
	{113 , 3582},
	{120 , 3521},
	{130 , 3438},
	{150 , 3317},
	{155 , 3261},
	{133 , 3252},
	{133 , 3252}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }
};   

//>2013/4/1-23413-jessicatseng

int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY