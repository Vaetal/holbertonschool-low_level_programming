char *_strcpy(char *dest, char *src '\0')
{
		char *aux = dest;

		while (*src)
		*dest++ = *src++;
		return (aux);
}
