#include <iostream>

int main() {
    double original_price;
    double discount_rate;
    int count = 1;
    std::string customer_type;

    for (count = 1; count < 5; count++) {
        std::cout << "Enter price: ";
        std::cin >> original_price;
        std::cout << "\n";

        //Selection of the discount rate
        std::cout << "Is customer an employee [YES or NO]:  ";
        std::cin >> customer_type;
        std::cout << "\n";

        //Convert to upper case
        for (int i = 0; i < customer_type.length(); i++) {
            customer_type[i] = toupper(customer_type[i]);
        }
        if (customer_type == "YES") {
            discount_rate = 0.25;

            //Calculations
            double discount_amount = original_price * discount_rate;
            const double total_due = original_price - discount_amount;

            //Here is the bill
            std::cout << "Client:" << count << "\n";
            std::cout << "Customer:" << "Employee" << std::endl;
            std::cout << "Original price: $" << original_price << std::endl;
            std::cout << "Discount amount: $" << discount_amount << std::endl;
            std::cout << "Total due: $" << total_due << std::endl;
            std::cout << "\n";

        }
        if (customer_type == "NO") {
            discount_rate = 0.15;
            //Calculations
            double discount_amount = original_price * discount_rate;
            const double total_due = original_price - discount_amount;

            //Here is the bill
            std::cout << "Client:" << count << "\n";
            std::cout << "Customer:" << "Regular" << std::endl;
            std::cout << "Original price: $" << original_price << std::endl;
            std::cout << "Discount amount: $" << discount_amount << std::endl;
            std::cout << "Total due: $" << total_due << std::endl;
            std::cout << "\n";

        }
        else {
            std::cout << "Unknown Input" << std::endl;
            std::cout << "\n";
        }

    }
}
