#include "Ttl.h"
#include <vector>
#include <random>

int ttl_generator() {
    // ttl choices
    srand(422);
    static std::vector<int> choices = {7, 30, 365};
    // weights
    static std::vector<double> weights = {0.3, 0.5, 0.2};

    double r = (double)rand() / RAND_MAX;

    double cumulative = 0.0;
    for (size_t i = 0; i < weights.size(); ++i) {
        cumulative += weights[i];
        if (r < cumulative) {
            return choices[i];
        }
    }

    return choices.back();
}