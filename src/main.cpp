#include <iostream>
#include <array>
#include "blackScholesMerton.h"

int main()
{
	double dcf{0.25f};
	double spot{500.0};
	double strike{ 500.0f };
	double vol{0.3f};
	double risk_free_rate{1.1f};

    std::array<double, 5> strikes{300.0, 400.0, 500.0, 600.0, 700.0};
    std::array<double, 5> rates{1.03, 1.05, 1.10, 1.15, 1.20};

    std::cout << "3m" << std::endl;
    bsm::printOptionVariationsStrikesRates(0.25, spot, vol, strikes, rates);
    std::cout << "6m" << std::endl;
    bsm::printOptionVariationsStrikesRates(0.5, spot, vol, strikes, rates);

    std::array<double, 5> dcfs{ 0.0833, 0.25, 0.50, 1.0, 2.0 };
    std::array<double, 13> spots{ 200.0, 250.0, 300.0, 350.0, 400.0, 450.0, 500.0, 550.0, 600.0, 650.0, 700.0, 750.0, 800.0 };
    std::cout << "r=10% K=400" << std::endl;
    bsm::printOptionVariationsSpotTime(dcfs, spots, vol, strike, risk_free_rate);
}