#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "RNO-G"
#define PRODUCT_NAME "RNO-G umini"
#define VOLUME_LABEL "RNO-G-umini"
#define INDEX_URL "https://rno-g.org"
#define BOARD_ID "RNO-G-UMINI"

#define USB_VID 0x04d8
#define USB_PID 0xE5C2


#define BOOT_USART_MODULE SERCOM1
#define BOOT_USART_MASK APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX MCLK_APBAMASK_SERCOM1
#define BOOT_USART_PAD_SETTINGS UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD0 PINMUX_PA16C_SERCOM1_PAD0
#define BOOT_USART_PAD1 PINMUX_PA17C_SERCOM1_PAD1
#define BOOT_USART_PAD2 PINMUX_UNUSED
#define BOOT_USART_PAD3 PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW SERCOM1_GCLK_ID_SLOW

#endif
