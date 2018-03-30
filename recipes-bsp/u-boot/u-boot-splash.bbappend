FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI = "file://splash.bmp"

do_install () {
	install -d ${D}/boot
	install -m 644 ${WORKDIR}/splash.bmp ${D}/boot/splash.bmp
}
