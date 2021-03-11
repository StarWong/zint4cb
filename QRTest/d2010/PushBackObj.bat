del .\Obj\zint\*.obj /f /s /q
copy ..\..\Zint\Release\*.obj .\Obj\zint\*.obj
del .\Obj\zlib\*.obj /f /s /q
copy ..\..\zint\Dependencies\Zlib\Release\*.obj .\Obj\zlib\*.obj
del .\Obj\libpng\*.obj /f /s /q
copy ..\..\zint\Dependencies\libpng\Release\*.obj .\Obj\libpng\*.obj
pause
