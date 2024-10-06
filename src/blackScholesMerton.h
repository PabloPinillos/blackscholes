#pragma once
#include <array>

namespace bsm {
	/**
	 * Gets the call option price based on its inputs
	 *
	 * Note that a volatility of 30% should be passed as 0.3 and
	 * an annual risk free rate of 10% should be passed as 1.1
	 *
	 * @param dcf_ the fraction of the year until option expiration.
	 * @param spot_ the underlying's current price.
	 * @param strike_ the price at which the underlying can be bought at exercise.
	 * @param vol_ the volatility of the underlying stock.
	 * @param annual_risk_free_rate_ the annualized risk free rate for the dcf period.
	 * @return American call option price.
	 */
	double getAmericanCallOptionPrice(double dcf_, double spot_, double strike_, double vol_, double annual_risk_free_rate_);

	/**
	 * Prints the American call option price variations in strikes and rates based on its inputs to the standard output
	 *
	 * Note that a volatility of 30% should be passed as 0.3 and
	 * an annual risk free rate of 10% should be passed as 1.1
	 *
	 * @param dcf_ the fraction of the year until option expiration.
	 * @param spot_ the underlying's current price.
	 * @param strikes_ array with different prices at which the underlying can be bought at exercise.
	 * @param vol_ the volatility of the underlying stock.
	 * @param rates_ array with different annualized risk free rates for the dcf period.
	 * @return American call option price.
	 */
	void printOptionVariationsStrikesRates(double dcf_, double spot_, double vol_, std::array<double, 5>& strikes_, std::array<double, 5>& rates_);

	/**
	 * Prints the American call option price variations in time and underlying's spot price based on its inputs to the standard output
	 *
	 * Note that a volatility of 30% should be passed as 0.3 and
	 * an annual risk free rate of 10% should be passed as 1.1
	 *
	 * @param dcf_ the fraction of the year until option expiration.
	 * @param spot_ the underlying's current price.
	 * @param strikes_ array with different prices at which the underlying can be bought at exercise.
	 * @param vol_ the volatility of the underlying stock.
	 * @param rates_ array with different annualized risk free rates for the dcf period.
	 * @return American call option price.
	 */
	void printOptionVariationsSpotTime(std::array<double, 5>& dcfs_, std::array<double, 13>& spots_, double vol_, double strike_, double rate_);
}