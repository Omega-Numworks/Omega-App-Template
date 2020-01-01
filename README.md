# Omega-App-Template
A blank app pattern, if you want to use it download this repo and edit him to create your own app for your numworks !

### How create my app ?

* clone this repo :
```
git clone https://github.com/Omega-Numworks/Omega-App-Template.git
```
* or just download this repo as zip;
* open you code editor (like vscode, or np++, notepad, sublim ...);
* edit the app (files are explain just open these ;-) ).

### How add this app to my omega projects ?

* Put your app folder in :
```
...\Omega\apps
```
* Add your app to the makefile config :
    * open with your code editor the files config.mak;
    ```
    ...\Omega\build\config.mak
    ```
    * add your __**folder**__ name on line 10 (*EPSILON_APPS ?= ...*);
    * save !

* Add your app icon to the theme controler : 
    * Open with your code editor the files icon.json
    ```
    ...\Omega\themes\icon.json
    ```
    * Add your icon to the list : 
    ```
    "apps/your_folder_app/name_of_your_app_icon.png" : "apps/name_of_your_app_icon.png",
    ```
* Compile your app but don't forget to clean Before !