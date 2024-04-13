void __fastcall ServantListRootComponent___ctor(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__EndClickBackRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1
  bool IsStackScene; // w19

  if ( (byte_42EAE60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, (_DWORD)method, v3);
    byte_42EAE60 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v12; // x20

  if ( (byte_42EAE5A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v8, v9, v10);
    byte_42EAE5A = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B5D69C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v12, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EAE61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, (_DWORD)method, v3);
    byte_42EAE61 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EAE5E & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantListRootComponent_EndExitList__, v5, v6, v7);
    byte_42EAE5E = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B5D69C(v10, v11);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v9, 0LL);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EAE5C & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantListRootComponent_SelectServantList__, v5, v6, v7);
    byte_42EAE5C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v9 = (CharaGraphListMenu_CallbackFunc_o *)sub_B5D694(CharaGraphListMenu_CallbackFunc_TypeInfo);
    CharaGraphListMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      0LL);
    if ( !charaGraphListMenu )
      sub_B5D69C(v10, v11);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v9, 0LL);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EAE5F & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantListRootComponent_EndClickBackRequest__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EAE5F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B5D69C(v13, v14);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v12, 0LL);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_B5D69C(0LL, method);
  CharaGraphListMenu__Init(charaGraphListMenu, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v13; // x21
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x0
  bool v15; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v16; // x20
  __int64 *v17; // x8

  if ( (byte_42EAE5D & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantListRootComponent_EndClickBackRequest__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantListRootComponent_EndServantQuestRequest__, v9, v10, v11);
    byte_42EAE5D = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
         v13 = this->fields.charaGraphListMenu,
         v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo),
         v15 = result == 2,
         v16 = v14,
         v15)
      ? (v17 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v17 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v14, (Il2CppObject *)this, *v17, 0LL),
        !v13) )
  {
    sub_B5D69C(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v13, v16, 0LL);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_42EAE5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAE5B = 1;
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
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EAE58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAE58 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *MainBgmName; // x20
  __int64 v18; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v21; // x20

  if ( (byte_42EAE59 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BgmManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantListRootComponent_EndLoadCommonBg__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EAE59 = 1;
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
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 21, 0, 0LL);
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
    sub_B5D69C(titleInfo, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v21, 2, 1, 0LL);
}