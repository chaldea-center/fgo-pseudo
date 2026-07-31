void ServantListRootComponent___ctor(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void ServantListRootComponent__EndClickBackRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool IsStackScene; // w19

  if ( (byte_59344CE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59344CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( IsStackScene )
  {
    if ( Instance )
    {
      AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(Instance, v4);
  }
  if ( !Instance )
    goto LABEL_9;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
}


void ServantListRootComponent__EndExitList(ServantListRootComponent_o *this, bool isRrquest, const MethodInfo *method)
{
  ;
}


void ServantListRootComponent__EndLoadCommonBg(ServantListRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_59344C8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__);
    byte_59344C8 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_21FFECC(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
  AtlasManager__LoadOutGameIconAtlas(v4, 0);
}


void ServantListRootComponent__EndLoadOutGameIconAtlas(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
}


void ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59344CF & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59344CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_59344CC & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_EndExitList__);
    byte_59344CC = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v4 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    v5);
  if ( !charaGraphListMenu )
    sub_21FFECC(v6, v7);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v4, v8);
}


void ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_59344CA & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_SelectServantList__);
    byte_59344CA = 1;
  }
  if ( !this->fields.state )
  {
    charaGraphListMenu = this->fields.charaGraphListMenu;
    this->fields.state = 1;
    v4 = (CharaGraphListMenu_CallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_CallbackFunc_TypeInfo);
    CharaGraphListMenu_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      v5);
    if ( !charaGraphListMenu )
      sub_21FFECC(v6, v7);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v4, v8);
  }
}


void ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_59344CD & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_EndClickBackRequest__);
    sub_21FFC50(&Method_ServantListRootComponent_OnClickBack__);
    byte_59344CD = 1;
  }
  v3 = Method_ServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_ServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ServantListRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    v7);
  if ( !charaGraphListMenu )
    sub_21FFECC(v8, v9);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v6, v10);
}


void ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_21FFECC(0, method);
  CharaGraphListMenu__Init(charaGraphListMenu, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v6; // x21
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x0
  const MethodInfo *v8; // x3
  bool v9; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  intptr_t *v11; // x8
  const MethodInfo *v12; // x2

  if ( (byte_59344CB & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_EndClickBackRequest__);
    sub_21FFC50(&Method_ServantListRootComponent_EndServantQuestRequest__);
    byte_59344CB = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, *(const MethodInfo **)&result),
         v6 = this->fields.charaGraphListMenu,
         v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo),
         v9 = result == 2,
         v10 = v7,
         v9)
      ? (v11 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v11 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v7, (Il2CppObject *)this, *v11, v8),
        !v6) )
  {
    sub_21FFECC(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v6, v10, v12);
}


void ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_59344C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_59344C9 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu
    || (CharaGraphListMenu__Init(charaGraphListMenu, method),
        (charaGraphListMenu = (CharaGraphListMenu_o *)this->fields.backSkinSprite) == 0)
    || (charaGraphListMenu = (CharaGraphListMenu_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)charaGraphListMenu,
                                                       0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)charaGraphListMenu, 0, 0),
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0);
}


void ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59344C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59344C6 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *MainBgmName; // x20
  __int64 v7; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_59344C7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_ServantListRootComponent_EndLoadCommonBg__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_59344C7 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 22, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_46824800(titleInfo, 1, 22, 0, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0);
  MainMenuBar__setMenuActive(0, 0, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0)) == 0 )
  {
LABEL_16:
    sub_21FFECC(titleInfo, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  AtlasManager__LoadUISkin(v10, 2, 1, 0);
}