void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v6; // x1
  struct PartyOrganizationMenu_StaticFields *static_fields; // x0
  __int64 v8; // x0

  if ( (byte_4184FAD & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&PartyOrganizationMenu_TypeInfo, v2);
    byte_4184FAD = 1;
  }
  v3 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  max_length = v3->max_length;
  v6 = v3;
  if ( !max_length || (v3->m_Items[1] = -55, max_length == 1) )
  {
    v8 = sub_B2C460(v3);
    sub_B2C400(v8, 0LL);
  }
  v3->m_Items[2] = 45;
  static_fields = PartyOrganizationMenu_TypeInfo->static_fields;
  static_fields->LAYOUT_POS_X_HINT = v6;
  sub_B2C2F8(static_fields, v6);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4184FAC & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4184FAC = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL);
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
    sub_B2C434(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_19902244(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_19902244(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4184FA4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationMenu_EndClose__, v5);
    byte_4184FA4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
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
    sub_B2C434(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v18; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  System_String_o *v21; // x21
  System_Action_o *v22; // x22
  struct System_Action_o **p_openCallbackFunc; // x19
  System_Action_o *v24; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v29; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184FA3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_FSOffset___, v4);
    sub_B2C35C(&FSUtility_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_13517/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, v9);
    byte_4184FA3 = 1;
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
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
    v28.fields.m_Width = 190.0;
    v28.fields.m_Height = 90.0;
    v28.fields.m_XMin = AddOffset.fields.x + 329.0;
    v28.fields.m_YMin = AddOffset.fields.y + -291.0;
    UnityEngine_Rect___ctor(v28, v13, v14, v15, v16, &methoda);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13517/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    methodPointer = methoda.methodPointer;
    invoker_method = methoda.invoker_method;
    v21 = v18;
    v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_23:
      sub_B2C434(tutorialMaskBase, method);
    v27.fields.x = AddOffset.fields.x + 422.0;
    v27.fields.y = AddOffset.fields.y + -231.0;
    *(_QWORD *)&v29.fields.m_XMin = methodPointer;
    *(_QWORD *)&v29.fields.m_Width = invoker_method;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v21, v27, v29, 0.0, 0LL, -1, v22, 0LL);
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
  v24 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_B2C2F8(p_openCallbackFunc, 0LL);
    System_Action__Invoke(v24, 0LL);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_B2C2F8(&this->fields.partyItem, 0LL);
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
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4184FAB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4184FAB = 1;
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
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v14, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B2C434(Master_WarQuestSelectionMaster, v10);
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
    sub_B2C434(0LL, method);
  PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 9, v2);
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
      sub_B2C434(0LL, method);
    PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v2);
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
  System_Action_o *v10; // x21

  if ( (byte_4184FA6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4184FA6 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_17996480(Instance, v10, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v8);
      return;
    }
LABEL_11:
    sub_B2C434(partyOrganizationListViewManager, method);
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4184FA7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FA7 = 1;
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
      sub_B2C434(0LL, v3);
    PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v4);
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
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v10; // x2
  PartyListViewItem_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4184FA9 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_PartyOrganizationMenu_OnClickItem__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    byte_4184FA9 = 1;
  }
  if ( this->fields.state != 2 )
    return;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_41;
  partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, n, 0LL);
  if ( result == 3 )
  {
    partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
    if ( !partyItem )
      goto LABEL_41;
    PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0LL);
  }
  else
  {
    v11 = partyItem;
    if ( result != 2 )
    {
      if ( result == 1 )
      {
        if ( !partyItem )
          goto LABEL_41;
        if ( LOBYTE(partyItem[1].fields.sortValue0B) )
          goto LABEL_10;
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortIndex)
          && !BYTE1(partyItem[1].fields.sortIndex) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
LABEL_10:
          partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
          this->fields.state = 3;
          if ( partyItem )
          {
            PartyOrganizationListViewManager__SetMode_19886016((PartyOrganizationListViewManager_o *)partyItem, 1, v10);
            goto LABEL_12;
          }
          goto LABEL_41;
        }
      }
      goto LABEL_28;
    }
    if ( !partyItem )
      goto LABEL_41;
    if ( LOBYTE(partyItem[1].fields.sortValue0B) )
    {
      if ( !*(_QWORD *)&partyItem->fields.menuKind )
        goto LABEL_21;
      goto LABEL_17;
    }
    if ( !LOBYTE(partyItem->fields.id)
      && !LOBYTE(partyItem[1].fields.sortIndex)
      && !BYTE1(partyItem[1].fields.sortIndex) )
    {
LABEL_17:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
LABEL_21:
      partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
      this->fields.state = 3;
      if ( partyItem )
      {
        PartyOrganizationListViewManager__SetMode_19886016((PartyOrganizationListViewManager_o *)partyItem, 1, v10);
        if ( !LOBYTE(v11[1].fields.sortValue0B) || *(_QWORD *)&v11->fields.menuKind )
        {
          v13 = 6;
          goto LABEL_25;
        }
LABEL_12:
        v13 = 5;
LABEL_25:
        PartyOrganizationMenu__Callback(this, v13, n, v12);
        return;
      }
LABEL_41:
      sub_B2C434(partyItem, *(_QWORD *)&result);
    }
  }
LABEL_28:
  partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
  v15 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B2C42C(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_PartyOrganizationMenu_OnClickItem__,
    0LL);
  if ( !partyOrganizationListViewManager )
    goto LABEL_41;
  partyOrganizationListViewManager->fields.callbackFunc = v15;
  sub_B2C2F8(&partyOrganizationListViewManager->fields.callbackFunc, v15);
  PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 2, v16);
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4184FA8 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FA8 = 1;
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
      sub_B2C434(0LL, v3);
    PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v4);
    PartyOrganizationMenu__Callback(this, 4, -1, v6);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4184FAA & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FAA = 1;
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
      sub_B2C434(0LL, v3);
    PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v4);
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
      sub_B2C434(0LL, method);
    PartyOrganizationListViewManager__SetMode_19886016(partyOrganizationListViewManager, 1, v2);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  int v30; // w20
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  System_Action_o *v41; // x20

  if ( (byte_4184FA2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&AtlasManager_TypeInfo, v19);
    sub_B2C35C(&BalanceConfig_TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&Method_PartyOrganizationMenu_EndOpen__, v22);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    sub_B2C35C(&StringLiteral_18926/*"func_group_icon_1009_starting"*/, v25);
    sub_B2C35C(&StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v26);
    byte_4184FA2 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(&this->fields.partyItem, partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_33:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v35);
      PartyOrganizationMenu__SetInput(this, 0, v36);
      PartyOrganizationMenu__SetupButton(this, 1, v37);
      PartyOrganizationMenu__EndOpen(this, v38);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(&this->fields.partyItem, partyItem);
      goto LABEL_33;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(&this->fields.partyItem, partyItem);
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
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
          v30 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1056LL);
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                         0LL);
          if ( gameObject )
          {
            if ( v30 < 1 )
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
                      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *(_QWORD *)&gameObject[3].fields.m_CachedPtr = partyItem;
                        sub_B2C2F8(&gameObject[3].fields, partyItem);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_18926/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                   0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                     0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_40:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v34);
                            PartyOrganizationMenu__SetInput(this, 0, v39);
                            PartyOrganizationMenu__SetupButton(this, 0, v40);
                            this->fields.state = 1;
                            v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                            System_Action___ctor(v41, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v41, 0LL);
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
      sub_B2C434(gameObject, v29);
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
  __int64 v5; // x1
  PartyOrganizationListViewManager_o *monitor; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v7; // x21
  int32_t v8; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_4184FA1 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, isInput);
    this = (PartyOrganizationMenu_o *)sub_B2C35C(&Method_PartyOrganizationMenu_OnClickItem__, v5);
    byte_4184FA1 = 1;
  }
  monitor = (PartyOrganizationListViewManager_o *)v4[5].monitor;
  if ( !isInput )
  {
    if ( monitor )
    {
      v8 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_B2C434(this, isInput);
  }
  v7 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_B2C42C(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v7, v4, Method_PartyOrganizationMenu_OnClickItem__, 0LL);
  if ( !monitor )
    goto LABEL_9;
  monitor->fields.callbackFunc = v7;
  sub_B2C2F8(&monitor->fields.callbackFunc, v7);
  v8 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_19886016(monitor, v8, method);
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
    sub_B2C434(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *partyRemoveButton; // x0
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  const MethodInfo *v17; // x1
  char v18; // w21
  UnityEngine_GameObject_o *v19; // x20
  PartyOrganizationMenu_c *v20; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x21
  int v22; // w21
  float OffsetX; // s0
  bool v24; // w1
  struct QuestRestrictionInfo_o *v25; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v28; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19
  __int64 v31; // x0

  if ( (byte_4184FA5 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, isMove);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&System_Convert_TypeInfo, v7);
    sub_B2C35C(&FSUtility_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&PartyOrganizationMenu_TypeInfo, v10);
    sub_B2C35C(&QuestInformationComponent_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v12);
    byte_4184FA5 = 1;
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
            goto LABEL_70;
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
          if ( !partyRemoveButton )
            goto LABEL_70;
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
LABEL_70:
    sub_B2C434(partyRemoveButton, isMove);
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_26;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_70;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
      goto LABEL_26;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_70;
    if ( QuestRestrictionInfo__IsUseEventDeck((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
    {
LABEL_26:
      partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_70;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
        partyRemoveButton,
        3LL,
        isMove,
        partyRemoveButton->klass[1]._1.interfaceOffsets);
    }
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_70;
  setupInfo = this->fields.setupInfo;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, setupInfo != 0LL, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_70;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v17);
  if ( !this->fields.hintDialogButton )
    goto LABEL_70;
  v18 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v19 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v18 & 1) != 0 )
  {
    v20 = PartyOrganizationMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v20 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v20->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_42131944(setupInfo != 0LL, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_70;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
    {
      v31 = sub_B2C460(partyRemoveButton);
      sub_B2C400(v31, 0LL);
    }
    v22 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v19, (float)v22 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_70;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_70;
    v24 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_70;
    v24 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v24, 0LL);
  if ( this->fields.menuKind == 8 || (v25 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v25->fields.questId;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_70;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v28 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v28->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_4184F9F & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_4184F9F = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B2C728(v8);
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

  if ( (byte_4184FA0 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_4184FA0 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_B2C728(v8);
  PartyOrganizationMenu__GetBaseItem(v11, v12);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185291 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_4185291 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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