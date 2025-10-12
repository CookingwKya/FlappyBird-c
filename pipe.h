#ifndef PIPE_H
#define PIPE_H

typedef struct {
    int x;
    int gap_y; 
    int gap_height;
} Pipe;

void pipe_generate(void);
void pipe_update_all(void);
void pipe_draw_all(void);

#endif