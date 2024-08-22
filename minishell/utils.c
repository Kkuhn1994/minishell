#include "minishell.h"

char	*increment(char *string)
{
	char	*number;
	char	*returnstring;
	int		nr;

	number = ft_strchr(string, '=') + 1;
	nr = ft_atoi(number) + 1;
	number = ft_itoa(nr);
	returnstring = ft_strjoin("SHLVL=", number);
	free(number);
	return (returnstring);
}

void	init(t_mini *ministruct, char **envp)
{
	int	i;

	i = 0;
	while (envp[i] != 0)
		i ++;
	ministruct->envp = malloc((i + 1) * sizeof(char *));
	i = 0;
	while (envp[i] != 0)
	{
		if (ft_strncmp(envp[i], "SHLVL", 5) != 0)
			ministruct->envp[i] = ft_strdup(envp[i]);
		else
			ministruct->envp[i] = increment(envp[i]);
		i ++;
	}
	ministruct->envp[i] = 0;
}

void	free_function(t_mini *ministruct)
{
	int	i;

	i = 0;
	while (ministruct->envp[i] != 0)
	{
		free(ministruct->envp[i]);
		i ++;
	}
	free(ministruct->envp);
}