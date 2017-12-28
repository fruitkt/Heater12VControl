#ifdef OLED
//8X14
static const uint8_t u8g_clear_bits[] U8X8_PROGMEM = {
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
};
//8X14
static const uint8_t u8g_heating_bits[] U8X8_PROGMEM = {
	0b10010000,
	0b01001000,
	0b00100100,
	0b00100100,
	0b01001000,
	0b10010000,
	0b10010000,
	0b01001000,
	0b00100100,
	0b00100100,
	0b00000000,
	0b11111110,
	0b00000000,
	0b11111110
};

//40x10 (manual)
static const uint8_t u8g_manual_bits[] U8X8_PROGMEM = {
	0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,
	0b00000000,0b00000000,0b00000000,0b00000000,0b00001000,
	0b00000000,0b00000000,0b00000000,0b00000000,0b00001000,
	0b00111111,0b10001110,0b00111100,0b10010011,0b10001000,
	0b00100100,0b10000001,0b00100100,0b10010000,0b01001000,
	0b00100100,0b10001111,0b00100100,0b10010011,0b00001000,
	0b00100100,0b10010001,0b00100100,0b10010100,0b01001000,
	0b00100100,0b10010001,0b00100100,0b10010100,0b01001000,
	0b00100100,0b10001111,0b00100100,0b11110011,0b11001000,
	0b00000000,0b00000000,0b00000000,0b00000000,0b00000000
};

// 8X9 (Celsius)
static const uint8_t u8g_celsius_bits[] U8X8_PROGMEM = {
	0b01000000,
	0b10100110,
	0b01001001,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00001001,
	0b00000110
};

//16X18
static const uint8_t u8g_bigCelsius_bits[] U8X8_PROGMEM = {
	0b01110000,0b00000000,
	0b11011000,0b00011110,
	0b10001000,0b01111111,
	0b11011001,0b11110001,
	0b01110001,0b11000000,
	0b00000011,0b10000000,
	0b00000011,0b10000000,
	0b00000111,0b00000000,
	0b00000111,0b00000000,
	0b00000111,0b00000000,
	0b00000111,0b00000000,
	0b00000111,0b00000000,
	0b00000111,0b00000000,
	0b00000011,0b10000000,
	0b00000011,0b11000000,
	0b00000001,0b11100001,
	0b00000000,0b11111111,
	0b00000000,0b00111110
};


// Draw initial menu with selected item (1 - Auto, 2 - Manual)
void drawMenu_AutoManual(uint8_t sel) {
	if(sel==1){
		u8g2.drawRBox(0,4,50,24,4);
		u8g2.drawRFrame(44,4,70,24,4);
	}else{
		u8g2.drawRFrame(0,4,50,24,4);
		u8g2.drawRBox(44,4,70,24,4);
	}
	
	u8g2.setFontMode(1);  // activate transparent font mode
	u8g2.setDrawColor(2);	// Xor
	u8g2.drawStr(3,8,"Auto");
	u8g2.drawStr(47,8,"Manual");
}

void printManual(){
	u8g2.setDrawColor(0);	// invert bitmap
	u8g2.drawXBMP( 0, 0, 40, 10, u8g_manual_bits);
}
	
void printPresetTemperature(){
	u8g2.setFont(u8g2_font_profont12_tn);	//numeric font for preset temperature and timer
	u8g2.setDrawColor(1);	// Normal mode
	u8g2.setCursor(52, 10);
	uint16_t curval=(int)setPoint;
	u8g2.print(curval);
	uint16_t tmpcoord = 52+5*(curval<100 ? 2 : 3);	// two or three digits number
	u8g2.drawXBMP(tmpcoord, 0, 40, 10, u8g_celsius_bits);
}

// mm:ss
void printTime(uint16_t t) {
	u8g2.setCursor(90, 0);
	t = t % 3600;	// cut off hours
	uint8_t m = t / 60;
	uint8_t s = t % 60;
	printNumber00(m);
	u8g2.print(':');
	printNumber00(s);
}
void printNumber00(uint8_t n) {
	if (n<10) {u8g2.print('0');}
	u8g2.print(n);
}

void printHeaterState(){
	if(digitalRead(MOSFET_PIN)){
		u8g2.drawXBMP( 120, 0, 8, 14, u8g_clear_bits);
		digitalWrite(LED_PIN, LOW);
	}else{
		u8g2.drawXBMP( 120, 0, 8, 14, u8g_heating_bits);
		digitalWrite(LED_PIN, HIGH);
	}
}

void printCurrentTemperature(){
	u8g2.setFont(u8g2_font_t0_22_tn);	//numeric font for current temperature
	u8g2.setDrawColor(1);	// Normal mode
	u8g2.setCursor(0, 31);
	uint16_t curval=round(currentTemp);
	u8g2.print(curval);
	uint16_t tmpcoord = 10*(curval<100 ? 2 : 3);	// two or three digits number
	u8g2.drawXBMP(tmpcoord, 13, 16, 18, u8g_bigCelsius_bits);
}

	
#endif
