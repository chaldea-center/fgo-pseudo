void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E631B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42E631B = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B5D69C(v10, v11);
    topListViewManager->fields.callbackFunc2 = v9;
    sub_B5D560(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20730872(topListViewManager, 5, v12);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v9; // x2
  struct OrganizationTopListViewManager_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_42E6319 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42E6319 = 1;
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
    OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, v9);
    v10 = this->fields.topListViewManager;
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v10
      || (v10->fields.callbackFunc2 = v11,
          sub_B5D560(&v10->fields.callbackFunc2),
          OrganizationTopListViewManager__SetMode_20730872(v10, 2, v12),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_B5D69C(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42E631E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, (_DWORD)method, v2, v3);
    byte_42E631E = 1;
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
    sub_B5D69C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v21; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  CommonUI_o *Instance; // x19
  int32_t v26; // w8
  struct OrganizationTopListViewManager_o *v27; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_42E631D & 1) == 0 )
  {
    sub_B5D5C4(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_OrganizationRootComponent_OnSelectTop__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13674/*"TUTORIAL_MESSAGE_SHOP1"*/, v17, v18, v19);
    byte_42E631D = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v21 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B5D694(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !topListViewManager )
        goto LABEL_21;
      topListViewManager->fields.callbackFunc = v21;
      sub_B5D560(&topListViewManager->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_20730872(topListViewManager, 1, v24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_29295864(103, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13674/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_21:
        sub_B5D69C(v22, v23);
      CommonUI__OpenTutorialNotificationDialog(Instance, v22, 103, 0LL, 0LL);
      break;
    case 3:
      v26 = 4;
      goto LABEL_17;
    case 4:
      v26 = 5;
      goto LABEL_17;
    case 6:
      v26 = 7;
LABEL_17:
      this->fields.state = v26;
      return;
    case 7:
      this->fields.state = 2;
      v27 = this->fields.topListViewManager;
      v28 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B5D694(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !v27 )
        goto LABEL_21;
      v27->fields.callbackFunc = v28;
      sub_B5D560(&v27->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_20730872(v27, 1, v29);
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
  __int64 v3; // x3
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42E631F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    byte_42E631F = 1;
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
      sub_B5D69C(0LL, v6);
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
    sub_B5D69C(topListViewManager, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E631C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42E631C = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B5D69C(v10, v11);
    topListViewManager->fields.callbackFunc2 = v9;
    sub_B5D560(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20730872(topListViewManager, 3, v12);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E631A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_OrganizationRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42E631A = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B5D69C(v10, v11);
    topListViewManager->fields.callbackFunc2 = v9;
    sub_B5D560(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_20730872(topListViewManager, 3, v12);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E6317 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6317 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *MainBgmName; // x20
  __int64 v9; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42E6318 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E6318 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, v9);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}