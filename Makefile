.PHONY: run
run : build
	docker run -it my-32bit-debian

build :
	docker build -t my-32bit-debian -f Dockerfile ..
