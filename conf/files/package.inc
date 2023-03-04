IMAGE_INSTALL:append = " nano htop libgpiod usbutils brcm43430 can-utils gtk+3 gtk+3-dev gtk+3-demo linux-firmware\
                        libgpiod-tools libgpiod-dev kernel-modules net-tools i2c-tools openssh openssh-sftp-server\
                        zeromq module-init-tools devmem2 libdrm-omap mmc-utils systemd-analyze ntpdate\
                        packagegroup-core-buildessential packagegroup-agl-networking libsdl2"

# Select xserver-xorg as default, since kdrive has been EOL'ed
# XSERVER ?= "xserver-xorg xf86-input-evdev xf86-input-keyboard xf86-input-mouse xf86-video-fbdev"

# USE-flag like features
DISTRO_FEATURES += "x11 wayland opengl"

