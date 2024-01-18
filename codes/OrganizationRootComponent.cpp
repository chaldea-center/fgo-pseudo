void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4185194 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4185194 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B2C434(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_B2C2F8(&topListViewManager->fields.callbackFunc2, v5);
    OrganizationTopListViewManager__SetMode_20154656(topListViewManager, 5, v8);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v5; // x2
  struct OrganizationTopListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4185192 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4185192 = 1;
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
    OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, v5);
    v6 = this->fields.topListViewManager;
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v6
      || (v6->fields.callbackFunc2 = v7,
          sub_B2C2F8(&v6->fields.callbackFunc2, v7),
          OrganizationTopListViewManager__SetMode_20154656(v6, 2, v8),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_B2C434(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4185197 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, method);
    byte_4185197 = 1;
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
    sub_B2C434(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v9; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CommonUI_o *Instance; // x19
  int32_t v14; // w8
  struct OrganizationTopListViewManager_o *v15; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4185196 & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_OrganizationRootComponent_OnSelectTop__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_13518/*"TUTORIAL_MESSAGE_SHOP1"*/, v7);
    byte_4185196 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v9 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B2C42C(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !topListViewManager )
        goto LABEL_21;
      topListViewManager->fields.callbackFunc = v9;
      sub_B2C2F8(&topListViewManager->fields.callbackFunc, v9);
      OrganizationTopListViewManager__SetMode_20154656(topListViewManager, 1, v12);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28617756(103, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13518/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_21:
        sub_B2C434(v10, v11);
      CommonUI__OpenTutorialNotificationDialog(Instance, v10, 103, 0LL, 0LL);
      break;
    case 3:
      v14 = 4;
      goto LABEL_17;
    case 4:
      v14 = 5;
      goto LABEL_17;
    case 6:
      v14 = 7;
LABEL_17:
      this->fields.state = v14;
      return;
    case 7:
      this->fields.state = 2;
      v15 = this->fields.topListViewManager;
      v16 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B2C42C(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !v15 )
        goto LABEL_21;
      v15->fields.callbackFunc = v16;
      sub_B2C2F8(&v15->fields.callbackFunc, v16);
      OrganizationTopListViewManager__SetMode_20154656(v15, 1, v17);
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

  if ( (byte_4185198 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, result);
    byte_4185198 = 1;
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
      sub_B2C434(0LL, v5);
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
    sub_B2C434(topListViewManager, method);
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
  __int64 v3; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4185195 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4185195 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B2C434(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_B2C2F8(&topListViewManager->fields.callbackFunc2, v5);
    OrganizationTopListViewManager__SetMode_20154656(topListViewManager, 3, v8);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4185193 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4185193 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B2C434(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_B2C2F8(&topListViewManager->fields.callbackFunc2, v5);
    OrganizationTopListViewManager__SetMode_20154656(topListViewManager, 3, v8);
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

  if ( (byte_4185190 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4185190 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17297200((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4185191 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4185191 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, v5);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}