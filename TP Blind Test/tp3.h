#ifndef TP3_H
#define TP3_H

typedef struct {
    char file[256];
    char title[256];
    char artist[256];
} Song;

int load_songs(const char *filename, Song songs[], int max);
void melanger_chansons(Song songs[], int n);
void play_song_excerpt_at(const char *filename, int start, int seconds);
int string_equals_normalized(const char *a, const char *b);

#endif