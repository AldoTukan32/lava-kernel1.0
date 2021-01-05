char* output = (char*)0xb8000; // memori output

void printchar(char huruf,char atribut){
	*output = huruf;
	output++;
	*output = atribut;
	output++;
}

void print(char* kalimat,unsigned atribut){
	int i=0;
	while(kalimat[i] != 0){
		printchar(kalimat[i],atribut);
		i++;
	}
}

int kmain(){
	print("Hello, world!    ",15); print("This is Lava!    ",10); print("Jangan lupa subscribe...      ",4);
	printchar('A',79);
}
