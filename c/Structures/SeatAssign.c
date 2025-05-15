#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ROWS 5
#define COLS 4

struct Seat {
    int occupied;
    char label;
};

void initSeats(struct Seat seats[ROWS][COLS]) {
    char labels[] = { 'A', 'B', 'C', 'D' };
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++) {
            seats[i][j].occupied = 0;
            seats[i][j].label = labels[j];
        }
}

void displaySeats(struct Seat seats[ROWS][COLS]) {
    printf("\nAirplane Seating Arrangement:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j].occupied)
                printf("X\t");
            else
                printf("%c\t", seats[i][j].label);
        }
        printf("\n");
    }
}

int allSeatsFilled(struct Seat seats[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (!seats[i][j].occupied)
                return 0;
    return 1;
}

void assignSeats(struct Seat seats[ROWS][COLS]) {
    char input[10];
    while (1) {
        if (allSeatsFilled(seats)) {
            printf("All seats are filled.\n");
            break;
        }

        displaySeats(seats);
        printf("\nEnter seat (e.g., 2B) or type 'done' to quit: ");
        scanf("%s", input);

        if (strcmp(input, "done") == 0 || strcmp(input, "DONE") == 0)
            break;

        if (strlen(input) != 2) {
            printf("Invalid format. Please try again.\n");
            continue;
        }

        int row = input[0] - '1';
        char colChar = toupper(input[1]);
        int col = colChar - 'A';

        if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
            printf("Invalid seat. Try again.\n");
            continue;
        }

        if (seats[row][col].occupied) {
            printf("That seat is already taken.\n");
        } else {
            seats[row][col].occupied = 1;
            printf("Seat %s assigned successfully.\n", input);
        }
    }
}

int main() {
    struct Seat seats[ROWS][COLS];
    initSeats(seats);
    assignSeats(seats);

    printf("\nFinal Seating Chart:\n");
    displaySeats(seats);
    return 0;
}
