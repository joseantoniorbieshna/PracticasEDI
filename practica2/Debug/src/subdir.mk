################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CuentaBancaria.cpp \
../src/Patinete.cpp \
../src/Practica.cpp \
../src/PruebaCuentaBancaria.cpp \
../src/PruebaPatinete.cpp \
../src/PruebasUsuario.cpp \
../src/Usuario.cpp 

CPP_DEPS += \
./src/CuentaBancaria.d \
./src/Patinete.d \
./src/Practica.d \
./src/PruebaCuentaBancaria.d \
./src/PruebaPatinete.d \
./src/PruebasUsuario.d \
./src/Usuario.d 

OBJS += \
./src/CuentaBancaria.o \
./src/Patinete.o \
./src/Practica.o \
./src/PruebaCuentaBancaria.o \
./src/PruebaPatinete.o \
./src/PruebasUsuario.o \
./src/Usuario.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/CuentaBancaria.d ./src/CuentaBancaria.o ./src/Patinete.d ./src/Patinete.o ./src/Practica.d ./src/Practica.o ./src/PruebaCuentaBancaria.d ./src/PruebaCuentaBancaria.o ./src/PruebaPatinete.d ./src/PruebaPatinete.o ./src/PruebasUsuario.d ./src/PruebasUsuario.o ./src/Usuario.d ./src/Usuario.o

.PHONY: clean-src

