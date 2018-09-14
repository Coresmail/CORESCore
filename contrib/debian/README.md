
Debian
====================
This directory contains files used to package coresd/cores-qt
for Debian-based Linux systems. If you compile coresd/cores-qt yourself, there are some useful files here.

## cores: URI support ##


cores-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cores-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your coresqt binary to `/usr/bin`
and the `../../share/pixmaps/cores128.png` to `/usr/share/pixmaps`

cores-qt.protocol (KDE)

