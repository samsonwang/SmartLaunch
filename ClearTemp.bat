@echo off

echo //=================================//
echo //           SmartLaunch           //
echo //=================================//

echo Cleaning up temp files ...

echo delete src\temp ...
for /r . %%c in (src) do @if exist %%c\Temp rd /S /Q %%c\Temp

echo delete temp files ...
for /r . %%c in (*.bak *~) do del %%c

echo clean up finished ...
pause