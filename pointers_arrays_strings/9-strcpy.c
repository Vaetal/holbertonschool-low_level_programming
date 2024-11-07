char *_strcpy(char *dest, char *src)
{
		char *aux = dest;

		while (*src)
		*dest++ = *src++;		
        	*dest = '\0';
		return (aux);
}
