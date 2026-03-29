void OrganizationRootComponent___ctor(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__BackBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BFE4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4D2BFE4 = 1;
  }
  if ( this->fields.state == 5 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1C93D2C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&topListViewManager->fields.callbackFunc2,
      (int32_t)v4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    OrganizationTopListViewManager__SetMode_34465444(topListViewManager, 5, v13);
    this->fields.state = 6;
  }
}


void OrganizationRootComponent__Init(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *topListViewManager; // x0
  const MethodInfo *v4; // x2
  struct OrganizationTopListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BFE2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4D2BFE2 = 1;
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
    if ( !topListViewManager )
      goto LABEL_11;
    OrganizationTopListViewManager__CreateList((OrganizationTopListViewManager_o *)topListViewManager, 0, v4);
    v5 = this->fields.topListViewManager;
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !v5
      || (v5->fields.callbackFunc2 = v6,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc2, (int32_t)v6, v7, v8, v9, v10, v11, v12),
          OrganizationTopListViewManager__SetMode_34465444(v5, 2, v13),
          (topListViewManager = (UnityEngine_Component_o *)this->fields.titleInfo) == 0) )
    {
LABEL_11:
      sub_1C93D2C(topListViewManager, method);
    }
    TitleInfoControl__changeTitleInfo_40624832((TitleInfoControl_o *)topListViewManager, 0, 41, 0, 0);
    this->fields.state = 1;
  }
}


void OrganizationRootComponent__OnClickBack(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4D2BFE7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    byte_4D2BFE7 = 1;
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
    sub_1C93D2C(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
}


void OrganizationRootComponent__OnMoveEnd(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  Il2CppObject *Instance; // x19
  int32_t v16; // w8
  struct OrganizationTopListViewManager_o *v17; // x20
  OrganizationTopListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x2

  if ( (byte_4D2BFE6 & 1) == 0 )
  {
    sub_1C93AD4(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_OrganizationRootComponent_OnSelectTop__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_13695/*"TUTORIAL_MESSAGE_SHOP1"*/);
    byte_4D2BFE6 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.state = 2;
      topListViewManager = this->fields.topListViewManager;
      v4 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1C93D20(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v5);
      if ( !topListViewManager )
        goto LABEL_19;
      topListViewManager->fields.callbackFunc = v4;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&topListViewManager->fields.callbackFunc,
        (int32_t)v4,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      OrganizationTopListViewManager__SetMode_34465444(topListViewManager, 1, v14);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_41140656(103, 0) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13695/*"TUTORIAL_MESSAGE_SHOP1"*/, 0);
      if ( !Instance )
LABEL_19:
        sub_1C93D2C(v6, v7);
      CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 103, 0, 0);
      break;
    case 3:
      v16 = 4;
      goto LABEL_15;
    case 4:
      v16 = 5;
      goto LABEL_15;
    case 6:
      v16 = 7;
LABEL_15:
      this->fields.state = v16;
      return;
    case 7:
      this->fields.state = 2;
      v17 = this->fields.topListViewManager;
      v18 = (OrganizationTopListViewManager_CallbackFunc_o *)sub_1C93D20(OrganizationTopListViewManager_CallbackFunc_TypeInfo);
      OrganizationTopListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_OrganizationRootComponent_OnSelectTop__,
        v19);
      if ( !v17 )
        goto LABEL_19;
      v17->fields.callbackFunc = v18;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->fields.callbackFunc, (int32_t)v18, v20, v21, v22, v23, v24, v25);
      OrganizationTopListViewManager__SetMode_34465444(v17, 1, v26);
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

  if ( (byte_4D2BFE8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_OrganizationRootComponent_OnSelectTop__);
    byte_4D2BFE8 = 1;
  }
  if ( result )
  {
    v5 = Method_OrganizationRootComponent_OnSelectTop__;
    if ( (*((_BYTE *)Method_OrganizationRootComponent_OnSelectTop__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_OrganizationRootComponent_OnSelectTop__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1C93D2C(0, v7);
    PlayMakerFSM__SendEvent(myFSM, result, 0);
  }
}


void OrganizationRootComponent__Quit(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *topListViewManager; // x0

  topListViewManager = (ListViewManager_o *)this->fields.topListViewManager;
  if ( !topListViewManager
    || (ListViewManager__DestroyList(topListViewManager, 0),
        (topListViewManager = (ListViewManager_o *)this->fields.topListViewManager) == 0)
    || (topListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)topListViewManager,
                                                    0)) == 0 )
  {
    sub_1C93D2C(topListViewManager, method);
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
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BFE5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4D2BFE5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1C93D2C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&topListViewManager->fields.callbackFunc2,
      (int32_t)v4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    OrganizationTopListViewManager__SetMode_34465444(topListViewManager, 3, v13);
    this->fields.state = 8;
  }
}


void OrganizationRootComponent__SelectBuyQpItem(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  struct OrganizationTopListViewManager_o *topListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BFE3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_OrganizationRootComponent_OnMoveEnd__);
    byte_4D2BFE3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_OrganizationRootComponent_OnMoveEnd__, 0);
    if ( !topListViewManager )
      sub_1C93D2C(v5, v6);
    topListViewManager->fields.callbackFunc2 = v4;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&topListViewManager->fields.callbackFunc2,
      (int32_t)v4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    OrganizationTopListViewManager__SetMode_34465444(topListViewManager, 3, v13);
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

  if ( (byte_4D2BFE0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2BFE0 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 29, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__beginResume(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_42213848((SceneRootComponent_o *)this, 0);
}


void OrganizationRootComponent__beginStartUp(OrganizationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4D2BFE1 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2BFE1 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C93D2C(0, v4);
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 71, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
}