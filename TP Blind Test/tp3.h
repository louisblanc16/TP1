#ifndef TP3_H
#define TP3_H

typedef struct {
    char file[256];
    char title[256];
    char artist[256];
} Song;

int load_songs(const char *filename, Song songs[], int max);
void melanger_chansons(Song songs[], int n);

#endif