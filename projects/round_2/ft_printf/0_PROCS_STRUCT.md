Processes

[x] printf (va_ ...)
	[x] init f_props
	[x] write while not '%'
	|	[x] check all flags
	|	|	[x] formating (format string by cspiudxX% conversion flag)
	|	|	|	[x] gets
	|	|	|	|	[x] i_d (int, aka decimal)
	|	|	|	|	[x] u_x (unsigned, hexadec)
	|	|	|	|	[x] string 
	|	|	|	|	[x] char
	|	|	|	|	[x] percent
	|	|	|	|	[x] address
	|	|	|	[x] flag min width
	|	|	|	[x] flag pointer
	|	|	|	[x] flag hashtag
	|	|	|	[x] flag minus
	|	|	|	[x] flag zero
	|	|	|	[x] flag space
	|	|	|	[x] flag plus
	|	[x] write formated string
	|	[x] reset f_props
	[x] free f_props
	[x] free va_ ...
[x] return final len of written "format"
