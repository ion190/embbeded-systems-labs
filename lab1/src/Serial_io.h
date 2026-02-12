#ifndef SERIAL_IO_H
#define SERIAL_IO_H

#include <Arduino.h>

class SerialIO {
public:
    void begin(long baud);
    String readLine();
    void writeLine(String msg);
};

#endif
