#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    // No need to use new here
    std::vector<int> readings(mSamples, 10);  // Stack allocation, no memory leak

    double result = std::accumulate(readings.begin(), readings.end(), 0.0) / readings.size();
    return result;
}



