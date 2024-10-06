#include "blackScholesMerton.h"
#include "normalDistribution.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>

double bsm::getAmericanCallOptionPrice(double dcf_, double spot_, double strike_, double vol_, double annual_risk_free_rate_)
{
    double df{ std::pow(annual_risk_free_rate_, -dcf_) };
    double sigma_sqrt_t{ vol_ * std::sqrt(dcf_) };
    double x = (std::log(spot_ / (strike_ * df)) / sigma_sqrt_t) + (sigma_sqrt_t * 0.5);
    double n_x{ normalDist::normalCDF(x) };
    double n_x_2{ normalDist::normalCDF(x - sigma_sqrt_t) };

    return (spot_ * n_x) - (strike_ * df * n_x_2);
}

void bsm::printOptionVariationsStrikesRates(double dcf_, double spot_, double vol_, std::array<double, 5>& strikes_, std::array<double, 5>& rates_)
{
    std::cout.precision(5);

    std::cout << std::setw(7) << "K" << " ";
    for (const auto& r : rates_)
    {
        std::cout << std::setw(7) << r << " ";
    }
    std::cout << std::endl;

    for (const auto& s : strikes_)
    {
        std::cout << std::setw(7) << s << " ";
        for (const auto& r : rates_)
        {
            std::cout << std::setw(7) << getAmericanCallOptionPrice(dcf_, spot_, s, vol_, r) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void bsm::printOptionVariationsSpotTime(std::array<double, 5>& dcfs_, std::array<double, 13>& spots_, double vol_, double strike_, double rate_)
{
    std::cout.precision(5);

    std::cout << std::setw(7) << "S" << " ";
    for (const auto& s : dcfs_)
    {
        std::cout << std::setw(7) << s << " ";
    }
    std::cout << std::endl;

    for (const auto& s : spots_)
    {
        std::cout << std::fixed << std::setprecision(0);
        std::cout << std::setw(7) << s << " ";
        for (const auto& dcf : dcfs_)
        {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << std::setw(7) << getAmericanCallOptionPrice(dcf, s, strike_, vol_, rate_) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}