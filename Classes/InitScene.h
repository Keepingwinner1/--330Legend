#pragma once
#ifndef __INIT_SCENE_H__
#define __INIT_SCENE_H__
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include "cocos2d.h"
using namespace cocos2d; //不要忘了这个！
/*
本源文件主要完成从进入游戏到切换到HomeScene主菜单场景的系列操作
*/

class InitScene : public Layer {
private:
    Size winSize;
public:
    bool init(); //完成主要场景的创建工作
    static Scene* scene(); //写法固定
    void onStartBtnClicked(Ref* sender);
    CREATE_FUNC(InitScene);
};

#endif
