#include "ru.alphas.hxx"
#include <inttypes.h>

char const* lstring[LStringCount] = 
{
// 0123456789012345
  "����������������"
, "����������������"
};

static uint8_t HD44780_subst(uint8_t sym)
{
	static const uint8_t subst_table[256] =
	{
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  16 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  32 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  48 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  64 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  80 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /*  96 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 112 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 128 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 144 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 160 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 176 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 192 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 208 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 224 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 240 */
      , 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  /* 256 */
	};

	return subst_table[sym];
}

char const* _1251_to_lcd(char const* source)
{
	size_t l = strlen(source);

	uint8_t* p = (uint8_t*)source;
	for (size_t i=0; i < l; i++)
		p[i] = HD44780_subst(p[i]);

	return source;
}

struct dos_cp_symbol
{
    uint8_t symbol;
    uint8_t data[8];
};

static const dos_cp_symbol _font[] = 
{
  {   0, { 0b00000000
		 , 0b00000000
         , 0b00001101
         , 0b00010011
         , 0b00010001
         , 0b00010011
         , 0b00001101
         , 0b00000000
  }},
  {   1, { 0b00000000
         , 0b00001101
         , 0b00010011
         , 0b00010001
         , 0b00010011
         , 0b00001101
         , 0b00000000
         , 0b00000000
  }},
};

void init_ru_cp(Generic::LCD const& lcd)
{
    for (unsigned i=0; i < (sizeof(_font) / sizeof(_font[0])); i++)
        lcd.createChar(_font[i].symbol, _font[i].data);

    lcd.setCursor(0, 0);
    lcd.print(_1251_to_lcd(lstring[0]));

    lcd.setCursor(0, 1);
    lcd.print(_1251_to_lcd(lstring[1]));
}
