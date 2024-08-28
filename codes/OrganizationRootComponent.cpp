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

  if ( (byte_4A1B669 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4A1B669 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B71828(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_1B71570(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31465288(topListViewManager, 5, v8);
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

  if ( (byte_4A1B667 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4A1B667 = 1;
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
    v7 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v6
      || (v6->fields.callbackFunc2 = v7,
          sub_1B71570(&v6->fields.callbackFunc2),
          OrganizationTopListViewManager__SetMode_31465288(v6, 2, v8),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_1B71828(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_36987748((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4A1B66C & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_3510/*"CLICK_BACK"*/, method);
    byte_4A1B66C = 1;
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
    sub_1B71828(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3510/*"CLICK_BACK"*/, 0LL);
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
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x19
  int32_t v15; // w8
  struct OrganizationTopListViewManager_o *v16; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4A1B66B & 1) == 0 )
  {
    sub_1B715CC(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B715CC(&LocalizationManager_TypeInfo, v3);
    sub_1B715CC(&Method_OrganizationRootComponent_OnSelectTop__, v4);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B715CC(&TutorialFlag_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_13455/*"TUTORIAL_MESSAGE_SHOP1"*/, v7);
    byte_4A1B66B = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v9 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B71818(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v10);
      if ( !topListViewManager )
        goto LABEL_19;
      topListViewManager->fields.callbackFunc = v9;
      sub_1B71570(&topListViewManager->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_31465288(topListViewManager, 1, v13);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_37486428(103, 0LL) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_19:
        sub_1B71828(v11, v12);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v11, 103, 0LL, 0LL);
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
      v17 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B71818(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v18);
      if ( !v16 )
        goto LABEL_19;
      v16->fields.callbackFunc = v17;
      sub_1B71570(&v16->fields.callbackFunc);
      OrganizationTopListViewManager__SetMode_31465288(v16, 1, v19);
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

  if ( (byte_4A1B66D & 1) == 0 )
  {
    sub_1B715CC(&Method_OrganizationRootComponent_OnSelectTop__, result);
    byte_4A1B66D = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B715E4(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B715B0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1B71828(0LL, v7);
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
    sub_1B71828(topListViewManager, method);
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

  if ( (byte_4A1B66A & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4A1B66A = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B71828(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_1B71570(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31465288(topListViewManager, 3, v8);
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

  if ( (byte_4A1B668 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_OrganizationRootComponent_OnMoveEnd__, v3);
    byte_4A1B668 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v5 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B71828(v6, v7);
    topListViewManager->fields.callbackFunc2 = v5;
    sub_1B71570(&topListViewManager->fields.callbackFunc2);
    OrganizationTopListViewManager__SetMode_31465288(topListViewManager, 3, v8);
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
  __int64 v4; // x1

  if ( (byte_4A1B665 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A1B665 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38387068((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4A1B666 & 1) == 0 )
  {
    sub_1B715CC(&BgmManager_TypeInfo, method);
    sub_1B715CC(&SoundManager_TypeInfo, v3);
    byte_4A1B666 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B71828(0LL, v5);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38386884((SceneRootComponent_o *)this, 0LL);
}