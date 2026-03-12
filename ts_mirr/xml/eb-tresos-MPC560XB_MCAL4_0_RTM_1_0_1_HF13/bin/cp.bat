@echo off
:start
set source=%1
if %source%=="" goto end
set source=%source:/=\%
set dest=%2
if %dest%=="" goto end
set dest=%dest:/=\%
if exist %source% copy %source% %dest%
:end
