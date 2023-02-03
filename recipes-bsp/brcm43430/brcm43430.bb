SUMMARY = "Custom firmware for am5729-beagleboneai"
LICENSE = "CLOSED"

SRC_URI = "file://brcmfmac43430-sdio.beagle,am5729-beagleboneai.txt"

FILES:${PN} =+ "${nonarch_base_libdir}/firmware/brcm/*"

PACKAGE = "brcm43430"

S = "${WORKDIR}"
CLEANBROKEN = "1"


do_compile() {
    :
}

do_install() {
    install -d ${D}${nonarch_base_libdir}/firmware/brcm
    install -m 0644 ${S}/brcmfmac43430-sdio.beagle,am5729-beagleboneai.txt ${D}${nonarch_base_libdir}/firmware/brcm/
}
