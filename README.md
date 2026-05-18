# VLC System Modeling

Simulation and modeling of Visible Light Communication (VLC) systems using Lambertian radiation patterns and Line-of-Sight (LOS) propagation models.

---

## Overview

This repository contains computational and experimental implementations related to indoor optical wireless communication systems using LED-based transmission models.

The project focuses on:
- Lambertian radiation modeling
- Optical power distribution analysis
- Experimental validation of VLC systems
- Least-squares fitting techniques
- Heatmap visualization of optical intensity
- Arduino-based transmitter and receiver implementations

---

## Technologies

- Python
- NumPy
- Pandas
- Matplotlib
- SciPy
- Arduino

---


## Repository Structure

```text
src/        → Python notebooks and simulation scripts
images/     → Generated plots and visualizations
data/       → Experimental datasets and measurements
arduino/    → Arduino transmitter and receiver implementations
report/     → Thesis excerpts and supporting documentation

```

---

## Lambertian Radiation Modeling

Simulation of Lambertian emission patterns for different mode numbers \(m\).

![Lambertian Radiation Pattern](images/lambertian/lambertian_plot.png)

---

## Optical Intensity Heatmaps

Heatmap visualization of received optical intensity distributions from multiple LED transmitters.

![Optical Heatmap](images/heatmaps/heatmap_led1.png)

---

## Experimental vs Theoretical Analysis

Comparison between theoretical VLC propagation models and experimental measurements using least-squares fitting methods.

![Experimental Comparison](images/experimental_analysis/comparison_graph.png)

---

## Arduino-Based Measurements

Experimental acquisition of brightness values using Arduino-based optical transmission and reception setups.

![Arduino Measurements](images/arduino_measurements/brightness_time_series_x30.png)

---

## Author

**Christos Kapsalis**  
Physics graduate with a focus on Electronics, Telecommunications, and Computational Modeling of optical wireless communication systems.
