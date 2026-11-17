#include <stdio.h>

#define BUFFER_SIZE 5

typedef struct {
    int buffer[BUFFER_SIZE];
    int head;   // Index where the next sample will be written
    int count;  // Total number of valid samples currently stored
} CircularLogger;

// Initialize the logger
void initLogger(CircularLogger *logger) {
    logger->head = 0;
    logger->count = 0;
}

// Insert a new sample into the circular buffer
void insertSample(CircularLogger *logger, int value) {
    logger->buffer[logger->head] = value;
    logger->head = (logger->head + 1) % BUFFER_SIZE;

    if (logger->count < BUFFER_SIZE) {
        logger->count++;
    }
}

// Print all stored samples from oldest to newest
void printChronological(const CircularLogger *logger) {
    if (logger->count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    int start = (logger->count == BUFFER_SIZE) ? logger->head : 0;

    printf("Chronological (oldest -> newest): ");
    for (int i = 0; i < logger->count; i++) {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", logger->buffer[index]);
    }
    printf("\n");
}

// Helper function to view the raw internal array state
void printRawBuffer(const CircularLogger *logger) {
    printf("Raw buffer: [ ");
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (i < logger->count) {
            printf("%d ", logger->buffer[i]);
        } else {
            printf("_ ");
        }
    }
    printf("]\n");
}

int main() {
    CircularLogger logger;
    initLogger(&logger);

    // Predefined test sequence from your example
    int testSamples[] = {10, 12, 14, 15, 13, 18, 20};
    int numSamples = sizeof(testSamples) / sizeof(testSamples[0]);

    for (int i = 0; i < numSamples; i++) {
        printf("Inserting: %d\n", testSamples[i]);
        insertSample(&logger, testSamples[i]);
        printRawBuffer(&logger);

        // Print chronological order once the buffer fills or wraps
        if (i >= BUFFER_SIZE - 1) {
            printChronological(&logger);
        }
        printf("\n");
    }

    return 0;
}


