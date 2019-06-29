#ifndef ANTPLUS_LEVPROFILEPRIVATEDEFINES_h
#define ANTPLUS_LEVPROFILEPRIVATEDEFINES_h

/* Channel Config */
#define ANTPLUS_LEV_DISPLAY_CHANNELTYPE CHANNEL_TYPE_BIDIRECTIONAL_RECEIVE
#define ANTPLUS_LEV_CHANNELPERIOD 8192
// 30 / 2.5 = 12
#define ANTPLUS_LEV_SEARCHTIMEOUT 12

/* Pages */
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_NUMBER      1

#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BYTE                          1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATURE_MASK       0x7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_SHIFT 3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_MASK  0x1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATURE_SHIFT        4
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATURE_MASK         0x7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATUREALERT_SHIFT   7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TEMPERATURESTATE_MOTORTEMPERATUREALERT_MASK    0x1

#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_NUMBER     2
#define ANTPLUS_LEV_DATAPAGE_ALTSPEEDDISTANCEINFORMATION_NUMBER 34
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_NUMBER      3
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFO_NUMBER                  4
#define ANTPLUS_LEV_DATAPAGE_CAPABILITIES_NUMBER                 5


// Base page */
#define ANTPLUS_LEV_DATAPAGEBASE_DATAPAGE_BYTE 0x00


#endif // ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h
