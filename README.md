proof of concept static portable self-contained C and C++ binaries for Linux x86_64 using musl libc and LLVM runtime libraries

the committed ELF binaries in the `tests/` subdirectory are fully portable and can be executed on every Linux x86_64 system regardless of the system libc and loader and libc++, because the system libraries and loader are never touched

technically you only need the Linux kernel and the test binaries without the remaining userland to execute them
