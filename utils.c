#include <sys/time.h>
#include <unistd.h>
#include "utils.h"

millis_t get_time_ms(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}

void sleep_ms(millis_t milliseconds) {
    usleep(milliseconds * 1000);  // usleep utilise des microsecondes
}
