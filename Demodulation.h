#pragma once

#include <vector>
#include "fft.h"
using namespace std;

// Initialize the demodulation buffer using float data after the preamble detected by PreambleDetector
void initDemodulation(const vector<float>& postPreambleData);

// Add new data from the Sampling module (192 samples per frame)
void addSamplingData(const vector<float>& newData);

// Start the Demodulation thread (ensure PreambleDetector has already stopped)
void startDemodulation();

// Stop the Demodulation thread and clean up resources
void stopDemodulation();

// Get the current contents of the demodulation buffer (for debugging)
vector<float> getDemodulationBuffer();

// Check if demodulation is active (i.e., whether the Demodulation thread is running)
bool isDemodulationActive();
