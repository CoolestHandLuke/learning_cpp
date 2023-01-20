#include <iostream>
#include <Windows.h>

using namespace std;

wstring tetromino[7];   // Wide String, can take up more space than a normal string
int nFieldWidth = 12;   // 12 cells
int nFieldHeight = 18;  // 18 cells
unsigned char *pField = nullptr; // An array of unsigned chars. Dynamically allocated

int nScreenWidth = 80;
int nScreenHeight = 30; // Here we are setting up the CLI to be a game windo, this is the defualt size


int Rotate(int px, int py, int r) // This function determines the spaces to fill in based 
// on the rotation of the original piece. Based on rotating a matrix and its respective 
// coordinate points for each box
{
    switch (r % 4)
    {
        case 0: return py * 4 + px;         // 0 degrees
        case 1: return 12 + py - (px * 4);  // 90 degrees
        case 2: return 15 - (py * 4) - px;  // 180 degrees
        case 3: return 3 - py + (px * 4);   // 270 degrees
    }
}

int Rotate() {
    
}
int main() 
{
    // Create all the different pieces
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    tetromino[6].append(L"....");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");

    // Initialize the array for the playing field
    pField = new unsigned char[nFieldWidth * nFieldHeight];
    for (int x = 0; x < nFieldWidth; x++) // Board Boundary
        for (int y = 0; y < nFieldHeight; y++)
            pField[y * nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
    // The above sets the boundary of the playing field to 9, everything else to 0
    wchar_t *screen = new wchar_t[nScreenWidth * nScreenHeight];
    for (int i = 0; i < nScreenWidth * nScreenHeight; i++)
        screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    // Display Frame
    WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0, 0}, &dwBytesWritten);

    return 0;

}