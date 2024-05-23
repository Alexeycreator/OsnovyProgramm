#include "file.h"
#include<iostream>
#define  _CRT_SECURE_NO_WARNINGS

using namespace std;
void writetofile(FILE* file, FILE* outputFile) {
    int num;
    while (fscanf_s(file, "%d", &num) != EOF) {
        fprintf(outputFile, "%d ", num);
    }
}
int mergeFiles(const char* fileName1, const char* fileName2, const char* outputFileName)
{
    FILE* file1;
    FILE* file2;
    FILE* outputFile;

    fopen_s(&file1, fileName1, "r");
    fopen_s(&file2, fileName2, "r");
    fopen_s(&outputFile, outputFileName, "w");

    if (file1 == NULL || file2 == NULL || outputFile == NULL)
    {
        cout << "Error opening files." << endl;
        return 0;
    }
    int num1, num2;
    if (fscanf_s(file1, "%d", &num1) == EOF)
    {
        writetofile(file2, outputFile);
        return 0;
    }
    else if (fscanf_s(file2, "%d", &num2) == EOF)
    {
        writetofile(file1, outputFile);
        return 0;
    }
    else
    {
        while (true)
        {
            if (num1 <= num2)
            {
                fprintf(outputFile, "%d ", num1);
                if (fscanf_s(file1, "%d", &num1) == EOF)
                {
                    fprintf(outputFile, "%d ", num2);
                    break;
                }
            }
            else
            {
                fprintf(outputFile, "%d ", num2);
                if (fscanf_s(file2, "%d", &num2) == EOF)
                {
                    fprintf(outputFile, "%d ", num1);
                    break;
                }
            }
        }
    }
    writetofile(file1, outputFile);
    writetofile(file2, outputFile);
    fclose(file1);
    fclose(file2);
    fclose(outputFile);
    return 0;
}
void writemasToFile(int mas[], int size, const char* filename) {
    FILE* file;
    fopen_s(&file, filename, "w");
    if (file != NULL) {
        for (int i = 0; i < size; i++) {
            fprintf(file, "%d ", mas[i]);
        }
        fclose(file);
    }
    else {
        cout << "Error" << endl;
    }
}
void printfile(const char* filename) {
    FILE* file;
    errno_t err = fopen_s(&file, filename, "r");

    if (err != 0) {
        cout << "Failed to open file" << endl;
        return;
    }

    int num;
    while (fscanf_s(file, "%d", &num) != EOF) {
        cout << num << " ";
    }

    fclose(file);
}
