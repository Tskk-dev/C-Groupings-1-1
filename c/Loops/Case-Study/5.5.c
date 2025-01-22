#include <stdio.h>
#include <string.h>

#define QUESTIONS 5 \

int main() {
    char studentName[50];
    int answers[QUESTIONS];
    int totalScore = 0;
    float averageScore;

    printf("Enter the student's name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0'; // Remove trailing newline

    // Input answers
    printf("Enter the answers (1 to 5) for the %d questions:\n", QUESTIONS);
    for (int i = 0; i < QUESTIONS; i++) {
        printf("Answer for Question %d: ", i + 1);
        scanf("%d", &answers[i]);

        // Validate input and calculate score
        if (answers[i] >= 1 && answers[i] <= 5) {
            totalScore += answers[i]; 
        } else {
            printf("Invalid choice for Question %d. No points awarded.\n", i + 1);
        }
    }

    // Calculate average score
    averageScore = (float)totalScore / QUESTIONS;

    // Print results
    printf("\nStudent Name: %s\n", studentName);
    printf("Answers: ");
    for (int i = 0; i < QUESTIONS; i++) {
        printf("%d ", answers[i]);
    }
    printf("\nTotal Score: %d\n", totalScore);
    printf("Average Score: %.2f\n", averageScore);

    return 0;
}
