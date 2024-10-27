#define BIT_0 0
#define BIT_1 1
#define BIT_2 2
#define BIT_3 3
#define BIT_4 4
#define BIT_5 5
#define BIT_6 6
#define BIT_7 7
#define BIT_8 8

// User banks
#define USER_BANK_0 0x0
#define USER_BANK_1 0x1
#define USER_BANK_2 0x2
#define USER_BANK_3 0x3

// ICM20948__USER_BANK_0__PWR_MGMT_1__REGISTER
#define CLKSEL_INTERNAL_20MHZ_1 0x0
#define CLKSEL_AUTO_SELECT 0x1
#define CLKSEL_INTERNAL_20MHZ_2 0x6
#define CLKSEL_STOP_CLOCK 0x7

#define CLKSEL_BIT BIT_0

// ICM20948__USER_BANK_2__GYRO_CONFIG_1__REGISTER
#define GYRO_FULL_SCALE_250DPS 0
#define GYRO_FULL_SCALE_500DPS 1
#define GYRO_FULL_SCALE_1000DPS 2
#define GYRO_FULL_SCALE_2000DPS 3

#define EN_GRYO_DLPF 1
#define BYPASS_GRYO_DLPF 0

#define GYRO_DLPFCFG_BIT BIT_3
#define GYRO_FS_SEL_BIT BIT_1
#define GYRO_FCHOICE_BIT BIT_0

#define ACCEL_FULL_SCALE_2G 0
#define ACCEL_FULL_SCALE_4G 1
#define ACCEL_FULL_SCALE_8G 2
#define ACCEL_FULL_SCALE_16G 3
