#include "include/sensorUtil.hxx"

int32_t getAvarage(int32_t * buf, int32_t count) {
    int res = 0;

    if (buf == 0 || count == 0) {
        return 0;
    }

    for (uint16_t i = 0; i < count; i++) {
        res += buf[i];
    }

    return (int32_t) res/count;
} 
