#include "Serial_io.h"

void SerialIO::begin(long baud) {
    Serial.begin(baud);
    while (!Serial) {}
}

String SerialIO::readLine() {
    if (Serial.available()) {
        return Serial.readStringUntil('\n');
    }
    return "";
}

void SerialIO::writeLine(String msg) {
    Serial.println(msg);
}
