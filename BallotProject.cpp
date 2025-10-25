#include <iostream>
#include <string>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
using namespace std;

// Candidate class
class Candidate {
public:
    string name;
    int votes;

    // Constructor
    Candidate(string candidateName) {
        name = candidateName;
        votes = 0;
    }

    // Increment vote count
    void incrementVote() {
        votes++;
    }

    // Display candidate results
    void display() {
        cout << name << ": " << votes << " votes" << endl;
    }
};

int main() {
    srand(time(0)); // Seed random generator

    //  5 CANDIDATES + NOTA ARRAY
    Candidate candidates[6] = {
        Candidate("Arjun Mehta"),
        Candidate("Li Wei"),
        Candidate("Amira Khan"),
        Candidate("Diego Alvarez"),
        Candidate("Sophia"),
        Candidate("NOTA")
    };

    // Total number of voters
    long totalVoters = 600000; // 6 lakh votes

    // Simulate voting
    for (long i = 0; i < totalVoters; i++) {
        int vote = rand() % 6; // Random number 0-5
        candidates[vote].incrementVote();
    }

    // Display election results
    cout << "\nElection Results:\n";
    cout << "------------------------\n";
    for (int i = 0; i < 6; i++) {
        candidates[i].display();
    }

    // Find the winner (exclude NOTA) 
    int winnerIndex = 0;
    for (int i = 1; i < 5; i++) { // only real candidates
        if (candidates[i].votes > candidates[winnerIndex].votes) {
            winnerIndex = i;
        }
    }
     cout << "------------------------\n";
    cout << "\nWinner: " << candidates[winnerIndex].name
         << " with " << candidates[winnerIndex].votes << " votes!\n";
          cout << "------------------------\n";

    // text-based graph of votes
    cout << "\nVote Distribution Graph:\n";
    for (int i = 0; i < 6; i++) {
        cout << candidates[i].name << ": ";
        int stars = candidates[i].votes / 10000; // scale down for visibility
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }

    return 0;
}

