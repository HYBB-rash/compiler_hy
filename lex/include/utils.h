//
// Created by hyong on 2020/8/7.
//

#ifndef COMPLIER_HY_UTILS_H
#define COMPLIER_HY_UTILS_H

#include "tokens.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
/*
 * 用于输出token的类型。
 * token的类型是用enum定义的，比如RETURN之类的，是enum类型
 * 这里是可以将token_kind枚举类型定义过的枚举数据，输出其定义值
 * 比如token_kind里有一个RETURN，传入后将在屏幕输出一个”RETURN“
 * 依此类推，token_kind具体类型请参考tokens.h头文件对token_kind的定义
 */
void tokenTypeShow(token_kind type);

#endif //COMPLIER_HY_UTILS_H
