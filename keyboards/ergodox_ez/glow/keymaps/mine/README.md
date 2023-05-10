# Setup
See [the official documentation](https://docs.qmk.fm/#/newbs_getting_started) and
[this post](https://www.reddit.com/r/ErgoDoxEZ/comments/vhtlfh/comment/ide8ttl/?utm_source=share&utm_medium=web2x&context=3)
on how to use a layout already created in oryx.
1. Install [QMK MSYS](https://github.com/qmk/qmk_distro_msys/releases/latest).
2. Clone [this repository](https://github.com/zsa/qmk_firmware) somewhere.
3. OPen the new MSYS console and navigate to the cloned repository.
4. Execute `qmk setup`
5. To test your environment, compile the current layout in the repository. To do this, run
   ```
   qmk compile -kb <keyboard> -km <your keymap, usually 'default'>
   ```
    You can find your keyboard in the repository in the `keyboards` folder. It should be `ergodox_ez/glow`.  Your keymap is in `keyboards/<keyboard>/glow/keymaps`. It should be `glow`. So the full command should be:
    ```
    qmk compile -kb ergodox_ez/glow -km glow
     ```
6. Download the source of your layout from oryx (below the "Download this layout" button is a "Download Source (Glow)" button).
7. Decide on a name for this layout and create a new folder in your forked repository under `[your repository directory]/keyboards/ergodox_ez/glow/keymaps/[you keymap name]`.
8. Copy the source content of the downloaded .zip file to the newly created folder. The files should be `config.h`, `keymap.c` and `rules.mk`.

## Setting defaults

### Keyboard
```
qmk config user.keyboard=ergodox_ez/glow
```

### Keymap
```
qmk config user.keymap=[your keymap]
```

# Useful commands
- List keyboards
    ```
    qmk list-keyboards
    ```
