#include "../cub3d.h"

int	num_of_players(t_map *map)
{
	char	*chars;
	int		num_player;
	int		x;
	int		y;

	chars = "NWSE";
	num_player = 0;
	y = 0;
	while (y < map->rows)
	{
		x = 0;
		while (x < map->columns)
		{
			if (ft_strchr(chars, map->map[y][x]))
			{
				map->cur_pos.y = y;
				map->cur_pos.x = x;
				get_starting_angle(map, map->map[y][x]);
				num_player++;
			}
			x++;
		}
		y++;
	}
	return (num_player);
}

char	*save_edge_characters(t_map *map)
{
	char	*edge_chars;
	int		i;
	int		y;
	int		x;

	edge_chars = malloc(sizeof(char) * ((map->rows + map->columns - 1) * 2));
	if (!edge_chars)
		return (NULL);
	i = 0;
	y = 0;
	while (y < map->rows)
	{
		x = 0;
		while (x < map->columns)
		{
			if (y == 0 || y == map->rows - 1 || x == 0 || x == map->columns - 1)
				edge_chars[i++] = map->map[y][x];
			x++;
		}
		y++;
	}
	edge_chars[i] = '\0';
	return (edge_chars);
}

int	check_edge_chars(char *str)
{
	char	*edge;

	edge = str;
	while (*edge)
	{
		if (*edge != '1' && *edge != ' ')
		{
			free(str);
			return (1);
		}
		edge++;
	}
	free(str);
	return (0);
}

static int	fill_adjacent_chars(char *adj_chr, t_map *map, int y, int x)
{
	int	i;
	int	dy;
	int	dx;
	int	nx;
	int	ny;

	dy = -1;
	dx = -1;
	i = 0;
	while (dy <= 1)
	{
		dx = -1;
		while (dx <= 1)
		{
			nx = x + dx;
			ny = y + dy;
			if (nx >= 0 && nx < map->columns && ny >= 0 && ny < map->rows)
				adj_chr[i++] = map->map[ny][nx];
			dx++;
		}
		dy++;
	}
	return (i);
}

char	*get_surrounding_chars(t_map *map, int y, int x)
{
	char	*adj_chr;
	int		i;

	adj_chr = (char *)malloc(sizeof(char) * 10);
	if (!adj_chr)
		return (NULL);
	i = fill_adjacent_chars(adj_chr, map, y, x);
	adj_chr[i] = '\0';
	return (adj_chr);
}
