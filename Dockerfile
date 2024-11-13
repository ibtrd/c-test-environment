FROM i386/debian

RUN apt-get update && \
apt-get install -y make gcc vim

WORKDIR /home

COPY . .

RUN make

ENTRYPOINT [ "bash" ]
