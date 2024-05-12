void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  struct System_Int32_array *v1; // x0
  __int64 v2; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v4; // x1
  struct PartyOrganizationMenu_StaticFields *static_fields; // x0
  __int64 v6; // x0

  if ( (byte_4388AF2 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&PartyOrganizationMenu_TypeInfo);
    byte_4388AF2 = 1;
  }
  v1 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, 2LL);
  if ( !v1 )
    sub_B7769C(0LL, v2);
  max_length = v1->max_length;
  v4 = v1;
  if ( !max_length || (v1->m_Items[1] = -55, max_length == 1) )
  {
    v6 = sub_B776C8(v1);
    sub_B77668(v6, 0LL);
  }
  v1->m_Items[2] = 45;
  static_fields = PartyOrganizationMenu_TypeInfo->static_fields;
  static_fields->LAYOUT_POS_X_HINT = v4;
  sub_B77560(static_fields);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4388AF1 & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_4388AF1 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x0
  PartyOrganizationMenu_CallbackFunc_o *v5; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    PartyOrganizationMenu_CallbackFunc__Invoke(v5, result, n, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__ClearItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0LL),
        (mainDeckBase = (UnityEngine_GameObject_o *)this->fields.partyOrganizationListViewManager) == 0LL) )
  {
    sub_B7769C(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_20666204(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_20666204(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4388AE9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationMenu_EndClose__);
    byte_4388AE9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v5, 0LL);
}


void __fastcall PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B77560(p_closeCallbackFunc);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL )
  {
    sub_B7769C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  System_String_o *v15; // x21
  System_Action_o *v16; // x22
  struct System_Action_o **p_openCallbackFunc; // x19
  System_Action_o *v18; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4388AE8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_13767/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4388AE8 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( this->fields.mode == 4 )
  {
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_23;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
    if ( !tutorialMaskBase )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_23;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
      tutorialMaskBase,
      0LL,
      0LL,
      tutorialMaskBase->klass[1]._1.interfaceOffsets);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_23;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)tutorialMaskBase,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
    v22.fields.m_Width = 190.0;
    v22.fields.m_Height = 90.0;
    v22.fields.m_XMin = AddOffset.fields.x + 329.0;
    v22.fields.m_YMin = AddOffset.fields.y + -291.0;
    UnityEngine_Rect___ctor(v22, v7, v8, v9, v10, &methoda);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13767/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    methodPointer = methoda.methodPointer;
    invoker_method = methoda.invoker_method;
    v15 = v12;
    v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_23:
      sub_B7769C(tutorialMaskBase, method);
    v21.fields.x = AddOffset.fields.x + 422.0;
    v21.fields.y = AddOffset.fields.y + -231.0;
    *(_QWORD *)&v23.fields.m_XMin = methodPointer;
    *(_QWORD *)&v23.fields.m_Width = invoker_method;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v15, v21, v23, 0.0, 0LL, -1, v16, 0LL);
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
  p_openCallbackFunc = &this->fields.openCallbackFunc;
  v18 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_B77560(p_openCallbackFunc);
    System_Action__Invoke(v18, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_B7769C(0LL, method);
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
  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.basePartyItem = 0LL;
  sub_B77560(&this->fields.basePartyItem);
  this->fields.partyItem = 0LL;
  sub_B77560(&this->fields.partyItem);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4388AF0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388AF0 = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v11, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B7769C(Master_WarQuestSelectionMaster, v7);
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
    sub_B7769C(0LL, method);
  PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 9, v2);
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
      sub_B7769C(0LL, method);
    PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4388AEB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388AEB = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_18081340(Instance, v8, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v6);
      return;
    }
LABEL_11:
    sub_B7769C(partyOrganizationListViewManager, method);
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4388AEC & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388AEC = 1;
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
      sub_B7769C(0LL, v3);
    PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v4);
    PartyOrganizationMenu__Callback(this, 3, -1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__OnClickItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v8; // x2
  PartyListViewItem_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4388AEE & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationMenu_OnClickItem__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388AEE = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_46;
    partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, n, 0LL);
    if ( result == 3 )
    {
      partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
      if ( !partyItem )
        goto LABEL_46;
      PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0LL);
      goto LABEL_16;
    }
    v9 = partyItem;
    if ( result != 2 )
    {
      if ( result == 1 )
      {
        if ( !partyItem )
          goto LABEL_46;
        if ( LOBYTE(partyItem[1].fields.sortValue0B) )
        {
LABEL_10:
          partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
          this->fields.state = 3;
          if ( partyItem )
          {
            PartyOrganizationListViewManager__SetMode_20649760((PartyOrganizationListViewManager_o *)partyItem, 1, v8);
            goto LABEL_12;
          }
          goto LABEL_46;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortIndex)
          && !BYTE1(partyItem[1].fields.sortIndex) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          partyItem = (PartyListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !partyItem )
            goto LABEL_46;
          if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0LL) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
          }
          goto LABEL_10;
        }
      }
LABEL_16:
      partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
      v13 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B77694(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PartyOrganizationMenu_OnClickItem__,
        0LL);
      if ( partyOrganizationListViewManager )
      {
        partyOrganizationListViewManager->fields.callbackFunc = v13;
        sub_B77560(&partyOrganizationListViewManager->fields.callbackFunc);
        PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 2, v14);
        return;
      }
      goto LABEL_46;
    }
    if ( !partyItem )
      goto LABEL_46;
    if ( LOBYTE(partyItem[1].fields.sortValue0B) )
    {
      if ( !*(_QWORD *)&partyItem->fields.menuKind )
        goto LABEL_25;
    }
    else if ( LOBYTE(partyItem->fields.id)
           || LOBYTE(partyItem[1].fields.sortIndex)
           || BYTE1(partyItem[1].fields.sortIndex) )
    {
      goto LABEL_16;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
LABEL_25:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_20649760((PartyOrganizationListViewManager_o *)partyItem, 1, v8);
      if ( !LOBYTE(v9[1].fields.sortValue0B) || *(_QWORD *)&v9->fields.menuKind )
      {
        v11 = 6;
        goto LABEL_29;
      }
LABEL_12:
      v11 = 5;
LABEL_29:
      PartyOrganizationMenu__Callback(this, v11, n, v10);
      return;
    }
LABEL_46:
    sub_B7769C(partyItem, *(_QWORD *)&result);
  }
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4388AED & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388AED = 1;
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
      sub_B7769C(0LL, v3);
    PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v4);
    PartyOrganizationMenu__Callback(this, 4, -1, v6);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4388AEF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388AEF = 1;
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
      sub_B7769C(0LL, v3);
    PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v4);
    PartyOrganizationMenu__Callback(this, 7, -1, v6);
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
      sub_B7769C(0LL, method);
    PartyOrganizationListViewManager__SetMode_20649760(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 2, -1, v5);
  }
}


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
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int v22; // w20
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x20

  if ( (byte_4388AE7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationMenu_EndOpen__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&StringLiteral_19309/*"func_group_icon_1009_starting"*/);
    sub_B775C4(&StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    byte_4388AE7 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B77560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B77560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B77560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B77560(&this->fields.partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B77560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B77560(&this->fields.questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_33:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v27);
      PartyOrganizationMenu__SetInput(this, 0, v28);
      PartyOrganizationMenu__SetupButton(this, 1, v29);
      PartyOrganizationMenu__EndOpen(this, v30);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B77560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B77560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B77560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B77560(&this->fields.partyItem);
      goto LABEL_33;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B77560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B77560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B77560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B77560(&this->fields.partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B77560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B77560(&this->fields.questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( this->fields.startingMemberFriendshipSprite )
        {
          v22 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1056LL);
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                         0LL);
          if ( gameObject )
          {
            if ( v22 < 1 )
            {
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                      goto LABEL_40;
                    }
                  }
                }
              }
            }
            else
            {
              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                      }
                      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *(_QWORD *)&gameObject[3].fields.m_CachedPtr = partyItem;
                        sub_B77560(&gameObject[3].fields);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19309/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                   0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                     0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_40:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v26);
                            PartyOrganizationMenu__SetInput(this, 0, v31);
                            PartyOrganizationMenu__SetupButton(this, 0, v32);
                            this->fields.state = 1;
                            v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                            System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v33, 0LL);
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
      sub_B7769C(gameObject, v21);
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
  Il2CppObject *v4; // x20
  PartyOrganizationListViewManager_o *monitor; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v6; // x21
  int32_t v7; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_4388AE6 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu_o *)sub_B775C4(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4388AE6 = 1;
  }
  monitor = (PartyOrganizationListViewManager_o *)v4[5].monitor;
  if ( !isInput )
  {
    if ( monitor )
    {
      v7 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_B7769C(this, isInput);
  }
  v6 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B77694(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v6, v4, Method_PartyOrganizationMenu_OnClickItem__, 0LL);
  if ( !monitor )
    goto LABEL_9;
  monitor->fields.callbackFunc = v6;
  sub_B77560(&monitor->fields.callbackFunc);
  v7 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_20649760(monitor, v7, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__SetItem(
        PartyOrganizationMenu_o *this,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  const MethodInfo *v6; // x4

  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0LL),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0LL)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0LL),
        (partyListViewIndicator = (PartyListViewIndicator_o *)this->fields.partyOrganizationListViewManager) == 0LL) )
  {
    sub_B7769C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  PartyOrganizationListViewManager__CreateList(
    (PartyOrganizationListViewManager_o *)partyListViewIndicator,
    8,
    this->fields.partyItem,
    this->fields.basePartyItem,
    v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__SetupButton(
        PartyOrganizationMenu_o *this,
        bool isMove,
        const MethodInfo *method)
{
  UnityEngine_Component_o *partyRemoveButton; // x0
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL4 v8; // w8
  bool v9; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v12; // x1
  char v13; // w22
  UnityEngine_GameObject_o *v14; // x20
  PartyOrganizationMenu_c *v15; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v17; // w21
  float OffsetX; // s0
  bool v19; // w1
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v23; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19
  __int64 v26; // x0

  if ( (byte_4388AEA & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationMenu_TypeInfo);
    sub_B775C4(&QuestInformationComponent_TypeInfo);
    sub_B775C4(&StringLiteral_17487/*"buttontxt_formation_20"*/);
    byte_4388AEA = 1;
  }
  if ( this->fields.menuKind == 9 )
  {
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
    if ( partyRemoveButton )
    {
      partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
      if ( partyRemoveButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0LL);
        classInfoButton = (UnityEngine_Object_o *)this->fields.classInfoButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(classInfoButton, 0LL, 0LL) )
        {
          partyRemoveButton = (UnityEngine_Component_o *)this->fields.classInfoButton;
          if ( !partyRemoveButton )
            goto LABEL_81;
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
          if ( !partyRemoveButton )
            goto LABEL_81;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0LL);
        }
        partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
        if ( partyRemoveButton )
        {
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
          if ( partyRemoveButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0LL);
            partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
            if ( partyRemoveButton )
            {
              partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               partyRemoveButton,
                                                               0LL);
              if ( partyRemoveButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0LL);
                partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
                if ( partyRemoveButton )
                {
                  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   partyRemoveButton,
                                                                   0LL);
                  if ( partyRemoveButton )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_81:
    sub_B7769C(partyRemoveButton, isMove);
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_26;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_81;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
      goto LABEL_26;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_81;
    if ( QuestRestrictionInfo__IsUseEventDeck((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
    {
LABEL_26:
      partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_81;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
        partyRemoveButton,
        3LL,
        isMove,
        partyRemoveButton->klass[1]._1.interfaceOffsets);
    }
  }
  if ( this->fields.setupInfo )
  {
    partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)&partyRemoveButton[7].fields.m_CachedPtr + 1073LL) )
    {
      v8 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_81;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_81;
      v8 = eventIdList->max_length != 0;
    }
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_81;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v9, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_81;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v12);
  if ( !this->fields.hintDialogButton )
    goto LABEL_81;
  v13 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v14 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v13 & 1) != 0 )
  {
    v15 = PartyOrganizationMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v15 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v15->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_42780020(v9, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_81;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
    {
      v26 = sub_B776C8(partyRemoveButton);
      sub_B77668(v26, 0LL);
    }
    v17 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v14, (float)v17 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_81;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_81;
    v19 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_81;
    v19 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v19, 0LL);
  if ( this->fields.menuKind == 8 || (v20 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v20->fields.questId;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_81;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v23->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_24699280(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17487/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_4388AE4 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4388AE4 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B77990(v8);
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

  if ( (byte_4388AE5 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4388AE5 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B77990(v8);
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
  sub_B77560(
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_438A0BF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&PartyOrganizationMenu_ResultKind_TypeInfo);
    byte_438A0BF = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v13, *(_QWORD *)&n);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v22) & 1) == 0 )
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
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
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