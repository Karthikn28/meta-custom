VCU_BASE = "\
    nano \
    htop \
    usbutils \
    curl \
    brcm43430 \
    can-utils \
    libgpiod \
    libgpiod-tools \ 
    linux-firmware \
    openssh \
    zeromq \
    libsdl2 \
    pru-icss \
    bluez5 \
    python3-pyzmq \
    cronie \
    rsyslog \
    iw \
    dnsmasq \
    cifs-utils \
    nfs-utils \
    mmc-utils \
    dosfstools \
    e2fsprogs \
    flutter-engine-sdk-dev \
    dpkg \
"

# These require meta-openembedded/meta-oe layer

VCU_EXTRA = "\
    devmem2 \
    tcpdump \
    parted \
    openssh-sftp-server \
    kernel-modules \
    git \
    perl-module-utf8 \
    perl-module-base \
    libgpiod-dev \
    minicom \
    openssl \
    wget \
    procps \
    cpufrequtils \
    util-linux \
    flutter-pi \
    rsync \
"
VCU_DEV = "\
    packagegroup-core-buildessential \
    packagegroup-core-tools-profile \
    packagegroup-core-tools-debug \
    "


IMAGE_INSTALL:append = " \
    ${VCU_BASE} \
    ${VCU_EXTRA} \
    ${VCU_DEV} \
    "
PACKAGE_CLASSES ?= "package_deb"
PREFERRED_VERSION_linux-ti-staging = "5.10%"
# AGL_FLUTTER_DEFAULT_RUNTIME = "debug"
