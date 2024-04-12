void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42ADB84 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_42ADB84 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B52A5C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_B52920(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20784608(topListViewManager, 5, v7);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v4; // x2
  struct OrganizationTopListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_42ADB82 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_42ADB82 = 1;
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
    OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, v4);
    v5 = this->fields.topListViewManager;
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v5
      || (v5->fields.callbackFunc2 = v6,
          sub_B52920(&v5->fields.callbackFunc2),
          OrganizationTopListViewManager__SetMode_20784608(v5, 2, v7),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_B52A5C(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_18255196((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42ADB87 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3075/*"CLICK_BACK"*/);
    byte_42ADB87 = 1;
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
    sub_B52A5C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3075/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v4; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  CommonUI_o *Instance; // x19
  int32_t v9; // w8
  struct OrganizationTopListViewManager_o *v10; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_42ADB86 & 1) == 0 )
  {
    sub_B52984(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_OrganizationRootComponent_OnSelectTop__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_13615/*"TUTORIAL_MESSAGE_SHOP1"*/);
    byte_42ADB86 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v4 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B52A54(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !topListViewManager )
        goto LABEL_21;
      topListViewManager->fields.callbackFunc = v4;
      sub_B52920(&topListViewManager->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_20784608(topListViewManager, 1, v7);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_29217932(103, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13615/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_21:
        sub_B52A5C(v5, v6);
      CommonUI__OpenTutorialNotificationDialog(Instance, v5, 103, 0LL, 0LL);
      break;
    case 3:
      v9 = 4;
      goto LABEL_17;
    case 4:
      v9 = 5;
      goto LABEL_17;
    case 6:
      v9 = 7;
LABEL_17:
      this->fields.state = v9;
      return;
    case 7:
      this->fields.state = 2;
      v10 = this->fields.topListViewManager;
      v11 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B52A54(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !v10 )
        goto LABEL_21;
      v10->fields.callbackFunc = v11;
      sub_B52920(&v10->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_20784608(v10, 1, v12);
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
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42ADB88 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB88 = 1;
  }
  if ( result )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_B52A5C(0LL, v5);
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
    sub_B52A5C(topListViewManager, method);
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
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42ADB85 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_42ADB85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B52A5C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_B52920(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20784608(topListViewManager, 3, v7);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42ADB83 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_42ADB83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B52A5C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_B52920(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20784608(topListViewManager, 3, v7);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ADB80 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42ADB80 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17470456((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42ADB81 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB81 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B52A5C(0LL, v4);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17470260((SceneRootComponent_o *)this, 0LL);
}