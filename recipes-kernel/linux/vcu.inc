FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://vcu.cfg\
            file://0004-vcu-dts.patch"
            
KERNEL_CONFIG_FRAGMENTS += "${WORKDIR}/vcu.cfg"
