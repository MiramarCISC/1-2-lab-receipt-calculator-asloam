#include "receipt.hpp"

double calculateSubtotal(double item1, double item2, double item3) {
    return item1 + item2 + item3;
}

double calculateTax(double subtotal) {
    return subtotal * TAX_RATE;
}

double calculateTip(double subtotal, double tipPercent) {
    return subtotal * (tipPercent / 100.0);
}

double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal + tax + tip;
}
