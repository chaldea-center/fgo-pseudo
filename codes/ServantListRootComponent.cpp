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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool IsStackScene; // w19

  if ( (byte_4B124F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, method);
    byte_4B124F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v4);
  }
  if ( IsStackScene )
    AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0LL, 0LL);
  else
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  __int64 v13; // x1

  if ( (byte_4B124F1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v6, v7);
    byte_4B124F1 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__LoadOutGameIconAtlas(v12, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B124F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest, method);
    byte_4B124F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B124F5 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndExitList__, v5, v6);
    byte_4B124F5 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                     CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    v9);
  if ( !charaGraphListMenu )
    sub_1BCAA3C(v10, v11);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v8, 0LL);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B124F3 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantListRootComponent_SelectServantList__, v5, v6);
    byte_4B124F3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v8 = (CharaGraphListMenu_CallbackFunc_o *)sub_1BCAA2C(CharaGraphListMenu_CallbackFunc_TypeInfo, method, v2, v3);
    CharaGraphListMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      v9);
    if ( !charaGraphListMenu )
      sub_1BCAA3C(v10, v11);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v8, 0LL);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B124F6 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndClickBackRequest__, v4, v5);
    sub_1BCA7E0(&Method_ServantListRootComponent_OnClickBack__, v6, v7);
    byte_4B124F6 = 1;
  }
  v8 = Method_ServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_ServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantListRootComponent_OnClickBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                      CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    v15);
  if ( !charaGraphListMenu )
    sub_1BCAA3C(v16, v17);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v14, 0LL);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_1BCAA3C(0LL, method);
  CharaGraphListMenu__Init(charaGraphListMenu, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x0
  const MethodInfo *v15; // x3
  bool v16; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v17; // x20
  __int64 *v18; // x8

  if ( (byte_4B124F4 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndClickBackRequest__, v5, v6);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndServantQuestRequest__, v7, v8);
    byte_4B124F4 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
         v10 = this->fields.charaGraphListMenu,
         v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                             CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13),
         v16 = result == 2,
         v17 = v14,
         v16)
      ? (v18 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v18 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v14, (Il2CppObject *)this, *v18, v15),
        !v10) )
  {
    sub_1BCAA3C(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v10, v17, 0LL);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_4B124F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method, v2);
    byte_4B124F2 = 1;
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
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B124EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B124EF = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_String_o *MainBgmName; // x20
  __int64 v14; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20
  __int64 v21; // x1

  if ( (byte_4B124F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BgmManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ServantListRootComponent_EndLoadCommonBg__, v8, v9);
    sub_1BCA7E0(&SoundManager_TypeInfo, v10, v11);
    byte_4B124F0 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 21, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 21, 0, 0LL);
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
LABEL_16:
    sub_1BCAA3C(titleInfo, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__LoadUISkin(v20, 2, 1, 0LL);
}