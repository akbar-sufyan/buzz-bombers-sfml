/*  This project was developed while adhering to the restrictions imposed by the course.
 *  Restrictions include: OOP, enums, global variables, STL/vector, std::string,
 *  and built-in collision detection.
 *
 *  As a result, some implementations may appear more verbose than usual.
 */

char finish_menu();
char pause_menu();
char start_menu();
void run();

int main()
{
    run();
}

void run()
{
    const char GAME_ENDED = 0,
            START_MENU = 1,
            PAUSE_MENU = 2,
            FINISH_MENU = 3,
            NAME_INPUT = 4,
            GAME_PLAY = 5,

            SCORE_BOARD_PAGE = 6,
            INSTRUCTIONS_PAGE = 7,
            INTRO_PAGE = 8,
            EXIT_PAGE = 9,
            SAVE_PAGE = 10,
            LOAD_PAGE = 11;
    char CURRENT_GAME_STATE = START_MENU;
    
    while (CURRENT_GAME_STATE != GAME_ENDED)
    {
        switch(CURRENT_GAME_STATE)
        {
            case START_MENU:
                //start menu
                break;
            
            case GAME_PLAY:
                //gameplay
                break;

            case PAUSE_MENU:
                //pause menu
                break;

            case FINISH_MENU:
                //gameplay finish menu
                break;
                
            case SCORE_BOARD_PAGE:
                //scoreboard
                break;
            
            case INSTRUCTIONS_PAGE:
                //instructions manual
                break;

            default:
                break;
        }
    }
}

char start_menu()
{
    const char START_NEW_GAME = 0,
                LOAD_GAME = 1,
                SCORE_BOARD = 2,
                INSTRUCTIONS = 3,
                QUIT_GAME = 4;
    char CURRENT_OPTION = START_NEW_GAME;
}

char pause_menu()
{
    const char RESUME = 0,
                RESTART = 1,
                SAVE_GAME = 2,
                LOAD_GAME = 3,
                INSTRUCTIONS = 4,
                START_MENU = 5;
    char CURRENT_OPTION = RESUME;
}

char finish_menu()
{
    const char PLAY_AGAIN = 0,
                START_MENU = 1,
                SCORE_BOARD = 2,
                QUIT_GAME = 3;
    char CURRENT_OPTION = PLAY_AGAIN;
}