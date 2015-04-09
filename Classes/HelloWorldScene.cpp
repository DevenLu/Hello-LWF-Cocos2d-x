#include "HelloWorldScene.h"
#include "lwf_cocos2dx.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

Action * breathingAction()
{
    auto scaleUp = EaseInOut::create(ScaleTo::create(2.5, 1.1), 2);
    auto scaleDown = EaseInOut::create(ScaleTo::create(2.5, 1.0), 2);
    auto breathing = Sequence::create(scaleUp,scaleDown ,NULL);
    auto repeat = RepeatForever::create(breathing);
    return repeat;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    {
        auto background = ({
            Sprite *sprite = Sprite::create("home_babies.png");
            Size winSize = Director::getInstance()->getWinSize();
            sprite->setPosition(Vec2(winSize.width/2, winSize.height/2));
            float scaleX = winSize.width / sprite->getContentSize().width;
            float scaleY = winSize.height / sprite->getContentSize().height;
            float scale = fmaxf(scaleY, scaleX);
            sprite->setScale(scale);
            sprite;
        });
        this->addChild(background, 0);
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    Vec2 middlePosition = Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y);
    {
        auto cell = ({
            Sprite *sprite = Sprite::create("baby/cell.png");
            sprite->setPosition(middlePosition);
            sprite;
        });
        cell->runAction(breathingAction());
        this->addChild(cell, 1);
    }
    {
        // add a lwf
        char buff[100];
        sprintf(buff, "baby/week24.lwf");
        const char *path = buff;
        auto lwfNode = LWFNode::create(path);
        Size size = Size(250,250);
        lwfNode->setAnchorPoint(Vec2(0.5 ,0.5));
        lwfNode->setPosition(middlePosition);
        lwfNode->lwf->FitForWidth(size.width, size.height);
        lwfNode->setContentSize(size);
        this->addChild(lwfNode, 2);
    }

    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{

}
