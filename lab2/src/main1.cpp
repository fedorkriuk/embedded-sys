#include <Arduino.h>
#include "util/delay.h"

int main(void)
{
  init();

  Serial.begin(9600);

  _delay_ms(1000);

  // === Data Types (page 15 table) ===
  unsigned char uc = 200;
  char sc = -50;
  unsigned int ui = 50000;
  int a = 100;
  int b = 3;
  int c = 0;
  unsigned long ul = 3000000UL;
  long sl = -100000L;
  float f = 3.14;
  double db = 2.718;

  Serial.println("=== DATA TYPES ===");
  Serial.print("unsigned char uc = ");
  Serial.println(uc);
  Serial.print("char sc = ");
  Serial.println(sc);
  Serial.print("unsigned int ui = ");
  Serial.println(ui);
  Serial.print("int a = ");
  Serial.println(a);
  Serial.print("int b = ");
  Serial.println(b);
  Serial.print("unsigned long ul = ");
  Serial.println(ul);
  Serial.print("long sl = ");
  Serial.println(sl);
  Serial.print("float f = ");
  Serial.println(f);
  Serial.print("double db = ");
  Serial.println(db);

  // === Arithmetic Operators ===
  Serial.println("\n=== ARITHMETIC ===");

  c = a + b;
  Serial.print("a+b=");
  Serial.println(c);

  c = a - b;
  Serial.print("a-b=");
  Serial.println(c);

  Serial.print("a*b=");
  Serial.println(a * b);

  Serial.print("a/b=");
  Serial.println(a / b); // integer division = 33

  float d = a / b;
  Serial.print("a/b(float d)=");
  Serial.println(d); // still 33.00, no typecast

  d = (float)a / b; // typecast to get true float division
  Serial.print("(float)a/b=");
  Serial.println(d); // 33.33

  d = a % b;
  Serial.print("a%b=");
  Serial.println(d);

  int inc_val = 5;
  inc_val++;
  Serial.print("5++ = ");
  Serial.println(inc_val);

  int dec_val = 5;
  dec_val--;
  Serial.print("5-- = ");
  Serial.println(dec_val);

  // === Comparison Operators ===
  Serial.println("\n=== COMPARISON ===");

  Serial.print("a==b: ");
  Serial.println(a == b);

  Serial.print("a!=b: ");
  Serial.println(a != b);

  Serial.print("a>b: ");
  Serial.println(a > b);

  Serial.print("a<b: ");
  Serial.println(a < b);

  Serial.print("a>=b: ");
  Serial.println(a >= b);

  Serial.print("a<=b: ");
  Serial.println(a <= b);

  // === Logical Operators ===
  Serial.println("\n=== LOGICAL ===");

  Serial.print("a&&b: ");
  Serial.println(a && b);

  Serial.print("a||b: ");
  Serial.println(a || b);

  Serial.print("!a: ");
  Serial.println(!a);

  // === Bitwise Operators ===
  Serial.println("\n=== BITWISE ===");

  unsigned char x = 0b1010; // 10 decimal
  unsigned char y = 0b1100; // 12 decimal

  Serial.print("x & y = ");
  Serial.println(x & y); // 0b1000 = 8

  Serial.print("x | y = ");
  Serial.println(x | y); // 0b1110 = 14

  Serial.print("x ^ y = ");
  Serial.println(x ^ y); // 0b0110 = 6

  Serial.print("~x = ");
  Serial.println((unsigned char)~x); // 0b11110101 = 245

  Serial.print("x << 2 = ");
  Serial.println(x << 2); // 0b101000 = 40

  Serial.print("x >> 1 = ");
  Serial.println(x >> 1); // 0b0101 = 5

  // === Bit Manipulation (page 32) ===
  Serial.println("\n=== BIT MANIPULATION ===");

  unsigned char reg = 0b01010011;
  reg |= (1 << 7); // bit SET bit 7
  Serial.print("reg after SET bit7 = ");
  Serial.println(reg); // 0b11010011 = 211

  reg &= ~(1 << 6); // bit CLEAR bit 6
  Serial.print("reg after CLEAR bit6 = ");
  Serial.println(reg); // 0b10010011 = 147

  _delay_ms(10);

  while (1)
  {
    _delay_ms(100);
  }
}