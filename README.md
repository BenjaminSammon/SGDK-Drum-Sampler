# SGDK Drum Sampler

## What is SGDK Drum Sampler?

This project allows you to play drum samples on the Sega Megadrive/Genesis using an Everdrive (or as a rom in an emulator). It is pre-loaded with a sample for each button on the player 1 controller but there are instructions on adding your own samples.

To use this project you can either:
    a) go to the folder out > rom.bin and either open in an emulator or copy to an Everdrive
    b) open using SGDK and replace the samples with your own samples and build a new rom


## Setting up SGDK with Visual Studio Code

This small project will help to setup a working environment (tested in Windows) for Sega Mega Drive developing with SGDK toolchain and Visual Studio Code as prefered editor. Visual Studio Code will be setup with c/cpp code extension and tasks to build and clean the workspace.


## Prerequisites

. Download link:https://github.com/Stephane-D/SGDK[SGDK]
. Download link:https://code.visualstudio.com/[Visual Studio Code]


=== Setup

* Extract SGDK to a prefered directory.
* Create an environment variable `GDK` pointing to the SGDK directory (e.g. "C:/dev/sgdk").
* Install Visual Studio Code.
* Install the following extensions in vsCode: `C/C++ for Visual Studio Code`
* Clone this github repo: `git clone https://github.com/pleft/SEGA_VSCode_Template.git`.

=== Usage

* Open `VSCode` and `File->Open Folder...` and choose the folder of the checked out repository.
* Folder `.vscode` contains two files: `c_cpp_properties.json` and `tasks.json`
    * In `c_cpp_properties.json` it is added the include folder of the `SGDK`: `"includePath": ["${GDK}/inc"]`
    * In `tasks.json` there are 2 tasks to help build and clean the project, `make` and `clean`. 
        - To run `make` task press `Ctrl-Shift-B`.
        - To run `make` or `clean` press `Ctrl-P` then write `task make` or `task clean`.
