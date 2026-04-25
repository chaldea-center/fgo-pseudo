void OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E00030 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4E00030 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1CE6958(v5, v6);
    OrganizationTopListViewManager__SetMode_34902092(topListViewManager, 5, v4, 0);
    this->fields.state = 6;
  }
}


void OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *topListViewManager; // x0
  OrganizationTopListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4E0002E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4E0002E = 1;
  }
  if ( !this->fields.state )
  {
    topListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( !topListViewManager )
      goto LABEL_11;
    topListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(topListViewManager, 0);
    if ( !topListViewManager )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 1, 0);
    topListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( !topListViewManager
      || (OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, 0),
          v4 = this->fields.topListViewManager,
          v5 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
          System_Action___ctor(v5, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0),
          !v4)
      || (OrganizationTopListViewManager__SetMode_34902092(v4, 2, v5, 0),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0) )
    {
LABEL_11:
      sub_1CE6958(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_41045104((TitleInfoControl_o *)topListViewManager, 0, 41, 0, 0);
    this->fields.state = 1;
  }
}


void OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4E00033 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_3462/*"CLICK_BACK"*/);
    byte_4E00033 = 1;
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
    sub_1CE6958(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3462/*"CLICK_BACK"*/, 0);
}


void OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v4; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  int32_t v8; // w8
  OrganizationTopListViewManager_o *v9; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4E00032 & 1) == 0 )
  {
    sub_1CE6700(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_OrganizationRootComponent_OnSelectTop__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_13735/*"TUTORIAL_MESSAGE_SHOP1"*/);
    byte_4E00032 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v4 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1CE694C(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        0);
      if ( !topListViewManager )
        goto LABEL_19;
      OrganizationTopListViewManager__SetMode(topListViewManager, 1, v4, 0);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_41569468(103, 0) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13735/*"TUTORIAL_MESSAGE_SHOP1"*/, 0);
      if ( !Instance )
LABEL_19:
        sub_1CE6958(v5, v6);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v5, 103, 0, 0);
      break;
    case 3:
      v8 = 4;
      goto LABEL_15;
    case 4:
      v8 = 5;
      goto LABEL_15;
    case 6:
      v8 = 7;
LABEL_15:
      this->fields.state = v8;
      return;
    case 7:
      this->fields.state = 2;
      v9 = this->fields.topListViewManager;
      v10 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1CE694C(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        0);
      if ( !v9 )
        goto LABEL_19;
      OrganizationTopListViewManager__SetMode(v9, 1, v10, 0);
      break;
    default:
      return;
  }
}


void OrganizationRootComponent__OnSelectTop(
        OrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4E00034 & 1) == 0 )
  {
    sub_1CE6700(&Method_OrganizationRootComponent_OnSelectTop__);
    byte_4E00034 = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1CE6718(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1CE6958(0, v7);
    PlayMakerFSM__SendEvent(myFSM, result, 0);
  }
}


void OrganizationRootComponent__Quit(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationTopListViewManager_o *topListViewManager; // x0

  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager
    || (OrganizationTopListViewManager__DestroyList(topListViewManager, 0),
        (topListViewManager = this->fields.topListViewManager) == 0)
    || (topListViewManager = (OrganizationTopListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)topListViewManager,
                                                                   0)) == 0 )
  {
    sub_1CE6958(topListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  this->fields.state = 0;
}


void OrganizationRootComponent__RefreshInfo(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void OrganizationRootComponent__SelectBuyManaItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E00031 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4E00031 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1CE6958(v5, v6);
    OrganizationTopListViewManager__SetMode_34902092(topListViewManager, 3, v4, 0);
    this->fields.state = 8;
  }
}


void OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E0002F & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4E0002F = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1CE6958(v5, v6);
    OrganizationTopListViewManager__SetMode_34902092(topListViewManager, 3, v4, 0);
    this->fields.state = 3;
  }
}


// attributes: thunk
void OrganizationRootComponent__beginFinish(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  OrganizationRootComponent__Quit(this, method);
}


void OrganizationRootComponent__beginInitialize(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E0002C & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E0002C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_42637824((SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4E0002D & 1) == 0 )
  {
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E0002D = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1CE6958(0, v4);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 71, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_42637640((SceneRootComponent_o *)this, 0);
}