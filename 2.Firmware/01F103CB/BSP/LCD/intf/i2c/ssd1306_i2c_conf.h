/**
 * @file ssd1306_i2c_conf.h SSD1306 library basic i2c definitions
 */

#ifndef _SSD1306_I2C_CONF_H_
#define _SSD1306_I2C_CONF_H_

#include "./../../ssd1306_hal/io.h"



#ifdef __cplusplus
extern "C" {
#endif


#ifndef SSD1306_SA
    /**
     * @ingroup LCD_HW_INTERFACE_API
     *
     * SSD1306_SA defines default i2c address of LCD display. Please, check your device.
     * If you LCD device has different address, you can set different one via
     * ssd1306_i2cInit_Wire() or ssd1306_i2cInit_Embedded() functions.
     * Write command will be SSD1306_SA<<1 and read will be SSD1306_SA<<1 | 1
     */
    #define SSD1306_SA    0x3C  // Slave address
#endif
#if defined(CONFIG_PLATFORM_I2C_AVAILABLE) && defined(CONFIG_PLATFORM_I2C_ENABLE)

    #ifndef SSD1306_SCL
        #define SSD1306_SCL   5 // SCL, Pin A5 on SSD1306 Board
    #endif
    #ifndef SSD1306_SDA
        #define SSD1306_SDA   4 // SDA, Pin A4 on SSD1306 Board
    #endif

#endif//(CONFIG_PLATFORM_I2C_AVAILABLE) && defined(CONFIG_PLATFORM_I2C_ENABLE)

#ifdef __cplusplus
}
#endif



#endif
