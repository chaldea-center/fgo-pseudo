void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  System_Int32_array **v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_40F76D4 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, v1);
    sub_B16FFC(&PartyOrganizationMenu_TypeInfo, v3);
    byte_40F76D4 = 1;
  }
  v4 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = *((_DWORD *)v4 + 6);
  v12 = v4;
  if ( !v11 || (*((_DWORD *)v4 + 8) = -55, v11 == 1) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  *((_DWORD *)v4 + 9) = 45;
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B16F98(static_fields, v12, v5, v6, v7, v8, v9, v10);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F76D3 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40F76D3 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    PartyOrganizationMenu_CallbackFunc__Invoke(v9, result, n, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__ClearItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0
  const MethodInfo *v4; // x1
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0LL),
        (partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  PartyOrganizationListViewManager__DestroyList(partyOrganizationListViewManager, v4);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_20208584(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_20208584(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F76CB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationMenu_EndClose__, v10);
    byte_40F76CB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Component_o *tutorialPartyDecideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialPartyDecideButton = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(tutorialPartyDecideButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v6);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Component_o *tutorialPartyDecideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v27; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  System_String_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x22
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v37; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_40F76CA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_FSOffset___, v9);
    sub_B16FFC(&FSUtility_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_13461, v14);
    byte_40F76CA = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( this->fields.mode == 4 )
  {
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialPartyDecideButton = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialPartyDecideButton )
      goto LABEL_23;
    gameObject = UnityEngine_Component__get_gameObject(tutorialPartyDecideButton, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v18 = this->fields.tutorialPartyDecideButton;
    if ( !v18 )
      goto LABEL_23;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v18->klass->vtable._14_SetState.method)(
      v18,
      0LL,
      0LL,
      v18->klass->vtable._15_OnPress.methodPtr);
    v19 = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton;
    if ( !v19 )
      goto LABEL_23;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v19,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
    v41.fields.m_Width = 190.0;
    v41.fields.m_Height = 90.0;
    v41.fields.m_XMin = AddOffset.fields.x + 329.0;
    v41.fields.m_YMin = AddOffset.fields.y + -291.0;
    UnityEngine_Rect___ctor(v41, v22, v23, v24, v25, &methoda);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13461, 0LL);
    methodPointer = methoda.methodPointer;
    invoker_method = methoda.invoker_method;
    v30 = v27;
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_23:
      sub_B170D4();
    v40.fields.x = AddOffset.fields.x + 422.0;
    v40.fields.y = AddOffset.fields.y + -231.0;
    *(_QWORD *)&v42.fields.m_XMin = methodPointer;
    *(_QWORD *)&v42.fields.m_Width = invoker_method;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v30, v40, v42, 0.0, 0LL, -1, v35, 0LL);
  }
  else if ( this->fields.callbackFunc )
  {
    this->fields.state = 2;
    PartyOrganizationMenu__SetInput(this, 1, v2);
  }
  else
  {
    this->fields.state = 3;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v37 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B16F98(p_openCallbackFunc, 0LL, (System_String_array **)v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v37, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_B170D4();
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, 0LL);
}


PartyListViewItem_o *__fastcall PartyOrganizationMenu__GetBaseItem(
        PartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.basePartyItem;
}


PartyListViewItem_o *__fastcall PartyOrganizationMenu__GetItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}


void __fastcall PartyOrganizationMenu__Init(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.basePartyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.basePartyItem, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.partyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseMaster_o *v11; // x0
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F76D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40F76D2 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !QuestHintMaster__TryGetEntity(
          (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          questId,
          questPhase,
          0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v11 )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(v11, &v14, questId, questPhase, 0LL) )
    {
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1, 0LL);
      }
LABEL_19:
      sub_B170D4();
    }
    return 0;
  }
  return 1;
}


void __fastcall PartyOrganizationMenu__ModifyItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0

  partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
  if ( !partyOrganizationListViewManager )
    sub_B170D4();
  PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 9, v2);
}


void __fastcall PartyOrganizationMenu__OnClickCancel(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( this->fields.state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_B170D4();
    PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F76CD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F76CD = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_18262716(Instance, v14, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v8);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( (byte_40F76CE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F76CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_B170D4();
    PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v3);
    PartyOrganizationMenu__Callback(this, 3, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__OnClickItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  PartyOrganizationListViewItem_o *v15; // x21
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  PartyOrganizationListViewManager_o *v19; // x0
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  struct PartyOrganizationListViewManager_o *v21; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2

  if ( (byte_40F76D0 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_PartyOrganizationMenu_OnClickItem__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F76D0 = 1;
  }
  if ( this->fields.state != 2 )
    return;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_41;
  Member = PartyListViewItem__GetMember(partyItem, n, 0LL);
  if ( result == 3 )
  {
    partyListViewIndicator = this->fields.partyListViewIndicator;
    if ( !partyListViewIndicator )
      goto LABEL_41;
    PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0LL);
  }
  else
  {
    v15 = Member;
    if ( result != 2 )
    {
      if ( result == 1 )
      {
        if ( !Member )
          goto LABEL_41;
        if ( Member->fields.isMyServantOrNpcRestriction )
          goto LABEL_10;
        if ( !Member->fields.isFollower
          && !Member->fields.isServantNumRestriction
          && !Member->fields.isFixMultipleNpcRestriction )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
LABEL_10:
          partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
          this->fields.state = 3;
          if ( partyOrganizationListViewManager )
          {
            PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v12);
            goto LABEL_12;
          }
          goto LABEL_41;
        }
      }
      goto LABEL_28;
    }
    if ( !Member )
      goto LABEL_41;
    if ( Member->fields.isMyServantOrNpcRestriction )
    {
      if ( !Member->fields.userServantEntity )
        goto LABEL_21;
      goto LABEL_17;
    }
    if ( !Member->fields.isFollower
      && !Member->fields.isServantNumRestriction
      && !Member->fields.isFixMultipleNpcRestriction )
    {
LABEL_17:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
LABEL_21:
      v19 = this->fields.partyOrganizationListViewManager;
      this->fields.state = 3;
      if ( v19 )
      {
        PartyOrganizationListViewManager__SetMode_20192356(v19, 1, v12);
        if ( !v15->fields.isMyServantOrNpcRestriction || v15->fields.userServantEntity )
        {
          v18 = 6;
          goto LABEL_25;
        }
LABEL_12:
        v18 = 5;
LABEL_25:
        PartyOrganizationMenu__Callback(this, v18, n, v17);
        return;
      }
LABEL_41:
      sub_B170D4();
    }
  }
LABEL_28:
  v21 = this->fields.partyOrganizationListViewManager;
  v22 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13,
                                                             v14);
  PartyOrganizationListViewManager_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_PartyOrganizationMenu_OnClickItem__,
    0LL);
  if ( !v21 )
    goto LABEL_41;
  v21->fields.callbackFunc = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->fields.callbackFunc,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  PartyOrganizationListViewManager__SetMode_20192356(v21, 2, v29);
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( (byte_40F76CF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F76CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_B170D4();
    PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v3);
    PartyOrganizationMenu__Callback(this, 4, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( (byte_40F76D1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F76D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_B170D4();
    PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v3);
    PartyOrganizationMenu__Callback(this, 7, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickRemove(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( this->fields.state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_B170D4();
    PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 2, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__Open(
        PartyOrganizationMenu_o *this,
        int32_t menuKind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t tutorialMode,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t state; // w8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *v58; // x0
  BalanceConfig_c *v59; // x0
  int StartingMemberFriendshipRate; // w20
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  clsQuestCheck_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *v74; // x21
  System_String_o *v75; // x0
  UILabel_o *v76; // x21
  System_String_o *v77; // x0
  const MethodInfo *v78; // x2
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  const MethodInfo *v97; // x2
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v129; // x2
  const MethodInfo *v130; // x2
  const MethodInfo *v131; // x1
  UnityEngine_Component_o *startingMemberFriendshipLabel; // x0
  UnityEngine_GameObject_o *v133; // x0
  UnityEngine_Component_o *startingMemberFriendshipLabelOver; // x0
  UnityEngine_GameObject_o *v135; // x0
  const MethodInfo *v136; // x2
  const MethodInfo *v137; // x2
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  System_Action_o *v142; // x20

  if ( (byte_40F76C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_B16FFC(&AtlasManager_TypeInfo, v19);
    sub_B16FFC(&BalanceConfig_TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_PartyOrganizationMenu_EndOpen__, v22);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    sub_B16FFC(&StringLiteral_18854, v25);
    sub_B16FFC(&StringLiteral_12281, v26);
    byte_40F76C9 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)basePartyItem,
        (System_String_array **)partyItem,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      this->fields.setupInfo = setupInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
        (System_Int32_array **)questRestrictionInfo,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_33:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v97);
      PartyOrganizationMenu__SetInput(this, 0, v129);
      PartyOrganizationMenu__SetupButton(this, 1, v130);
      PartyOrganizationMenu__EndOpen(this, v131);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)basePartyItem,
        (System_String_array **)partyItem,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      goto LABEL_33;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)basePartyItem,
        (System_String_array **)partyItem,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this->fields.setupInfo = setupInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
        (System_Int32_array **)questRestrictionInfo,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v58 )
      {
        UnityEngine_GameObject__SetActive(v58, 1, 0LL);
        v59 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v59 = BalanceConfig_TypeInfo;
        }
        if ( this->fields.startingMemberFriendshipSprite )
        {
          StartingMemberFriendshipRate = v59->static_fields->StartingMemberFriendshipRate;
          v61 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                  0LL);
          if ( v61 )
          {
            if ( StartingMemberFriendshipRate < 1 )
            {
              UnityEngine_GameObject__SetActive(v61, 0, 0LL);
              startingMemberFriendshipLabel = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipLabel;
              if ( startingMemberFriendshipLabel )
              {
                v133 = UnityEngine_Component__get_gameObject(startingMemberFriendshipLabel, 0LL);
                if ( v133 )
                {
                  UnityEngine_GameObject__SetActive(v133, 0, 0LL);
                  startingMemberFriendshipLabelOver = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipLabelOver;
                  if ( startingMemberFriendshipLabelOver )
                  {
                    v135 = UnityEngine_Component__get_gameObject(startingMemberFriendshipLabelOver, 0LL);
                    if ( v135 )
                    {
                      UnityEngine_GameObject__SetActive(v135, 0, 0LL);
                      goto LABEL_40;
                    }
                  }
                }
              }
            }
            else
            {
              UnityEngine_GameObject__SetActive(v61, 1, 0LL);
              v62 = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipLabel;
              if ( v62 )
              {
                v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
                if ( v63 )
                {
                  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
                  v64 = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipLabelOver;
                  if ( v64 )
                  {
                    v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
                    if ( v65 )
                    {
                      UnityEngine_GameObject__SetActive(v65, 1, 0LL);
                      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                      }
                      v66 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( v66 )
                      {
                        v66[2].fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)partyItem;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&v66[2].fields.cQuestReleaseListP,
                          (System_Int32_array **)partyItem,
                          v67,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_18854,
                          0LL);
                        v74 = this->fields.startingMemberFriendshipLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12281, 0LL);
                        if ( v74 )
                        {
                          UILabel__set_text(v74, v75, 0LL);
                          v76 = this->fields.startingMemberFriendshipLabelOver;
                          v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12281, 0LL);
                          if ( v76 )
                          {
                            UILabel__set_text(v76, v77, 0LL);
LABEL_40:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v78);
                            PartyOrganizationMenu__SetInput(this, 0, v136);
                            PartyOrganizationMenu__SetupButton(this, 0, v137);
                            this->fields.state = 1;
                            v142 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v138, v139, v140, v141);
                            System_Action___ctor(
                              v142,
                              (Il2CppObject *)this,
                              Method_PartyOrganizationMenu_EndOpen__,
                              0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v142, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_41:
      sub_B170D4();
  }
}


void __fastcall PartyOrganizationMenu__SelectItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t selectMember,
        const MethodInfo *method)
{
  if ( (selectMember & 0x80000000) == 0 )
    PartyOrganizationMenu__OnClickItem(this, result, selectMember, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__SetInput(PartyOrganizationMenu_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w1

  if ( (byte_40F76C8 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, isInput);
    sub_B16FFC(&Method_PartyOrganizationMenu_OnClickItem__, v7);
    byte_40F76C8 = 1;
  }
  partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
  if ( !isInput )
  {
    if ( partyOrganizationListViewManager )
    {
      v16 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
  v9 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B170CC(
                                                            PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                            isInput,
                                                            method,
                                                            v3,
                                                            v4);
  PartyOrganizationListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_PartyOrganizationMenu_OnClickItem__,
    0LL);
  if ( !partyOrganizationListViewManager )
    goto LABEL_9;
  partyOrganizationListViewManager->fields.callbackFunc = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&partyOrganizationListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_20192356(partyOrganizationListViewManager, v16, method);
}


void __fastcall PartyOrganizationMenu__SetItem(
        PartyOrganizationMenu_o *this,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  PartyListViewIndicator_o *v6; // x0
  const MethodInfo *v7; // x4
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0

  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0LL),
        (v6 = this->fields.partyListViewIndicator) == 0LL)
    || (PartyListViewIndicator__DispFriendPointUpBonus(v6, friendBonusVal, 0LL),
        (partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  PartyOrganizationListViewManager__CreateList(
    partyOrganizationListViewManager,
    8,
    this->fields.partyItem,
    this->fields.basePartyItem,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__SetupButton(
        PartyOrganizationMenu_o *this,
        bool isMove,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *partyRemoveButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *classInfoButton; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *partyPointEventButton; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *hintDialogButton; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *questInfoButton; // x0
  UnityEngine_GameObject_o *v23; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v25; // x0
  QuestRestrictionInfo_o *v26; // x0
  struct UICommonButton_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  UnityEngine_GameObject_o *v30; // x0
  struct UICommonButton_o *v31; // x0
  const MethodInfo *v32; // x1
  bool IsHintDialog; // w0
  bool v34; // w21
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x20
  PartyOrganizationMenu_c *v37; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int v42; // w21
  float OffsetX; // s0
  UnityEngine_Component_o *v44; // x0
  bool v45; // w1
  struct QuestRestrictionInfo_o *v46; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  BalanceConfig_c *v51; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_40F76CC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, isMove);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&System_Convert_TypeInfo, v7);
    sub_B16FFC(&FSUtility_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&PartyOrganizationMenu_TypeInfo, v10);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_17080, v12);
    byte_40F76CC = 1;
  }
  if ( this->fields.menuKind == 9 )
  {
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
    if ( partyRemoveButton )
    {
      gameObject = UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        classInfoButton = (UnityEngine_Object_o *)this->fields.classInfoButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(classInfoButton, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Component_o *)this->fields.classInfoButton;
          if ( !v16 )
            goto LABEL_70;
          v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
          if ( !v17 )
            goto LABEL_70;
          UnityEngine_GameObject__SetActive(v17, 0, 0LL);
        }
        partyPointEventButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
        if ( partyPointEventButton )
        {
          v19 = UnityEngine_Component__get_gameObject(partyPointEventButton, 0LL);
          if ( v19 )
          {
            UnityEngine_GameObject__SetActive(v19, 0, 0LL);
            hintDialogButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
            if ( hintDialogButton )
            {
              v21 = UnityEngine_Component__get_gameObject(hintDialogButton, 0LL);
              if ( v21 )
              {
                UnityEngine_GameObject__SetActive(v21, 0, 0LL);
                questInfoButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
                if ( questInfoButton )
                {
                  v23 = UnityEngine_Component__get_gameObject(questInfoButton, 0LL);
                  if ( v23 )
                  {
                    UnityEngine_GameObject__SetActive(v23, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_B170D4();
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_26;
    v25 = this->fields.questRestrictionInfo;
    if ( !v25 )
      goto LABEL_70;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly(v25, 0LL) )
      goto LABEL_26;
    v26 = this->fields.questRestrictionInfo;
    if ( !v26 )
      goto LABEL_70;
    if ( QuestRestrictionInfo__IsUseEventDeck(v26, 0LL) )
    {
LABEL_26:
      v27 = this->fields.partyRemoveButton;
      if ( !v27 )
        goto LABEL_70;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, bool, Il2CppMethodPointer))v27->klass->vtable._14_SetState.method)(
        v27,
        3LL,
        isMove,
        v27->klass->vtable._15_OnPress.methodPtr);
    }
  }
  v28 = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !v28 )
    goto LABEL_70;
  setupInfo = this->fields.setupInfo;
  v30 = UnityEngine_Component__get_gameObject(v28, 0LL);
  if ( !v30 )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(v30, setupInfo != 0LL, 0LL);
  v31 = this->fields.partyPointEventButton;
  if ( !v31 )
    goto LABEL_70;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v31->klass->vtable._14_SetState.method)(
    v31,
    0LL,
    isMove,
    v31->klass->vtable._15_OnPress.methodPtr);
  IsHintDialog = PartyOrganizationMenu__IsHintDialog(this, v32);
  if ( !this->fields.hintDialogButton )
    goto LABEL_70;
  v34 = IsHintDialog;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.hintDialogButton, 0LL);
  v36 = v35;
  if ( v34 )
  {
    v37 = PartyOrganizationMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v37 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v37->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v39 = System_Convert__ToInt32_41746392(setupInfo != 0LL, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_70;
    if ( (unsigned int)v39 >= LAYOUT_POS_X_HINT->max_length )
    {
      sub_B17100(v39, v40, v41);
      sub_B170A0();
    }
    v42 = LAYOUT_POS_X_HINT->m_Items[(int)v39 + 1];
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v36, (float)v42 - OffsetX, 0LL);
    v44 = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !v44 )
      goto LABEL_70;
    v35 = UnityEngine_Component__get_gameObject(v44, 0LL);
    if ( !v35 )
      goto LABEL_70;
    v45 = 1;
  }
  else
  {
    if ( !v35 )
      goto LABEL_70;
    v45 = 0;
  }
  UnityEngine_GameObject__SetActive(v35, v45, 0LL);
  if ( this->fields.menuKind == 8 || (v46 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v46->fields.questId;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  v49 = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !v49 )
    goto LABEL_70;
  v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
  if ( !v50 )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(v50, IsDisplayQuestInformation, 0LL);
  v51 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v51->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17080, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__add_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationMenu_o *v11; // x0
  PartyOrganizationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F76C6 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_40F76C6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v8->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B173C8(v8);
  PartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationMenu__remove_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F76C7 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_40F76C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v8->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B173C8(v8);
  PartyOrganizationMenu__GetBaseItem(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu_CallbackFunc___ctor(
        PartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_40F837B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&PartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_40F837B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu_CallbackFunc__Invoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)n, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)n, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)n, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)n,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)n,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)n, v22);
    goto LABEL_38;
  }
}