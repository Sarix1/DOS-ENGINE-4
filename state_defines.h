#ifndef STATE_DEFINES_H
#define STATE_DEFINES_H

#include "_common.h"

#define STATE_FLAG_ACTIVE   BIT_0
#define STATE_FLAG_INPUT    BIT_1
#define STATE_FLAG_UPDATE   BIT_2
#define STATE_FLAG_DRAW     BIT_3
#define STATE_FLAG_AUDIO    BIT_4
#define STATE_FLAGS_ALL     (BIT_0|BIT_1|BIT_2|BIT_3|BIT_4)

enum STATES
{
    STATE_CONSOLE,
    STATE_GAME,
    STATE_PAUSE,
    NUM_STATES
};

#endif/* STATE_DEFINES_H */
