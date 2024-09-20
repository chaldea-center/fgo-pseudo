void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  struct System_Int32_array *v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A571CE & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&PartyOrganizationMenu_TypeInfo);
    byte_4A571CE = 1;
  }
  v1 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !v1 )
    sub_1B8880C(0LL, v2);
  max_length = v1->max_length;
  if ( !max_length || (v1->m_Items[1] = -55, max_length == 1) )
    sub_1B88814(v1, v1);
  v1->m_Items[2] = 45;
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PartyOrganizationMenu_TypeInfo->static_fields, (int32_t)v1, v3, v4);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A571CD & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A571CD = 1;
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
    sub_1B88554(p_callbackFunc, 0, n, (int32_t)method);
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
    sub_1B8880C(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_32242056(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_32242056(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A571C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationMenu_EndClose__);
    byte_4A571C5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
    sub_1B8880C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_Action_o *v10; // x22
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v15; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A571C4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_13502/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4A571C4 = 1;
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_21:
      sub_1B8880C(tutorialMaskBase, method);
    v14.fields.x = AddOffset.fields.x + 422.0;
    v14.fields.y = AddOffset.fields.y + -231.0;
    v15.fields.m_XMin = AddOffset.fields.x + 329.0;
    v15.fields.m_YMin = AddOffset.fields.y + -291.0;
    v15.fields.m_Width = 190.0;
    v15.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v9, v14, v15, 0.0, 0LL, -1, v10, 0LL);
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
  v12 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B88554(p_openCallbackFunc, 0, (int32_t)v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1B8880C(0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, 0, v3, v4);
  this->fields.partyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v5, v6);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A571CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A571CC = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v11, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1B8880C(Master_object, v7);
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
    sub_1B8880C(0LL, method);
  PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 9, v2);
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
      sub_1B8880C(0LL, method);
    PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A571C7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571C7 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_30519592((CommonUI_o *)Instance, v8, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v6);
      return;
    }
LABEL_11:
    sub_1B8880C(partyOrganizationListViewManager, method);
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

  if ( (byte_4A571C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationMenu_OnClickInfomation__);
    byte_4A571C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B8880C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v6);
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
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v8; // x2
  PartyListViewItem_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_4A571CA & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationMenu_OnClickItem__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A571CA = 1;
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
    v9 = partyItem;
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
            PartyOrganizationListViewManager__SetMode_32226292((PartyOrganizationListViewManager_o *)partyItem, 1, v8);
            goto LABEL_12;
          }
          goto LABEL_41;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortIndex)
          && !BYTE1(partyItem[1].fields.sortIndex) )
        {
          partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !partyItem )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0LL) )
          {
            v20 = Method_PartyOrganizationMenu_OnClickItem__;
            if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
              v20 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationMenu_OnClickItem__);
            v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
            OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
          }
          goto LABEL_10;
        }
      }
LABEL_16:
      partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
      v13 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1B887FC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
        v14);
      if ( partyOrganizationListViewManager )
      {
        partyOrganizationListViewManager->fields.callbackFunc = v13;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&partyOrganizationListViewManager->fields.callbackFunc,
          (int32_t)v13,
          v15,
          v16);
        PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 2, v17);
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
    v18 = Method_PartyOrganizationMenu_OnClickItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationMenu_OnClickItem__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
LABEL_24:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_32226292((PartyOrganizationListViewManager_o *)partyItem, 1, v8);
      if ( !LOBYTE(v9[1].fields.sortValue0B) || *(_QWORD *)&v9->fields.menuKind )
      {
        v11 = 6;
        goto LABEL_28;
      }
LABEL_12:
      v11 = 5;
LABEL_28:
      PartyOrganizationMenu__Callback(this, v11, n, v10);
      return;
    }
LABEL_41:
    sub_1B8880C(partyItem, *(_QWORD *)&result);
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

  if ( (byte_4A571C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationMenu_OnClickPointEvent__);
    byte_4A571C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B8880C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v6);
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

  if ( (byte_4A571CB & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationMenu_OnClickQuestInfo__);
    byte_4A571CB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1B8880C(0LL, v5);
    PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v6);
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
      sub_1B8880C(0LL, method);
    PartyOrganizationListViewManager__SetMode_32226292(partyOrganizationListViewManager, 1, v2);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  char *gameObject; // x0
  __int64 v31; // x1
  int v32; // w22
  int32_t v33; // w2
  int32_t v34; // w3
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v38; // x2
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x2
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  System_Action_o *v61; // x20

  if ( (byte_4A571C3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationMenu_EndOpen__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_19671/*"func_group_icon_1009_starting"*/);
    sub_1B885B0(&StringLiteral_12226/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    byte_4A571C3 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v39, v40);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v41, v42);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v43, v44);
      this->fields.setupInfo = setupInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v45, v46);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v47,
        v48);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v49);
      PartyOrganizationMenu__SetInput(this, 0, v56);
      PartyOrganizationMenu__SetupButton(this, 1, v57);
      PartyOrganizationMenu__EndOpen(this, v58);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v50, v51);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v52, v53);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v54, v55);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)basePartyItem,
        (int32_t)partyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v20, v21);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v22, v23);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v24, v25);
      this->fields.setupInfo = setupInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v28,
        v29);
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
          v32 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 1072LL);
          gameObject = (char *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                                 0LL);
          if ( gameObject )
          {
            if ( v32 < 1 )
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
                      gameObject = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *((_QWORD *)gameObject + 11) = partyItem;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)(gameObject + 88),
                          (int32_t)partyItem,
                          v33,
                          v34);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19671/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_34:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v38);
                            PartyOrganizationMenu__SetInput(this, 0, v59);
                            PartyOrganizationMenu__SetupButton(this, 0, v60);
                            this->fields.state = 1;
                            v61 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                            System_Action___ctor(v61, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v61, 0LL);
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
      sub_1B8880C(gameObject, v31);
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
  Il2CppClass *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_4A571C2 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu_o *)sub_1B885B0(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4A571C2 = 1;
  }
  klass = v4[6].klass;
  if ( !isInput )
  {
    if ( klass )
    {
      v10 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1B8880C(this, isInput);
  }
  v6 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1B887FC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v6, v4, (intptr_t)Method_PartyOrganizationMenu_OnClickItem__, v7);
  if ( !klass )
    goto LABEL_9;
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->vtable[4], (int32_t)v6, v8, v9);
  v10 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_32226292((PartyOrganizationListViewManager_o *)klass, v10, method);
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
    sub_1B8880C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  char v8; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v11; // x1
  char v12; // w22
  UnityEngine_GameObject_o *v13; // x20
  PartyOrganizationMenu_c *v14; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v16; // w21
  float OffsetX; // s0
  bool v18; // w1
  struct QuestRestrictionInfo_o *v19; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v22; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_4A571C6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationMenu_TypeInfo);
    sub_1B885B0(&QuestInformationComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_17671/*"buttontxt_formation_20"*/);
    byte_4A571C6 = 1;
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
    sub_1B8880C(partyRemoveButton, isMove);
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
    if ( *(_BYTE *)(*(_QWORD *)&partyRemoveButton[7].fields.m_CachedPtr + 1089LL) )
    {
      v8 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_71;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_71;
      v8 = eventIdList->max_length != 0;
    }
  }
  else
  {
    v8 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v8, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v11);
  if ( !this->fields.hintDialogButton )
    goto LABEL_71;
  v12 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v13 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v12 & 1) != 0 )
  {
    v14 = PartyOrganizationMenu_TypeInfo;
    if ( !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v14 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v14->static_fields->LAYOUT_POS_X_HINT;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_62329368(v8, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_71;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
      sub_1B88814(partyRemoveButton, isMove);
    v16 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v13, (float)v16 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_71;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_71;
    v18 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_71;
    v18 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v18, 0LL);
  if ( this->fields.menuKind == 8 || (v19 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v19->fields.questId;
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
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v22->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17671/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_4A571C0 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4A571C0 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A571C1 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4A571C1 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C92E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C928C;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_4A571CF & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4A571CF = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v15, *(_QWORD *)&n, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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