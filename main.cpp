#include <iostream>

int main() {
    double original_price;
    int count = 1;

    for (count = 1; count < 5; count++) {
        std::cout << "Enter price: ";
        std::cin >> original_price;
        std::cout << "\n";
        const double discount_amount = original_price * 0.5;
        const double total_due = original_price - discount_amount;

        //Here is the bill
        std::cout << "Client:" << count << "\n";
        std::cout << "Original price: $" << original_price << std::endl;
        std::cout << "Discount amount: $" << discount_amount << std::endl;
        std::cout << "Total due: $" << total_due << std::endl;
        std::cout << "\n";
    }
}