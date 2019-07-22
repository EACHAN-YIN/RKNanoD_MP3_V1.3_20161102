@echo off
call ..\Development\firmware_generate_eMMC\My_tool.exe --path "..\..\Build\RkNano.bin" --res "..\..\Resource\Menu.res" --firmware "..\..\Firmware\Firmware.img" --uis "..\..\Resource\RkNanoImage.uis" --masterversion "0" --slaveversion "1" --smallversion "1610"
