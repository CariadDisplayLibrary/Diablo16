#include <Diablo16.h>

void Diablo16::setPixel(int x, int y, color_t c) {
    const uint16_t cmd[] = {(uint16_t)F_gfx_PutPixel, (uint16_t)x, (uint16_t)y, (uint16_t)c};
    command(cmd, 4);
}

void Diablo16::initializeDevice() {
    if (_reset >= 0) {
        pinMode(_reset, OUTPUT);
        digitalWrite(_reset, LOW);
        delay(100);
        digitalWrite(_reset, HIGH);
        delay(100);
        digitalWrite(_reset, LOW);
        delay(100);
    }
}
