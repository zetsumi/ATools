# ATools - FlyForFun resources editor

## Overview

ATools is a little software suite that I developed in order to replace Aeonsoft's tools:
* ModelEditor -> Cola
* SfxEditor -> SfxEditor
* GUIEditor -> Daisy
* GUIEditor_v19 -> (no equivalent)
* WorldEditor-> Beast
* ResEditor -> (no equivalent) 

What my tools have in addition:
* More beautiful and convenient interface
* More stable
* Less bugs
* Better rendering (antialiasing, Z-Buffer with better quality)
* Totally in french, english and german
* Custom keyboards shortcuts
* Lots of new features added
* The source code is available so you can fit all you need


## Build    
To compile you will need:
* Visual Studio 2019
* DirectX SDK : http://www.microsoft.com/en-us/download/details.aspx?id=6812
* Visual Studio Add-in for Qt5 : https://download.qt.io/official_releases/vsaddin/2.5.1/
* Qt 5.14.2 for Windows 32 bits

You must also:
* Install and configure Qt and his Add-in in order to have this in Visual Studio
![alt tag](http://i.imgur.com/MAGPOjo.png)

## How to use it
Copy only your resource file on the folder `Resource`:
* Char
* Client
* Cursor
* Icon
* Item
* LuaFunc
* Model
* Music
* SFX
* Sound
* Theme
* Weather
* Worldp

Copy your file with extension `.txt.txt` on the folder `Translate\ENG\`.<br>
You shall not replace the `.dll` and `.lib` already exist on the folder `Resource`.<br>


## Version

0.1:<br>
WorldEditor:
* Export World all models, sfx and terrain in folder `Export`.

0.2:<br>
WorlEditor:
* Multi Insertion
    * Geometry Cercle and Rect.
    * Mode Simple, Multi, Multi with shuffle
Model Editor:
* Listing models and fast load.
