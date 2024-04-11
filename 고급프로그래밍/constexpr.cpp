/*
  Comparing performance between constexpr and non-constexpr
*/



#include <iostream>
#include <chrono>

// Structure to represent a point
struct Point {
    double x;
    double y;
};

// Function to scale a point using constexpr
constexpr Point scaleConstexpr(Point p, double xscale, double yscale) {
    return {xscale * p.x, yscale * p.y};
}

// Function to scale a point without constexpr
Point scaleNonConstexpr(Point p, double xscale, double yscale) {
    return {xscale * p.x, yscale * p.y};
}

int main() {
    // Define the point to scale
    constexpr Point p = {123, 456}; // Mark 'p' as constexpr
    
    // Define scaling factors
    constexpr double xscale = 10;
    constexpr double yscale = 0.8;
    
    // Time measurement for constexpr scaling
    auto startConstexpr = std::chrono::steady_clock::now();
    constexpr Point scaledPointConstexpr = scaleConstexpr(p, xscale, yscale);
    auto endConstexpr = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsedConstexpr = endConstexpr - startConstexpr;
    
    // Time measurement for non-constexpr scaling
    auto startNonConstexpr = std::chrono::steady_clock::now();
    Point scaledPointNonConstexpr = scaleNonConstexpr(p, xscale, yscale);
    auto endNonConstexpr = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsedNonConstexpr = endNonConstexpr - startNonConstexpr;
    
    // Display results
    std::cout << "Scaled point using constexpr: {" << scaledPointConstexpr.x << ", " << scaledPointConstexpr.y << "}" << std::endl;
    std::cout << "Time taken for constexpr scaling: " << elapsedConstexpr.count() << " seconds" << std::endl;
    
    std::cout << "Scaled point without constexpr: {" << scaledPointNonConstexpr.x << ", " << scaledPointNonConstexpr.y << "}" << std::endl;
    std::cout << "Time taken for non-constexpr scaling: " << elapsedNonConstexpr.count() << " seconds" << std::endl;

    return 0;
}
