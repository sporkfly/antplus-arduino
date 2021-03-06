#ifndef ANTPLUS_COMMONDATAPAGEDEFINES_h
#define ANTPLUS_COMMONDATAPAGEDEFINES_h

/* Request Data Page */
#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_SLAVESERIALNUMBER_INVALID  0xFFFF

#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_DESCRIPTORBYTE1_INVALID 0xFF

#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_DESCRIPTORBYTE2_INVALID 0xFF

#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_REQUESTEDTRANSMISSIONRESPONSE_USEACKNOWLEDGED_TRUE 0x80
#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_REQUESTEDTRANSMISSIONRESPONSE_USEACKNOWLEDGED_INVALID 0

#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_COMMANDTYPE_REQUESTDATAPAGE          1
#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_COMMANDTYPE_REQUESTANTFSSESSION      2
#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_COMMANDTYPE_REQUESTDATAPAGEFROMSLAVE 3
#define ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_COMMANDTYPE_REQUESTDATAPAGESET       4

/* Mode Settings */
#define ANTPLUS_COMMON_DATAPAGE_MODESETTINGS_SPORTSMODE_RUNNING  1
#define ANTPLUS_COMMON_DATAPAGE_MODESETTINGS_SPORTSMODE_CYCLING  2
#define ANTPLUS_COMMON_DATAPAGE_MODESETTINGS_SPORTSMODE_SWIMMING 5

#endif // ANTPLUS_COMMONDATAPAGEDEFINES_h
