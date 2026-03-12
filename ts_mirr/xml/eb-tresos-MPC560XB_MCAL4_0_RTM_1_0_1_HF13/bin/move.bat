@echo off
:start
set source=%1
if "%source%"=="" goto end
set source=%source:/=\%
set dest=%2
if "%dest%"=="" goto end
set dest=%dest:/=\%
if exist %source% goto moveit
goto end
:moveit
copy %source% %dest%
del %source% 
:end
