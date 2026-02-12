#include "Led.h"
#include "Serial_io.h"
#include "Command.h"

Led led(13);
SerialIO sio;

void setup() {
    led.begin();
    sio.begin(9600);
    sio.writeLine("System Ready");
}

void loop() {
    String input = sio.readLine();

    if (input != "") {
        CommandType cmd = parseCommand(input);

        switch (cmd) {
            case CMD_LED_ON:
                led.on();
                sio.writeLine("LED turned ON");
                break;

            case CMD_LED_OFF:
                led.off();
                sio.writeLine("LED turned OFF");
                break;

            default:
                sio.writeLine("Unknown command");
        }
    }
}
