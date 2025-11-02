#ifndef UTILS_H
#define UTILS_H

int random_range(int min, int max);
// Type pour le temps
typedef unsigned long millis_t;
millis_t get_time_ms(void);
void sleep_ms(millis_t milliseconds);
#endif
