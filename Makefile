NAME = my-32bit-debian

it: build
	docker run -it -v ./tests:/home/tests $(NAME)

build:
	docker build -t $(NAME) -f Dockerfile ..
