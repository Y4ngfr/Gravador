#include <stdio.h>
#include "IncludeFiles/libAudioRecorder.h"

int main(int argc, char* argv[])
{
    RecordingParams inputData;

    if(readInput(argc, argv, &inputData) < 0){
        exit(1);
    }

    runGravador(&inputData);

    return 0;
}