#ifndef BIRD_H
#define BIRD_H

// Structure PRIVÉE (détails cachés)
typedef struct Bird Bird;

// Fonctions PUBLIQUES
Bird* bird_create(void);
void bird_update(Bird* bird);
void bird_jump(Bird* bird);
void bird_draw(const Bird* bird);

#endif
