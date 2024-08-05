void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FA5F4 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, v1);
    sub_1B64870(&PartyOrganizationMenu_TypeInfo, v2);
    byte_49FA5F4 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_1B64ACC(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = -55, max_length == 1) )
    sub_1B64AD4(v3, v3);
  v3->m_Items[2] = 45;
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = v3;
  sub_1B64814((ServantStatusBattleListViewItem_o *)PartyOrganizationMenu_TypeInfo->static_fields, (int32_t)v3, v5, v6);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA5F3 & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49FA5F3 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationMenu_CallbackFunc_o *v5; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B64814(p_callbackFunc, 0, n, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)n,
      *(_QWORD *)&v5->fields.extra_arg);
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
    sub_1B64ACC(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_31981476(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_31981476(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FA5EB & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_PartyOrganizationMenu_EndClose__, v6);
    byte_49FA5EB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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
    sub_1B64ACC(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  System_Action_o *v16; // x22
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v21; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_49FA5EA & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_FSOffset___, v5);
    sub_1B64870(&FSUtility_TypeInfo, v6);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64870(&StringLiteral_13437/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, v10);
    byte_49FA5EA = 1;
  }
  if ( this->fields.mode == 4 )
  {
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
    if ( !tutorialMaskBase )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
      tutorialMaskBase,
      0LL,
      0LL,
      tutorialMaskBase->klass[1]._1.interfaceOffsets);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)tutorialMaskBase,
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13437/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_21:
      sub_1B64ACC(tutorialMaskBase, method);
    v20.fields.x = AddOffset.fields.x + 422.0;
    v20.fields.y = AddOffset.fields.y + -231.0;
    v21.fields.m_XMin = AddOffset.fields.x + 329.0;
    v21.fields.m_YMin = AddOffset.fields.y + -291.0;
    v21.fields.m_Width = 190.0;
    v21.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v15, v20, v21, 0.0, 0LL, -1, v16, 0LL);
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
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v18 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B64814(p_openCallbackFunc, 0, (int32_t)v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v18->fields.m_target)(
      v18->fields.original_method_info,
      *(_QWORD *)&v18->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1B64ACC(0LL, method);
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
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.basePartyItem = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, 0, v3, v4);
  this->fields.partyItem = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v5, v6);
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
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA5F2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1B64870(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1B64870(&DataManager_TypeInfo, v4);
    sub_1B64870(&StringLiteral_1/*""*/, v5);
    byte_49FA5F2 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v14, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1B64ACC(Master_object, v10);
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
    sub_1B64ACC(0LL, method);
  PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 9, v2);
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
      sub_1B64ACC(0LL, method);
    PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v2);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_49FA5ED & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FA5ED = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_30372596((CommonUI_o *)Instance, v10, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v8);
      return;
    }
LABEL_11:
    sub_1B64ACC(partyOrganizationListViewManager, method);
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FA5EE & 1) == 0 )
  {
    sub_1B64870(&Method_PartyOrganizationMenu_OnClickInfomation__, method);
    byte_49FA5EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_PartyOrganizationMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B64ACC(0LL, v5);
    PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v10; // x2
  PartyListViewItem_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0

  if ( (byte_49FA5F0 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_PartyOrganizationMenu_OnClickItem__, v7);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_49FA5F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
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
      goto LABEL_16;
    }
    v11 = partyItem;
    if ( result != 2 )
    {
      if ( result == 1 )
      {
        if ( !partyItem )
          goto LABEL_41;
        if ( LOBYTE(partyItem[1].fields.sortValue0B) )
        {
LABEL_10:
          partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
          this->fields.state = 3;
          if ( partyItem )
          {
            PartyOrganizationListViewManager__SetMode_31965712((PartyOrganizationListViewManager_o *)partyItem, 1, v10);
            goto LABEL_12;
          }
          goto LABEL_41;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortIndex)
          && !BYTE1(partyItem[1].fields.sortIndex) )
        {
          partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !partyItem )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0LL) )
          {
            v22 = Method_PartyOrganizationMenu_OnClickItem__;
            if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
              v22 = (_QWORD *)sub_1B64888(Method_PartyOrganizationMenu_OnClickItem__);
            v23 = (System_Reflection_MethodBase_o *)sub_1B64854(v22, v22[4]);
            OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
          }
          goto LABEL_10;
        }
      }
LABEL_16:
      partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
      v15 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
        v16);
      if ( partyOrganizationListViewManager )
      {
        partyOrganizationListViewManager->fields.callbackFunc = v15;
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&partyOrganizationListViewManager->fields.callbackFunc,
          (int32_t)v15,
          v17,
          v18);
        PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 2, v19);
        return;
      }
      goto LABEL_41;
    }
    if ( !partyItem )
      goto LABEL_41;
    if ( LOBYTE(partyItem[1].fields.sortValue0B) )
    {
      if ( !*(_QWORD *)&partyItem->fields.menuKind )
        goto LABEL_24;
    }
    else if ( LOBYTE(partyItem->fields.id)
           || LOBYTE(partyItem[1].fields.sortIndex)
           || BYTE1(partyItem[1].fields.sortIndex) )
    {
      goto LABEL_16;
    }
    v20 = Method_PartyOrganizationMenu_OnClickItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1B64888(Method_PartyOrganizationMenu_OnClickItem__);
    v21 = (System_Reflection_MethodBase_o *)sub_1B64854(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
LABEL_24:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_31965712((PartyOrganizationListViewManager_o *)partyItem, 1, v10);
      if ( !LOBYTE(v11[1].fields.sortValue0B) || *(_QWORD *)&v11->fields.menuKind )
      {
        v13 = 6;
        goto LABEL_28;
      }
LABEL_12:
      v13 = 5;
LABEL_28:
      PartyOrganizationMenu__Callback(this, v13, n, v12);
      return;
    }
LABEL_41:
    sub_1B64ACC(partyItem, *(_QWORD *)&result);
  }
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FA5EF & 1) == 0 )
  {
    sub_1B64870(&Method_PartyOrganizationMenu_OnClickPointEvent__, method);
    byte_49FA5EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B64ACC(0LL, v5);
    PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 4, -1, v8);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FA5F1 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyOrganizationMenu_OnClickQuestInfo__, method);
    byte_49FA5F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B64ACC(0LL, v5);
    PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v6);
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
      sub_1B64ACC(0LL, method);
    PartyOrganizationListViewManager__SetMode_31965712(partyOrganizationListViewManager, 1, v2);
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
  int32_t state; // w8
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  char *gameObject; // x0
  __int64 v38; // x1
  int v39; // w22
  int32_t v40; // w2
  int32_t v41; // w3
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v45; // x2
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x2
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  System_Action_o *v68; // x20

  if ( (byte_49FA5E9 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B64870(&AtlasManager_TypeInfo, v19);
    sub_1B64870(&BalanceConfig_TypeInfo, v20);
    sub_1B64870(&LocalizationManager_TypeInfo, v21);
    sub_1B64870(&Method_PartyOrganizationMenu_EndOpen__, v22);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1B64870(&StringLiteral_19595/*"func_group_icon_1009_starting"*/, v24);
    sub_1B64870(&StringLiteral_12174/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v25);
    byte_49FA5E9 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v46, v47);
      this->fields.basePartyItem = basePartyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v48, v49);
      this->fields.partyItem = partyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v50, v51);
      this->fields.setupInfo = setupInfo;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v52, v53);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v54,
        v55);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v56);
      PartyOrganizationMenu__SetInput(this, 0, v63);
      PartyOrganizationMenu__SetupButton(this, 1, v64);
      PartyOrganizationMenu__EndOpen(this, v65);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v57, v58);
      this->fields.basePartyItem = basePartyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v59, v60);
      this->fields.partyItem = partyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v61, v62);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v27, v28);
      this->fields.basePartyItem = basePartyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v29, v30);
      this->fields.partyItem = partyItem;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v31, v32);
      this->fields.setupInfo = setupInfo;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v33, v34);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v35,
        v36);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (char *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (char *)BalanceConfig_TypeInfo;
        }
        if ( this->fields.startingMemberFriendshipSprite )
        {
          v39 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 1088LL);
          gameObject = (char *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                                 0LL);
          if ( gameObject )
          {
            if ( v39 < 1 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (char *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                  gameObject = (char *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = (char *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                      goto LABEL_34;
                    }
                  }
                }
              }
            }
            else
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (char *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                  gameObject = (char *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = (char *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      gameObject = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *((_QWORD *)gameObject + 11) = partyItem;
                        sub_1B64814(
                          (ServantStatusBattleListViewItem_o *)(gameObject + 88),
                          (int32_t)partyItem,
                          v40,
                          v41);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19595/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12174/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12174/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_34:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v45);
                            PartyOrganizationMenu__SetInput(this, 0, v66);
                            PartyOrganizationMenu__SetupButton(this, 0, v67);
                            this->fields.state = 1;
                            v68 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                            System_Action___ctor(v68, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v68, 0LL);
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
LABEL_35:
      sub_1B64ACC(gameObject, v38);
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
  Il2CppClass *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_49FA5E8 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, isInput);
    this = (PartyOrganizationMenu_o *)sub_1B64870(&Method_PartyOrganizationMenu_OnClickItem__, v5);
    byte_49FA5E8 = 1;
  }
  klass = v4[6].klass;
  if ( !isInput )
  {
    if ( klass )
    {
      v11 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1B64ACC(this, isInput);
  }
  v7 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v7, v4, (intptr_t)Method_PartyOrganizationMenu_OnClickItem__, v8);
  if ( !klass )
    goto LABEL_9;
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&klass->vtable[4], (int32_t)v7, v9, v10);
  v11 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_31965712((PartyOrganizationListViewManager_o *)klass, v11, method);
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
    sub_1B64ACC(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  char v16; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v19; // x1
  char v20; // w22
  UnityEngine_GameObject_o *v21; // x20
  PartyOrganizationMenu_c *v22; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v24; // w21
  float OffsetX; // s0
  bool v26; // w1
  struct QuestRestrictionInfo_o *v27; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v30; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_49FA5EC & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, isMove);
    sub_1B64870(&BalanceConfig_TypeInfo, v5);
    sub_1B64870(&CondType_TypeInfo, v6);
    sub_1B64870(&System_Convert_TypeInfo, v7);
    sub_1B64870(&FSUtility_TypeInfo, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&PartyOrganizationMenu_TypeInfo, v10);
    sub_1B64870(&QuestInformationComponent_TypeInfo, v11);
    sub_1B64870(&StringLiteral_17603/*"buttontxt_formation_20"*/, v12);
    byte_49FA5EC = 1;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(classInfoButton, 0LL, 0LL) )
        {
          partyRemoveButton = (UnityEngine_Component_o *)this->fields.classInfoButton;
          if ( !partyRemoveButton )
            goto LABEL_71;
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
          if ( !partyRemoveButton )
            goto LABEL_71;
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
LABEL_71:
    sub_1B64ACC(partyRemoveButton, isMove);
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_71;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_71;
    if ( QuestRestrictionInfo__IsUseEventDeck((QuestRestrictionInfo_o *)partyRemoveButton, 0LL) )
    {
LABEL_25:
      partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_71;
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)&partyRemoveButton[7].fields.m_CachedPtr + 1105LL) )
    {
      v16 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_71;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_71;
      v16 = eventIdList->max_length != 0;
    }
  }
  else
  {
    v16 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v16, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v19);
  if ( !this->fields.hintDialogButton )
    goto LABEL_71;
  v20 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v21 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v20 & 1) != 0 )
  {
    v22 = PartyOrganizationMenu_TypeInfo;
    if ( !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v22 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v22->static_fields->LAYOUT_POS_X_HINT;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_62005904(v16, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_71;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
      sub_1B64AD4(partyRemoveButton, isMove);
    v24 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v21, (float)v24 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_71;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_71;
    v26 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_71;
    v26 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v26, 0LL);
  if ( this->fields.menuKind == 8 || (v27 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v27->fields.questId;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v30->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37290360(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17603/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_49FA5E6 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49FA5E6 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1B64D8C(v8);
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

  if ( (byte_49FA5E7 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49FA5E7 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1B64D8C(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A7298;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7240;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = n;
  v16 = result;
  if ( (byte_49FA5F5 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&PartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_49FA5F5 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&n, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B64824(this, v14, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__Invoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}