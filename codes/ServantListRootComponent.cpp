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

  if ( (byte_4BF998E & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4BF998E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C2E388(Instance, v4);
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
  System_Action_o *v6; // x20

  if ( (byte_4BF9988 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&AtlasManager_TypeInfo, v3);
    sub_1C2E12C(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v4);
    byte_4BF9988 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1C2E388(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v6, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39990980((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BF998F & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_4BF998F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BF998C & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_ServantListRootComponent_EndExitList__, v3);
    byte_4BF998C = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    v6);
  if ( !charaGraphListMenu )
    sub_1C2E388(v7, v8);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v5, v9);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4BF998A & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenu_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_ServantListRootComponent_SelectServantList__, v3);
    byte_4BF998A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v5 = (CharaGraphListMenu_CallbackFunc_o *)sub_1C2E378(CharaGraphListMenu_CallbackFunc_TypeInfo);
    CharaGraphListMenu_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      v6);
    if ( !charaGraphListMenu )
      sub_1C2E388(v7, v8);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v5, v9);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BF998D & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_ServantListRootComponent_EndClickBackRequest__, v3);
    sub_1C2E12C(&Method_ServantListRootComponent_OnClickBack__, v4);
    byte_4BF998D = 1;
  }
  v5 = Method_ServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_ServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2E144(Method_ServantListRootComponent_OnClickBack__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    v9);
  if ( !charaGraphListMenu )
    sub_1C2E388(v10, v11);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v8, v12);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_1C2E388(0LL, method);
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
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x0
  const MethodInfo *v10; // x3
  bool v11; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x20
  __int64 *v13; // x8
  const MethodInfo *v14; // x2

  if ( (byte_4BF998B & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&Method_ServantListRootComponent_EndClickBackRequest__, v5);
    sub_1C2E12C(&Method_ServantListRootComponent_EndServantQuestRequest__, v6);
    byte_4BF998B = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, *(const MethodInfo **)&result),
         v8 = this->fields.charaGraphListMenu,
         v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenu_RequestCallbackFunc_TypeInfo),
         v11 = result == 2,
         v12 = v9,
         v11)
      ? (v13 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v13 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v9, (Il2CppObject *)this, *v13, v10),
        !v8) )
  {
    sub_1C2E388(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v8, v12, v14);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_4BF9989 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4BF9989 = 1;
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
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1C2E388(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BF9986 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BF9986 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
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

  if ( (byte_4BF9987 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&AtlasManager_TypeInfo, v3);
    sub_1C2E12C(&BgmManager_TypeInfo, v4);
    sub_1C2E12C(&Method_ServantListRootComponent_EndLoadCommonBg__, v5);
    sub_1C2E12C(&SoundManager_TypeInfo, v6);
    byte_4BF9987 = 1;
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
  TitleInfoControl__changeTitleInfo_38455740(titleInfo, 1, 21, 0, 0LL);
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
    sub_1C2E388(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}