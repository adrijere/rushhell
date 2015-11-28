#ifndef MACHINE_HPP_
# define MACHINE_HPP_

#define	STATE_MAX       8
#define EDGE_MAX        8

extern	eState		gStateTable[STATE_MAX][EDGE_MAX];
extern	eActiong	ActionTable[STATE_MAX][EDGE_MAX];

enum			eState
  {
    S0,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    S7,
    STATE_ERROR
  };

enum			eAction
  {
    MA,
    HR,
    ACTION_ERROR
  };

#endif /* !MACHINE_HPP_ */
