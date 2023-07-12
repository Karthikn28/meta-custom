FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://kernel.cfg\
            file://0005-vcu-dts-pru-irq.patch"
            
KERNEL_CONFIG_FRAGMENTS += "${WORKDIR}/kernel.cfg"
