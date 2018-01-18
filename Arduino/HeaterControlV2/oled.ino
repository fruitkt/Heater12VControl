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
//8X10
static const uint8_t u8g_heating_bits[] U8X8_PROGMEM = {
	0b01001000,
	0b00100100,
	0b00100100,
	0b01001000,
	0b10010000,
	0b10010000,
	0b01001000,
	0b00100100,
	0b00000000,
	0b11111110
};

//40x10 (manual)
static const uint8_t u8g_manual_bits[] U8X8_PROGMEM = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xEF, 0x03, 0x8E, 0xE3, 0x36, 0xEE, 0xDB, 0x7E, 0xDB, 0xF6, 
  0xED, 0xDB, 0x0E, 0xDB, 0x36, 0xEC, 0xDB, 0x76, 0xDB, 0xD6, 0xED, 0xDB, 
  0x76, 0xDB, 0xD6, 0xED, 0xDB, 0x0E, 0xDB, 0x30, 0xEC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF
};

// 8X9 (Celsius)
static const uint8_t u8g_celsius_bits[] U8X8_PROGMEM = {
	0b00000010,
	0b01100101,
	0b10010010,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b10010000,
	0b01100000
};

//16X18
static const uint8_t u8g_bigCelsius_bits[] U8X8_PROGMEM = {
	0b00001110,0b00000000,
	0b00011011,0b01111000,
	0b00010001,0b11111110,
	0b10011011,0b10001111,
	0b10001110,0b00000011,
	0b11000000,0b00000001,
	0b11000000,0b00000001,
	0b11100000,0b00000000,
	0b11100000,0b00000000,
	0b11100000,0b00000000,
	0b11100000,0b00000000,
	0b11100000,0b00000000,
	0b11100000,0b00000000,
	0b11000000,0b00000001,
	0b11000000,0b00000011,
	0b10000000,0b10000111,
	0b00000000,0b11111111,
	0b00000000,0b01111100
};

//10X10
static const uint8_t u8g_autoStepNotActive_bits[] U8X8_PROGMEM = {
	0b10101010,0b00000010,
	0b00000001,0b00000000,
	0b00000000,0b00000010,
	0b00000001,0b00000000,
	0b00000000,0b00000010,
	0b00000001,0b00000000,
	0b00000000,0b00000010,
	0b00000001,0b00000000,
	0b00000000,0b00000010,
	0b01010101,0b00000001
};

//66X18
static const uint8_t u8g_reflow_txt_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0xDE, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xDF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC7, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC3, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xC3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xC3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x77, 0xF8, 0xE0, 0xDF, 0xC1, 0x0F, 
  0x07, 0x87, 0x03, 0x7F, 0xFC, 0xE3, 0xDF, 0xE1, 0x1F, 0x07, 0x87, 0x03, 
  0x0F, 0x8E, 0x83, 0xC3, 0x71, 0x38, 0x8E, 0x87, 0x01, 0x0F, 0x07, 0x87, 
  0xC3, 0x79, 0x70, 0x8E, 0xC7, 0x01, 0x07, 0x07, 0x87, 0xC3, 0x39, 0x70, 
  0x8E, 0xCF, 0x01, 0x07, 0xFF, 0x87, 0xC3, 0x39, 0x70, 0xCC, 0xCC, 0x00, 
  0x07, 0xFF, 0x87, 0xC3, 0x39, 0x70, 0xDC, 0xCC, 0x00, 0x07, 0x07, 0x80, 
  0xC3, 0x39, 0x70, 0xDC, 0xEC, 0x00, 0x07, 0x07, 0x80, 0xC3, 0x79, 0x70, 
  0x58, 0x78, 0x00, 0x07, 0x0E, 0x82, 0xC3, 0x71, 0x38, 0x78, 0x78, 0x00, 
  0x07, 0xFC, 0x83, 0xC3, 0xE1, 0x1F, 0x78, 0x78, 0x00, 0x07, 0xF8, 0x81, 
  0xC3, 0xC1, 0x0F, 0x78, 0x78, 0x00
};

//59X12
static const uint8_t u8g_warm_txt_bits[] U8X8_PROGMEM = {
  0x07, 0x87, 0xE3, 0x0F, 0xEE, 0x9C, 0xE3, 0x01, 0x07, 0x87, 0xF3, 0x1F, 
  0xFE, 0xFC, 0xF7, 0x03, 0x8E, 0x87, 0x31, 0x3C, 0x1E, 0x3C, 0x9F, 0x07, 
  0x8E, 0xC7, 0x01, 0x38, 0x1E, 0x1C, 0x0E, 0x07, 0x8E, 0xCF, 0x81, 0x3F, 
  0x0E, 0x1C, 0x0E, 0x07, 0xCC, 0xCC, 0xF0, 0x3F, 0x0E, 0x1C, 0x0E, 0x07, 
  0xDC, 0xCC, 0xF8, 0x38, 0x0E, 0x1C, 0x0E, 0x07, 0xDC, 0xEC, 0x38, 0x38, 
  0x0E, 0x1C, 0x0E, 0x07, 0x58, 0x78, 0x38, 0x38, 0x0E, 0x1C, 0x0E, 0x07, 
  0x78, 0x78, 0x78, 0x3C, 0x0E, 0x1C, 0x0E, 0x07, 0x78, 0x78, 0xF0, 0x3F, 
  0x0E, 0x1C, 0x0E, 0x07, 0x78, 0x78, 0xE0, 0x39, 0x0E, 0x1C, 0x0E, 0x07 
  };

//49X17
static const uint8_t u8g_soak_txt_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0xFC, 
  0xE0, 0x07, 0xFC, 0xC1, 0xE1, 0x01, 0xFE, 0xF0, 0x0F, 0xFE, 0xC3, 0xF1, 
  0x00, 0x87, 0x38, 0x1C, 0x86, 0xC7, 0x71, 0x00, 0x07, 0x3C, 0x38, 0x00, 
  0xC7, 0x39, 0x00, 0x0F, 0x1C, 0x38, 0xF0, 0xC7, 0x1D, 0x00, 0x7E, 0x1C, 
  0x38, 0xFE, 0xC7, 0x0F, 0x00, 0xF8, 0x1C, 0x38, 0x1F, 0xC7, 0x0F, 0x00, 
  0xE0, 0x1D, 0x38, 0x07, 0xC7, 0x1D, 0x00, 0xC0, 0x3D, 0x38, 0x07, 0xC7, 
  0x39, 0x00, 0xC1, 0x39, 0x1C, 0x8F, 0xC7, 0x71, 0x00, 0xFF, 0xF0, 0x0F, 
  0xFE, 0xC7, 0xF1, 0x00, 0x7F, 0xE0, 0x07, 0x3C, 0xC7, 0xE1, 0x01
};

//43X18
static const uint8_t u8g_cool_txt_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xF8, 0xC1, 0x0F, 0xF0, 0x03, 0x07, 0xFC, 0xE1, 0x1F, 0xF8, 0x07, 0x07, 
  0x1E, 0x71, 0x38, 0x1C, 0x0E, 0x07, 0x0E, 0x78, 0x70, 0x1E, 0x1C, 0x07, 
  0x07, 0x38, 0x70, 0x0E, 0x1C, 0x07, 0x07, 0x38, 0x70, 0x0E, 0x1C, 0x07, 
  0x07, 0x38, 0x70, 0x0E, 0x1C, 0x07, 0x07, 0x38, 0x70, 0x0E, 0x1C, 0x07, 
  0x0F, 0x78, 0x70, 0x1E, 0x1C, 0x07, 0x1E, 0x71, 0x38, 0x1C, 0x0E, 0x07, 
  0xFC, 0xE1, 0x1F, 0xF8, 0x07, 0x07, 0xF8, 0xC0, 0x0F, 0xF0, 0x03, 0x07, 
  };

  
// Draw initial menu with selected item (1 - Auto, 2 - Manual)
void drawMenu_AutoManual(uint8_t sel) {
	u8g2.clearBuffer();
	u8g2.setDrawColor(1);
	if(sel==1){
		u8g2.drawRBox(0,4,51,25,4);
		u8g2.drawRFrame(55,4,73,25,4);
	}else{
		u8g2.drawRFrame(0,4,51,25,4);
		u8g2.drawRBox(55,4,73,25,4);
	}
	u8g2.setDrawColor(2);	// restore default mode
	u8g2.setFont(u8g2_font_t0_22_mf);
	u8g2.drawStr(3,24,"Auto");
	u8g2.drawStr(59,24,"Manual");
	u8g2.sendBuffer();
}

// this routine is a part of other routine, so no sendBuffer...
void printManual(){
	u8g2.drawXBMP( 0, 0, 40, 10, u8g_manual_bits);
}

// this routine is a part of other routine, so no sendBuffer...	
void printPresetTemperature(){
	u8g2.setFont(u8g2_font_profont12_tn);	//numeric font for preset temperature and timer
	//u8g2.setFontMode(1);
	u8g2.setCursor(48, 9);
	uint16_t curval=(int)setPoint;
	u8g2.print(curval);
	uint16_t tmpcoord = 49+6*(curval<100 ? 2 : 3);	// two or three digits number
	u8g2.setBitmapMode(1);
	u8g2.drawXBMP(tmpcoord, 0, 8, 9, u8g_celsius_bits);
}

// this routine is a part of other routine, so no sendBuffer...	
// mm:ss
void printTime(uint16_t t) {
	//u8g2.setFontMode(1);
	u8g2.setCursor(87, 9);
	t = t % 3600;	// cut off hours
	uint8_t m = t / 60;
	uint8_t s = t % 60;
	printNumber00(m);
	u8g2.print(':');
	printNumber00(s);
}
// this routine is a part of other routine, so no sendBuffer...	
void printNumber00(uint8_t n) {
	if (n<10) {u8g2.print('0');}
	u8g2.print(n);
}

void printHeaterState(){
	if(digitalRead(MOSFET_PIN)){
		u8g2.drawXBMP( 120, 0, 8, 10, u8g_heating_bits);
	}else{
		u8g2.drawXBMP( 120, 0, 8, 10, u8g_clear_bits);
	}
}

// this routine is a part of other routine, so no sendBuffer...	
void printCurrentTemperature(){
	u8g2.setFont(u8g2_font_timR18_tn);	//numeric font for current temperature
	u8g2.setCursor(0, 31);
	uint16_t curval=round(currentTemp);
	u8g2.print(curval);
	uint16_t tmpcoord = 12*(curval<100 ? 2 : 3)+2;	// two or three digits number
	u8g2.drawXBMP(tmpcoord, 13, 16, 18, u8g_bigCelsius_bits);
}

void printAuto(){
	for(uint8_t i=0;i<3;i++){
		uint8_t curtype=0;
		switch (i) {
			case 0:	// Preheat
				if(ControlType==1){curtype=1;}else{curtype=2;}
				break;
			case 1:	// reflow
				if(ControlType==3){curtype=1;}else if(ControlType>3){curtype=2;}
				break;
			case 2:	// cool down
				if(ControlType==5){curtype=1;}else if(ControlType>5){curtype=2;}
		}
		printAutoStateBox(i*12,0,i,curtype); // x,y,step,type
	}
}

void printAutoStateBox(uint8_t x, uint8_t y, uint8_t step, uint8_t type){
// three types of boxes
// 0 - dotted box
// 1 - solid line box
// 2 - filled box
	switch (type) {
		case 0:
			u8g2.drawXBMP(x, y, 10, 10, u8g_autoStepNotActive_bits);
			break;
		case 1:
			u8g2.drawFrame(x, y, 10,10);
			break;
		case 2:
			u8g2.drawBox(x, y, 10,10);
	}
	// print step number (range: 0-2)
	u8g2.setFont(u8g2_font_5x7_tn);	//numeric font for step numbers
	//u8g2.setFontMode(1);
	u8g2.setCursor(x+3,y+8);
	u8g2.print(step+1);
	
	
}
	

void printStepTextGraphic(){
	switch (ControlType) {
		case 1:	// ramp to preheat temperature
			u8g2.drawXBMP(127-59, 31-12, 59, 12, u8g_warm_txt_bits);
			break;
		case 2:	// wait for timer
			u8g2.drawXBMP(127-49, 31-17, 49, 17, u8g_soak_txt_bits);
			break;
		case 3:	// ramp to reflow temperature
			u8g2.drawXBMP(127-59, 31-12, 59, 12, u8g_warm_txt_bits);
			break;
		case 4:	// wait for timer
			u8g2.drawXBMP(127-66, 31-18, 66, 18, u8g_reflow_txt_bits);
			break;
		case 5:	// wait for cooling down
			u8g2.drawXBMP(127-43, 31-18, 43, 18, u8g_cool_txt_bits);
	}	

}
	
#endif
