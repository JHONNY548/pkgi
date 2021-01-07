# Changelog

All notable changes to the `pkgi-ps3` project will be documented in this file. This project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]()

## [v1.1.8.2](https://github.com/ErikPshat/PKGi-PS3-RUS-MOD/releases/tag/v1.1.8.2) - 2021-01-07

### Changed

### Fixed

* ??? when defining regions.

## [v1.1.8.1](https://github.com/nikolaevich23/pkgi/releases/tag/v1.1.8.1) - 2020-12-26

### Changed

* Starting Russian version

## [v1.1.8](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.1.8) - 2020-12-08

### Added

* Content icon download from the TMDB (based on Title ID)
* Use content icons for package bubbles (XMB)
* Set <kbd>L2</kbd>/<kbd>R2</kbd> buttons as shortcuts to switch between content categories

### Fixed

* XMB callback handling

## [v1.1.6](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.1.6) - 2020-06-23

### Added

* Generate .rif files when downloading items (system must be activated)
* Improved speed when creating empty files in background download mode
* Enter button detection (`cross`/`circle`)

## [v1.1.3](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.1.3) - 2020-05-20

### Added

* Improved auto-update code to download `.pkg` updates directly from GitHub
* Increased database memory limit to 32768 items
* Changed App location to the XMB `Network` tab

### Fixed

* The app now allows to download items that already exist
* Start/Stop music works without requiring to restart the application

## [v1.1.2](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.1.2) - 2019-12-31

### Added

* Added content categorization and filtering
* Added support for loading multiple database files
* Added support for online db update/sync

### Fixed

* Filter unsupported or missing URLs when loading a database

## [v1.1.0](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.1.0) - 2019-12-23

### Added

* Added TTF fonts to support Japanese characters
* Added SSL support (the app can download `https` links)
* Added package install bubble for Direct downloads
* Added background music
* Added settings options for music and auto-update

### Fixed

* Fixed UI issue where texts could go beyond the screen limits

## [v1.0.8](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.0.8) - 2019-12-19

### Added

* Added analog pad support
* Added CPU/RSX temperature status
* Added "Details" screen
* Added automatic download after version update check 

### Fixed

* Improved empty `.pkg` file generation using async IO.
* Improved UI

## [v1.0.5](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.0.5) - 2019-12-14

### Added

* Generic text database format support
* Credits `(SELECT)` and Exit `(START)` confirmation dialogs
* Changelog file

### Fixed

* The app now creates `/dev_hdd0/exdata`, if folder doesn't exists
* Fixed unresponsive `background download` dialog while creating a PKG file
* Fixed a bug when the URL was missing

## [v1.0.0](https://github.com/bucanero/pkgi-ps3/releases/tag/v1.0.0) - 2019-12-11

### Added

* Text search filtering using on-screen keyboard
* Background download task mode (uses internal Download Manager)
* New version check

### Fixed

* Fixed incorrect progress bar information during direct download

## [v0.0.1-beta](https://github.com/bucanero/pkgi-ps3/releases/tag/v0.0.1-beta) - 2019-12-04

### Added

* First public beta release
