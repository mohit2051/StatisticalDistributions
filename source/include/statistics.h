#ifndef STATISTICS_H
#define STATISTICS_H

#include<cmath>
#include<vector>

class StatisticalDistribution {
    public:
        StatisticalDistribution();
        virtual ~StatisticalDistribution();

        //Distribution functions
        virtual double pdf(const double& x) const = 0;
        virtual double cdf(const double& x) const = 0;

        //inverse cdf (quantile function)
        virtual double inv_cdf(const double& quantile) const = 0;

        //Descriptive stats
        virtual double mean() const = 0;
        virtual double var() const = 0;
        virtual double stddev() const = 0;

        // get sequence of random drawss from this distribution
        virtual void random_draws(const std::vector<double>& uniform_draws,
         std::vector<double>& dist_draws) = 0;

};

#endif