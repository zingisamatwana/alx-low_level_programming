#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		str++;
	}

	return (count);
}

char **strtow(char *str)
{
	int i, j, len = 0, word_count = 0;
	char **words, *word_start = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (*str && is_space(*str))
			str++;

		word_start = str;

		while (*str && !is_space(*str))
		{
			len++;
			str++;
		}

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = word_start[j];
		words[i][len] = '\0';
		len = 0;
	}

	words[word_count] = NULL;

	return (words);
}
