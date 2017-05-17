#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/mtcoin.png
ICON_DST=../../src/qt/res/icons/mtcoin.ico
convert ${ICON_SRC} -resize 16x16 mtcoin-16.png
convert ${ICON_SRC} -resize 32x32 mtcoin-32.png
convert ${ICON_SRC} -resize 48x48 mtcoin-48.png
convert mtcoin-16.png mtcoin-32.png mtcoin-48.png ${ICON_DST}

