/****************************************************************************
Copyright (c) 2004 - 2015 Qualcomm Technologies International, Ltd.
Part of 6.3.0

FILE NAME
    upgrade_msg_vm.h
    
DESCRIPTION

*/
#ifndef UPGRADE_MSG_VM_H_
#define UPGRADE_MSG_VM_H_

#ifndef UPGRADE_VM_MSG_BASE
#define UPGRADE_VM_MSG_BASE 0x400
#endif

typedef enum {
    UPGRADE_VM_PERMIT_UPGRADE = UPGRADE_VM_MSG_BASE,
    UPGRADE_VM_PROHIBIT_UPGRADE,
    UPGRADE_VM_PROHIBIT_STREAMING_IND,
    UPGRADE_VM_PERMIT_STREAMING_IND,
    UPGRADE_VM_IMAGE_UPGRADE_COPY_SUCCESSFUL,
    UPGRADE_VM_IMAGE_UPGRADE_COPY_FAILED,
    UPGRADE_VM_DFU_COPY_VALIDATION_SUCCESS,
    UPGRADE_VM_AUDIO_DFU_FAILURE,
    UPGRADE_VM_IMAGE_UPGRADE_ERASE_STATUS,
    UPGRADE_VM_EXE_FS_VALIDATION_STATUS
} UpgradeMsgVM;

typedef struct {
    uint8 erase_status;
} UPGRADE_VM_IMAGE_UPGRADE_ERASE_STATUS_T;

typedef struct {
    bool result;
} UPGRADE_VM_EXE_FS_VALIDATION_STATUS_T;

#endif /* UPGRADE_MSG_VM_H_ */
