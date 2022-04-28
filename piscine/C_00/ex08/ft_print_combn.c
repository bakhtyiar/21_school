ft_print_combn(int n){
int g_a =0;
int	g_b =0;
int	g_offset =0;
int	g_first =1;
char	g_out[2];
while (g_a <=n){
	while (g_b <=n){
		if (g_a !=g_b){
			if (!g_first){
				write(1, ", ", 2);
			}
			g_out[0] =g_a +'0';
			g_out[1] =g_b +'0';
			write(1, g_out, 2);
			g_first =0;
			b += 1 +g_offset;
		}
	}
	g_offset++;
	g_b =0;
	g_a++;
}
g_a =0;
}
