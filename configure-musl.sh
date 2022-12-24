#!/bin/sh

PREFIX="/build/musl/linux-x86_64"

exec ./configure \
    --disable-shared \
    --disable-wrapper \
    --libdir=lib64 \
    --prefix="${PREFIX}" \
    --libdir="${PREFIX}/lib64" \
    --syslibdir="${PREFIX}"
