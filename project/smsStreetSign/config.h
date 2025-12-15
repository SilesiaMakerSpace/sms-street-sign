

#ifndef PRESET_WIFI_SSID
#define PRESET_WIFI_SSID "default-sms-ngo"
#endif

const String wifi_ssid = PRESET_WIFI_SSID; 

#ifndef PRESET_WIFI_PASS
#define PRESET_WIFI_PASS "PLIPLOPspell___"
#endif

const String wifi_pass = PRESET_WIFI_PASS;

#ifndef PRESET_UART_BAUD
#define PRESET_UART_BAUD 115200
#endif

const int uart_baud = PRESET_UART_BAUD; 

#ifndef PRESET_INDEX_URL 
#define PRESET_INDEX_URL "http://fed.sms.ngo/source-index-map.json"
#endif

const String http_update_check = PRESET_INDEX_URL; 

#define SETUP_CONFIGURED true
