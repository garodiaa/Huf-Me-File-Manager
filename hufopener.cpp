#include <stdio.h>

int main() {
    FILE *hufFile;
    char filename[] = "compressedFile.huf"; // Replace with your .huf file name

    hufFile = fopen(filename, "rb"); // Open the .huf file for reading in binary mode

    if (hufFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and print the contents of the .huf file
    int c;
    while ((c = fgetc(hufFile)) != EOF) {
        putchar(c);
    }

    // Close the file when done
    fclose(hufFile);

    return 0;
}
