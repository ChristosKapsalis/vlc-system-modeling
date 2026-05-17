src/lambertian_model.py

import numpy as np
import matplotlib.pyplot as plt

phi = np.linspace(-np.pi/2, np.pi/2, 1000)
P_E = 1  
m_values = [1, 4, 6, 10]
colors = ['b', 'g', 'orange', 'r']

fig = plt.figure(figsize=(8, 8))
ax = fig.add_subplot(111, polar=True)
ax.set_theta_zero_location("N")
ax.set_theta_direction(-1)

for m, color in zip(m_values, colors):
    RE = (m + 1) / (2 * np.pi) * P_E * np.cos(phi) ** m
    RE[RE < 0] = 0 
    ax.plot(phi, RE, label=f'm = {m}', color=color)

ax.set_title(r'Κατανομή Εκπομπής $R_E(\phi, m)$ για διαφορετικά $m$', va='bottom')
ax.legend(loc='upper right', bbox_to_anchor=(1.2, 1.1))

plt.show()
