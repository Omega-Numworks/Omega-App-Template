A PDF-form of the documentation can be found in `documentation/en/manual.pdf`.

- [Omega App Template](#omega-app-template)
- [Initial Steps](#initial-steps)
  * [MS Windows](#ms-windows)
    + [WSL](#wsl)
    + [MSYS2](#msys2)
  * [macOS](#macos)
  * [Linux](#linux)
    + [Fedora](#fedora)
    + [Debian/Ubuntu](#debianubuntu)
    + [Arch Linux](#arch-linux)
- [Native/Internal App](#nativeinternal-app)
  * [Getting Started](#getting-started)
- [Legal](#legal)

# Omega App Template
This is a blank app that can be used as a template or guide to writing an app for NumWorks calculators.

# Initial Steps
## MS Windows
For MS Windows, you will need to install [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10) or [MSYS2](https://www.msys2.org/#installation) in order to compile Omega.

### WSL
For WSL, you will need to follow the same instructions for whatever Linux distribution you choose to install.

### MSYS2
For MYSYS2, you will need to run this:
```
# pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-freetype mingw-w64-x86_64-pkg-config mingw-w64-x86_64-libusb git make python
echo "export PATH=/mingw64/bin:$PATH" >> .bashrc
```

## macOS
```
# /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" #install Homebrew
# brew install numworks/tap/epsilon-sdk #install NumWorks SDK
```

## Linux

### Fedora
```
# dnf groupinstall -y "Development Tools"
# dnf install -y arm-none-eabi-gcc
```

### Debian/Ubuntu
```
# apt-get install build-essential git imagemagick libx11-dev libxext-dev libfreetype6-dev libpng-dev libjpeg-dev pkg-config
```

### Arch Linux
```
# pacman -S git make python
```

# Native/Internal App
## Getting Started
1. Clone this repo:
```
git clone https://github.com/Omega-Numworks/Omega-App-Template.git
```
The template for a native/internal app can be found in `app_native`.

2. Edit the files with a text editor (notepad, notepad++, nano, etc).

Things you should bare in mind:

- Make sure you are consistent with your naming.
- It does not matter what text editor you use.

Here is a brief table of what the files do:

| File         | Information                         |
|--------------|-------------------------------------|
| app.cpp      | The main app file.                  |
| app.h        | The header for your app file.       |
| base.en.i18n | English translation of your app.    |
| base.de.i18n | German translation of your app.     |
| base.es.i18n | Spanish translation of your app.    |
| base.fr.i18n | French translation of your app.     |
| base.hu.i18n | Hungarian translation of your app.  |
| base.it.i18n | Italian translation of your app.    |
| base.nl.i18n | Dutch translation of your app.      |
| base.pt.i18n | Portuguese translation of your app. |

Further information can be found in comments within the files.

3. Add your app to Omega
	1. If you have not already, run
	
	`git clone --recursive https://github.com/Omega-Numworks/Omega.git` to clone the Omega repo with all its submodules.
	2. Copy your app's folder to `Omega/apps`
	3. In `Omega/build/config.mak`, add the name of your app's folder.

4. Compile your app with Omega/Epsilon

<details>
<summary>**Model N0110**</summary>

```sh
make clean
make OMEGA_USERNAME="{Your, max 15 characters}" -j4
make epsilon_flash
```

You can change the number of processes that run in parallel during the build by changing the value of the `-j` flag.
</details>

<details>
<summary>**Model N0100**</summary>

```sh
make MODEL=n0100 clean
make MODEL=n0100 OMEGA_USERNAME="{Your, max 15 characters}" -j4
make MODEL=n0100 epsilon_flash
```

You can change the number of processes that run in parallel during the build by changing the value of the `-j` flag.

</details>

---
# Legal
NumWorks is a registered trademark. Omega is not affiliated with NumWorks. Omega-App-Template is released under a [CC0 License](https://creativecommons.org/publicdomain/zero/1.0/), because the sample app is based on [boricj/numworks-hello-world](https://github.com/boricj/numworks-hello-world), also under a [CC0 License](https://creativecommons.org/publicdomain/zero/1.0/).
