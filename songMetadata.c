#include <stdio.h>
#include <string.h>

// Structure to store song metadata
struct SongMetadata {
    char title[50];
    char artist[50];
    int duration;
    char genre[50];
};

// Function to display song metadata
void displaySongMetadata(struct SongMetadata song) {
    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);
    printf("Genre: %s\n", song.genre);
}

int main() {
    // Create an instance of SongMetadata
    struct SongMetadata song;

    // Populate the metadata
    strcpy(song.title, "Imagine");
    strcpy(song.artist, "John Lennon");
    song.duration = 180;
    strcpy(song.genre, "Pop");

    // Display the song metadata
    displaySongMetadata(song);

    return 0;
}
