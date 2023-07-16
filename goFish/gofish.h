#ifndef GOFISH_H
#define GOFISH_H

/*
 * Function: display
 * -----------------
 *    displays player 1's hand and both player's books
 */
int display();

/*
 * Function: end_of_game
 * ---------------------
 *    handles scenarios for when game is over
 *    first checks if hand is empty --> will end game if it is
 *    
 *    takes user input [Y/N] to either end the game or start a new one 
 */
int end_of_game();

/*
 * Function: display_hand
 * ----------------------
 *    displays target player's hand
 */
int display_hand(struct player* target);

/*
 * Function: display_book
 * ----------------------
 *    displays target player's book
 */
int display_book(struct player* target);

/*
 * Function: book_size
 * -------------------
 *      returns target player's book size
 */ 
int book_size(struct player* target);
#endif
