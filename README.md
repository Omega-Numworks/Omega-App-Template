# Omega App Template

This blank app allows you to start creating an app for your Numworks calculator! Everything is ready for you :stuck_out_tongue_winking_eye:

## Getting started : create your app

* Clone this repo
```
git clone https://github.com/Omega-Numworks/Omega-App-Template.git
```
* Open your code editor (vscode, notepad++, sublime text...)
* Edit the sample app to create your own ! (files are explained, just open them :blush:).
* To compile, see the compilation guide of Omega.

## How to add my app to Omega ?

* Put the project folder you cloned in `...\Omega\apps`.
* Add your app to the Makefile config:
    * Open `...\Omega\build\config.mak`
    * Add your __**folder**__ name on line 10 (*EPSILON_APPS ?= ...*);
    * Save!

* Register your app icon in Omega:
    * Open with your code editor the file `...\Omega\themes\icon.json`
    * Add your icon to the list:
    ```
    "apps/your_folder_app/name_of_your_app_icon.png" : "apps/name_of_your_app_icon.png",
    ```
* Compile your app! Don't forget to clean before (with `make clean`)!

## Publish your app on GitHub

Upload only your app folder on a new repository (on your account). Then, don't forget to open an issue here to speak of your app! We'll be happy to see what you created with this! If The Omega Team likes your app (and if you agree), we'll see to include it in Omega by default :wink:.

## Omega-App-Template License

NumWorks is a registered trademark. Omega is not affiliated with Numworks. Omega-App-Template is released under a [CC BY-NC-SA License](https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode).
