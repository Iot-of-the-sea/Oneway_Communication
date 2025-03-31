# Oneway_Communication

## System Architecture

```Audio Input ──► Sampling ──► Preamble Detection ──► Demodulation ──► Output Message```

## File Overview

| File                | Description |
|---------------------|-------------|
| `main.cpp`          | Entry point; initializes audio and spawns threads. |
| `AudioDevice.*`     | Handles ALSA audio device setup and teardown. |
| `Sampling.*`        | Captures audio, normalizes data, and routes it. |
| `PreambleDetector.*`| Detects the BFSK preamble using cross-correlation. |
| `Demodulation.*`    | Extracts bits based on dominant frequency via FFT. |
| `fft.*`             | Implements the Cooley-Tukey FFT and peak detection. |
