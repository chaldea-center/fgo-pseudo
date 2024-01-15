void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F7FAF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_OrganizationRootComponent_OnMoveEnd__, v6);
    byte_40F7FAF = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B170D4();
    topListViewManager->fields.callbackFunc2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&topListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    OrganizationTopListViewManager__SetMode_21258964(topListViewManager, 5, v15);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *topListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2
  OrganizationTopListViewManager_o *v7; // x0
  struct OrganizationTopListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_40F7FAD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_40F7FAD = 1;
  }
  if ( !this->fields.state )
  {
    topListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( !topListViewManager )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(topListViewManager, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v7 = this->fields.topListViewManager;
    if ( !v7 )
      goto LABEL_11;
    OrganizationTopListViewManager__CreateList(v7, 0, v6);
    v8 = this->fields.topListViewManager;
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v8
      || (v8->fields.callbackFunc2 = v13,
          sub_B16F98(
            (BattleServantConfConponent_o *)&v8->fields.callbackFunc2,
            (System_Int32_array **)v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          OrganizationTopListViewManager__SetMode_21258964(v8, 2, v20),
          (titleInfo = this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_B170D4();
    }
    TitleInfoControl__changeTitleInfo_19612684(titleInfo, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_40F7FB2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3034/*"CLICK_BACK"*/, method);
    byte_40F7FB2 = 1;
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
    sub_B170D4();
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3034/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v21; // x0
  int32_t v22; // w8
  struct OrganizationTopListViewManager_o *v23; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2

  if ( (byte_40F7FB1 & 1) == 0 )
  {
    sub_B16FFC(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_OrganizationRootComponent_OnSelectTop__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&TutorialFlag_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13462/*"TUTORIAL_MESSAGE_SHOP1"*/, v10);
    byte_40F7FB1 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v12 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !topListViewManager )
        goto LABEL_21;
      topListViewManager->fields.callbackFunc = v12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&topListViewManager->fields.callbackFunc,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      OrganizationTopListViewManager__SetMode_21258964(topListViewManager, 1, v19);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28023340(103, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13462/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_21:
        sub_B170D4();
      CommonUI__OpenTutorialNotificationDialog(Instance, v21, 103, 0LL, 0LL);
      break;
    case 3:
      v22 = 4;
      goto LABEL_17;
    case 4:
      v22 = 5;
      goto LABEL_17;
    case 6:
      v22 = 7;
LABEL_17:
      this->fields.state = v22;
      return;
    case 7:
      this->fields.state = 2;
      v23 = this->fields.topListViewManager;
      v24 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_OrganizationRootComponent_OnSelectTop__,
        0LL);
      if ( !v23 )
        goto LABEL_21;
      v23->fields.callbackFunc = v24;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v23->fields.callbackFunc,
        (System_Int32_array **)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      OrganizationTopListViewManager__SetMode_21258964(v23, 1, v31);
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F7FB3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, result);
    byte_40F7FB3 = 1;
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
      sub_B170D4();
    PlayMakerFSM__SendEvent(myFSM, result, 0LL);
  }
}


void __fastcall OrganizationRootComponent__Quit(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *topListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  topListViewManager = (ListViewManager_o *)this->fields.topListViewManager;
  if ( !topListViewManager
    || (ListViewManager__DestroyList(topListViewManager, 0LL),
        (v4 = (UnityEngine_Component_o *)this->fields.topListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F7FB0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_OrganizationRootComponent_OnMoveEnd__, v6);
    byte_40F7FB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B170D4();
    topListViewManager->fields.callbackFunc2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&topListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    OrganizationTopListViewManager__SetMode_21258964(topListViewManager, 3, v15);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F7FAE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_OrganizationRootComponent_OnMoveEnd__, v6);
    byte_40F7FAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_B170D4();
    topListViewManager->fields.callbackFunc2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&topListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    OrganizationTopListViewManager__SetMode_21258964(topListViewManager, 3, v15);
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

  if ( (byte_40F7FAB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F7FAB = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_40F7FAC & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F7FAC = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}