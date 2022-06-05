// Making a large enough pond for koi carp
#include <iostream>
#include <cmath> // square root function

int main()
{
    // 3 sq feet pond surface for every 6 inches of fish
    const double fish_factor { 3.0 / 0.5 }; // area per unit length of fish
    const double inches_per_foot { 12.0 };
    const double pi { 3.141592653589793238 };

    double fish_count {};
    double fish_length {}; // average fish length

    std::cout << "Enter the number of koi you want to keep: ";
    std::cin >> fish_count;
    std::cout << "Enter the average fish length in inches: ";
    std::cin >> fish_length;
    fish_length /= inches_per_foot; //  convert to feet

    // calc the required surface area
    const double pond_area { fish_count * fish_length * fish_factor };
    // calc the diameter from the area
    const double pond_diameter { 2.0 * std::sqrt(pond_area / pi)};

    std::cout << "\nPond diameter required for " << fish_count << 
            " koi carp is "  
            << std::scientific  
            << pond_diameter << " feet.\n";
}
