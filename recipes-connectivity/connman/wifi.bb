SUMMARY = "Auto wifi Config"
LICENSE = "CLOSED"

SRC_URI = "file://settings \
           file://my_wifi.config  "

do_install() {
    install -m 0644 ${WORKDIR}/settings ${D}{localstatedir}/lib/connman/settings
    install -m 0644 ${WORKDIR}/my_wifi.config ${D}{localstatedir}/lib/connman/my_wifi.config
}