
void criaBlock(struct stack *ptr_STACK, char *token);
void tilfunction(struct stack *ptr_STACK);
char *pinta_block(char *line);
void percentagem_function(struct stack *ptr_STACK);
char *tilfunction2(struct elemento y, char *line, struct stack *array);
void convert_elem_s(struct elemento val);
// void filter_block(struct stack *ptr_STACK);
void convert_arr_string(struct elemento arr, char *s);
void filter_function(struct stack *ptr_STACK);
void w_function(struct stack *ptr_STACK);
void filter_function(struct stack *ptr_STACK);
void convert_elem_s(struct elemento val);
void convert_arr_string(struct elemento arr, char *s);
void dollar_block(struct stack *ptr_STACK);
void merge(struct elemento arr[], int l, int m, int r, char *bloco, struct stack *final);
void mergeSort(struct elemento arr[], int l, int r, char *bloco, struct stack *final);
int checka(struct elemento fst, struct elemento snd, char *bloco, struct stack *final);
int comichoes(struct elemento x, struct elemento y);
void fold_function(struct stack *ptr_STACK);
void delete_snd_char(struct stack *ptr_STACK);

// To debugging

void merge1(int arr[], int l, int m, int r);
void mergeSort1(int arr[], int l, int r);
void printArray(int A[], int size);