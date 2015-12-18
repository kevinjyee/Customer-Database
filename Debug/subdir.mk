################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../CustomerDB.o \
../MemHeap.o \
../Project8.o \
../main.o 

CPP_SRCS += \
../CustomerDB.cpp \
../MemHeap.cpp \
../Project8.cpp \
../main.cpp 

OBJS += \
./CustomerDB.o \
./MemHeap.o \
./Project8.o \
./main.o 

CPP_DEPS += \
./CustomerDB.d \
./MemHeap.d \
./Project8.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=gnu++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


