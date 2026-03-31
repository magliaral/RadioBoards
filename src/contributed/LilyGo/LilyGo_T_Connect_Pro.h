#if !defined(_RADIOBOARDS_CONTRIBUTED_LILYGO_T_CONNECT_PRO_H)
#define _RADIOBOARDS_CONTRIBUTED_LILYGO_T_CONNECT_PRO_H
// Source:
// Repository - https://github.com/Xinyuan-LilyGO/T-Connect-Pro
// Pin config - https://github.com/Xinyuan-LilyGO/T-Connect-Pro/blob/main/libraries/pin_config.h

#define RADIO_BOARDS_NAME "LilyGo T-Connect-Pro"
#define RADIO_NSS     (14)
#define RADIO_IRQ     (45)
#define RADIO_RST     (42)
#define RADIO_GPIO    (38)

// this board uses custom SPI to interface with the module
#define RADIO_SPI     SPI
#define RADIO_MISO    (13)
#define RADIO_MOSI    (11)
#define RADIO_SCK     (12)
#define RADIO_SPI_INIT          \
RADIO_SPI.begin(RADIO_SCK, RADIO_MISO, RADIO_MOSI, RADIO_NSS);
#if RADIOLIB_SUPPORT_ENABLED
  #if defined(RADIO_BOARD_LILYGO_T_CONNECT_PRO_SX1276)
    #define Radio       SX1276
  #else
    #define Radio       SX1262
  #endif
#endif

#endif