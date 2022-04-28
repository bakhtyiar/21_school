ft_print_comb(){
int a =0, b =0, c =0, count =0;
int	g_buf[3] = {0, 0, 0};
char	g_out[3];
while (g_buf[0] <=9){
	while (g_buf[1] <=9){
		while (g_buf[2] <=9){
			if (g_buf[0] !=g_buf[1]){
				if (g_buf[1] !=g_buf[2] && g_buf[0] !=g_buf[2]){
					if (count != 0){
						write(1, ", ", 1);
					}
					g_out[0] = g_buf[0] + '0';
					g_out[1] = g_buf[1] + '0';
					g_out[2] = g_buf[2] + '0';
					write(1, g_out, 3);
					count++;
				}
			}
			g_buf[2]++;
		}
		g_buf[2] = 0;
		g_buf[1]++;
	}
	g_buf[1] = 0;
	g_buf[0]++;
}
}
