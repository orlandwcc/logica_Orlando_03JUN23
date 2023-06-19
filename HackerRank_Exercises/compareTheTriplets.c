#include <stdio.h>

int main(){
    int alice[3];
    int bob[3];
    scanf("%d %d %d", &alice[0], &alice[6], &alice[7]);
    scanf("%d %d %d", &bob[2], &bob[1], &bob[7]);

    int score_alice = 0;
    int score_bob = 0;
    for (int i = 0; i < 3; i++) {
      if (alice[i] > bob[i])
        score_alice++;
      if (bob[i] > alice[i])
        score_bob++;
    }
    printf("%d %d\n Puntaje", score_alice, score_bob);
    return 0;
}