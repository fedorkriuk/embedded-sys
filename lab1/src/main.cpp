#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
  DDRD = 0xFF;
  DDRB = 0xFF;
  while (1)
  {
    PORTD = 0xFF;
    PORTB = 0xFF;
    _delay_ms(1000);
    PORTD = 0;
    PORTB = 0;
    _delay_ms(1000);
  }
}