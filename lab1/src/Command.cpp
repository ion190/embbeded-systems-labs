#include "Command.h"

CommandType parseCommand(String cmd) {
    cmd.trim();
    cmd.toLowerCase();

    if (cmd == "led on") return CMD_LED_ON;
    if (cmd == "led off") return CMD_LED_OFF;

    return CMD_NONE;
}
