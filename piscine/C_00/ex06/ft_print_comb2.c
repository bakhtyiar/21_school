ft_print_comb2(){
int g_count = 0;
int	g_offset = 0;
int	g_a = 0;
int	g_b = 0;
int	g_arr_dA[2];
int	g_arr_dB[2];
char	g_arr_cA[2];
char	g_arr_cB[2];
while (g_a <=99){
	while (g_b <=99){
		if (g_a !=g_b){
			if (g_count !=0){
				write(1, ", ", 2);
			}
			g_arr_dA[0] =g_a /10;
			g_arr_dA[1] =g_a %10;
			g_arr_dB[0] =g_b /10;
			g_arr_dB[1] =g_b %10;
			g_g_arr_cA[0] =g_arr_dA[0] +'0';
			g_g_arr_cA[1] =g_arr_dA[1] +'0';
			g_g_arr_cB[0] =g_arr_dB[0] +'0';
			g_g_arr_cB[1] =g_arr_dB[1] +'0';
			write(1, g_g_arr_cA, 2);
			write(1, " ", 1);
			write(1, g_g_arr_cB, 2);
			g_count++;
		}
		g_b++;
	}
	g_offset++;
	g_b =0;
	g_b +=g_offset;
	g_a++;
}
g_a =0;
}
