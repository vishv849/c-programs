#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100

// Structure definition for Player
struct Player {
    char name[50];
    char teamName[50];
    float battingAverage;
};

// Function to sort players in descending order of batting average
void sortPlayers(struct Player players[], int n) {
    struct Player temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (players[j].battingAverage < players[j + 1].battingAverage) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Player players[MAX_PLAYERS];
    int numPlayers;

    // Input the number of players from the user
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    // Input information about each player
    for (int i = 0; i < numPlayers; ++i) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Team Name: ");
        scanf("%s", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    // Sort players in descending order of batting average
    sortPlayers(players, numPlayers);

    // Display information about players
    printf("\nPlayers sorted in descending order of batting average:\n");
    printf("------------------------------------------------------\n");
    printf("%-20s %-20s %-15s\n", "Name", "Team Name", "Batting Average");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < numPlayers; ++i) {
        printf("%-20s %-20s %-15.2f\n", players[i].name, players[i].teamName, players[i].battingAverage);
    }

    return 0;
}
