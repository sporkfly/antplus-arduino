#ifndef ANTPLUS_PROFILEENVIRONMENTDISPLAY_h
#define ANTPLUS_PROFILEENVIRONMENTDISPLAY_h

#include <BaseClasses/ANTPLUS_BaseSlaveProfile.h>
#include <Profiles/Environment/DataPages/ANTPLUS_ProfileEnvironmentDataPages.h>
#include <CommonDataPages/ANTPLUS_CommonDataPages.h>

#include "ANT.h"

class ProfileEnvironmentDisplay : public BaseSlaveProfile {
public:
    ProfileEnvironmentDisplay();
    ProfileEnvironmentDisplay(uint16_t deviceNumber);
    ProfileEnvironmentDisplay(uint16_t deviceNumber, uint8_t transmissionType);
    void onEnvironmentGeneralInformation(void (*func)(EnvironmentGeneralInformation&, uintptr_t), uintptr_t data = 0) { _onEnvironmentGeneralInformation.set(func, data); }
    void onEnvironmentTemperature(void (*func)(EnvironmentTemperature&, uintptr_t), uintptr_t data = 0) { _onEnvironmentTemperature.set(func, data); }
    void onManufacturersInformation(void (*func)(ManufacturersInformation&, uintptr_t), uintptr_t data = 0) { _onManufacturersInformation.set(func, data); }
    void onProductInformation(void (*func)(ProductInformation&, uintptr_t), uintptr_t data = 0) { _onProductInformation.set(func, data); }

private:
    void setChannelConfig();
    void onBroadcastData(BroadcastData& msg) override;
    void onAcknowledgedData(AcknowledgedData& msg) override;

    bool handleDataPage(EnvironmentBaseDataPage& dp);

    bool handleGeneralInformation(EnvironmentBaseDataPage& dataPage);
    bool handleTemperature(EnvironmentBaseDataPage& dataPage);
    bool handleManufacturersInformation(EnvironmentBaseDataPage& dataPage);
    bool handleProductInformation(EnvironmentBaseDataPage& dataPage);
    AntCallback<EnvironmentGeneralInformation&> _onEnvironmentGeneralInformation;
    AntCallback<EnvironmentTemperature&> _onEnvironmentTemperature;
    AntCallback<ManufacturersInformation&> _onManufacturersInformation;
    AntCallback<ProductInformation&> _onProductInformation;
};

#endif // ANTPLUS_PROFILEENVIRONMENTDISPLAY_h
