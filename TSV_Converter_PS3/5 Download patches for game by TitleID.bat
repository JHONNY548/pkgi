@echo off
set col=nhcolor.exe
if exist "%ProgramFiles(x86)%" (set wget=wget64.exe) else (set wget=wget32.exe)
if exist "*.xml" del /q "*.xml"
echo ���⮢� TitleID = BLES00073|%col% 06
echo.
set /p title=��� ᪠稢���� ���������� ������ TitleID: 
echo.
echo ���� ���������� ��� ����: %title%|%col% 0A
echo.
%wget% -c --no-cookies --user-agent="Mozilla/5.0 (PLAYSTATION 3 4.87) AppleWebKit/531.22.8 (KHTML, like Gecko)" -O %title%.xml https://a0.ww.np.dl.playstation.net/tpl/np/%title%/%title%-ver.xml
find "File not found.""" < %title%.xml && goto not_found || for %%a in ("%title%.xml") do if %%~za==0 (goto not_update) else (echo ������ ���� ��� ����: %title%|%col% 0A)
echo.
set "pth=%cd%"
for /f "usebackq delims=" %%B in (`powershell -ex bypass .\dwn.ps1 '%pth%'`) do (
echo ���稢���� ����: %%~nxB        �������� ��������...|%col% 09
echo.
if not exist "UPDATES_%title%" md "UPDATES_%title%"
%wget% -c --no-cookies --user-agent="Mozilla/5.0 (PLAYSTATION 3 4.87) AppleWebKit/531.22.8 (KHTML, like Gecko)" -O "UPDATES_%title%"\%%~nxB %%B
)
if exist "%title%.xml" del /q "%title%.xml"
pause&exit /b
:not_found
echo File not found.^" - ���������� ��� %title% ���������^^!|%col% 0C
echo.
pause&exit /b
:not_update
echo ���� �㫥���� ࠧ��� - ���������� ��� %title% ���������^^!|%col% 0C
echo.
pause&exit /b
