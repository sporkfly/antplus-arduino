#ifndef ANTPLUS_LEVPROFILEPRIVATEDEFINES_h
#define ANTPLUS_LEVPROFILEPRIVATEDEFINES_h

/* Channel Config */
#define ANTPLUS_LEV_DISPLAY_CHANNELTYPE CHANNEL_TYPE_BIDIRECTIONAL_RECEIVE
#define ANTPLUS_LEV_CHANNELPERIOD 8192
// 30 / 2.5 = 12
#define ANTPLUS_LEV_SEARCHTIMEOUT 12

// Base page */
#define ANTPLUS_LEV_DATAPAGEBASE_DATAPAGE_BYTE 0x00

/* Base Speed & System Information */
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TRAVELMODESTATE_BYTE                           2
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TRAVELMODESTATE_CURRENTREGENERATIVELEVEL_MASK  0x7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TRAVELMODESTATE_CURRENTASSISTLEVEL_SHIFT       3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_TRAVELMODESTATE_CURRENTASSISTLEVEL_MASK        0x38
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_SYSTEMSTATE_BYTE                               3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_BYTE                                 4
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_CURRENTFRONTGEAR_MASK                0x3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_CURRENTREARGEAR_SHIFT                2
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_CURRENTREARGEAR_MASK                 0x3C
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_MANUALAUTO_SHIFT                     6
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_MANUALAUTO_MASK                      0x40
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_GEAREXIST_SHIFT                      7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_GEARSTATE_GEAREXIST_MASK                       0x80
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_LEVSPEED_LSB_BYTE                              6
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_LEVSPEED_MSB_BYTE                              7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_LEVSPEED_MSB_SHIFT                             8
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION_LEVSPEED_MSB_MASK                              0x0F

/* Base Speed & Distance Information */
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_ODOMETER_LSB_BYTE           1
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_ODOMETER_MID_BYTE           2
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_ODOMETER_MID_SHIFT          8
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_ODOMETER_MSB_BYTE           3
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_ODOMETER_MSB_SHIFT          16
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_LEVSPEED_LSB_BYTE           6
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_LEVSPEED_MSB_BYTE           7
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_LEVSPEED_MSB_SHIFT          8
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_LEVSPEED_MSB_MASK           0xF

/* Speed & System Information 1 */
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_NUMBER                                         1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BYTE                          1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATURE_MASK       0x7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_SHIFT 3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_MASK  0x8
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATURE_SHIFT        4
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATURE_MASK         0x70
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATUREALERT_SHIFT   7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATUREALERT_MASK    0x80
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_ERRORMESSAGE_BYTE                              5

/* Speed & Distance Information */
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_NUMBER                   2
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_REMAININGRANGE_LSB_BYTE  4
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_REMAININGRANGE_MSB_BYTE  5
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_REMAININGRANGE_MSB_SHIFT 8
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_REMAININGRANGE_MSB_MASK  0xF

/* Alternative Speed & Distance Information */
#define ANTPLUS_LEV_DATAPAGE_ALTSPEEDDISTANCEINFORMATION_NUMBER                 34
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_FUELCONSUMPTION_LSB_BYTE  4
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_FUELCONSUMPTION_MSB_BYTE  5
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_FUELCONSUMPTION_MSB_SHIFT 8
#define ANTPLUS_LEV_DATAPAGE_SPEEDDISTANCEINFORMATION_FUELCONSUMPTION_MSB_MASK  0xF

/* Speed & System Information 2 */
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_NUMBER                               3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_BATTERYSOC_BYTE                      1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_BATTERYSOC_STATEOFCHARGE_MASK        0x7F
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_BATTERYSOC_BATTERYEMPTY_SHIFT        7
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_BATTERYSOC_BATTERYEMPTY_MASK         0x80
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION2_PERCENTASSIST_BYTE                   5

/* Battery Information */
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_NUMBER                             4
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_CHARGINGCYCLECOUNT_LSB_BYTE        2
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_CHARGINGCYCLECOUNT_MSB_BYTE        3
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_CHARGINGCYCLECOUNT_MSB_MASK        0xF
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_CHARGINGCYCLECOUNT_MSB_SHIFT       8
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_FUELCONSUMPTION_LSB_BYTE           4
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_FUELCONSUMPTION_MSB_BYTE           3
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_FUELCONSUMPTION_MSB_MASK           0xF0
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_FUELCONSUMPTION_MSB_SHIFT          4
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_BATTERYVOLTAGE_BYTE                5
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_DISTANCEONCURRENTCHARGE_LSB_BYTE   6
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_DISTANCEONCURRENTCHARGE_MSB_BYTE   7
#define ANTPLUS_LEV_DATAPAGE_BATTERYINFORMATION_DISTANCEONCURRENTCHARGE_MSB_SHIFT  8

/* Capabilities */
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_NUMBER                                            5
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_TRAVELMODESSUPPORTED_BYTE                         2
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_TRAVELMODESSUPPORTED_NUMBERASSISTMODES_MASK       0x38
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_TRAVELMODESSUPPORTED_NUMBERASSISTMODES_SHIFT      3
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_TRAVELMODESSUPPORTED_NUMBERREGENERATIVEMODES_MASK 0x7
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_WHEELCIRCUMFERENCE_LSB_BYTE                       3
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_WHEELCIRCUMFERENCE_MSB_BYTE                       4
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_WHEELCIRCUMFERENCE_MSB_MASK                       0xF
#define ANTPLUS_LEV_DATAPAGE_LEVCAPABILITIES_WHEELCIRCUMFERENCE_MSB_SHIFT                      8

/* Display Data */
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_NUMBER                         16
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_WHEELCIRCUMFERENCE_LSB_BYTE    1
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_WHEELCIRCUMFERENCE_MSB_BYTE    2
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_WHEELCIRCUMFERENCE_MASK        0xFFF
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_RESERVED1_BYTE                 2
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_RESERVED1_VALUE                0xF0
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_RESERVED2_BYTE                 5
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_RESERVED2_VALUE                0
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTASSISTLEVEL_BYTE        3
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTASSISTLEVEL_MASK        0x38
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTASSISTLEVEL_SHIFT       3
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREGENERATIVELEVEL_BYTE  3
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREGENERATIVELEVEL_MASK  0x7
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREARGEAR_LSB_BYTE       4
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREARGEAR_MSB_BYTE       5
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREARGEAR_MASK           0x3C0
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTREARGEAR_SHIFT          6
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTFRONTGEAR_BYTE          4
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTFRONTGEAR_MASK          0x30
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTFRONTGEAR_SHIFT         4
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTLIGHTMODE_BYTE          4
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_CURRENTLIGHTMODE_MASK          0xF
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_MANUFACTURERID_LSB_BYTE        6
#define ANTPLUS_LEV_DATAPAGE_DISPLAYDATA_MANUFACTURERID_MSB_BYTE        7


#endif // ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h
