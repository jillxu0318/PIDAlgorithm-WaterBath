Water bath code
==========

Compatible for Arduino Micro written in C
Simulates investigation of temperature of water on surface tension and resistance

A waterbath must maintain equal temperatures throughout with the use of a constant steady heat source. This is done a control loop in this case implemented through a PID algorithm: the algorithm consists of three basic coefficients (proportional, integral and derivative) which are varied to get optimal response.

