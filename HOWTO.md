# Windows

## Configure
	cmake.exe -B build -S ycad -DCMAKE_PREFIX_PATH=c:/Qt/5.15.2/msvc2019_64/lib/cmake/Qt5

## Post-build
	C:\Qt\5.15.2\msvc2019_64\bin\windeployqt.exe .\ycad.exe
