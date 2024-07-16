/*
Nie ze wszystkich pinów można kożystać jako zwykłe IN-OUT

PIN - OPIS (bez opisu zwykły IO)
0	  - Default-PullUp, boot-PWM
1	  - Boot-DEBUG
2	  - Default-PullDown
3	  - Boot-HIGH
4	
5	  - Default-PullUp, boot fail if pulled down, boot-PWM
6	  - Wewnętrznie SPI FLASH i PSRAM
7	  - Wewnętrznie SPI FLASH i PSRAM
8	  - Wewnętrznie SPI FLASH i PSRAM
9	  - Wewnętrznie SPI FLASH i PSRAM
10	- Wewnętrznie SPI FLASH i PSRAM
11	- Wewnętrznie SPI FLASH i PSRAM
12	- Default-PullDown, boot fail if pulled high
13	
14	- Outputs PWM signal at boot
15	- Default-PullUp, boot fail if pulled down,  Outputs PWM signal at boot
16	
17	
18	
19	
21	
22	
23	
25	
26	
27	
32	
33	
34	- Tylko INPUT (bez PULLUP i DOWN)
35	- Tylko INPUT (bez PULLUP i DOWN)
36	- Tylko INPUT (bez PULLUP i DOWN)
37	- Podpięte w module przez kondensator do 36
38	- Podpięte w module przez kondensator do 39
39	- Tylko INPUT (bez PULLUP i DOWN)
*/

void setup() {

/*
  void pinMode(uint8_t pin, uint8_t mode);
    pin  -> wskazuje na numer pinu
    mode -> ustawia tryb pracy

    tryby pracy:
    - INPUT  - jako wejście bez pullup lub pulldown (high impedance).
    - OUTPUT - jako wyjście LOW - HIGH.
    - INPUT_PULLDOWN - jako wejście z podciągnięciem wewnętrznie do masy.
    - INPUT_PULLUP - jako wejście z podciągnięciem wewnętrznie do do zasilania.
*/
  pinMode(16, OUTPUT);

}

void loop() {

digitalWrite(16, 0);
delay(1000);
digitalWrite(16, 1);
delay(10);

}
