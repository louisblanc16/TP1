#include "tp3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void trim_newline(char *s) {
    size_t len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[len - 1] = '\0';
        len--;
    }
}

void play_song_excerpt_at(const char *filename, int start, int seconds) {
    char command[1024];

    snprintf(command, sizeof(command),
             "ffplay -nodisp -autoexit -loglevel quiet -ss %d -t %d \"%s\"",
             start, seconds, filename);

    system(command);
}

int load_songs(const char *filename, Song songs[], int max) {
    FILE *f;
    char line[3 * 256];
    int count = 0;

    f = fopen(filename, "r");
    if (f == NULL) {
        return -1;
    }

    while (fgets(line, sizeof(line), f) != NULL && count < max) {
        char *file;
        char *title;
        char *artist;

        trim_newline(line);

        file = strtok(line, ";");
        title = strtok(NULL, ";");
        artist = strtok(NULL, ";");

        if (file && title && artist) {
            strcpy(songs[count].file, file);
            strcpy(songs[count].title, title);
            strcpy(songs[count].artist, artist);
            count++;
        }
    }

    fclose(f);
    return count;
}

void melanger_chansons(Song songs[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        int j = rand() % n;
        Song temp = songs[i];
        songs[i] = songs[j];
        songs[j] = temp;
    }
}