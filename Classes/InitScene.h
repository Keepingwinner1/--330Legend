#pragma once
#ifndef __INIT_SCENE_H__
#define __INIT_SCENE_H__
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include "cocos2d.h"
using namespace cocos2d; //��Ҫ���������
/*
��Դ�ļ���Ҫ��ɴӽ�����Ϸ���л���HomeScene���˵�������ϵ�в���
*/

class InitScene : public Layer {
private:
    Size winSize;
public:
    bool init(); //�����Ҫ�����Ĵ�������
    static Scene* scene(); //д���̶�
    void onStartBtnClicked(Ref* sender);
    CREATE_FUNC(InitScene);
};

#endif
