#include "minishell.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0)
		return (ft_strdup(s2));
	string = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i] != 0)
	{
		string[i] = s1[i];
		i ++;
	}
	while (s2[j] != 0)
	{
		string[i] = s2[j];
		i ++;
		j ++;
	}
	string[i] = 0;
	free(s1);
	return (string);
}

char	*readline(void)
{
	size_t	buffersize;
	char	buffer[2];
	char	*line;
	char p = '%';

	line = 0;
	write(0, "KUHN_SILVESTRI_SHELL ", 21);
	write(0, &p, 1);
	write(0, " ", 1);
	buffersize = read(STDIN_FILENO, buffer, 1);
	buffer[1] = 0;
	while (buffersize > 0)
	{
		line = ft_strjoin2(line, buffer);
		if (ft_strncmp(buffer, "\n", 1) == 0)
			break ;
		buffersize = read(STDIN_FILENO, buffer, 1);
	}
	return (line);
}

int	main(int argc, char *argv[], char **env)
{
	t_mini	ministruct;

	if (argc != 0)
		argv[1] = 0;
	init(&ministruct, env);
	while (ministruct.finished == 0)
	{
		ministruct.line = readline();
		printf("%s", ministruct.line);
	}
	free_function(&ministruct);
	system("leaks minishell");
	return (0);
}