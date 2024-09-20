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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A56E1E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4A56E1E = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B8880C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.callbackFunc2, (int32_t)v4, v7, v8);
    OrganizationTopListViewManager__SetMode_31794040(topListViewManager, 5, v9);
    this->fields.state = 6;
  }
}


void __fastcall OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v4; // x2
  struct OrganizationTopListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A56E1C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4A56E1C = 1;
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
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v5
      || (v5->fields.callbackFunc2 = v6,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc2, (int32_t)v6, v7, v8),
          OrganizationTopListViewManager__SetMode_31794040(v5, 2, v9),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0LL) )
    {
LABEL_11:
      sub_1B8880C(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)topListViewManager, 0, 37, 0, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4A56E21 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    byte_4A56E21 = 1;
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
    sub_1B8880C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
}


void __fastcall OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x19
  int32_t v12; // w8
  struct OrganizationTopListViewManager_o *v13; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2

  if ( (byte_4A56E20 & 1) == 0 )
  {
    sub_1B885B0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_OrganizationRootComponent_OnSelectTop__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_13503/*"TUTORIAL_MESSAGE_SHOP1"*/);
    byte_4A56E20 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v4 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B887FC(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v5);
      if ( !topListViewManager )
        goto LABEL_19;
      topListViewManager->fields.callbackFunc = v4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
      OrganizationTopListViewManager__SetMode_31794040(topListViewManager, 1, v10);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_37688364(103, 0LL) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TUTORIAL_MESSAGE_SHOP1"*/, 0LL);
      if ( !Instance )
LABEL_19:
        sub_1B8880C(v6, v7);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 103, 0LL, 0LL);
      break;
    case 3:
      v12 = 4;
      goto LABEL_15;
    case 4:
      v12 = 5;
      goto LABEL_15;
    case 6:
      v12 = 7;
LABEL_15:
      this->fields.state = v12;
      return;
    case 7:
      this->fields.state = 2;
      v13 = this->fields.topListViewManager;
      v14 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1B887FC(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v15);
      if ( !v13 )
        goto LABEL_19;
      v13->fields.callbackFunc = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->fields.callbackFunc, (int32_t)v14, v16, v17);
      OrganizationTopListViewManager__SetMode_31794040(v13, 1, v18);
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

  if ( (byte_4A56E22 & 1) == 0 )
  {
    sub_1B885B0(&Method_OrganizationRootComponent_OnSelectTop__);
    byte_4A56E22 = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1B8880C(0LL, v7);
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
    sub_1B8880C(topListViewManager, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A56E1F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4A56E1F = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B8880C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.callbackFunc2, (int32_t)v4, v7, v8);
    OrganizationTopListViewManager__SetMode_31794040(topListViewManager, 3, v9);
    this->fields.state = 8;
  }
}


void __fastcall OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A56E1D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4A56E1D = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !topListViewManager )
      sub_1B8880C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.callbackFunc2, (int32_t)v4, v7, v8);
    OrganizationTopListViewManager__SetMode_31794040(topListViewManager, 3, v9);
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

  if ( (byte_4A56E1A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56E1A = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38666660((SceneRootComponent_o *)this, 0LL);
}


void __fastcall OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4A56E1B & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56E1B = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B8880C(0LL, v4);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 67, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}