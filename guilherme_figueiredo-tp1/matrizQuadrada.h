class MatrizQuadrada
{
private:
    int _n;
    int **_matriz;

public:
    MatrizQuadrada(int n);
    ~MatrizQuadrada();

    void leMatriz();
    void criaMatrizIdentidade();
    void imprimeMatriz();
    int get_n();
    void criaTransposta(MatrizQuadrada*);
    bool compara(MatrizQuadrada*);
    void soma(MatrizQuadrada*, MatrizQuadrada *);
    void produto(MatrizQuadrada*, MatrizQuadrada*);

};