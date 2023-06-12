#ifndef FUNCAO_H
#define FUNCAO_H

class funcaoBase {
    public: 
        virtual void executar() = 0;
};

class funcaoDerivada : public funcaoBase {
    public:
        void executar() override;
};

#endif