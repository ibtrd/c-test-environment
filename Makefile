CONTAINER_NAME = debian32

# Check if the container is running, and if so, bring up the services using Docker Compose
it:
	@if [ "$(docker container inspect -f '{{.State.Status}}' $(CONTAINER_NAME))" = "running" ]; then \
		docker compose up -d --build; \
	fi;
	@docker exec -it $(CONTAINER_NAME) bash

# Bring up the services in detached mode and build images if necessary
up:
	docker compose up -d --build

# Stop and remove containers and networks created by `docker compose up`
down:
	docker compose down