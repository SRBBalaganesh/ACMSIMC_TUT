
#ifndef ACMCONFIG_H
#define ACMCONFIG_H

#define NULL_D_AXIS_CURRENT_CONTROL -1
#define MTPA -2 // not supported

#define NUMBER_OF_STEPS 150000
#define DOWN_SAMPLE 1
#define CONTROL_STRATEGY NULL_D_AXIS_CURRENT_CONTROL
#define SENSORLESS_CONTROL False
#define VOLTAGE_CURRENT_DECOUPLING_CIRCUIT False
#define SATURATED_MAGNETIC_CIRCUIT False
#define INVERTER_NONLINEARITY False
#define TS 0.00025
#define TS_INVERSE 4000
#define TS_UPSAMPLING_FREQ_EXE 0.5
#define TS_UPSAMPLING_FREQ_EXE_INVERSE 2
#define PMSM_NUMBER_OF_POLE_PAIRS 2
#define PMSM_RESISTANCE 0.45
#define PMSM_D_AXIS_INDUCTANCE 0.00415
#define PMSM_Q_AXIS_INDUCTANCE 0.01674
#define PMSM_PERMANENT_MAGNET_FLUX_LINKAGE 0.504
#define PMSM_SHAFT_INERTIA 0.06
#define SPEED_LOOP_PID_PROPORTIONAL_GAIN 4.5
#define SPEED_LOOP_PID_INTEGRAL_TIME_CONSTANT 1.05
#define SPEED_LOOP_PID_DIREVATIVE_TIME_CONSTANT 0
#define SPEED_LOOP_LIMIT_NEWTON_METER 8
#define SPEED_LOOP_CEILING 40
#define CURRENT_LOOP_PID_PROPORTIONAL_GAIN 15
#define CURRENT_LOOP_PID_INTEGRAL_TIME_CONSTANT 0.08
#define CURRENT_LOOP_PID_DIREVATIVE_TIME_CONSTANT 0
#define CURRENT_LOOP_LIMIT_VOLTS 8
#define DATA_FILE_NAME "pmsm_eemf_VSP004.dat"
#define PC_SIMULATION True

#define MACHINE_TS         (TS*TS_UPSAMPLING_FREQ_EXE) //1.25e-4 
#define MACHINE_TS_INVERSE (TS_INVERSE*TS_UPSAMPLING_FREQ_EXE_INVERSE) // 8000

#endif
