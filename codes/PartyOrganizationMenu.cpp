void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct System_Int32_array *v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v10; // x1
  struct PartyOrganizationMenu_StaticFields *static_fields; // x0
  __int64 v12; // x0

  if ( (byte_42E5851 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PartyOrganizationMenu_TypeInfo, v4, v5, v6);
    byte_42E5851 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  max_length = v7->max_length;
  v10 = v7;
  if ( !max_length || (v7->m_Items[1] = -55, max_length == 1) )
  {
    v12 = sub_B5D6C8(v7);
    sub_B5D668(v12, 0LL);
  }
  v7->m_Items[2] = 45;
  static_fields = PartyOrganizationMenu_TypeInfo->static_fields;
  static_fields->LAYOUT_POS_X_HINT = v10;
  sub_B5D560(static_fields);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5850 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5850 = 1;
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
    sub_B5D560(p_callbackFunc);
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
    sub_B5D69C(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_19495604(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_19495604(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_42E5848 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationMenu_EndClose__, v6, v7, v8);
    byte_42E5848 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
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
    sub_B5D560(p_closeCallbackFunc);
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
    sub_B5D69C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v31; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  System_String_o *v34; // x21
  System_Action_o *v35; // x22
  struct System_Action_o **p_openCallbackFunc; // x19
  System_Action_o *v37; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E5847 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_FSOffset___, v5, v6, v7);
    sub_B5D5C4(&FSUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13673/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, v20, v21, v22);
    byte_42E5847 = 1;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
    v41.fields.m_Width = 190.0;
    v41.fields.m_Height = 90.0;
    v41.fields.m_XMin = AddOffset.fields.x + 329.0;
    v41.fields.m_YMin = AddOffset.fields.y + -291.0;
    UnityEngine_Rect___ctor(v41, v26, v27, v28, v29, &methoda);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13673/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    methodPointer = methoda.methodPointer;
    invoker_method = methoda.invoker_method;
    v34 = v31;
    v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_23:
      sub_B5D69C(tutorialMaskBase, method);
    v40.fields.x = AddOffset.fields.x + 422.0;
    v40.fields.y = AddOffset.fields.y + -231.0;
    *(_QWORD *)&v42.fields.m_XMin = methodPointer;
    *(_QWORD *)&v42.fields.m_Width = invoker_method;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v34, v40, v42, 0.0, 0LL, -1, v35, 0LL);
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
  v37 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_B5D560(p_openCallbackFunc);
    System_Action__Invoke(v37, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(&this->fields.basePartyItem);
  this->fields.partyItem = 0LL;
  sub_B5D560(&this->fields.partyItem);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v22; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E584F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E584F = 1;
  }
  entity = 0LL;
  v22 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v22, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v22;
      if ( v22 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v22, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B5D69C(Master_WarQuestSelectionMaster, v18);
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
    sub_B5D69C(0LL, method);
  PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 9, v2);
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
      sub_B5D69C(0LL, method);
    PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v13; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_42E584A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E584A = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_18227360(Instance, v15, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v13);
      return;
    }
LABEL_11:
    sub_B5D69C(partyOrganizationListViewManager, method);
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E584B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E584B = 1;
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
      sub_B5D69C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 3, -1, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu__OnClickItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v20; // x2
  PartyListViewItem_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_42E584D & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, result, n, method);
    sub_B5D5C4(&Method_PartyOrganizationMenu_OnClickItem__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    byte_42E584D = 1;
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
    v21 = partyItem;
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
            PartyOrganizationListViewManager__SetMode_19479264((PartyOrganizationListViewManager_o *)partyItem, 1, v20);
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
          partyItem = (PartyListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v25 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B5D694(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PartyOrganizationMenu_OnClickItem__,
        0LL);
      if ( partyOrganizationListViewManager )
      {
        partyOrganizationListViewManager->fields.callbackFunc = v25;
        sub_B5D560(&partyOrganizationListViewManager->fields.callbackFunc);
        PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 2, v26);
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
      PartyOrganizationListViewManager__SetMode_19479264((PartyOrganizationListViewManager_o *)partyItem, 1, v20);
      if ( !LOBYTE(v21[1].fields.sortValue0B) || *(_QWORD *)&v21->fields.menuKind )
      {
        v23 = 6;
        goto LABEL_29;
      }
LABEL_12:
      v23 = 5;
LABEL_29:
      PartyOrganizationMenu__Callback(this, v23, n, v22);
      return;
    }
LABEL_46:
    sub_B5D69C(partyItem, *(_QWORD *)&result);
  }
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E584C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E584C = 1;
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
      sub_B5D69C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 4, -1, v8);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E584E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E584E = 1;
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
      sub_B5D69C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 7, -1, v8);
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
      sub_B5D69C(0LL, method);
    PartyOrganizationListViewManager__SetMode_19479264(partyOrganizationListViewManager, 1, v2);
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  int v46; // w20
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  System_Action_o *v57; // x20

  if ( (byte_42E5846 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, menuKind, (_DWORD)basePartyItem, partyItem);
    sub_B5D5C4(&AtlasManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_PartyOrganizationMenu_EndOpen__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19165/*"func_group_icon_1009_starting"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v40, v41, v42);
    byte_42E5846 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B5D560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B5D560(&this->fields.partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B5D560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B5D560(&this->fields.questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_33:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v51);
      PartyOrganizationMenu__SetInput(this, 0, v52);
      PartyOrganizationMenu__SetupButton(this, 1, v53);
      PartyOrganizationMenu__EndOpen(this, v54);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B5D560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B5D560(&this->fields.partyItem);
      goto LABEL_33;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      this->fields.basePartyItem = basePartyItem;
      sub_B5D560(&this->fields.basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B5D560(&this->fields.partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B5D560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B5D560(&this->fields.questRestrictionInfo);
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
          v46 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1056LL);
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                         0LL);
          if ( gameObject )
          {
            if ( v46 < 1 )
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
                      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *(_QWORD *)&gameObject[3].fields.m_CachedPtr = partyItem;
                        sub_B5D560(&gameObject[3].fields);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19165/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                   0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                     0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_40:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v50);
                            PartyOrganizationMenu__SetInput(this, 0, v55);
                            PartyOrganizationMenu__SetupButton(this, 0, v56);
                            this->fields.state = 1;
                            v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(v57, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v57, 0LL);
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
      sub_B5D69C(gameObject, v45);
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
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PartyOrganizationListViewManager_o *monitor; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v10; // x21
  int32_t v11; // w1

  v5 = (Il2CppObject *)this;
  if ( (byte_42E5845 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, isInput, (_DWORD)method, v3);
    this = (PartyOrganizationMenu_o *)sub_B5D5C4(&Method_PartyOrganizationMenu_OnClickItem__, v6, v7, v8);
    byte_42E5845 = 1;
  }
  monitor = (PartyOrganizationListViewManager_o *)v5[5].monitor;
  if ( !isInput )
  {
    if ( monitor )
    {
      v11 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_B5D69C(this, isInput);
  }
  v10 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B5D694(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v10, v5, Method_PartyOrganizationMenu_OnClickItem__, 0LL);
  if ( !monitor )
    goto LABEL_9;
  monitor->fields.callbackFunc = v10;
  sub_B5D560(&monitor->fields.callbackFunc);
  v11 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_19479264(monitor, v11, method);
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
    sub_B5D69C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Component_o *partyRemoveButton; // x0
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL4 v33; // w8
  bool v34; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v37; // x1
  char v38; // w22
  UnityEngine_GameObject_o *v39; // x20
  PartyOrganizationMenu_c *v40; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v42; // w21
  float OffsetX; // s0
  bool v44; // w1
  struct QuestRestrictionInfo_o *v45; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v48; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19
  __int64 v51; // x0

  if ( (byte_42E5849 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, isMove, (_DWORD)method, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Convert_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&FSUtility_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&PartyOrganizationMenu_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17357/*"buttontxt_formation_20"*/, v27, v28, v29);
    byte_42E5849 = 1;
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
    sub_B5D69C(partyRemoveButton, isMove);
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
      v33 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_81;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_81;
      v33 = eventIdList->max_length != 0;
    }
    v34 = v33;
  }
  else
  {
    v34 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_81;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v34, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_81;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v37);
  if ( !this->fields.hintDialogButton )
    goto LABEL_81;
  v38 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v39 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v38 & 1) != 0 )
  {
    v40 = PartyOrganizationMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v40 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v40->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_42785896(v34, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_81;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
    {
      v51 = sub_B5D6C8(partyRemoveButton);
      sub_B5D668(v51, 0LL);
    }
    v42 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v39, (float)v42 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_81;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_81;
    v44 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_81;
    v44 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v44, 0LL);
  if ( this->fields.menuKind == 8 || (v45 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v45->fields.questId;
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
  v48 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v48->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__add_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationMenu_o *v12; // x0
  PartyOrganizationMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E5843 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5843 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v9->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationMenu_o *)sub_B5D990(v9);
  PartyOrganizationMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationMenu__remove_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E5844 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5844 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v9->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationMenu_o *)sub_B5D990(v9);
  PartyOrganizationMenu__GetBaseItem(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationMenu_CallbackFunc___ctor(
        PartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_42E5A89 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, callback);
    sub_B5D5C4(&PartyOrganizationMenu_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5A89 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)n, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)n, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)n, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)n,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)n,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)n, v23);
    goto LABEL_38;
  }
}