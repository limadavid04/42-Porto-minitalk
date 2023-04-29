# # -*- Makefile -*-
CC = cc
CFLAGS =-Wall -Wextra -Werror
SERVER = server
CLIENT = client
LIBFT = ./libft/libft.a
NAME = minitalk
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

all: $(SERVER) $(CLIENT)

$(SERVER): $(SERVER:=.o)
	$(MAKE)  -C ./libft
	$(CC) $(CFLAGS) $(SERVER:=.o) $(LIBFT) -o $(SERVER)

$(CLIENT): $(CLIENT:=.o)
	$(MAKE)  -C ./libft
	$(CC) $(CFLAGS) $(CLIENT:=.o) $(LIBFT) -o $(CLIENT)


$(SERVER_BONUS): $(SERVER_BONUS:=.o)
	$(MAKE)  -C ./libft
	$(CC) $(CFLAGS) $(SERVER_BONUS:=.o) $(LIBFT) -o $(SERVER_BONUS)

$(CLIENT_BONUS): $(CLIENT_BONUS:=.o)
	$(MAKE)  -C ./libft
	$(CC) $(CFLAGS) $(CLIENT_BONUS:=.o) $(LIBFT) -o $(CLIENT_BONUS)
 
clean:
	$(MAKE) clean  -C ./libft
	rm -f $(SERVER:=.o) $(CLIENT:=.o) $(SERVER_BONUS:=.o) $(CLIENT_BONUS:=.o)

fclean: clean
	$(MAKE) fclean  -C ./libft
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all
