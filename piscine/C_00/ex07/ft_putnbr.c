ft_putnbr(int nb){
char g_arr[16];
char	g_out[16];
int	g_len =0;
int	g_rest =nb;
int	g_i =0;
int	g_neg =0;
int	g_j =0;
if (nb <0){
	g_neg =1;
	g_rest = -nb;
}
if (nb ==0){
	write(1, "0", 1);
}
while (g_rest !=0){
	g_arr[g_i] = (g_rest %10) + '0';
	g_rest /=10;
	g_len++;
	g_i++;
}
g_i--;
while (g_i != -1){
	g_out[g_j] =g_arr[g_i];
	g_i--;
	g_j++;
}
if (g_neg ==1){
	write(1, "-", 1);
}
write(1, g_out, g_len);
}
