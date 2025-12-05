@echo off
set filename=%1
g++ %filename% -o %~n1.exe && %~n1.exe
pause