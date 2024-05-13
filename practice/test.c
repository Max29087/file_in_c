#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *filename = "example.txt";
    char line[100]; // Adjust the size according to your needs
    int desired_line_number = 1; // Change this to the line number you want to read
    int current_line_number = 0;

    // Open the file for reading
    file = fopen(filename, "r+");
    if (file == NULL) {
        fprintf(stderr, "Unable to open file %s\n", filename);
        return 1;
    }

    // Read lines until you reach the desired one
    while (fgets(line,100, file)) {
        current_line_number++;
        if (current_line_number == desired_line_number) {
            printf("Line %d: %s", desired_line_number, line);
            break;
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
