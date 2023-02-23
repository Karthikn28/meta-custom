FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://vcu.cfg\
            file://0002-vcu-dts-with-hdmi.patch"
            
KERNEL_CONFIG_FRAGMENTS += "${WORKDIR}/vcu.cfg"
