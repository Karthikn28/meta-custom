SUMMARY = "Auto wifi Config"
LICENSE = "CLOSED"

SRC_URI = "file://settings \
           file://my_wifi.config  "

do_install() {
    install -m 0644 ${WORKDIR}/settings ${D}/var/lib/connman/settings
    install -m 0644 ${WORKDIR}/my_wifi.config ${D}/var/lib/connman/settimy_wifi.config
}