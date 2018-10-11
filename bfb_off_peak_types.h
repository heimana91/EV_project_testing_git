// This file is generated by FBC.

#ifndef BFB_OFF_PEAK_TYPES_H_
#define BFB_OFF_PEAK_TYPES_H_

#include "fbtypes.h"

typedef union {
    UDINT events;
    struct {
        UDINT tick : 1; // 
    } event;
} bfb_off_peak_typesIEvents;

typedef union {
    UDINT events;
    struct {
        UDINT Off_peak : 1; // 
        UDINT Off_peak_charging : 1; // 
        UDINT Tick : 1; // 
        UDINT Peak : 1; // 
    } event;
} bfb_off_peak_typesOEvents;

typedef struct {
    UINT _state;
    BOOL _entered;
    bfb_off_peak_typesIEvents _input;
    REAL price; // 
    REAL _price;
    REAL Sma; // 
    REAL _Sma;
    REAL std_dev; // 
    REAL _std_dev;
    bfb_off_peak_typesOEvents _output;
} bfb_off_peak_types;

/* Function block initialization function */
void bfb_off_peak_typesinit(bfb_off_peak_types* me);

/* Function block execution function */
void bfb_off_peak_typesrun(bfb_off_peak_types* me);

/* ECC algorithms */
void bfb_off_peak_types_Algorithm1(bfb_off_peak_types* me);
void bfb_off_peak_types_Algorithm2(bfb_off_peak_types* me);
void bfb_off_peak_types_Algorithm3(bfb_off_peak_types* me);

#endif // BFB_OFF_PEAK_TYPES_H_