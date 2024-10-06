#pragma once

namespace normalDist
{
	/**
	 * Calculates the Cummulative Distribution Function of a random variable following a normal distribution
	 * 
	 * Since the integral doesn't have a explicit solution, a polynomial expansion has been performed
	 *
	 * @param x the random variable whose accumulated probability density function should be calculated.
	 * @return Value of the Cummulative Distribution Function.
	 */
    double normalCDF(double x);
}