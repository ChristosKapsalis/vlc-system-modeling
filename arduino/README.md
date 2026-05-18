# Arduino VLC Implementations

Arduino-based transmitter and receiver implementations used for experimental Visible Light Communication (VLC) measurements.
These sketches were used to generate optical signals and acquire receiver-side analog measurements for VLC experimental validation. The acquired measurements are later analyzed in `src/Arduino_Brightness_Analysis.ipynb`.

## Files

- `transmitter.ino` → Single LED pulse transmission
- `receiver.ino` → Optical signal reception using analog sensor input
- `multi_led_transmitter.ino` → Sequential multi-LED optical transmission
