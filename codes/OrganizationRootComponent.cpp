void __fastcall OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F8015 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_OrganizationRootComponent_OnMoveEnd__, v4);
    byte_49F8015 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B64324(v7);
    topListViewManager->fields.callbackFunc2 = v6;
    sub_1B6406C(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31397400(topListViewManager, 5, v8);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v5; // x2
  struct OrganizationTopListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49F8013 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_49F8013 = 1;
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
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v6
      || (v6->fields.callbackFunc2 = v9,
          sub_1B6406C(&v6->fields.callbackFunc2),
          OrganizationTopListViewManager__SetMode_31397400(v6, 2, v10),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_1B64324(topListViewManager);
    }
    TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_49F8018 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, method);
    byte_49F8018 = 1;
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
    sub_1B64324(0LL);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x19
  int32_t v15; // w8
  struct OrganizationTopListViewManager_o *v16; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_49F8017 & 1) == 0 )
  {
    sub_1B640C8(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_OrganizationRootComponent_OnSelectTop__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&TutorialFlag_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_13434/*"TUTORIAL_MESSAGE_SHOP1"*/, v8);
    byte_49F8017 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v10 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v11);
      if ( !topListViewManager )
        goto LABEL_19;
      topListViewManager->fields.callbackFunc = v10;
      sub_1B6406C(&topListViewManager->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_31397400(topListViewManager, 1, v13);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_37376848(103, 0LL) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13434/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_19:
        sub_1B64324(v12);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v12, 103, 0LL, 0LL);
      break;
    case 3:
      v15 = 4;
      goto LABEL_15;
    case 4:
      v15 = 5;
      goto LABEL_15;
    case 6:
      v15 = 7;
LABEL_15:
      this->fields.state = v15;
      return;
    case 7:
      this->fields.state = 2;
      v16 = this->fields.topListViewManager;
      v17 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v18);
      if ( !v16 )
        goto LABEL_19;
      v16->fields.callbackFunc = v17;
      sub_1B6406C(&v16->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_31397400(v16, 1, v19);
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49F8019 & 1) == 0 )
  {
    sub_1B640C8(&Method_OrganizationRootComponent_OnSelectTop__, result);
    byte_49F8019 = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1B64324(0LL);
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
    sub_1B64324(topListViewManager);
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
  __int64 v4; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F8016 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_OrganizationRootComponent_OnMoveEnd__, v4);
    byte_49F8016 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B64324(v7);
    topListViewManager->fields.callbackFunc2 = v6;
    sub_1B6406C(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31397400(topListViewManager, 3, v8);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F8014 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_OrganizationRootComponent_OnMoveEnd__, v4);
    byte_49F8014 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B64324(v7);
    topListViewManager->fields.callbackFunc2 = v6;
    sub_1B6406C(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31397400(topListViewManager, 3, v8);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49F8011 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F8011 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38276972((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_49F8012 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49F8012 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B64324(0LL);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}