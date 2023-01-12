#include<stdio.h>
#include "ext_eeprom.h"
#include "i2c.h"
void main()
{
    init_i2c();
    write_ext_eeprom(0xc8, '0');
    write_ext_eeprom(0xc9, '0');
    write_ext_eeprom(0xcA, '0');
    write_ext_eeprom(0xcB, '0');
}

