const unsigned char PROGMEM font[256][6]={
{0x08,0x3E,0x22,0x22,0x3E,0x08},	// 0x00   //00/ --> Resistor3 // {0x00,0x3E,0x45,0x51,0x45,0x3E},	// 0x00
{0x08,0x7F,0x22,0x14,0x08,0x7F},	// 0x01   //01/ --> Diode1
{0x7F,0x08,0x14,0x22,0x7F,0x08},	// 0x02   //02/ --> Diode2   // {0x00,0x3E,0x6B,0x6F,0x6B,0x3E},	// 0x02
{0x7F,0x7F,0x00,0x00,0x7F,0x7F},	// 0x03   //03/ --> Capacitance //{0x00,0x1C,0x3E,0x7C,0x3E,0x1C},	// 0x03
{0x00,0x58,0x64,0x04,0x64,0x58},	// 0x04   //04/ --> Omega    // {0x00,0x18,0x3C,0x7E,0x3C,0x18},	// 0x04
{0x00,0x80,0x7C,0x20,0x20,0x1C},	// 0x05   //05/ --> mu        // {0x00,0x30,0x36,0x7F,0x36,0x30},	// 0x05
{0x22,0x22,0x22,0x22,0x22,0x3E},	// 0x06   //06/ --> Resistor1 // {0x00,0x18,0x5C,0x7E,0x5C,0x18},	// 0x06
{0x3E,0x22,0x22,0x22,0x22,0x22},	// 0x07   //07/ --> Resistor2 // {0x00,0x00,0x00,0x00,0x00,0x00},	// 0x07
{0x00,0x00,0x00,0x00,0x00,0x00},	// 0x08 
{0x00,0x00,0x00,0x00,0x00,0x00},	// 0x09 
{0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0A   //10/             
{0x00,0x30,0x48,0x4A,0x36,0x0E},	// 0x0B   //11/             
{0x00,0x06,0x29,0x79,0x29,0x06},	// 0x0C   //12/             
{0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0D   //13/             
{0x00,0x60,0x7E,0x0A,0x35,0x3F},	// 0x0E   //14/             
{0x00,0x2A,0x1C,0x36,0x1C,0x2A},	// 0x0F   //15/             
{0x00,0x00,0x7F,0x3E,0x1C,0x08},	// 0x10   //16/             
{0x00,0x08,0x1C,0x3E,0x7F,0x00},	// 0x11   //17/             
{0x00,0x14,0x36,0x7F,0x36,0x14},	// 0x12   //18/             
{0x00,0x00,0x5F,0x00,0x5F,0x00},	// 0x13   //19/             
{0x00,0x06,0x09,0x7F,0x01,0x7F},	// 0x14   //20/             
{0x00,0x22,0x4D,0x55,0x59,0x22},	// 0x15   //21/             
{0x00,0x60,0x60,0x60,0x60,0x00},	// 0x16   //22/             
{0x00,0x14,0xB6,0xFF,0xB6,0x14},	// 0x17   //23/             
{0x00,0x04,0x06,0x7F,0x06,0x04},	// 0x18   //24/             
{0x00,0x10,0x30,0x7F,0x30,0x10},	// 0x19   //25/             
{0x00,0x08,0x08,0x3E,0x1C,0x08},	// 0x1A   //26/             
{0x00,0x08,0x1C,0x3E,0x08,0x08},	// 0x1B   //27/             
{0x00,0x78,0x40,0x40,0x40,0x40},	// 0x1C   //28/             
{0x00,0x08,0x3E,0x08,0x3E,0x08},	// 0x1D   //29/             
{0x00,0x30,0x3C,0x3F,0x3C,0x30},	// 0x1E   //30/             
{0x00,0x03,0x0F,0x3F,0x0F,0x03},	// 0x1F   //31/             
{0x00,0x00,0x00,0x00,0x00,0x00},	// 0x20   //32/             
{0x00,0x00,0x00,0x5F,0x00,0x00},	// 0x21   //33/             
{0x00,0x00,0x03,0x00,0x03,0x00},	// 0x22   //34/             
{0x00,0x14,0x7F,0x14,0x7F,0x14},	// 0x23   //35/             
{0x00,0x24,0x2A,0x7F,0x2A,0x12},	// 0x24   //36/             
{0x00,0x23,0x13,0x08,0x64,0x62},	// 0x25   //37/             
{0x00,0x36,0x49,0x55,0x22,0x50},	// 0x26   //38/             
{0x00,0x00,0x05,0x03,0x00,0x00},	// 0x27   //39/             
{0x00,0x00,0x1C,0x22,0x41,0x00},	// 0x28   //40/             
{0x00,0x00,0x41,0x22,0x1C,0x00},	// 0x29   //41/             
{0x00,0x14,0x08,0x3E,0x08,0x14},	// 0x2A   //42/             
{0x00,0x08,0x08,0x3E,0x08,0x08},	// 0x2B   //43/             
{0x00,0x00,0xA0,0x60,0x00,0x00},	// 0x2C   //44/             
{0x08,0x08,0x08,0x08,0x08,0x08},	// 0x2D   //45/             
{0x00,0x00,0x60,0x60,0x00,0x00},	// 0x2E   //46/             
{0x00,0x20,0x10,0x08,0x04,0x02},	// 0x2F   //47/             
{0x00,0x3E,0x51,0x49,0x45,0x3E},	// 0x30   //48/             
{0x00,0x00,0x42,0x7F,0x40,0x00},	// 0x31   //49/             
{0x00,0x42,0x61,0x51,0x49,0x46},	// 0x32   //50/             
{0x00,0x21,0x41,0x45,0x4B,0x31},	// 0x33   //51/             
{0x00,0x18,0x14,0x12,0x7F,0x10},	// 0x34   //52/             
{0x00,0x27,0x45,0x45,0x45,0x39},	// 0x35   //53/             
{0x00,0x3C,0x4A,0x49,0x49,0x30},	// 0x36   //54/             
{0x00,0x01,0x71,0x09,0x05,0x03},	// 0x37   //55/             
{0x00,0x36,0x49,0x49,0x49,0x36},	// 0x38   //56/             
{0x00,0x06,0x49,0x49,0x29,0x1E},	// 0x39   //57/             
{0x00,0x00,0x36,0x36,0x00,0x00},	// 0x3A   //58/             
{0x00,0x00,0x56,0x36,0x00,0x00},	// 0x3B   //59/             
{0x00,0x08,0x14,0x22,0x41,0x00},	// 0x3C   //60/             
{0x00,0x14,0x14,0x14,0x14,0x14},	// 0x3D   //61/             
{0x00,0x00,0x41,0x22,0x14,0x08},	// 0x3E   //62/             
{0x00,0x02,0x01,0x51,0x09,0x06},	// 0x3F   //63/             
{0x00,0x32,0x49,0x79,0x41,0x3E},	// 0x40   //64/             
{0x00,0x7E,0x11,0x11,0x11,0x7E},	// 0x41   //65/ A           
{0x00,0x7F,0x49,0x49,0x49,0x36},	// 0x42   //66/ B           
{0x00,0x3E,0x41,0x41,0x41,0x22},	// 0x43   //67/ C           
{0x00,0x7F,0x41,0x41,0x22,0x1C},	// 0x44   //68/ D           
{0x00,0x7F,0x49,0x49,0x49,0x41},	// 0x45   //69/ E           
{0x00,0x7F,0x09,0x09,0x09,0x01},	// 0x46   //70/ F           
{0x00,0x3E,0x41,0x49,0x49,0x7A},	// 0x47   //71/ G           
{0x00,0x7F,0x08,0x08,0x08,0x7F},	// 0x48   //72/ H           
{0x00,0x00,0x41,0x7F,0x41,0x00},	// 0x49   //73/ I           
{0x00,0x20,0x40,0x41,0x3F,0x01},	// 0x4A   //74/ J           
{0x00,0x7F,0x08,0x14,0x22,0x41},	// 0x4B   //75/ K           
{0x00,0x7F,0x40,0x40,0x40,0x40},	// 0x4C   //76/ L           
{0x00,0x7F,0x02,0x0C,0x02,0x7F},	// 0x4D   //77/ M           
{0x00,0x7F,0x04,0x08,0x10,0x7F},	// 0x4E   //78/ N           
{0x00,0x3E,0x41,0x41,0x41,0x3E},	// 0x4F   //79/ O           
{0x00,0x7F,0x09,0x09,0x09,0x06},	// 0x50   //80/ P           
{0x00,0x3E,0x41,0x51,0x21,0x5E},	// 0x51   //81/ Q           
{0x00,0x7F,0x09,0x19,0x29,0x46},	// 0x52   //82/ R           
{0x00,0x46,0x49,0x49,0x49,0x31},	// 0x53   //83/ S           
{0x00,0x01,0x01,0x7F,0x01,0x01},	// 0x54   //84/ T           
{0x00,0x3F,0x40,0x40,0x40,0x3F},	// 0x55   //85/ U           
{0x00,0x1F,0x20,0x40,0x20,0x1F},	// 0x56   //86/ V           
{0x00,0x3F,0x40,0x38,0x40,0x3F},	// 0x57   //87/ W           
{0x00,0x63,0x14,0x08,0x14,0x63},	// 0x58   //88/ X           
{0x00,0x07,0x08,0x70,0x08,0x07},	// 0x59   //89/ Y           
{0x00,0x61,0x51,0x49,0x45,0x43},	// 0x5A   //90/ Z           
{0x00,0x00,0x7F,0x41,0x41,0x00},	// 0x5B   //91/             
{0x00,0x18,0x24,0x7E,0x24,0x10},	// 0x5C   //92/             
{0x00,0x00,0x41,0x41,0x7F,0x00},	// 0x5D   //93/             
{0x00,0x04,0x02,0x01,0x02,0x04},	// 0x5E   //94/             
{0x00,0x80,0x80,0x80,0x80,0x80},	// 0x5F   //95/             
{0x00,0x00,0x01,0x02,0x00,0x00},	// 0x60   //96/             
{0x00,0x20,0x54,0x54,0x54,0x38},	// 0x61   //97/ a           
{0x00,0x7F,0x48,0x44,0x44,0x38},	// 0x62   //98/ b           
{0x00,0x38,0x44,0x44,0x44,0x20},	// 0x63   //99/ c           
{0x00,0x38,0x44,0x44,0x48,0x7F},	// 0x64   //100/ d          
{0x00,0x38,0x54,0x54,0x54,0x18},	// 0x65   //101/ e          
{0x00,0x08,0x7E,0x09,0x01,0x02},	// 0x66   //102/ f          
{0x00,0x08,0x54,0x54,0x54,0x3C},	// 0x67   //103/ g          
{0x00,0x7F,0x08,0x04,0x04,0x78},	// 0x68   //104/ h          
{0x00,0x00,0x44,0x7D,0x40,0x00},	// 0x69   //105/ i          
{0x00,0x20,0x40,0x44,0x3D,0x00},	// 0x6A   //106/ j          
{0x00,0x7F,0x10,0x28,0x44,0x00},	// 0x6B   //107/ k          
{0x00,0x00,0x41,0x7F,0x40,0x00},	// 0x6C   //108/ l          
{0x00,0x7C,0x04,0x18,0x04,0x78},	// 0x6D   //109/ m          
{0x00,0x7C,0x08,0x04,0x04,0x78},	// 0x6E   //110/ n          
{0x00,0x38,0x44,0x44,0x44,0x38},	// 0x6F   //111/ o          
{0x00,0x7C,0x14,0x14,0x14,0x08},	// 0x70   //112/ p          
{0x00,0x08,0x14,0x14,0x14,0x7C},	// 0x71   //113/ q          
{0x00,0x7C,0x08,0x04,0x04,0x08},	// 0x72   //114/ r          
{0x00,0x48,0x54,0x54,0x54,0x20},	// 0x73   //115/ s          
{0x00,0x04,0x3F,0x44,0x40,0x20},	// 0x74   //116/ t          
{0x00,0x3C,0x40,0x40,0x20,0x7C},	// 0x75   //117/ u          
{0x00,0x1C,0x20,0x40,0x20,0x1C},	// 0x76   //118/ v          
{0x00,0x3C,0x40,0x30,0x40,0x3C},	// 0x77   //119/ w          
{0x00,0x44,0x28,0x10,0x28,0x44},	// 0x78   //120/ x          
{0x00,0x0C,0x50,0x50,0x50,0x3C},	// 0x79   //121/ y          
{0x00,0x44,0x64,0x54,0x4C,0x44},	// 0x7A   //122/ z          
{0x00,0x00,0x08,0x36,0x41,0x00},	// 0x7B   //123/            
{0x00,0x00,0x00,0x3F,0x00,0x00},	// 0x7C   //124/            
{0x00,0x00,0x41,0x36,0x08,0x00},	// 0x7D   //125/            
{0x00,0x08,0x08,0x2A,0x1C,0x08},	// 0x7E   //126/            
{0x00,0x3C,0x26,0x23,0x26,0x3C},	// 0x7F   //127/            
{0x00,0x08,0x1C,0x2A,0x08,0x08},	// 0x80   //128/            
{0x00,0x3D,0x40,0x20,0x7D,0x00},	// 0x81   //129/            
{0x00,0x38,0x54,0x54,0x55,0x09},	// 0x82   //130/            
{0x00,0x20,0x55,0x55,0x55,0x78},	// 0x83   //131/            
{0x00,0x20,0x55,0x54,0x55,0x78},	// 0x84   //132/            
{0x00,0x20,0x55,0x55,0x54,0x78},	// 0x85   //133/            
{0x00,0x20,0x57,0x55,0x57,0x78},	// 0x86   //134/            
{0x00,0x1C,0xA2,0xE2,0x22,0x14},	// 0x87   //135/            
{0x00,0x38,0x55,0x55,0x55,0x08},	// 0x88   //136/            
{0x00,0x38,0x55,0x54,0x55,0x08},	// 0x89   //137/            
{0x00,0x38,0x55,0x55,0x54,0x08},	// 0x8A   //138/            
{0x00,0x00,0x01,0x7C,0x41,0x00},	// 0x8B   //139/            
{0x00,0x00,0x01,0x7D,0x41,0x00},	// 0x8C   //140/            
{0x00,0x00,0x01,0x7C,0x40,0x00},	// 0x8D   //141/            
{0x00,0x70,0x29,0x24,0x29,0x70},	// 0x8E   //142/            
{0x00,0x78,0x2F,0x25,0x2F,0x78},	// 0x8F   //143/            
{0x00,0x7C,0x54,0x54,0x55,0x45},	// 0x90   //144/            
{0x00,0x34,0x54,0x7C,0x54,0x58},	// 0x91   //145/            
{0x00,0x7E,0x09,0x7F,0x49,0x49},	// 0x92   //146/            
{0x00,0x38,0x45,0x45,0x39,0x00},	// 0x93   //147/            
{0x00,0x38,0x45,0x44,0x39,0x00},	// 0x94   //148/            
{0x00,0x39,0x45,0x44,0x38,0x00},	// 0x95   //149/            
{0x00,0x3C,0x41,0x21,0x7D,0x00},	// 0x96   //150/            
{0x00,0x3D,0x41,0x20,0x7C,0x00},	// 0x97   //151/            
{0x00,0x9C,0xA1,0x60,0x3D,0x00},	// 0x98   //152/            
{0x00,0x3D,0x42,0x42,0x3D,0x00},	// 0x99   //153/            
{0x00,0x3C,0x41,0x40,0x3D,0x00},	// 0x9A   //154/            
{0x80,0x70,0x68,0x58,0x38,0x04},	// 0x9B   //155/            
{0x00,0x48,0x3E,0x49,0x49,0x62},	// 0x9C   //156/            
{0x00,0x7E,0x61,0x5D,0x43,0x3F},	// 0x9D   //157/            
{0x00,0x22,0x14,0x08,0x14,0x22},	// 0x9E   //158/            
{0x00,0x40,0x88,0x7E,0x09,0x02},	// 0x9F   //159/            
#ifndef LCD_CYRILLIC                                                
{0x00,0x20,0x54,0x55,0x55,0x78},	// 0xA0                     
{0x00,0x00,0x00,0x7D,0x41,0x00},	// 0xA1                     
{0x00,0x38,0x44,0x45,0x39,0x00},	// 0xA2                     
{0x00,0x3C,0x40,0x21,0x7D,0x00},	// 0xA3                     
{0x00,0x7A,0x09,0x0A,0x71,0x00},	// 0xA4                     
{0x00,0x7A,0x11,0x22,0x79,0x00},	// 0xA5                     
{0x00,0x08,0x55,0x55,0x55,0x5E},	// 0xA6                     
{0x00,0x4E,0x51,0x51,0x4E,0x00},	// 0xA7                     
{0x00,0x30,0x48,0x4D,0x40,0x20},	// 0xA8                     
{0x3E,0x41,0x5D,0x4B,0x55,0x3E},	// 0xA9                     
{0x04,0x04,0x04,0x04,0x04,0x1C},	// 0xAA                     
{0x00,0x17,0x08,0x4C,0x6A,0x50},	// 0xAB                     
{0x00,0x17,0x08,0x34,0x2A,0x78},	// 0xAC                     
{0x00,0x00,0x30,0x7D,0x30,0x00},	// 0xAD                     
{0x00,0x08,0x14,0x00,0x08,0x14},	// 0xAE                     
{0x00,0x14,0x08,0x00,0x14,0x08},	// 0xAF                     
{0x44,0x11,0x44,0x11,0x44,0x11},	// 0xB0                     
{0xAA,0x55,0xAA,0x55,0xAA,0x55},	// 0xB1                     
{0xBB,0xEE,0xBB,0xEE,0xBB,0xEE},	// 0xB2                     
{0x00,0x00,0x00,0xFF,0x00,0x00},	// 0xB3                     
{0x08,0x08,0x08,0xFF,0x00,0x00},	// 0xB4                     
{0x00,0x70,0x28,0x25,0x29,0x70},	// 0xB5                     
{0x00,0x70,0x29,0x25,0x29,0x70},	// 0xB6                     
{0x00,0x70,0x29,0x25,0x28,0x70},	// 0xB7                     
{0x3E,0x41,0x5D,0x55,0x41,0x3E},	// 0xB8                     
{0x0A,0xFB,0x00,0xFF,0x00,0x00},	// 0xB9                     
{0x00,0xFF,0x00,0xFF,0x00,0x00},	// 0xBA                     
{0x0A,0xFA,0x02,0xFE,0x00,0x00},	// 0xBB                     
{0x0A,0x0B,0x08,0x0F,0x00,0x00},	// 0xBC                     
{0x00,0x18,0x24,0x66,0x24,0x00},	// 0xBD                     
{0x00,0x29,0x2A,0x7C,0x2A,0x29},	// 0xBE                     
{0x08,0x08,0x08,0xF8,0x00,0x00},	// 0xBF                     
{0x00,0x00,0x00,0x0F,0x08,0x08},	// 0xC0                     
{0x08,0x08,0x08,0x0F,0x08,0x08},	// 0xC1                     
{0x08,0x08,0x08,0xF8,0x08,0x08},	// 0xC2                     
{0x00,0x00,0x00,0xFF,0x08,0x08},	// 0xC3                     
{0x08,0x08,0x08,0x08,0x08,0x08},	// 0xC4                     
{0x08,0x08,0x08,0xFF,0x08,0x08},	// 0xC5                     
{0x00,0x20,0x56,0x55,0x56,0x79},	// 0xC6                     
{0x00,0x70,0x2A,0x25,0x2A,0x71},	// 0xC7                     
{0x00,0x0F,0x08,0x0B,0x0A,0x0A},	// 0xC8                     
{0x00,0xFE,0x02,0xFA,0x0A,0x0A},	// 0xC9                     
{0x0A,0x0B,0x08,0x0B,0x0A,0x0A},	// 0xCA                     
{0x0A,0xFA,0x02,0xFA,0x0A,0x0A},	// 0xCB                     
{0x00,0xFF,0x00,0xFB,0x0A,0x0A},	// 0xCC                     
{0x0A,0x0A,0x0A,0x0A,0x0A,0x0A},	// 0xCD                     
{0x0A,0xFB,0x00,0xFB,0x0A,0x0A},	// 0xCE                     
{0x00,0x5D,0x22,0x22,0x22,0x5D},	// 0xCF                     
{0x00,0x22,0x55,0x59,0x30,0x00},	// 0xD0                     
{0x00,0x08,0x7F,0x49,0x41,0x3E},	// 0xD1                     
{0x00,0x7C,0x55,0x55,0x55,0x44},	// 0xD2                     
{0x00,0x7C,0x55,0x54,0x55,0x44},	// 0xD3                     
{0x00,0x7C,0x55,0x55,0x54,0x44},	// 0xD4                     
{0x00,0x00,0x00,0x07,0x00,0x00},	// 0xD5                     
{0x00,0x00,0x44,0x7D,0x45,0x00},	// 0xD6                     
{0x00,0x00,0x45,0x7D,0x45,0x00},	// 0xD7                     
{0x00,0x00,0x45,0x7C,0x45,0x00},	// 0xD8                     
{0x08,0x08,0x08,0x0F,0x00,0x00},	// 0xD9                     
{0x00,0x00,0x00,0xF8,0x08,0x08},	// 0xDA                     
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	// 0xDB                     
{0xF0,0xF0,0xF0,0xF0,0xF0,0xF0},	// 0xDC                     
{0x00,0x00,0x00,0x77,0x00,0x00},	// 0xDD                     
{0x00,0x00,0x45,0x7D,0x44,0x00},	// 0xDE                     
{0x0F,0x0F,0x0F,0x0F,0x0F,0x0F},	// 0xDF                     
{0x00,0x3C,0x42,0x43,0x3D,0x00},	// 0xE0                     
{0x00,0xFE,0x4A,0x4A,0x34,0x00},	// 0xE1                     
{0x00,0x3C,0x43,0x43,0x3D,0x00},	// 0xE2                     
{0x00,0x3D,0x43,0x42,0x3C,0x00},	// 0xE3                     
{0x00,0x32,0x49,0x4A,0x31,0x00},	// 0xE4                     
{0x00,0x3A,0x45,0x46,0x39,0x00},	// 0xE5                     
{0x00,0xFC,0x20,0x20,0x1C,0x00},	// 0xE6                     
{0x00,0xFE,0xAA,0x28,0x10,0x00},	// 0xE7                     
{0x00,0xFF,0xA5,0x24,0x18,0x00},	// 0xE8                     
{0x00,0x3C,0x40,0x41,0x3D,0x00},	// 0xE9                     
{0x00,0x3C,0x41,0x41,0x3D,0x00},	// 0xEA                     
{0x00,0x3D,0x41,0x40,0x3C,0x00},	// 0xEB                     
{0x00,0x9C,0xA0,0x61,0x3D,0x00},	// 0xEC                     
{0x00,0x04,0x08,0x71,0x09,0x04},	// 0xED                     
{0x00,0x00,0x02,0x02,0x02,0x00},	// 0xEE                     
{0x00,0x00,0x07,0x03,0x00,0x00},	// 0xEF                     
{0x00,0x00,0x08,0x08,0x08,0x00},	// 0xF0                     
{0x00,0x00,0x24,0x2E,0x24,0x00},	// 0xF1                     
{0x00,0x24,0x24,0x24,0x24,0x24},	// 0xF2                     
{0x05,0x17,0x0A,0x34,0x2A,0x78},	// 0xF3                     
{0x00,0x06,0x09,0x7F,0x01,0x7F},	// 0xF4                     
{0x00,0x22,0x4D,0x55,0x59,0x22},	// 0xF5                     
{0x00,0x08,0x08,0x2A,0x08,0x08},	// 0xF6                     
{0x00,0x00,0x08,0x18,0x18,0x00},	// 0xF7                     
{0x00,0x06,0x09,0x09,0x06,0x00},	// 0xF8                     
{0x00,0x00,0x08,0x00,0x08,0x00},	// 0xF9                     
{0x00,0x00,0x08,0x00,0x00,0x00},	// 0xFA                     
{0x00,0x02,0x0F,0x00,0x00,0x00},	// 0xFB                     
{0x00,0x09,0x0F,0x05,0x00,0x00},	// 0xFC                     
{0x00,0x09,0x0D,0x0A,0x00,0x00},	// 0xFD                     
{0x00,0x3C,0x3C,0x3C,0x3C,0x00},	// 0xFE                     
{0x00,0x00,0x00,0x00,0x00,0x00} 	// 0xFF                     
#else                                                               
{0x00,0x7F,0x49,0x49,0x49,0x33},	// 0xA0   //160/ �          
{0x00,0x7F,0x01,0x01,0x01,0x03},	// 0xA1   //161/ �          
{0x00,0x7C,0x55,0x54,0x55,0x00},	// 0xA2   //162/ �          
{0x00,0x77,0x08,0x7F,0x08,0x77},	// 0xA3   //163/ �          
{0x00,0x41,0x49,0x49,0x49,0x36},	// 0xA4   //164/ �          
{0x00,0x7F,0x10,0x08,0x04,0x7F},	// 0xA5   //165/ �          
{0x00,0x7C,0x21,0x12,0x09,0x7C},	// 0xA6   //166/ �          
{0x00,0x20,0x41,0x3F,0x01,0x7F},	// 0xA7   //167/ �          
{0x00,0x7F,0x01,0x01,0x01,0x7F},	// 0xA8   //168/ �          
{0x00,0x47,0x28,0x10,0x08,0x07},	// 0xA9   //169/ �          
{0x00,0x1C,0x22,0x7F,0x22,0x1C},	// 0xAA   //170/ �          
{0x00,0x07,0x08,0x08,0x08,0x7F},	// 0xAB   //171/ �          
{0x00,0x7F,0x40,0x7F,0x40,0x7F},	// 0xAC   //172/ �          
{0x00,0x01,0x7F,0x48,0x48,0x30},	// 0xAD   //173/ �          
{0x00,0x7F,0x48,0x30,0x00,0x7F},	// 0xAE   //174/ �          
{0x00,0x22,0x41,0x49,0x49,0x3E},	// 0xAF   //175/ �          
{0x00,0x7F,0x08,0x3E,0x41,0x3E},	// 0xB0   //176/ �          
{0x00,0x46,0x29,0x19,0x09,0x7F},	// 0xB1   //177/ �          
{0x00,0x3C,0x4A,0x4A,0x49,0x31},	// 0xB2   //178/ �          
{0x00,0x7C,0x54,0x54,0x28,0x00},	// 0xB3   //179/ �          
{0x00,0x7C,0x04,0x04,0x04,0x0C},	// 0xB4   //180/ �          
{0x00,0x38,0x55,0x54,0x55,0x18},	// 0xB5   //181/ �          
{0x00,0x6C,0x10,0x7C,0x10,0x6C},	// 0xB6   //182/ �          
{0x00,0x44,0x44,0x54,0x54,0x28},	// 0xB7   //183/ �          
{0x00,0x7C,0x20,0x10,0x08,0x7C},	// 0xB8   //184/ �          
{0x00,0x78,0x42,0x24,0x12,0x78},	// 0xB9   //185/ �          
{0x00,0x7C,0x10,0x28,0x44,0x00},	// 0xBA   //186/ �          
{0x00,0x20,0x44,0x3C,0x04,0x7C},	// 0xBB   //187/ �          
{0x00,0x7C,0x08,0x10,0x08,0x7C},	// 0xBC   //188/ �          
{0x00,0x7C,0x10,0x10,0x10,0x7C},	// 0xBD   //189/ �          
{0x00,0x7C,0x04,0x04,0x04,0x7C},	// 0xBE   //190/ �          
{0x00,0x04,0x04,0x7C,0x04,0x04},	// 0xBF   //191/ �          
{0x00,0x0C,0x10,0x10,0x10,0x7C},	// 0xC0   //192/ �          
{0x00,0x7C,0x40,0x7C,0x40,0x7C},	// 0xC1   //193/ �          
{0x00,0x04,0x7C,0x50,0x50,0x20},	// 0xC2   //194/ �          
{0x00,0x7C,0x50,0x20,0x00,0x7C},	// 0xC3   //195/ �          
{0x00,0x7C,0x50,0x50,0x20,0x00},	// 0xC4   //196/ �          
{0x00,0x28,0x44,0x54,0x54,0x38},	// 0xC5   //197/ �          
{0x00,0x7C,0x10,0x38,0x44,0x38},	// 0xC6   //198/ �          
{0x00,0x08,0x54,0x34,0x14,0x7C},	// 0xC7   //199/ �          
{0x00,0x10,0x28,0x44,0x10,0x28},	// 0xC8   //200/            
{0x00,0x28,0x14,0x40,0x28,0x10},	// 0xC9   //201/            
{0x00,0x30,0x28,0x00,0x30,0x28},	// 0xCA   //202/            
{0x00,0x05,0x03,0x00,0x05,0x03},	// 0xCB   //203/            
{0x00,0x0F,0x02,0x74,0x5F,0x70},	// 0xCC   //204/            
{0x00,0x30,0x48,0x45,0x40,0x20},	// 0xCD   //205/            
{0x00,0x40,0x48,0x3E,0x09,0x01},	// 0xCE   //206/            
{0x00,0x08,0x7E,0x49,0x4A,0x40},	// 0xCF   //207/            
{0x00,0x00,0x00,0x60,0x00,0x00},	// 0xD0   //208/            
{0x00,0x00,0x00,0x78,0x00,0x00},	// 0xD1   //209/            
{0x00,0x00,0x5C,0x40,0x5C,0x00},	// 0xD2   //210/            
{0x00,0x00,0x5C,0x00,0x5C,0x00},	// 0xD3   //211/            
{0x00,0x45,0x24,0x15,0x08,0x04},	// 0xD4   //212/            
{0x00,0x22,0x36,0x1C,0x36,0x22},	// 0xD5   //213/            
{0x00,0x45,0x22,0x15,0x08,0x04},	// 0xD6   //214/            
{0x00,0x00,0x21,0x3F,0x21,0x00},	// 0xD7   //215/            
{0x00,0x21,0x3F,0x21,0x3F,0x21},	// 0xD8   //216/            
{0x00,0x04,0x02,0x7F,0x02,0x04},	// 0xD9   //217/            
{0x00,0x08,0x10,0x3F,0x10,0x08},	// 0xDA   //218/            
{0x00,0x7F,0x08,0x1C,0x3E,0x08},	// 0xDB   //219/            
{0x00,0x08,0x3E,0x1C,0x08,0x7F},	// 0xDC   //220/            
{0x00,0x7F,0x08,0x1C,0x08,0x3E},	// 0xDD   //221/            
{0x00,0x47,0x22,0x12,0x08,0x04},	// 0xDE   //222/            
{0x00,0x00,0x00,0x0C,0x0C,0x00},	// 0xDF   //223/            
{0x00,0xE0,0x51,0x4F,0x41,0xFF},	// 0xE0   //224/ �          
{0x00,0x7F,0x40,0x40,0x40,0xFF},	// 0xE1   //225/ �          
{0x00,0x7F,0x40,0x7F,0x40,0xFF},	// 0xE2   //226/ �          
{0x00,0xE0,0x54,0x4C,0x44,0xFC},	// 0xE3   //227/ �          
{0x00,0x18,0x24,0x7E,0x24,0x18},	// 0xE4   //228/ �          
{0x00,0x7C,0x40,0x40,0x40,0xFC},	// 0xE5   //229/ �          
{0x00,0x7C,0x40,0x7C,0x40,0xFC},	// 0xE6   //230/ �          
{0x00,0x00,0x00,0x02,0x01,0x00},	// 0xE7   //231/            
{0x00,0x00,0x01,0x00,0x01,0x00},	// 0xE8   //232/            
{0x00,0x02,0x01,0x02,0x02,0x01},	// 0xE9   //233/            
{0x00,0x38,0x54,0x56,0x55,0x18},	// 0xEA   //234/            
{0x00,0x18,0xA4,0xE4,0x24,0x10},	// 0xEB   //235/            
{0x00,0x00,0x5D,0x40,0x3D,0x00},	// 0xEC   //236/            
{0x00,0x10,0x1E,0x3F,0x1E,0x10},	// 0xED   //237/            
{0x00,0x08,0x22,0x00,0x22,0x08},	// 0xEE   //238/            
{0x00,0x1C,0x22,0x22,0x22,0x1C},	// 0xEF   //239/            
{0x00,0x17,0x08,0x14,0x1A,0x7D},	// 0xF0   //240/            
{0x00,0x17,0x08,0x44,0x56,0x7D},	// 0xF1   //241/            
{0x00,0x17,0x08,0x64,0x56,0x5D},	// 0xF2   //242/            
{0x00,0x15,0x1F,0x20,0x30,0xF8},	// 0xF3   //243/            
{0x00,0x7F,0x2A,0x2A,0x2A,0x7F},	// 0xF4   //244/            
{0x00,0x01,0x11,0x10,0x04,0x04},	// 0xF5   //245/            
{0x00,0x0E,0x45,0xEE,0x40,0x78},	// 0xF6   //246/            
{0x00,0x80,0xFF,0xAA,0x2A,0x08},	// 0xF7   //247/            
{0x00,0x08,0xAA,0xFF,0xAA,0x08},	// 0xF8   //248/            
{0x00,0x08,0x2A,0xAA,0xC0,0xAA},	// 0xF9   //249/            
{0x00,0x08,0x2A,0xAA,0xFF,0x80},	// 0xFA   //250/            
{0x00,0x08,0x2A,0x7F,0x2A,0x08},	// 0xFB   //251/            
{0x00,0x22,0x14,0x88,0xFF,0x80},	// 0xFC   //252/            
{0x00,0x40,0x9A,0xA5,0x59,0x02},	// 0xFD   //253/            
{0x00,0x06,0x09,0x7F,0x09,0x7F},	// 0xFE   //254/            
{0x00,0xFF,0xFF,0xFF,0xFF,0xFF},	// 0xFF   //255/            
#endif                                          
};
                                                