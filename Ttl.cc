#include "Ttl.h"
#include <vector>
#include <random>

int ttl_generator() {

    // ttl choices
    std::vector<int> choices = {1000, 2000, 3000};
    // weights
    std::vector<double> weights = {0.3, 0.5, 0.2};

    std::random_device rd;
    std::mt19937 gen(rd());

    std::discrete_distribution<> dist(weights.begin(), weights.end());

    int picked = choices[dist(gen)];
    return picked;
}