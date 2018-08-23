SUMMARY = "User contributed joystick for kivy addons"
HOMEPAGE = "https://github.com/kivy-garden/garden.joystick/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f69dd75dd3d7ef4f4caf8c94be62d52c"

SRCREV = "de5cf2f5db3df89d8b25f0d47fa7cc012b0196e0"
SRC_URI = "git://github.com/kivy-garden/garden.joystick.git"
SRC_URI[md5sum] = "069b94c5a05e5b018ee7e7c2f10630db"
SRC_URI[sha256sum] = "c256f42788421273a08fbb0a228f0fb0e80dd86b629fb8c0920507f645be6c72"

S = "${WORKDIR}/git"

do_install () {
	install -d ${D}${PYTHON_SITEPACKAGES_DIR}/kivy/garden/joystick
	install -m 0644 joystick/*.py ${D}${PYTHON_SITEPACKAGES_DIR}/kivy/garden/joystick
	install -m 0644 joystick/*.kv ${D}${PYTHON_SITEPACKAGES_DIR}/kivy/garden/joystick
}

FILES_${PN} += "${PYTHON_SITEPACKAGES_DIR}"
