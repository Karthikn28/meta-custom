FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://kernel.cfg\
            file://bbai.patch"
            
KERNEL_CONFIG_FRAGMENTS += "${WORKDIR}/kernel.cfg"
