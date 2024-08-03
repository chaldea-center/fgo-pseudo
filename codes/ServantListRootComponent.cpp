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
  bool IsStackScene; // w19

  if ( (byte_49F884C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_49F884C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_49F8846 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v4);
    byte_49F8846 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B64324(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v8, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F884D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_49F884D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F884A & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantListRootComponent_EndExitList__, v4);
    byte_49F884A = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                     CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                     method,
                                                     v2);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    v7);
  if ( !charaGraphListMenu )
    sub_1B64324(v8);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v6, v9);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_49F8848 & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantListRootComponent_SelectServantList__, v4);
    byte_49F8848 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v6 = (CharaGraphListMenu_CallbackFunc_o *)sub_1B64314(CharaGraphListMenu_CallbackFunc_TypeInfo, method, v2);
    CharaGraphListMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      v7);
    if ( !charaGraphListMenu )
      sub_1B64324(v8);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v6, v9);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_49F884B & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantListRootComponent_EndClickBackRequest__, v3);
    sub_1B640C8(&Method_ServantListRootComponent_OnClickBack__, v4);
    byte_49F884B = 1;
  }
  v5 = Method_ServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_ServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_ServantListRootComponent_OnClickBack__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v8, v9);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    v11);
  if ( !charaGraphListMenu )
    sub_1B64324(v12);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v10, v13);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_1B64324(0LL);
  CharaGraphListMenu__Init(charaGraphListMenu, method);
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
  __int64 v9; // x1
  __int64 v10; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x0
  const MethodInfo *v12; // x3
  bool v13; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  __int64 *v15; // x8
  const MethodInfo *v16; // x2

  if ( (byte_49F8849 & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_ServantListRootComponent_EndClickBackRequest__, v5);
    sub_1B640C8(&Method_ServantListRootComponent_EndServantQuestRequest__, v6);
    byte_49F8849 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, *(const MethodInfo **)&result),
         v8 = this->fields.charaGraphListMenu,
         v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                             CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                             v9,
                                                             v10),
         v13 = result == 2,
         v14 = v11,
         v13)
      ? (v15 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v15 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v11, (Il2CppObject *)this, *v15, v12),
        !v8) )
  {
    sub_1B64324(charaGraphListMenu);
  }
  CharaGraphListMenu__StatusRequest(v8, v14, v16);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_49F8847 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_49F8847 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu
    || (CharaGraphListMenu__Init(charaGraphListMenu, method),
        (charaGraphListMenu = (CharaGraphListMenu_o *)this->fields.backSkinSprite) == 0LL)
    || (charaGraphListMenu = (CharaGraphListMenu_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)charaGraphListMenu,
                                                       0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)charaGraphListMenu, 0, 0LL),
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(charaGraphListMenu);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8844 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F8844 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_49F8845 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&BgmManager_TypeInfo, v4);
    sub_1B640C8(&Method_ServantListRootComponent_EndLoadCommonBg__, v5);
    sub_1B640C8(&SoundManager_TypeInfo, v6);
    byte_49F8845 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 21, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_36879176(titleInfo, 1, 21, 0, 0LL);
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 2, 1, 0LL);
}