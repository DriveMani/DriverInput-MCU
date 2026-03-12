@echo off
:start
set source=%1
if "%source%"=="" goto end
set source=%source:/=\%
if exist %source% del /Q/F %source%
shift
goto start
:end
