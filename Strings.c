// File By AARZOO,ANSHIKA,SAKSHI

char space[] =
    "        \n"
    "        \n"

    ;
char pattern[] =
    "    /$$      /$$ /$$$$$$$$ /$$        /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$\n"
    "   | $$  /$ | $$| $$_____/| $$       /$$__  $$ /$$__  $$| $$$    /$$$| $$_____/\n"
    "   | $$ /$$$| $$| $$      | $$      | $$  \\__/| $$  \\ $$| $$$$  /$$$$| $$    \n"
    "   | $$/$$ $$ $$| $$$$$   | $$      | $$      | $$  | $$| $$ $$/$$ $$| $$$$$   \n"
    "   | $$$$_  $$$$| $$__/   | $$      | $$      | $$  | $$| $$  $$$| $$| $$__/   \n"
    "   | $$$/ \\  $$$| $$      | $$      | $$    $$| $$  | $$| $$\\  $ | $$| $$      \n"
    "   | $$/   \\  $$| $$$$$$$$| $$$$$$$$|  $$$$$$/|  $$$$$$/| $$ \\/  | $$| $$$$$$$$\n"
    "   |__/     \\__/|________/|________/ \\______/  \\______/ |__/     |__/|________/\n";

char to[] =
    "   /$$$$$$$$ /$$$$$$ \n"
    "   |__  $$__//$$__  $$\n"
    "      | $$  | $$  \\ $$\n"
    "      | $$  | $$  | $$\n"
    "      | $$  | $$  | $$\n"
    "      | $$  | $$  | $$\n"
    "      | $$  |  $$$$$$/\n"
    "      |__/   \\______/ \n";

char election[] =
    "    /$$$$$$$$ /$$       /$$$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$  /$$$$$$ | $$$ | $$\n"
    "   | $$_____/| $$      | $$_____/ /$$__  $$|__  $$__/|_  $$_/ /$$__  $$| $$$$| $$\n"
    "   | $$      | $$      | $$      | $$  \\__/   | $$     | $$  | $$  \\ $$| $$ $$ $$\n"
    "   | $$$$$   | $$      | $$$$$   | $$         | $$     | $$  | $$  | $$| $$  $$$$\n"
    "   | $$__/   | $$      | $$__/   | $$         | $$     | $$  | $$  | $$| $$\\  $$$\n"
    "   | $$      | $$      | $$      | $$    $$   | $$     | $$  | $$  | $$| $$\\  $$$\n"
    "   | $$$$$$$$| $$$$$$$$| $$$$$$$$|  $$$$$$/   | $$    /$$$$$$|  $$$$$$/| $$ \\  $$\n"
    "   |________/|________/|________/ \\______/    |__/   |______/ \\______/ |__/  \\__/ \n";

char num[] =
    "     /$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$\n"
    "    /$$__  $$ /$$$_  $$ /$$__  $$| $$  | $$\n"
    "   |__/  \\ $$| $$$$\\ $$|__/  \\ $$| $$  | $$\n"
    "     /$$$$$$/| $$ $$ $$  /$$$$$$/| $$$$$$$$\n"
    "    /$$____/ | $$\\ $$$$ /$$____/ |_____  $$\n"
    "   | $$      | $$ \\ $$$| $$            | $$\n"
    "   | $$$$$$$$|  $$$$$$/| $$$$$$$$      | $$\n"
    "   |________/ \\______/ |________/      |__/\n";

char bjp_candidate[] = "Yogi Adityanath";
char bjp[] = "BHARTIYA JANTA PARTY";
char bjp_symbol[] =
    "                                       +@.             :=-..               \n"
    "    .#@@@%#+:      =@@@@@#-          .#@@@.        -%@@@@@:      .=#%%@@%= \n"
    "     :@@-=*@@@@+.   :@#.:*@@#:      .@@*:@@-    .#@@*-.-@=    :#@@#=::%@-  \n"
    "      .%@:   .=@@%. .=@=  .+@@%:   .%@-  :@@. .*@@-    #%.  -@@*:   :@@.   \n"
    "       -@%.     :#@#..@%    .#@@= :@@:     %@-@@=      %%.:%@*.    .@@-    \n"
    "        +@+       :%@+@%     .=@@+@@-      .@@%.       #@=@@:      +@#     \n"
    "        :@#.       .+@@-       -@@@.        :@%.       +@@%.       *@*     \n"
    "        .%@.        -@%.       :@@-          :@@.      .@@:        *@*     \n"
    "        .%@:        *@+        #@=            =@*       =@*.       +@#     \n"
    "        .#@=       .@@+      .=@%.            .@@-      .%%.       =@%     \n"
    "        .#@=       .@@=      .@@.              :@@.      #@.       =@@.    \n"
    "         +@*       .@@=      +@=                %@-      *@-       =@@.    \n"
    "         .@@.       *@+      #@-                +@=      =@=       +@#     \n"
    "          *@=       -@#.    .@@.                =@=      =@=       #@-     \n"
    "          :@@:      .%@:    .@@                 =@=      *@:      -@%.     \n"
    "           :@@-     .-@@:    #@.                =@=     .%#.     -@@.      \n"
    "            -@@*.     +@%.   +@=                *@-     +@-     -@@:       \n"
    "             .%@@+    .+@@=  .@@.              -@%.    #@-    .*@%.        \n"
    "               :#@@@*=-=*@@@-..@@-            =@%.   =@%:   .+@@-          \n"
    "                .-@@%%@@%#+#@@%+@@%-        :%@@..-#@@@#**#@@@@+.          \n"
    "               -@@=          .:%@@@@@@#++*@@@@@@@@#+*%%%#+-. .*@@-         \n"
    "             .*@@::..        .#@%.  .-++*+=:.  =@%.         .-=*@@.        \n"
    "             .#%*#@@@@:.     .@@-               @%.      .*@@%=:+@.        \n"
    "                    .*@@%=....#@%.            .@@-.. ..-@@%.               \n"
    "                      ..=%@@@@#*@@%.       :%@@@@@@@@@@%-.                 \n"
    "                                ..+@@+    @@*.     ..                      \n"
    "                                   .*@%-:@@:                               \n"
    "                                   .%@@@@=                                 \n"
    "                                     :@**@:                                \n"
    "                                     :@**@.                                \n"
    "                                     :@=%@.                                \n"
    "                                     :@.%@.                                \n"
    "                                    .%@:@*                                 \n"
    "                                    =@-=@=                                 \n"
    "                                  .-@#:@*                                  \n"
    "                          .@@@@@@@@@-.%@#####%@@@:                         \n";

char congress_candidate[] = "Rahul Gandhi";
char congress[] = "CONGRESS";
char congress_symbol[] =
    "                                      @@@@@                                    \n"
    "                                @%%@@-     #%-:-@                              \n"
    "                              @*.  :@:     *.   .%                             \n"
    "                           @@@@:    *:     #.   .#                             \n"
    "                         @%:.:@     +:     #.... *@                            \n"
    "                         @:  .%  .. =: :=. %..+: +@                            \n"
    "                        @+   .%  -: +:    .@.    -@                            \n"
    "                        %:  ..%     +:    .@.    .@                            \n"
    "                        %.:+-.#     +:     %. ..  %                            \n"
    "                       @*    .#     =: .=  *..#-  #@                           \n"
    "                       @+    .%  .  -:     +.     #@                           \n"
    "                       @= :- .%  .  -:     +:     %@                           \n"
    "                       @=    .%     +@*.   #=.    %@   @@#*@@@                 \n"
    "                       @=    .@. -#%@@%##%@@@@%%@@@@  @-.   -@@                \n"
    "                       @=   .*@%+--@*.   ..     .=@@@@-    ..@                 \n"
    "                       @= -#@=.  =+.              =@@-     ::@                 \n"
    "                       @%...                .     -@#       +@                 \n"
    "                      @#               .=*+:      -@%      .@@                 \n"
    "                      @-           :=##-.         *@@:     :@                  \n"
    "                     @@.       .-##:.      .-:   =@.*+     =@                  \n"
    "                     @#      :*:.       .:#=..:+@@.        +@                  \n"
    "                     @+.-*:           .+*..:#-%@@:         #@                  \n"
    "                     @+.           ..+:..-=  =+-:          %                   \n"
    "                     @*           :.  :   .+.           :@                   \n"
    "                     @@.       .#..  .#:.                 #@                   \n"
    "                      @:     .#-.  .%@.                  =@                    \n"
    "                      @=    +-.  .+:%.                  =@                     \n"
    "                       %.  ..    :.=.                  -@                      \n"
    "                       @*.         .                 .#@                       \n"
    "                        @=                         .*@@                        \n"
    "                        @@+.       :-.           :*@@                          \n"
    "                        @@@%: .=*@@@+. .*@@@%..+@@@@                           \n"
    "                         @@+.-:.--::.    ..:.:*@@@@                            \n"
    "                         @%..*@@@#         ..:%%@@                             \n"
    "                         @*  -*.               .@@                             \n\n";

char spa_candidate[] = "Akhilesh yadav";
char spa[] = "Samajwadi Party";
char spa_symbol[] =
    "                                                 -@@@@%.  .*@@@@@%.                           \n"
    "                                               +@**=..:%@@@#%**%@@*.                          \n"
    "                               ..:-==+-       .=*-    .%@###@@%#=:.                           \n"
    "                        .@@@@@@@@@@@@@@+               .:.  .@=                               \n"
    "                        .-%@@@@@@@%-.                        =@: .                            \n"
    "                            .-%@*.                           .%# =                            \n"
    "                               *@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%:                            \n"
    "                              =@*@:                            =@:                            \n"
    "         .====++==+++++=+===--@: =@.                           .%%.                           \n"
    "         -%*@+@%@@@@@@@@@%@=#@=  .*%.                          -@@*..:+#%#*+=.                \n"
    "         .-%@*-*@@@@@@@@@#==@@*.   *%.                       -@#.=@@=:=#@@@@@@@@@*-..         \n"
    "       :%:%@@#.-    :.  .-@@@==%-..%                    .-@#.=@-*@@%+    :.   .=*@@%:       \n"
    "     .#*=@@+  #:.+   :.  .## .#@*:@-.%*.                .-@#.-%:#@#%%..-   :.   -.   :@@-.   \n"
    "    =%-@@:  =..@-:.  :. .*%.  .=#@++#.@=    ...       .=@*..%=+@#=:.*@..:  ..  -.   :: :@@.   \n"
    "   +*=@#.   .-:.%.:  -. =@.  -:  :@#-#.@=  .@@@@:   .+@+. .@:%@-  .:.%#.-  .. .:  .+.   .=@=  \n"
    "  -#+@= .--   .-:@=  - =@: --.    .%%=%-@:  .@-..  +@=.   #:%@=.    .=%%.= .. =. ::.   :-.-@= \n"
    " .%.@*.    .=. .-.@=.--@:--.   :=..-@+*=-@=:*@.  +@=.    +++@: ..=:   -@%.::.:. =.  :-.    *@:\n"
    "%@+#@:--:     :=.:+%-=@+..=*+**++--%@-%*@@@@@@@@=      .@-@+      .:=..#@+-.-::.--.      .-@\n"
    "-@=@*     .::--:.:*@@@%==:.      ..:=@-%@@*@@@@@@=      -%=@=:----:.  .:-@@@#+-:..---:::.   *%\n"
    ".-:@+      ..:----##@@@@@@@@@@@@@@@@@@@@@@@@@%.#@#      -#=@:         ..:=%@*+=-:.          *@\n"
    "  .@*:..      .-:-#%%#@*::::--.     :@-*@@-**.+@@-      -%=@:  .:--:::..-:-+*+=--.  .:::::--%%\n"
    "   #@.    .::: .+:-::-.-.--:--==#*+%@:.=@@@@@@%:       .@-@*..     .--.:-::+-.-: :-:      :@\n"
    "   .@*.:-:   .=- ::.:.:.=. .-:     -@+  ..=@-.           +++@-   .--. .-:.- = =..-.  .-:.  *@:\n"
    "    =@=     --  :: .: =. -:   :-. .@%.  ..+#              #.%%.:=.   .-  :. = .-  :-     :*@- \n"
    "     =@*. :=   .-  :.  -  .-     =@#.   -@@@%                #@:    -.  .-  =  :-   -.  .*@=  \n"
    "      :@@+    .=   -.  -    =. .*@=                           +@%..=   .-   =   :.   .=:@%.   \n"
    "        =@@=..=.   -   :-   .*@                              .#@%:.  .:   +   .=. .-@@-     \n"
    "          .#@@*:...+  ..+.=@@@-                                   -@@@++... +.....%@@%.       \n"
    "              :#@@@@@@@@@%=.                                          =%@@@@@@@@@*:           \n\n\n\n\n\n\n\n";

char bsp_candidate[] = "Mayawati";
char bsp[] = "Bahujan Samaj Party";
char bsp_symbol[] =
    "                  ###+=#############                                                         \n"
    "                #*.................=############**+-:::-=+*######                            \n"
    "              #...............##*#=..=-:..=###.-*..+-.........:=*###                         \n"
    "             ##*...................:****##*=.:**...................:+###                     \n"
    "            #*............................+#=.+*.......................=###                  \n"
    "           #+..........................:+-..=#............................=##                \n"
    "          ##......................-....:++:#=...............................:+##             \n"
    "          #=......**+*:........*##*......#*.............................:+#+...=##           \n"
    "         ##:......#+#=.......=#-.-......*=.............................-.........-##         \n"
    "        ##-......................*=...=#:............*=..............+*............-##       \n"
    "       ##=.....................:+*+...:..............*+.............:# .............:##      \n"
    "       #=.....................+##+#....:............*##.............**...............:#      \n"
    "    ###+........*=...........:###:=+.##:.............-#...............:...........+*=.=#     \n"
    "#######.....-*###*+=##.::+#***-###*.*#-...............+......:......:#=............+#=-##    \n"
    "     #=:+##*+....::=*:####   #=..=--##.................###-.+#..-#-.=##.............=-.##    \n"
    " ####-.......+#########       #-..:#**............*+...#-..=#:..:#.-*#...............#:-#    \n"
    "    #+.:+####                 ##=.*-*+...........+#:...+..*##+.......................:#.+#   \n"
    "    #-...+###                ##.*-..*+.........=#*....#######=:##...+.:...............##:##  \n"
    "    #:...*##                 #=..*+.+*..............-#######+.*##+-#:-#..............=#####  \n"
    "   ##....###                #*....-##*.............*########.+##*.+#*##=.............*# ###  \n"
    "   #*....*+#               ##-......=*...........:-:::*####: ###-.##+##+.............*# #+## \n"
    "   #*...####               #+.......:*........**.*##*=..::...##*.-#+.=##*............*# #=-# \n"
    "   #*....:#               #*.........#...........*#   ###*+:......*=:*###-...........*# ##.+#\n"
    "   #*....-#        #      #+.........*-......:#####       ####*-....-...-#...........+# #*..##\n"
    "    #:...-#     #####     #=.........++......-# =#             ##*....=.:*#*:........-# ##=.=#\n"
    "    #*....*#   #=..=#    ##-........:#*.......-.*#               #-...##..+#.=........#  ##:-#\n"
    "     #+....-###+..:+#    ##:........*##:........##               #-.-:.##+==.-=:......+#  ####\n"
    "      #*.........+##     ##:.......-# #+........##               #-.-+######+:++....-+=#      \n"
    "       ##+:....:*##      #*........## #*......::##              ##..--#:=#  ##=.....:#+##     \n"
    "         ########        #:.......=#  #*...+#*#-##              #=.+##:.##   ##......#*##     \n"
    "                        #*........##  #*.....:-:##             #+......:##    #:.......+#     \n"
    "                        #-.......+#   #*.-......*#            #*.......-##   ##:.......=#     \n"
    "                      ###-.:=:...*#  ####:.::..-:#           ##=..:....-##   #+.....*-..#     \n"
    "                     #..:+-:-#-.##  #*.:**--##=.          #-..**:*-..+#   ##-:...:....#     \n"
    "                      ######***###   ####++===+###           ##*:..*-:##    ##..##-.*:.+#     \n"
    "                                                                 ####        ##########       \n";

char instructions[] =
"\t\t\t\tWelcome to the Electronic Voting Machine (EVM)\n\n"

"   Dear Voter,\n\n"

"   Welcome to the Electronic Voting Machine (EVM), a crucial component of\n" 
"   our democratic process. Your participation is vital, and we appreciate\n" 
"   your commitment to shaping the future through your vote.\n\n"
"   Instructions for Responsible Voting:\n\n"

"         Choose Wisely: Take your time to carefully consider each candidate. Your\n"
          "\t\t\tvote can make a significant impact on our community, region, and country.\n\n" 
               
"         Verify Your Choice: Before pressing the 'VOTE' button, double-check your selection on\n"
          "\t\t\tthe Ballot Unit. Ensure your vote accurately represents your decision.\n\n" 
               
"         Respect Privacy: Maintain the confidentiality of your vote. Use the voting compartment\n" 
               "\t\t\tprovided for a private and secure voting experience.\n\n"

"         Vote Responsibly: Your vote shapes the destiny of our nation. Consider the values and policies\n" 
               "\t\t\tthat matter to you and vote responsibly.\n\n"

"         Assistance is Available: If you have any questions or need assistance, please don't hesitate to\n" 
               "\t\t\task the polling officer. They are here to help ensure a smooth voting process.\n\n"

"   Remember, democracy thrives when each citizen actively participates. \n"
"   By voting responsibly, you contribute to the strength and integrity  \n"
"   of our democratic system. \n\n"
"   Thank you for your dedication to democracy.\n\n"
"   Happy Voting!\n";


