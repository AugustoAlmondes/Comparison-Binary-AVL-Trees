typedef struct curso Curso;
typedef struct disciplina Disciplina;
//-------------------------------------------
Curso *CriarArvore_Curso();
int alturaNo_crs(Curso *no);
int maximo(int esq, int dir);
Curso *balancearCurso(Curso *raiz);
Curso *rotacaoDireita_crs(Curso *x);
Curso *rotacaoEsquerda_crs(Curso *x);
void CriarCurso(Curso **raiz);
void AdicionarCurso(Curso **raiz_curs, int cod, char nome_curs[], int bloco_curs, int semanas);
//--------------------------------------------
void ExibirDsc_por_Curso(Curso *arvore_curso, int codigo_curso);
void Exibir_Todos_Cursos(Curso *arvore);
void ExibirCursos(Curso *arvore);
void ExibirDados_Dsc(Disciplina *arvore);
void DadosDisciplinas(Disciplina *arvore);
void ExibirDados_Curso(Curso *arvore,int codigo);
void ExibirCursoBloco(Curso *arvore,int qtd);
//-------------------------------------------
void AdicionarDsc_em_curso(Curso **arvoreCursos,int codigo, int codDisciplina, char nome_dsc[], int bloco_dsc, int cargaHoraria);
void AdicionarDisciplinaArvore(Disciplina **raiz_dsc, int codDisciplina, char nome_dsc[], int bloco_dsc, int cargaHoraria);
Disciplina *balancearDisciplina(Disciplina *raiz);
Disciplina *rotacaoDireita_dsc(Disciplina *y);
Disciplina *rotacaoEsquerda_dsc(Disciplina *x);
int alturaNo_dsc(Disciplina *no);
//-------------------------------------------
void Imprimir_dsc(Curso *arvoreCursos, int codigo, int codigo_dsc);
void ExibirDsc_por_Codigo(Disciplina *raiz,int codigo_dsc);
void BuscarCurso_para_ExibirDsc_por_Bloco(Curso *raiz,int codigo_curso, int bloco_curso);
void ExibirDsc_por_BlocoAux(Disciplina *raiz, int bloco_curso);
void BuscarCurso_para_ExibirDsc_por_CH(Curso *raiz,int codigo_curso, int Carga_horaria);
void ExibirDsc_por_CH(Disciplina *raiz, int Carga_horaria);
//----------------------------------------------------------------------------------------------------
void BuscarCurso_para_RemoverDsc(Curso **raiz, int codigo,int codigo_dsc);
Disciplina *RemoverDsc(Disciplina *raiz,int codigo);
void buscarfolha_Dsc(Disciplina **ultimo, Disciplina *filho);
void buscarfolha_Curso(Curso **ultimo, Curso *filho);
Curso *RemoverCurso(Curso *raiz, int codigo);
//----------------------------------------------------------------------------------------------------
int compare_strings(const char *str1, const char *str2);
int verificar_semelhanca(Curso *raiz, char nome_crs[], int codigo);
void verificar_semelhanca_dsc(Curso *raiz, int codigo_crs, int codigo, int cargahorario, int blocos, int *resultado);