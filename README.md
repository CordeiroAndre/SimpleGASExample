# Exemplo simples de GAS
Um guia simples para configurar o GAS em um ambiente single player. Parte do meu programa particular de tutoria em Unreal na Geek Fabrik.

## Esquemática
![Esquemática](https://github.com/CordeiroAndre/SimpleGASExample/blob/main/GASConcept.png)


## Configurando o GAS 
1. Habilitar o Plugin "Gameplay Abilities"
2. Adicionar o "GameplayTags", "GameplayTasks", "GameplayAbilities" no arquivo Build.cs
3. Criar a classe de Atributo 
4. Configurar a classe de atributo
5. Criar o Character 
6. Implementar a interface
7. Criar o ability system component dentro do construtor do Character Character
8. Criar o Attribute set dentro do construtor do character 
9. Inicializar o *abilitySystemComponent*
**10. Compila tudo e abre o jogo!** 