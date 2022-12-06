FROM modern-c-builder:latest as builder
COPY . /usr/src/app
WORKDIR /usr/src/app
RUN make all
RUN ldd ./build/test-getting-started
RUN ./build/test-getting-started

FROM modern-c-base:latest
RUN mkdir -p /usr/src/app
COPY --from=builder /usr/src/app/build/test-getting-started /usr/src/app/build/test-getting-started
COPY --from=builder /usr/src/app/build/libstarter.so /usr/src/app/build/libstarter.so
RUN /usr/src/app/build/test-getting-started
ENTRYPOINT ["/usr/src/app/build/test-getting-started"]
