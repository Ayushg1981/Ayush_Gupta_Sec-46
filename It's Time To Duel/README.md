Something you may not know about Mouf is that he is a big fan of the Yu-Gi-Oh! card game. He loves to duel with anyone he meets. To gather all fans who love to play as well, he decided to organize a big Yu-Gi-Oh! tournament and invited n
 players.

Mouf arranged the n players in a line, numbered from 1 to n.They then held n−1 consecutive duels: for each i from 1 to n−1, player i faced player i+1, producing one winner and one loser per match. Afterward, each player reports a value ai(0≤ai≤1):

0 indicating they won no duels;
1 indicating they won at least one duel.
Since some may lie about their results (e.g., reporting a 1 instead of a 0, or vice versa) to influence prize outcomes, Mouf will cancel the tournament if he can prove any report to be false.

Given the array a, determine whether at least one player must be lying.


INPUT

6
3
0 1 0
2
0 0
2
1 1
4
0 1 1 1
4
1 0 0 1
7
0 1 0 1 0 1 0


OUTPUT

NO
YES
YES
NO
YES
NO