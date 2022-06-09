// Bitwise operators
#include <iostream>
#include <iomanip>

int main()
{
    unsigned int red {0xFF0000u};
    unsigned int white {0xFFFFFFu};

    std::cout << std::hex << std::setfill('0');

    std::cout << "Try out bitwise complement, AND and OR operations. ";
    std::cout << "\nInitial value   red = " << std::setw(8) << red;
    std::cout << "\nComplement      ~red = " << std::setw(8) << ~red;
    std::cout << "\nInitial value   white = " << std::setw(8) << white;
    std::cout << "\nComplement      ~white = " << std::setw(8) << ~white;

    std::cout << "\nBitwise AND: red & white = " << std::setw(8) << (red & white);
    std::cout << "\nBitwise OR: red | white = " << std::setw(8) << (red | white);
    std::cout << "\n\nNow try successive exclusive OR operations: ";

    unsigned int mask {red ^ white}; // caret is XOR operator
    std::cout << "\nmask = red ^ white = " << std::setw(8) << mask;
    std::cout << "\n    mask ^ red = " << std::setw(8) << (mask ^ red);
    std::cout << "\n    mask ^ white = " << std::setw(8) << (mask ^ white);

    unsigned int flags {0xFF};
    unsigned int bit1mask {0x1};
    unsigned int bit6mask {0b100000};
    unsigned int bit20mask {1u << 19};

    std::cout << "\n\nUse masks to select or set a particular flag bit: ";
    std::cout << "\nSelect bit 1 from flags: " << std::setw(8) << (flags & bit1mask);
    std::cout << "\nSelect bit 6 from flags: " << std::setw(8) << (flags & bit6mask);
    std::cout << "\nTurn off bit 6 in flags: " << std::setw(8) << (flags &= ~bit6mask);
    std::cout << "\nSwitch on bit 20 in flags: " << std::setw(8) << (flags |= bit20mask);
    std::cout    << std::endl;

}
