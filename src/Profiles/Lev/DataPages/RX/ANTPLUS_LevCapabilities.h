#ifndef ANTPLUS_LEVCAPABILITIES_h
#define ANTPLUS_LEVCAPABILITIES_h

#include <Profiles/Lev/DataPages/Base/ANTPLUS_LevBaseMainDataPage.h>

class LevCapabilities : public LevBaseMainDataPage {
public:
    LevCapabilities(AntRxDataResponse& dp);
    uint8_t getNumberOfAssistModesSupported();
    uint8_t getNumberOfRegenerativeModesSupported();
    uint16_t getWheelCircumference();
};

#endif // ANTPLUS_LEVCAPABILITIES_h
