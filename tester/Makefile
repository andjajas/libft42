# Instellingen
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I..
LIBFT_DIR   = ..

# 1. Zoek alle test_*.c bestanden in de huidige map (tester/)
TEST_SRCS   = $(wildcard test_*.c)

# 2. Maak de namen van de programma's (bijv. test_memset)
TEST_BINS   = $(TEST_SRCS:.c=)

# Standaard: compileer alle gevonden tests
all: $(TEST_BINS)

# 3. HET ALGEMENE RECEPT
# % is de wildcard voor de functienaam (bijv. memset)
# Het zoekt 'test_memset.c' hier en '../ft_memset.c' een map hoger
test_%: test_%.c $(LIBFT_DIR)/ft_%.c
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$@ succesfully compiled!"

# Ruim de test-programma's op
clean:
	rm -f $(TEST_BINS)
	@echo "tester map cleaned!"

re: clean all

.PHONY: all clean re
