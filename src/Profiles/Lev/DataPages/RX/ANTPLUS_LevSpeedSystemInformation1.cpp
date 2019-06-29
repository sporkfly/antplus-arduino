#include <Profiles/Lev/DataPages/RX/ANTPLUS_LevSpeedSystemInformation1.h>
#include <Profiles/Lev/ANTPLUS_LevPrivateDefines.h>

LevSpeedSystemInformation1::LevSpeedSystemInformation1(AntRxDataResponse& dp) : LevBaseMainDataPage(dp) {
    return;
}

uint8_t LevSpeedSystemInformation1::getBatteryTemperatureState()
{
    return getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BYTE) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATURE_MASK;
}

uint8_t LevSpeedSystemInformation1::getBatteryTemperatureAlert()
{
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BYTE) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_SHIFT) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_MASK;
}

uint8_t LevSpeedSystemInformation1::getMotorTemperatureState()
{
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BYTE) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATURE_SHIFT) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATURE_MASK;
}

uint8_t LevSpeedSystemInformation1::getMotorTemperatureAlert()
{
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BYTE) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATUREALERT_SHIFT) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATUREALERT_MASK;
}

uint8_t LevSpeedSystemInformation1::getTravelModeState()
{
    return getData(2);
}

uint8_t LevSpeedSystemInformation1::getSystemState()
{
    return getData(3);
}

uint8_t LevSpeedSystemInformation1::getGearState()
{
    return getData(4);
}

uint8_t LevSpeedSystemInformation1::getErrorMessage()
{
    return getData(5);
}

uint16_t LevSpeedSystemInformation1::getSpeed() // in 1/10 km/h
{
    return (uint16_t)getData(6) + (((uint16_t)getData(7) & 0x0F) << 8);
}
