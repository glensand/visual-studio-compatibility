#pragma once

#ifdef  MYDLL_EXPORTS 
    /*Enabled as "export" while compiling the dll project*/
    #define api __declspec(dllexport)  
 #else
    /*Enabled as "import" in the Client side for using already created dll file*/
    #define api __declspec(dllimport)  
 #endif