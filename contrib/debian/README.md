
Debian
====================
This directory contains files used to package mtcoind/mtcoin-qt
for Debian-based Linux systems. If you compile mtcoind/mtcoin-qt yourself, there are some useful files here.

## mtcoin: URI support ##


mtcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mtcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mtcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/mtcoin128.png` to `/usr/share/pixmaps`

mtcoin-qt.protocol (KDE)

