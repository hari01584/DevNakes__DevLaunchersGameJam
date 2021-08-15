#ifndef SNAKE_H
#define SNAKE_H
#include <queue>
#include "SnakeDatum.h"
#include "SnakeDirection.h"

class Snake{
  int _a, _b;
  SquareBoxGrid * _sqg;
  std::queue<SnakeDatum*> _tree;
  SnakeDirection *std;
  Spritesheet* snakeAtomic;
  SDL_Texture *bodyTexture;
public:
  Snake(SquareBoxGrid *sqg, SDL_Renderer * renderer);
  ~Snake();

  void initSnakeDatum(int x, int y);
  void addSnakeDatumOnDirect();
  void shiftSnakeDirec(int *x, int *y);
  void removeLastSnakeDatum();
  void renderSnake(SDL_Renderer * renderer, SDL_Surface *sf);
  void processEvent(const SDL_Event *e);

  SnakeDatum* getSnakePointer();

  void GameOver();
};

#endif
