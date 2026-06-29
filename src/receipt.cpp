#include "receipt.hpp"


double calculateSubtotal(double item1, double item2, double item3) 
{
    return item1 + item2 + item3; //Returns the sum of all three item prices.
}


double calculateTax(double subtotal) 
{
    return subtotal * TAX_RATE; //Returns the sales tax for the subtotal using TAX_RATE.
}


// Example: if subtotal is 20.00 and tipPercent is 15,
// the tip should be 3.00.
double calculateTip(double subtotal, double tipPercent) 
{
    return subtotal * (tipPercent/100.0); //Returns the tip amount.
}


double calculateTotal(double subtotal, double tax, double tip) 
{
    return subtotal + tax + tip; //Returns the final total.
}
