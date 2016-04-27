# arduino_mega_2560_environmental_monitor
Environmental monitor for arduino mega 2560



-- = select one or more sensor option

Four sensor groupings
[1] Near ground sensor in garden
  Esp01 + Esp8266 + Arduino Mega 2560 + 7 sensors
  - Gigercounter counter
  - Surface soil temperature - Digital Infrared Temperature Sensor MLX90615 GY-90615
  - Sub-Surface soil temperature - DS18B20 waterproof temperature probe
  - Surface water level
  - Soil moisture level hygrometer
  - Vibration detector ball switch 

  - Earthquake detector - MEAS-SPEC.COM pizeo flex force sensor with weight.
[2] Roof top sensor
  Esp-01 + Esp8266 + Arduino Mega 2560 + 9 sensors + 1-3 rainfall sensors
  - Lightning detector - Playing With Fusion AXS3935 
  - Ultrasonic distance sensor to rain detector - HC-SR04
  - Doppler radar motion sensor to rain detector - HB100
  - Rain drops detector
  - Rain quantity counter - SEN-08942 ROHS GET 76.95 + S/H
  - Sound intensity level
  - Wind direction - SEN-08942 ROHS
 
  - Wind speed - SEN-08942 ROHS
 
  - Intensity
  - UV intensity 
  - IR flame detector 760-1100nm
[3] Near road ground sensor in front of garage
  Esp-01+ Esp8266 + Arduino + 4 sensors
  - MQ-2 Smog
  - MQ-7 CO
  - MQ-135 Air Quality
  - Dust and Smoke particulates
[4] On front porch
  Esp-01 + Esp8266 + Arduino + 3 sensors
  - Dry/Wet Bulb Temperature
  - Airborn Humidity
  - Barometric Pressure

EMP:
Lightning detector [2]
Gigercounter counter [1]

Rain: [2]
--Sonic sensor to rain detector
--Doppler radar rain detector
--IR motion rain detector
Rain drops 
Rain quantity counter

Air:[4]
MQ-2 Smog [3]
MQ-7 CO [3]
MQ-135 Air Quality [3]
Dust and Smoke particulates [3] Sharp Optical Dust Sensor GP2Y1010AU0F.
Dry/wet Bulb Temperature
Airborn Humidity
Pressure
Sound intensity level [2]
Wind direction [2]
Wind speed [2]



Ground: [1]
Surface soil temperature
Sub-Surface soil temperature
Surface water level
Soil moisture level
Vibration detector
Earthquake detector

Light: [2]
Intensity
UV intensity 
IR flame detector 760-1100nm


Android App:
Overview
Alerts ( UV intensity, Rads, Lightning, CO/smog/Air quality, raining, Wind speed, Wind chill/low temps, fire, earthquake/shake, bright, need to water, dust/Smoke levels )
Weather
Air, loud, 
Ground
EMP

Sensor.threshold.uniqueid.rule
Sensor.threshold.uniqueid.message

Uniqid, rule, message, alert?

1
2
3
4
struct sensor {
  int weight;
  double price;
} apple, banana, melon;


Sensors have alerts.
Alerts have conditions, a threshold, a message, a alert method.

After reading a sensor check for alerts.  How to best do in c++


