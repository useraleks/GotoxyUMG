#include <iostream> //Libreria para usar datos de entrada (cin cout)
#include <windows.h> //se usa para trabajar con windows

using namespace std;

//esta funcion se utiliza pasa usar coordenadas de windows, y el tipo de dato COORD
//obtiene las coordenadas de la pantalla y se le asigna los valores de X y Y que ingresen en la funcion

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // funcion que le indica mover el cursor a los valores dados en coord
}

//funcion que recibe como parametro el color que se colocara
//y le asigna el color al texto

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//PRIMERA FUNCION: colocar texto en la pantalla
void printText() {
    setColor(14); //se le asigna un golor
    gotoxy(26, 2); //se usa la funcion ya puesta, y como parametros coordenadas
    cout << "UNIVERSIDAD MARIANO GÁLVEZ"; 
    
    gotoxy(36, 6);
    cout << "1966";
    
    gotoxy(33, 24);
    cout << "GUATEMALA";
    
    gotoxy(28, 20);
    cout << "CONOCEREIS LA VERDAD";
    gotoxy(25, 21);
    cout << "Y LA VERDAD OS HARA LIBRES";
}

void drawManita() {
    setColor(7);
    gotoxy(50, 10); cout << "     _";
    gotoxy(50, 11); cout << "   _| |";
    gotoxy(50, 12); cout << " _| | |";
    gotoxy(50, 13); cout << "| | | |";
    gotoxy(50, 14); cout << "| | | | __";
    gotoxy(50, 15); cout << "| | | |/  \\";
    gotoxy(50, 16); cout << "|       /\\ \\";
    gotoxy(50, 17); cout << "|      /  \\_\\";
    gotoxy(50, 18); cout << "|      \\  /\\";
    gotoxy(50, 19); cout << "|       \\/ /";
    gotoxy(50, 20); cout << " \\        /";
    gotoxy(50, 21); cout << "  |     /";
    gotoxy(50, 22); cout << "  |    /";
}

void drawNewFigure() {
    setColor(10);
    gotoxy(20, 2); cout << "                  ,#####,";
    gotoxy(20, 3); cout << "                 #_   _#";
    gotoxy(20, 4); cout << "                 |a` `a|";
    gotoxy(20, 5); cout << "                 |  u  |";
    gotoxy(20, 6); cout << "                 \\  =  /";
    gotoxy(20, 7); cout << "                 |\\___/|";
    gotoxy(20, 8); cout << "               :\\____ ___";
    gotoxy(20, 9); cout << ".'   `.-===-\\   /-===-.`   '.";
    gotoxy(20, 10); cout << "/      .-\"\"\"\"\"-.-\"\"\"\"\"-.      \\";
    gotoxy(20, 11); cout << "/'             =:=             '\\";
    gotoxy(20, 12); cout << ".'  ' .:    o   -=:=-   o    :. '  `.";
    gotoxy(20, 13); cout << "(.'   /'. '-.....-'-.....-' .\\   '.).";
    gotoxy(20, 14); cout << "/' ._/   \".     --:--     .\"   \\_. '\\";
    gotoxy(20, 15); cout << "|  .'|      \".  ---:---  .\"      |'.  |";
    gotoxy(20, 16); cout << "|  : |       |  ---:---  |       | :  |";
    gotoxy(20, 17); cout << " \\ : |       |_____._____|       | : /";
    gotoxy(20, 18); cout << " /   (       |----|------|       )   \\";
    gotoxy(20, 19); cout << "/... .|      |    |      |      |. ...\\";
    gotoxy(20, 20); cout << "|::::/'' jgs /     |       \\     ''\\::::|";
    gotoxy(20, 21); cout << "'\"\"\"\"       /'    .L_      `\\       \"\"\"\"'";
    gotoxy(20, 22); cout << "           /'-.,__/` `\\__..-'\\";
    gotoxy(20, 23); cout << "          ;      /     \\      ;";
    gotoxy(20, 24); cout << "          :     /       \\     |";
    gotoxy(20, 25); cout << "          |    /         \\.   |";
    gotoxy(20, 26); cout << "          |`../           |  ,/";
    gotoxy(20, 27); cout << "          ( _ )           |  _)";
    gotoxy(20, 28); cout << "          |   |           |   |";
    gotoxy(20, 29); cout << "          |___|           \\___|";
    gotoxy(20, 30); cout << "          :===|            |==|";
    gotoxy(20, 31); cout << "           \\  /            |__|";
    gotoxy(20, 32); cout << "           /\\/\\           /\"\"\"`8.__";
    gotoxy(20, 33); cout << "           |oo|           \\__.//___)";
    gotoxy(20, 34); cout << "           |==|";
    gotoxy(20, 35); cout << "           \\__/";
}

void drawLogoUmg() {
    setColor(10);
    gotoxy(20, 2); cout << "MMMMMMMMMMMMMWKxol:;;:lkXX0o:;:dKN0xdl;,;::lllcc:;;;;;;;;;;;;;;;;,'','.''.'','.',;;;;;;;;;;;;:;;;;;;;;;:clllc:;;;;;;c0XxccdOKK0kdoc:coxKWMMMMMMMMMMMMM";
    gotoxy(20, 3); cout << "MMMMMMMMMMMMNOdlc;;coc;;cxKX0dc;lkkl:;;:clllc:;;;;;;;;;;;;;;;;;;;,'','.''...''.',;;;;;;:clloxOd:;;;;;;;;;;:clll:;;;;col;lONKko:;;lxl;cldONMMMMMMMMMMMM";
    gotoxy(20, 4); cout << "MMMMMMMMMMWXkol:;coool:;;:cd0XKxl:;;;:lllc:;;;;;;;;;;;;;;;;;;;;;;;,,,,,,;,,,,,,,;;;;:lx0K0KKKK0kdoc:;;;;;;;;:clllc:;;;;;xXkc;;;;:xKd;;:cokXWMMMMMMMMMM";
    gotoxy(20, 5); cout << "MMMMMMMMMWKxoc:;:xxllokO00klcxkl;;;:lllc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:cd00kOkkXXXNNK0x:;;;;;;;;;:cllc:;;;okl;;;cxKN0l;;;;clxKWMMMMMMMMM";
    gotoxy(20, 6); cout << "MMMMMMMMW0dlc;;;;lOKKXKOxdkkl:;;;:lllc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,cOK0OkkKKKNNXXN0l;;;;;;;;;;:cllc;;;lodxOKXKkc;;;;;;:ld0WMMMMMMMM";
    gotoxy(20, 7); cout << "MMMMMMMNOdl:;;:cc::clll:::odc;;:cllc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,cOK0OONMN0XWNXNNk;;;;;;;;;;;;:cll:;;;coool:;;;;;;;;;:ldONMMMMMMM";
    gotoxy(20, 8); cout << "MMMMMMNOol:;:oOKK0o;;;coxxl:;;cllc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:cloodddol::clOXKXK00KK00NNXXNKo;;;;;;;;;;;;;cllc:;;;;;;;;;coddol:;:loONMMMMMM";
    gotoxy(20, 9); cout << "MMMMMWOol:;:ddlldKKxxxkkdc;;:cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;cdOKNWWWMMMWNK00KX0O0XXKXXXXKKXNKOo;;;;;;;;;;;;;;:cll:;;;;;;lOXXK0Okdl;:loOWMMMMM";
    gotoxy(20, 10); cout << "MMMMW0dl:;:xKKkdokK00OOdc;;:llc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:oONWMMMMMMMMMMMMWKKXKKKXXNKk0Kkool:;;;;;;;;;;;;;;;;;;cllc;;;;cOKxl:;;;cdl;:ld0WMMMM";
    gotoxy(20, 11); cout << "MMMWKdlc;;:lox0XNX0xol:;;;cllc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;o0NMMMMMMMMMMMMMMMMNkONWMMMMXxdl;;;;;;;;;;;;;;;;;;;;;;;;:llc:;;lko;;::;;:xx:;:ldKWMMM";
    gotoxy(20, 12); cout << "MMMXxoc;;:c:;;;cox0XKx:;;cllc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lONMMMMMMMMMMMMMMMMMMMKkKNOdx00d:;;;;;;;;;;;;;;;;;;;;;;;;;;:llc:;:odox0x:;col:;;clxXMMM";
    gotoxy(20, 13); cout << "MMNOol:;cxxl:;;;;clodc;;cllc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;ckNWMMMMMMMWXNWMMMMMMMMMNd:l:,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:llc:;:oO0Odc;;;;;;;;coONMM";
    gotoxy(20, 14); cout << "MW0dl:;:dd::ldoc:lxx:;;:llc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:dKWMMMMMMMMMMNKKNMMMMMMMMKl,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:loc;;;colc::;;;;;;;:ld0WM";
    gotoxy(20, 15); cout << "MNkoc;;o0KOkO0ko::do;;:llc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;cOWMMMMMMMMMMMMMNKXWMMMMMMWKkl;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:llc;,:doldoldkkdc;;cokXM";
    gotoxy(20, 16); cout << "W0dl:;;ldxO0KXXK0Ox:,;coc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:dKMMMMMMMMMMMMMMWKkKWMMMMMMWKKk;,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;cll:;;;;;okOXKko:;;:ld0W";
    gotoxy(20, 17); cout << "Nkoc;;:c;;;;:lodkOl;;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:x0KXNWMMMMMMMMWXOo:,dNMMMMMMMX0KOxl;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:loc;;;lkKX0xc;;;;;;cokN";
    gotoxy(20, 18); cout << "Kdl:;;oxll:;;;;;;:;;:loc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;ckXXKK0KKNWMMMW0xollodxKMMMMMMMXXWMMXo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;cll:;;lOko:;;;;;;;;:ldK";
    gotoxy(20, 19); cout << "Ool:;;:::clllc:;;;;;:ll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:kWMMWX0OOkO0XXOkKXNWMMN0NMMMMMMNXWMMWk;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:loc;,:oolooddxxko;;coO";
    gotoxy(20, 20); cout << "xoc;;:cccldx0K0xl;;;coc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lXMMMNNNXK000KXKNMMMMMMMXKWMMMMMXKWMMWx;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;cll:;;dKKKKK000Od:;cox";
    gotoxy(20, 21); cout << "doc;;o0KKKK0Okxoc;;:loc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,lKMMMWNNNXK00O0NMMMMMMMMWKKWMMMMX0NMMXl,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:llc;;oxlc:::;;::;;:ld";
    gotoxy(20, 22); cout << "ol:;;oxdoc::;;;;;;;:ll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:OMMMMMMMWNXK0OXMMMMMMMMMNKNMMMMWXKNNx;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:loc;;lxo:;;;;;;;;;:ld";
    gotoxy(20, 23); cout << "ol:;;::;;;;;;;;c:;;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;dNMMWNXXXXNNWNKNMMMMMMWWXOONMMMMMNKOxc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:clc;;:odl:;;;cloc;:lo";
    gotoxy(20, 24); cout << "ol:;;d00OOO00000d;;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,:OXKXNNWMMMMMMXKNX0Oxddlc;l0NWMMMMWK00o;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;col;;;;:codk0KK0l;:lo";
    gotoxy(20, 25); cout << "ol:;;okxxxxxxxxko;;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lx0NMMMMMMMMMWKd:;;,;;;,;kNKXWMMMMWXKKo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;col:;;lkKX0Oxoll:;;co";
    gotoxy(20, 26); cout << "ol:;;;;;;;;;;;;::;;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:cxNMMMMMMMMMNd,;;;;;;,:0MWXKNMMMMWXK0o;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;coc;;;;cooolc:::;;:lo";
    gotoxy(20, 27); cout << "ol:;;colclloxOOxc;;:ll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;xNMMMMMMMMMO;,;;;;;,cKMMMNKXWMMMWKK0l;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:loc;;;;;;;;:clodc;:lo";
    gotoxy(20, 28); cout << "dlc;;cdlclxKNKxc;;;:llc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,:kWMMMMMMMMXl,;;;;;,cKMMMMXdxXMMMWKX0l;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:llc;;ldlc:;;;;:c;;:ld";
    gotoxy(20, 29); cout << "xoc;;;;:d0NKxc;;;:;;coc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,cOWMMMMMMMWx;;;;;;,lXMMMMO:;lONMMWXXXkl:;;;;:;;;;;;;;;;;;;;;;;;;;;;;cll:;:kXKKK0Okxxl;;:lx";
    gotoxy(20, 30); cout << "kol;;;lONXOocccldd:;cll:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lONMMMMMMMKc,;;;;,oNMMMXo,;;:oKWMNXXX00Ol:dOxc;;;;;;;;;;;;;;;;;;;;;coc;;ldlox00kk0Ol;;cok";
    gotoxy(20, 31); cout << "0dl:;;lOOdllcccccc;;:loc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;:ok0K0KWMMMMMMNd,;;;,,xWMMWk:;;;;;:xXMWKO0XXKkl:ol;;;;;;;;;;;;;;;;;;;;:ll:;;dxc:lddc:od:;:ld0";
    gotoxy(20, 32); cout << "Xxoc;;::;;;;;;:ccc:;;col:;;;;;;;;;;;;;;;;;;;;;;;;;;;;,:okKWMMMMMMMMMMMMNd,;;;,c0MMMKl,;;;;;;;oKMWNXXKKx;,;;;;;;;;;;;;;;;;;;;;;;coc:;cddl;;;;coxl;;:lxX";
    gotoxy(20, 33); cout << "WOol:;;:cllllllllldo::loc:;;;;;;;;;;;;;;;;;;;;;;;;,;lxKWMMMMMMMMMMMMMWXx:,;;,:kWMMMNx:;;;;;;;;lXMMNxo0k;;;,;;;;;;;;;;;;;;;;;;;cll:;ckXOl;;;;;::;;;coOW";
    gotoxy(20, 34); cout << "MKdlc;;:odlc:;;;;;oOo;:llc;;;;;;;;;;;;;;;;;;;;;,;cx0NMMMMMMMMMWN0Okxxdc;;;;;;xNMMMMMWKxoc:;;;;;dXNXOoxd,;;;;;;;;;;;;;;;;;;;;;:llc;:odkXKx:;cdo:;;:lxKM";
    gotoxy(20, 35); cout << "MNOol:;;;:;;:codk0K0o;;cll:;;;;;;;;;;;;;;:ccclox0NMMMMMMMWXKOxoc;,,,,,;;;;;;:kWMWNXNNNNXKOkxlc::okxxkxccol:;;;;;;;;;;;;;;;;;:llc:;od::o0X0l:dd;;:coOWM";
    gotoxy(20, 36); cout << "MMXxoc;;;cdO0XXK0kdc;;;;cll:;;;;;;;;;;,cOXNNNWWMMMWNXKKK0Oxdolooc::odxkkO00K00KXXKKKKOOKXXKOkkkkk00O0KKKKOkkOOkkdolldxxxxxxolll:;:dxl;;cxXXOd:;;clxXMM";
    gotoxy(20, 37); cout << "MMW0dl:;;;dOxol:;;;;;;;;;cll:;;;;;;:codd0WMMMWXKKKKKOddkxoccodxkdkKK0K0KWMKxONMWNKKNNKKNMMNKKK000XNO0WWWNK0OKWXKNNK000KNMMNkol:;;;;:c:;;;lOOc;;:ld0WMM";
    gotoxy(20, 38); cout << "MMMNOol:;;;:;;;;;;;;;;;;;;cllloxkO0KXWWXOXMMX0KKKXNNKkkO000O0KKXNWWXXXXNWMX0KNMWK00NMMMMMMMMWK0XN0XWWMNK0KWX00KNMWWNWNNWWXkol:;;;;;;;;;;;;::;;:coONMMM";
    gotoxy(20, 39); cout << "MMMMNkoc:;;;;;;;;;;;;;;;;;;cldONMWNXXXXKkOWMK0WXOOxodkO0XWMWWMMMMMMMMMMNKKXNX0KXXKXWMMWWNXXKKNMMNXWMMXKWNXWMWXXWWXK0KNMWKxoc:;;;;;;;;;;;;;;;;;cokNMMMM";
    gotoxy(20, 40); cout << "MMMMMXxoc:;;;;;;;;;;;;;;;;;;:lokXWWWWNNNOkNMN00kONXK0kxkKKKKKKKKKXWMMMMNXNWWNNWMMMMMMMNK0KKKXWMMMMMMMNNWMMMMMMMMMWNXXNNOdlc;;;;;;;;;;;;;;;;;;coxXMMMMM";
    gotoxy(20, 41); cout << "MMMMMMXxoc;;;;;;;;;;;:c:;;;;;:cod0NMWXKKkdkKKK0kd0KOxxdx00O0K0OkxO0O00OKKK0OKWWXNWKKWMXKK00KKO0KO0NX0NKOKWMMMMMMMMMMWKkol:;;;;;:::;;;;;;;;;;coxXMMMMMM";
    gotoxy(20, 42); cout << "MMMMMMWXxoc:;;;;;;;:d0XKOl;;;;;clokKNNXKKXNNWWMOdOxoool:loodloOkldd:ollxxdocxNNkk0llKMKoodldd:loooxocxdldKNNMMMMMMWXOdlc:;;;;lOKX0x:;;;;;;;coxXWMMMMMM";
    gotoxy(20, 43); cout << "MMMMMMMMXkol:;;;;;;oKMMMWO:;;;;;:clokKWMMMWOx0NN0KK00KK00K00K0KK0KK0K00KK0Ok0WWK000KXMWKKXOOOkO0O0KK0K0kkkdxKNMMWN0doc:;;;;;:kWMMWXo;;;;;:cokXMMMMMMMM";
    gotoxy(20, 44); cout << "MMMMMMMMMXkol:;;;;;:d0XXOo;;;;;;;;:cldkKWW0dd0K0XMMMMMMMNKKXNWXKXNMMMNK00KXNWMMMMMMMMMMX0KKXXK0KWMMMWKOdlokxoOWNOxoc:;;;;;;;;lOKXKx:;;;;:cokNMMMMMMMMM";
    gotoxy(20, 45); cout << "MMMMMMMMMMNOdlc;;;;;;:c:;;;;;;;;;;;;:clok00KWKdkKkxXWWWMWXK0KXXKKKKOO00XXXKKKKKKKKXWMMMWNWMMMWO0WN0xdl::llxO00Odlc:;;;;;;;;;;;;:c:;;;;;:ldONMMMMMMMMMM";
    gotoxy(20, 46); cout << "MMMMMMMMMMMWKxoc:;;;;;;;;;;;;;;;;;;;;;::lodOKOxkd:oNKxkOOKNWMMMMMNXXWMMMMWWWWWWNNNNWMMMMMMMMMMX0XOoc:lodO0K0kolc:;;;;;;;;;;;;;;;;;;;;:coxKWMMMMMMMMMMM";
    gotoxy(20, 47); cout << "MMMMMMMMMMMMWXkolc;;;;;;;;;;;;;;;:loll:;;:cloxkO0OKWxcoccdddk00XWWWMMMMMMMMMMMMMMMMMWWWX0KKxkNNxxOddxkKX0kdlc:;:::;;;;;;;;;;;;;;;;;;:lokXWMMMMMMMMMMMM";
    gotoxy(20, 48); cout << "MMMMMMMMMMMMMMW0xoc:;;;;;;;;;;;lkKK0xdooc;;;:cloxk0X000oodcclooxkdO0xOXWKO0KKOKWX0O00oxx:cdl:kNXOOKXKOkdlcc:;;;ck0koc;;;;;;;;;;;;;:coxKWMMMMMMMMMMMMMM";
    gotoxy(20, 49); cout << "MMMMMMMMMMMMMMMWNOdlc:;;;;;;;;dXN0o:;;;lxdl::;;:ccloxkOO00OOddxdl:odookKdddcoodXKocooccdookO0KXXKOkdolc::;;;;;;;d0XXKOxo:;;;;;;;;cldONMMMMMMMMMMMMMMMM";
    gotoxy(20, 50); cout << "MMMMMMMMMMMMMMMMMWXkdlc:;;;;;c0NOc;;;;;:ddok0xc;;;;:cclodxkOOOK0K0OkxOXNOxkkOkxXW000OKKKKKK0Okxollc::::lc;;;;;;;:dddOKXXKxc;;;;cldkXWMMMMMMMMMMMMMMMMM";
    gotoxy(20, 51); cout << "MMMMMMMMMMMMMMMMMMMWKkdlc:;;;:k0o;;cdo:;:ckNXxc;:ll:;;;::cclllodxkkOO0000O0K000000OOOkkxdollcc::;;;;:o0Xk:;;;;;;;lxdc:cxxl;;:clokKWMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 52); cout << "MMMMMMMMMMMMMMMMMMMMMWKkdlc:;;cddllkXXxcckNXd;;;cddc;;;::;;;;;:::ccccclllllllllllcccccc:::;;;;;:lc;;;:dXNOc;;;;:c:ddc;;;;;:cldkKWMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 53); cout << "MMMMMMMMMMMMMMMMMMMMMMMWXOdoc:;;cldOOo::kNXd;;;cdl;;;:d0x;;ldollc::;;;;;;;;;;;;;;;;;;;;;cool:;;l0Kxc;;;oKN0l;;;oklldc;;;:codOXWMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 54); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMWN0xolc:;;;;;;l0Nx;;;cdl;;;ldKWk::oolkX0doxlcdkxollodoldkkl;;;lONNx;;;lOKNKd:;;l0NKdllddc;;;:clox0NWMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 55); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMWKOxolc:;;;;okxolooc;;cddoOWOc;;;c0WO:;lc:kW0lcllddlxKNXd:;okKWk:;;ldoOXNKd:;lOKkoc:;;:cloxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 56); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxolc::;;clcc::lddllo0W0c;;;dXXd;;;;:OWKddko:;;odkXXxlolkNKl;;lxollxXXkl:cc;;;:cloxOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 57); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxdllc:;;;;:loc;;ckNKl;;:OW0l;;;;:OWKxkOo;;;cocoKNKd:dXNx;;oxl;;:llc;;;:ccldxOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 58); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKOxdlcc::;;;;;:oxkl;:oKNk:;;;;cOWOc:lc:l::ol;l00l;l0Xkc:loc;;;;::ccloxOKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 59); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKOkdolccc::;;;;;:cool:;;;;lkKOolloxd::ddc;cl:;cllc:;;:::cclodkOKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 60); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNX0Okxdollccc:::;;;;;;;::::::::c:;::::;;;;::::ccclodxkO0XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 61); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXK0OkxxdoollllcccccccccccccccccllloodxxkO0KXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    gotoxy(20, 62); cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXK0OkkxdddoooooooooodddxxkO0KXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";

}

//
void animarTexto() {
    setColor(11);
    string text = "UNIVERSIDAD MARIANO GÁLVEZ";
    gotoxy(26, 2);
    for (char c : text) {
        cout << c;
        Sleep(100);
    }

    text = "GUATEMALA";
    gotoxy(33, 24);
    for (char c : text) { //recorre cada caracter en la cadena text y se imprime cada caracter con una espera de 100
        cout << c;
        Sleep(100);
    }
}

void animateMessage() {
    setColor(14);
    string message = "Asi es, soy de la Mariano";
    gotoxy(25, 37);
    for (char c : message) {
        cout << c;
        Sleep(100);
    }
}

//Esta es como la funcion que se ejecutara y que ejecuta todas las funciones
void ejecutarTodo() {
    animarTexto();
    printText();
    drawManita();
    
    Sleep(3000); // da un descando
    system("cls"); //limpia la pantalla
    drawNewFigure(); 
    animateMessage();
    Sleep(3000);
    system("cls");
    drawLogoUmg();
}

int main() { //la funcion main ejecuta la funcion que ejecuta las demas fucniones
    system("cls");

    ejecutarTodo();

    gotoxy(0, 40);
    return 0;
}
