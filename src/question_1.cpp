#include <vector>


using namespace std;


/*
 * Problem Description:
 * Given a 2D grid, and a robot that can only move down and right,
 * a start point and a goal point, check if the robot can reach the
 * goal.
 *
 * There are lots of ways to solve this problem. We will show two here:
 * 1. A Djikstra's-like approach
 * 2. A dynamic programming solution
 *
 */

// Common Data Structures


struct Point {
  int x;    // positive right
  int y;    // positive down
  operator=(&rhs) {
    return ((x == rhs.x) && (y == rhs.y));
  }
};

struct Grid {
  unsigned int width;
  unsigned int depth;
  bool* occupied[];

  Grid(int width, int depth){
    this->width=width;
    this->depth = depth;
    occupied = new bool[width * depth];
    assert(occupied);
    }

    ~Grid(){ delete this->occupied; }

    inline int to_linear(const Point &point){
    return point.x + point.y * width;
  }
  bool is_free(Point &point){
      return ((point.x >= 0) && (point.y >=0)
              && (point.x < width) && (point.y < depth)
              && occupied[to_linear(point)]);
  };
};

/*
 * Graph Search Solution
 */

struct Graph {
  vector<Point> cells;
  vector<vector<int>> adjacency_list;

  vector<int> get_neighbours(int cell_index){
    auto result = vector<int>{};
      if (cell_index

  };


};


