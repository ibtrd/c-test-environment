FROM i386/debian

RUN apt-get update && \
apt-get install -y make gcc vim valgrind

WORKDIR /home

COPY . .

RUN make

ENTRYPOINT [ "bash" ]
