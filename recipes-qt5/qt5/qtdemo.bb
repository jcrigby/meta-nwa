DESCRIPTION = "QT5 demo startup"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SECTION = "utils"

SRC_URI = "file://qtdemo.init"

S = "${WORKDIR}"

inherit update-rc.d

INITSCRIPT_NAME = "qtdemo"
INITSCRIPT_PARAMS = "start 99 2 3 4 5 ."

do_install_append () {
	install -d ${D}${sysconfdir}/init.d/
	install -m 0755 ${WORKDIR}/qtdemo.init ${D}${sysconfdir}/init.d/qtdemo
}
