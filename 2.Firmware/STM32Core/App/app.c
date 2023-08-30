#include "ssd1306.h"
#include "i2c.h"

void app_init()
{
	ssd1306_Init();
	ssd1306_WriteString("hello world",Font_7x10,White);
	 ssd1306_UpdateScreen();
	 printf("helloworld\n");
}
