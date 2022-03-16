# ESP32 example projects

## Description

This repository includes various example projects for Espressif's ESP32 microcontroller portfolio.

## Usage

Navigate to the desired project:
```console
cd foo/bar/
```

Build the project using idf.py:
```console
idf.py build [set-target {esp32|esp32s2|esp32s3|esp32c3}]
```

and download the image to your target over USB:
```console
idf.py flash -p /port/of/esp32
```
