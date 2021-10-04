################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Count\ Thread.cpp 

OBJS += \
./src/Count\ Thread.o 

CPP_DEPS += \
./src/Count\ Thread.d 


# Each subdirectory must supply rules for building sources it contributes
src/Count\ Thread.o: ../src/Count\ Thread.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Count Thread.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


