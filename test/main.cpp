#include <iostream>
#include <random>

using namespace std;

int main(){

    random_device rd;  // Obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard Mersenne Twister engine
    uniform_int_distribution<> distrib(0, 1); // Define the range

    int coin;
    int prediction;
    int heads;
    int tails;
    int correct;
    int repeats;
    int count;
    int range = 1;
    int correctTable[5];
    int one;
    int two;
    int three;
    int four;
    int five;
    int tries;

    for(tries = 0; tries < 1000; tries++){

        for(repeats = 1; repeats < 6; repeats++){

            for(count = 0;count < 10000; count++){
                coin = distrib(gen);

                if (heads >= tails + range){
                    prediction = 0;
                } else if (heads + range <= tails){
                    prediction = 1;
                } else {
                    prediction = distrib(gen);
                }

                if (coin == prediction){
                    correct++;
                }

                if (coin == 0){
                    heads++;
                } else {
                    tails++;
                }
            }
            correctTable[repeats] = correct;
            correct = 0;

            range++;
        }

        if (correctTable[1] > correctTable[2] && correctTable[1] > correctTable[3] && correctTable[1] > correctTable[4] && correctTable[1] > correctTable[5]){
            one++;
        } else if (correctTable[2] > correctTable[1] && correctTable[2] > correctTable[3] && correctTable[2] > correctTable[4] && correctTable[2] > correctTable[5]){
            two++;
        } else if (correctTable[3] > correctTable[1] && correctTable[3] > correctTable[2] && correctTable[3] > correctTable[4] && correctTable[3] > correctTable[5]){
            three++;
        } else if (correctTable[4] > correctTable[1] && correctTable[4] > correctTable[2] && correctTable[4] > correctTable[3] && correctTable[4] > correctTable[5]){
            four++;
        } else if (correctTable[5] > correctTable[1] && correctTable[5] > correctTable[2] && correctTable[5] > correctTable[3] && correctTable[5] > correctTable[4]){
            five++;
        }
        
    }

    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
    cout << five << endl;

    return 0;
}