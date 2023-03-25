VCU_BASE = "\
    nano \
    htop \
    usbutils \
    curl \
    brcm43430 \
    can-utils \
    bash \
    libgpiod \
    libgpiod-tools \ 
    linux-firmware \
    openssh \
    zeromq \
    libsdl2 \
    pru-icss \
    bluez5 \
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
    perl-module-file-glob \
    libgpiod-dev \
    minicom \
    openssl \
    wget \
    procps \
    cpufrequtils \
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
