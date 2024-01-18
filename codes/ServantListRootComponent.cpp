void __fastcall ServantListRootComponent___ctor(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndClickBackRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  bool IsStackScene; // w19

  if ( (byte_418A048 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_418A048 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  if ( IsStackScene )
    AvalonSceneManager__popScene(Instance, 1, 0LL, 0LL);
  else
    AvalonSceneManager__transitionScene(Instance, 39, 1, 0LL, 0LL);
}


void __fastcall ServantListRootComponent__EndExitList(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantListRootComponent__EndLoadCommonBg(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_418A042 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v4);
    byte_418A042 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B2C434(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v6, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418A049 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_418A049 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418A046 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantListRootComponent_EndExitList__, v3);
    byte_418A046 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B2C434(v6, v7);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v5, 0LL);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418A044 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantListRootComponent_SelectServantList__, v3);
    byte_418A044 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v5 = (CharaGraphListMenu_CallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_CallbackFunc_TypeInfo);
    CharaGraphListMenu_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      0LL);
    if ( !charaGraphListMenu )
      sub_B2C434(v6, v7);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v5, 0LL);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_418A047 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantListRootComponent_EndClickBackRequest__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A047 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B2C434(v7, v8);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v6, 0LL);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_B2C434(0LL, method);
  CharaGraphListMenu__Init(charaGraphListMenu, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v8; // x21
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x0
  bool v10; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  __int64 *v12; // x8

  if ( (byte_418A045 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_ServantListRootComponent_EndClickBackRequest__, v5);
    sub_B2C35C(&Method_ServantListRootComponent_EndServantQuestRequest__, v6);
    byte_418A045 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
         v8 = this->fields.charaGraphListMenu,
         v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo),
         v10 = result == 2,
         v11 = v9,
         v10)
      ? (v12 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v12 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v9, (Il2CppObject *)this, *v12, 0LL),
        !v8) )
  {
    sub_B2C434(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v8, v11, 0LL);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_418A043 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_418A043 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu
    || (CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
        (charaGraphListMenu = (CharaGraphListMenu_o *)this->fields.backSkinSprite) == 0LL)
    || (charaGraphListMenu = (CharaGraphListMenu_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)charaGraphListMenu,
                                                       0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)charaGraphListMenu, 0, 0LL),
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418A040 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418A040 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  __int64 v8; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v11; // x20

  if ( (byte_418A041 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&BgmManager_TypeInfo, v4);
    sub_B2C35C(&Method_ServantListRootComponent_EndLoadCommonBg__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418A041 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 21, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 21, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_B2C434(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}