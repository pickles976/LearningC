# README

This directory contains some code and projects for
learning to write embedded C code for the ESP32-C3 
microcontroller.

Toolchain setup:
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html


SDA - GPIO10
SCL - GPIO08

idf.py set-target esp32-c3
idf.py menuconfig

sudo setserial -g /dev/ttyS[0123]

#### If running `idf.py flash` shows "access denied to port"

```
ls -l /dev/ttyACM0
```

`crw-rw---- 1 root dialout 166, 0 Dec 22 12:34 /dev/ttyACM0`

```
sudo usermod -aG dialout $USER
```


```idf.py -p /dev/ttyACM0 monitor```
