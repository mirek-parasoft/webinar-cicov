#!/bin/bash
# Example file using csybat on Linux
# Usage ./cspybat.sh <executable>

bxInstallPath=/opt/iarsystems/bxarm-9.40.1

$bxInstallPath/common/bin/CSpyBat --debug_file=$1 $bxInstallPath/arm/bin/libarmPROC.so $bxInstallPath/arm/bin/libarmSIM2.so --plugin=$bxInstallPath/arm/bin/libarmBat.so  --backend --endian=little --cpu=Cortex-M3 --fpu=None -p $bxInstallPath/arm/config/debugger/ST/STM32F407IG.ddf --semihosting --device=STM32F407IG --multicore_nr_of_cores=1
#$bxInstallPath/common/bin/CSpyBat --debug_file=$1 $bxInstallPath/arm/bin/libarmPROC.so $bxInstallPath/arm/bin/libarmSIM2.so --plugin=$bxInstallPath/arm/bin/libarmBat.so  --backend --endian=little --cpu=Cortex-M3 --fpu=None -p $bxInstallPath/arm/config/debugger/ST/STM32L152VB.ddf --semihosting --device=STM32L152VB --multicore_nr_of_cores=1
