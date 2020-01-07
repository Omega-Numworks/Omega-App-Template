# Omega App Template

This blank app helps you start creating an app for your Numworks calculator! Everything is prepared for you :stuck_out_tongue_winking_eye:

## Getting started: creating your app

1. Clone this repo:
```
git clone https://github.com/Omega-Numworks/Omega-App-Template.git
```
2. Open your text editor or IDE (vscode, notepad++, sublime text...)
3. Edit the sample app to create your own! Inside the files, you will find explanations for what each of the components do.
4. To compile, see [the compilation guide of Omega](https://github.com/Omega-Numworks/Omega#installation).

## How to add my native app to Omega?

1. Put the app_native folder in `...\Omega\apps` (and rename it).
2. Add your app to the Makefile config:
    * Open `...\Omega\build\config.mak`
    * Add your __**folder**__ name to EPSILON_APPS (*EPSILON_APPS ?= ...*);
    * Save!
3. Add your app icon into Omega:
    * Open this file with a text editor: `...\Omega\themes\icon.json`
    * Add your icon to the list:
    ```
    "apps/[your app's folder]/[name of your app]_icon.png" : "apps/[name of your app]_icon.png",
    ```
4. Compile with your app! Don't forget to clean (with `make clean`)!

## Publish your app on GitHub

Upload your app folder in a new repository (on your account). Then, if you want to dicuss your app, open an issue in this repository. We'll be happy to see what you created! If The Omega Team likes your app (and if you agree), we may include it in Omega by default :wink:.

## Omega App Template License

NumWorks is a registered trademark. Omega is not affiliated with Numworks. Omega-App-Template is released under a [CC0 License](https://creativecommons.org/publicdomain/zero/1.0/). App based on [boricj/numworks-hello-world](https://github.com/boricj/numworks-hello-world), also under a [CC0 License](https://creativecommons.org/publicdomain/zero/1.0/).
