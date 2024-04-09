#pragma once

#include "ComStack_Types.hpp"
#include "ComM_Cfg.hpp"

extern FUNC(void,COMM_CODE) ComM_BusSM_ModeIndication
                                        (
                                            VAR(NetworkHandleType, AUTOMATIC ) Channel
   ,     P2VAR(ComM_ModeType, AUTOMATIC,COMM_APPL_DATA) ComMode
                                        );
