void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11CFD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6);
    byte_4B11CFD = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1BCAA3C(v9, v10);
    topListViewManager->fields.callbackFunc2 = v8;
    sub_1BCA784(&topListViewManager->fields.callbackFunc2, v8);
    OrganizationTopListViewManager__SetMode_32341152(topListViewManager, 5, v11);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v7; // x2
  struct OrganizationTopListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4B11CFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnMoveEnd__, v4, v5);
    byte_4B11CFB = 1;
  }
  if ( !this->fields.state )
  {
    topListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( !topListViewManager )
      goto LABEL_11;
    topListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(topListViewManager, 0LL);
    if ( !topListViewManager )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 1, 0LL);
    topListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( !topListViewManager )
      goto LABEL_11;
    OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, v7);
    v8 = this->fields.topListViewManager;
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v8
      || (v8->fields.callbackFunc2 = v12,
          sub_1BCA784(&v8->fields.callbackFunc2, v12),
          OrganizationTopListViewManager__SetMode_32341152(v8, 2, v13),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_1BCAA3C(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)topListViewManager, 0, 38, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B11D00 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, method, v2);
    byte_4B11D00 = 1;
  }
  state = this->fields.state;
  if ( state <= 5 )
  {
    if ( state != 2 && state != 5 )
      return;
  }
  else if ( state != 10 && state != 15 )
  {
    return;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *Instance; // x19
  int32_t v24; // w8
  struct OrganizationTopListViewManager_o *v25; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2

  if ( (byte_4B11CFF & 1) == 0 )
  {
    sub_1BCA7E0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnSelectTop__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_13666/*"TUTORIAL_MESSAGE_SHOP1"*/, v13, v14);
    byte_4B11CFF = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v16 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v17);
      if ( !topListViewManager )
        goto LABEL_19;
      topListViewManager->fields.callbackFunc = v16;
      sub_1BCA784(&topListViewManager->fields.callbackFunc, v16);
      OrganizationTopListViewManager__SetMode_32341152(topListViewManager, 1, v20);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v21);
      if ( TutorialFlag__Get_38402052(103, 0LL) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13666/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_19:
        sub_1BCAA3C(v18, v19);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v18, 103, 0LL, 0LL);
      break;
    case 3:
      v24 = 4;
      goto LABEL_15;
    case 4:
      v24 = 5;
      goto LABEL_15;
    case 6:
      v24 = 7;
LABEL_15:
      this->fields.state = v24;
      return;
    case 7:
      this->fields.state = 2;
      v25 = this->fields.topListViewManager;
      v26 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v27);
      if ( !v25 )
        goto LABEL_19;
      v25->fields.callbackFunc = v26;
      sub_1BCA784(&v25->fields.callbackFunc, v26);
      OrganizationTopListViewManager__SetMode_32341152(v25, 1, v28);
      break;
    default:
      return;
  }
}


void __fastcall OrganizationRootComponent__OnSelectTop(
        OrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B11D01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnSelectTop__, result, method);
    byte_4B11D01 = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1BCAA3C(0LL, v7);
    PlayMakerFSM__SendEvent(myFSM, result, 0LL);
  }
}


void __fastcall OrganizationRootComponent__Quit(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *topListViewManager; // x0

  topListViewManager = (ListViewManager_o *)this->fields.topListViewManager;
  if ( !topListViewManager
    || (ListViewManager__DestroyList(topListViewManager, 0LL),
        (topListViewManager = (ListViewManager_o *)this->fields.topListViewManager) == 0LL)
    || (topListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)topListViewManager,
                                                    0LL)) == 0LL )
  {
    sub_1BCAA3C(topListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall OrganizationRootComponent__RefreshInfo(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall OrganizationRootComponent__SelectBuyManaItem(
        OrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11CFE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6);
    byte_4B11CFE = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1BCAA3C(v9, v10);
    topListViewManager->fields.callbackFunc2 = v8;
    sub_1BCA784(&topListViewManager->fields.callbackFunc2, v8);
    OrganizationTopListViewManager__SetMode_32341152(topListViewManager, 3, v11);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11CFC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6);
    byte_4B11CFC = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1BCAA3C(v9, v10);
    topListViewManager->fields.callbackFunc2 = v8;
    sub_1BCA784(&topListViewManager->fields.callbackFunc2, v8);
    OrganizationTopListViewManager__SetMode_32341152(topListViewManager, 3, v11);
    this->fields.state = 3;
  }
}


// attributes: thunk
void __fastcall OrganizationRootComponent__beginFinish(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationRootComponent__Quit(this, method);
}


void __fastcall OrganizationRootComponent__beginInitialize(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B11CF9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  __int64 v8; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B11CFA & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B11CFA = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, v8);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 68, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}