void proxJog(int *pg){ //proxJogador

	if(*pg == 1)
	{
		*pg = 2;
	}
	else
	{
		if(*pg == 2)
		{
			*pg = 3;
		}
		else 
		{
			*pg = 1;
		}
	}
}
