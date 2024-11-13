detach :
	docker compose up -d --build

down:
	docker compose down

it:
	@docker exec -it debian32 bash

