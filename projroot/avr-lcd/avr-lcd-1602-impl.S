#ifndef __ASSEMBLER__
#define __ASSEMBLER__
#endif

#include "avr-lcd-1602.h"

#if !(_USE_1BIT_LCD_MODE)

#define preg_1                  r24
#define preg_2                  r22

#define set_en_low              cbi         _SFR_IO_ADDR(_LCD_E), _LCD_E_PIN
#define set_en_high             sbi         _SFR_IO_ADDR(_LCD_E), _LCD_E_PIN
#define set_en_output           sbi         (_SFR_IO_ADDR(_LCD_E) - 1), _LCD_E_PIN

#define set_rs_low              cbi         _SFR_IO_ADDR(_LCD_RS), _LCD_RS_PIN
#define set_rs_high             sbi         _SFR_IO_ADDR(_LCD_RS), _LCD_RS_PIN
#define set_rs_output           sbi         (_SFR_IO_ADDR(_LCD_RS) - 1), _LCD_RS_PIN

#define set_b4_low              cbi         _SFR_IO_ADDR(_LCD_D4), _LCD_D4_PIN
#define set_b4_high             sbi         _SFR_IO_ADDR(_LCD_D4), _LCD_D4_PIN
#define set_b4_output           sbi         (_SFR_IO_ADDR(_LCD_D4) - 1), _LCD_D4_PIN

#define set_b5_low              cbi         _SFR_IO_ADDR(_LCD_D5), _LCD_D5_PIN
#define set_b5_high             sbi         _SFR_IO_ADDR(_LCD_D5), _LCD_D5_PIN
#define set_b5_output           sbi         (_SFR_IO_ADDR(_LCD_D5) - 1), _LCD_D5_PIN

#define set_b6_low              cbi         _SFR_IO_ADDR(_LCD_D6), _LCD_D6_PIN
#define set_b6_high             sbi         _SFR_IO_ADDR(_LCD_D6), _LCD_D6_PIN
#define set_b6_output           sbi         (_SFR_IO_ADDR(_LCD_D6) - 1), _LCD_D6_PIN

#define set_b7_low              cbi         _SFR_IO_ADDR(_LCD_D7), _LCD_D7_PIN
#define set_b7_high             sbi         _SFR_IO_ADDR(_LCD_D7), _LCD_D7_PIN
#define set_b7_output           sbi         (_SFR_IO_ADDR(_LCD_D7) - 1), _LCD_D7_PIN

.section .text

_lcd_pulse:         sbrc                preg_1, 0               ; Set RS (0=Cmd, 1=Char)
                    set_rs_high
                    sbrs                preg_1, 0
                    set_rs_low
                    set_rs_output                               ; init hardware
                    nop                                         ; wait for address setup
                    set_en_high
                    set_en_output                               ; init hardware

                    set_b4_low
                    set_b5_low
                    set_b6_low
                    set_b7_low

                    sbrc                preg_2, 4
                    set_b4_high
                    set_b4_output                               ; init hardware
                    sbrc                preg_2, 5
                    set_b5_high
                    set_b5_output                               ; init hardware
                    sbrc                preg_2, 6
                    set_b6_high
                    set_b6_output                               ; init hardware
                    sbrc                preg_2, 7
                    set_b7_high
                    set_b7_output                               ; init hardware

                    nop                                         ; wait for data setup time
                    set_en_low                                  ; force data read from LCD controller
                    rcall               sleep1us

                    sbrc                preg_1, 7               ; skip sending low nibble for init commands
                    rjmp                _lcd_pexit

                    set_en_high                                 ; Send low nibble
               
                    set_b4_low
                    set_b5_low
                    set_b6_low
                    set_b7_low
               
                    sbrc                preg_2, 0
                    set_b4_high
                    sbrc                preg_2, 1
                    set_b5_high
                    sbrc                preg_2, 2
                    set_b6_high
                    sbrc                preg_2, 3
                    set_b7_high

                    nop                                         ; wait for data setup time
                    set_en_low                                  ; force data read from LCD controller
 #if _LCD_SLOW
                    rcall               sleep30us
 #else
                    rcall               sleep1us
 #endif
_lcd_pexit:         ret


#endif /* !(_USE_1BIT_LCD_MODE) */
