#include "statistics.h"
#include <iostream>
#include <vector>

int main(int argc, char **argv){

    // standard normal distribution and random draw vectors
    StandardNormalDistribution snd;
    std::vector<double> uniform_draws(20, 0.0);
    std::vector<double> normal_draws(20, 0.0);

    for (int i = 0; i < uniform_draws.size(); i++)
    {
        uniform_draws[i] = rand() / static_cast<double>(RAND_MAX);
        /* code */
    }
    
    snd.random_draws(uniform_draws, normal_draws);

    // Output the values of the standard normal random draws
    for (int i=0; i<normal_draws.size(); i++)
    {
        std::cout << normal_draws[i] << std::endl;
    }

    return 0;
}