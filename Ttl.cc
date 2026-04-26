#include <vector>
#include <random>

int ttl_generator() {
    static std::mt19937 gen(422); 
    
    static std::vector<int> choices = {7, 30, 365};
    
    static std::discrete_distribution<size_t> dist({0.3, 0.5, 0.2});

    return choices[dist(gen)];
}