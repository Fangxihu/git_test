#ifndef ITIME_SUBSYSTEMS_H_
#define ITIME_SUBSYSTEMS_H_
/* Autogenerated scheduler task header created by fw/tools/make/header_autogen.py */

#include "core/fault/fault_itime.h"
#include "core/piodebounce/piodebounce_itime.h"

#define ITIME_EVENT_LIST(m)\
 CORE_FAULT_ITIME_EVENT(m) \
 CORE_PIODEBOUNCE_ITIME_EVENT(m)

#endif /* ITIME_SUBSYSTEMS_H_ */
