#ifndef hInterfaceLib
#define hInterfaceLib


#include "gpu_main.h"

struct AParams {
    bool  verbose;
    int   runMode;
    int   myParam1;
    float myParam2;
};


int usage();
int setDefaults(AParams *PARAMS);
int viewParams(const AParams *PARAMS);
int assign();
void hardwareInfo();
void Animdraw(const AParams& params);
#endif
