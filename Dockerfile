FROM alpine:3.14

RUN apk add util-linux\
    pciutils\
    usbutils\
    coreutils\
    binutils\
    findutils\
    grep\
    iproute2\
    bash\
    bash-doc\
    bash-completion\
    build-base\
    gcc\
    abuild\
    binutils\
    binutils-doc\
    gcc-doc\
    cmake\
    cmake-doc\
    extra-cmake-modules\
    extra-cmake-modules-doc\
    gdb\
    sfml\
    sfml-dev

ENV DISPLAY=DESKTOP-FRFDH77:0.0

COPY . /usr/src/dicegame
WORKDIR /usr/src/dicegame


