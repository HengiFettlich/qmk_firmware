# Keychron K10 V2

A customizable full size wired keyboard, available in ANSI (104 keys), ISO (105 keys) and JIS (108 keys), with RGB or white backlight.

* Keyboard Maintainer: [HengiFettlich](https://github.com/HengiFettlich)
* Hardware Supported: Keychron K10 V2 (ANSI, ISO and JIS; RGB and white backlight), wired mode only
* Hardware Availability: [Keychron K10 QMK/VIA Wireless Mechanical Keyboard Version 2](https://www.keychron.com/products/keychron-k10-qmk-via-wireless-mechanical-keyboard-version-2)

Make example for this keyboard (after setting up your build environment):

    make keychron/k10_v2/ansi/rgb:default
    make keychron/k10_v2/ansi/white:default
    make keychron/k10_v2/iso/rgb:default
    make keychron/k10_v2/iso/white:default
    make keychron/k10_v2/jis/rgb:default
    make keychron/k10_v2/jis/white:default

Flashing example for this keyboard:

    make keychron/k10_v2/ansi/rgb:default:flash
    make keychron/k10_v2/ansi/white:default:flash
    make keychron/k10_v2/iso/rgb:default:flash
    make keychron/k10_v2/iso/white:default:flash
    make keychron/k10_v2/jis/rgb:default:flash
    make keychron/k10_v2/jis/white:default:flash

Bluetooth and 2.4 GHz wireless are not supported by this firmware.

## bootloader

Enter the bootloader in two ways:

* **Bootmagic reset**: Toggle the mode switch to "Cable", then hold down the key located at *K00*, commonly programmed as *Esc*, while plugging in the keyboard.
* **Physical reset button**: Toggle the mode switch to "Cable", then briefly press the RESET button under the spacebar.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
