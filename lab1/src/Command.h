#ifndef COMMAND_H
#define COMMAND_H

#include <Arduino.h>

enum CommandType {
    CMD_NONE,
    CMD_LED_ON,
    CMD_LED_OFF
};

CommandType parseCommand(String cmd);

#endif
