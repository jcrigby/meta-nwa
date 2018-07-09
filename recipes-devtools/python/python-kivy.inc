SUMMARY = "A software library for rapid development of hardware-accelerated multitouch applications"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=70245b0153f62e27619400a6e88e1263"
DEPENDS = " \
    ${PYTHON_PN}-cython-native \
    ${PYTHON_PN} \
    virtual/libgl \
    tiff \
    zlib \
    libpng \
    jpeg \
    libsdl2 \
    libsdl2-ttf \
    libsdl2-image \
    libsdl2-mixer \
    flac \
    libmikmod \
    libvorbis \
    gstreamer \
    ${PYTHON_PN}-pillow \
    libx11 \
    "


SRCNAME = "kivy"

export USE_X11 = "1"
export USE_SDL2 = "1"
# not working at the moment
#export USE_GSTREAMER = "1"
# this is for accelrated X not fb
#export USE_EGL = "1"

SRC_URI = "https://github.com/kivy/${SRCNAME}/archive/${PV}.tar.gz"

SRC_URI[md5sum] = "900ff17e73e64335949ab6f171f6e77b"
SRC_URI[sha256sum] = "794e45cc7bcc7882f7cd95f1673bc6701f3215a20a54c915cac0c5e46a449b4c"

S = "${WORKDIR}/${SRCNAME}-${PV}"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-core \
    xserver-xorg-extension-glx \
"

PACKAGES =+ "\
    ${PN}-examples \
"

FILES_${PN}-examples = " \
    /usr/share/kivy-examples/* \
"
