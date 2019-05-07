// -----------------------------------------------------------------------------
// Copyright (c) 2017                  Qualcomm Technologies International, Ltd.
//
#ifndef __SOURCE_SYNC_GEN_ASM_H__
#define __SOURCE_SYNC_GEN_ASM_H__

// CodeBase IDs
.CONST $M.SOURCE_SYNC_SRC_SYNC_CAP_ID       	0x0099;
.CONST $M.SOURCE_SYNC_SRC_SYNC_SAMPLE_RATE       	0;
.CONST $M.SOURCE_SYNC_SRC_SYNC_VERSION_MAJOR       	3;

// Constant Values
.CONST $M.SOURCE_SYNC.CONSTANT.COMP_METADATA   		0x00000001;
.CONST $M.SOURCE_SYNC.CONSTANT.COMP_SPLIT_ROUTE		0x00000002;


// Piecewise Disables


// Statistic Block
.CONST $M.SOURCE_SYNC.STATUS.CUR_MODE       		0*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.STATUS.COMPILED_CONFIG		1*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.STATUS.DIRTY          		2*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.STATUS.STALLED        		3*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.STATUS.STALL_OCCURRED 		4*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.STATUS.BLOCK_SIZE          	5;

// System Mode
.CONST $M.SOURCE_SYNC.SYSMODE.STATIC		0;
.CONST $M.SOURCE_SYNC.SYSMODE.FULL  		2;
.CONST $M.SOURCE_SYNC.SYSMODE.MAX_MODES		2;

// Parameter Block
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_PERIOD                      		0*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_MAX_PERIOD                  		1*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_MAX_LATENCY                 		2*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_P3                          		3*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_STALL_RECOVERY_DEFAULT_FILL 		4*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.OFFSET_SS_STALL_RECOVERY_CATCHUP_LIMIT		5*ADDR_PER_WORD;
.CONST $M.SOURCE_SYNC.PARAMETERS.STRUCT_SIZE                          		6;


#endif // __SOURCE_SYNC_GEN_ASM_H__
