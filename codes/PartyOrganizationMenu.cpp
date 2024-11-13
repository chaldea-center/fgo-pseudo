void __fastcall PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B120AB & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&PartyOrganizationMenu_TypeInfo, v3, v4);
    byte_4B120AB = 1;
  }
  v5 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = -55, max_length == 1) )
    sub_1BCAA44(v5, v5);
  v5->m_Items[2] = 45;
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = v5;
  sub_1BCA784(PartyOrganizationMenu_TypeInfo->static_fields, v5);
}


void __fastcall PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B120AA & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B120AA = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationMenu_CallbackFunc_o *v5; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
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
    sub_1BCAA3C(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void __fastcall PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_32791384(this, 0LL, v2);
}


void __fastcall PartyOrganizationMenu__Close_32791384(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B120A2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationMenu_EndClose__, v5, v6);
    byte_4B120A2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
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
    sub_1BCAA3C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  __int64 v17; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  __int64 v20; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  struct System_Action_o **p_openCallbackFunc; // x19
  struct System_Action_o *v28; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B120A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_FSOffset___, v4, v5);
    sub_1BCA7E0(&FSUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_13665/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, v14, v15);
    byte_4B120A1 = 1;
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
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v17);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13665/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
    v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0LL);
    if ( !Instance )
LABEL_21:
      sub_1BCAA3C(tutorialMaskBase, method);
    v30.fields.x = AddOffset.fields.x + 422.0;
    v30.fields.y = AddOffset.fields.y + -231.0;
    v31.fields.m_XMin = AddOffset.fields.x + 329.0;
    v31.fields.m_YMin = AddOffset.fields.y + -291.0;
    v31.fields.m_Width = 190.0;
    v31.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v22, v30, v31, 0.0, 0LL, -1, v26, 0LL);
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
  v28 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_1BCA784(p_openCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v28->fields.m_target)(
      v28->fields.original_method_info,
      *(_QWORD *)&v28->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_1BCA784(&this->fields.partyItem, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v19; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B120A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B120A9 = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v19, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v19;
      if ( v19 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v19, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1BCAA3C(Master_object, v14);
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
    sub_1BCAA3C(0LL, method);
  PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 9, v2);
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
      sub_1BCAA3C(0LL, method);
    PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B120A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B120A4 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0LL);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_30791892((CommonUI_o *)Instance, v15, 0LL);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v10);
      return;
    }
LABEL_11:
    sub_1BCAA3C(partyOrganizationListViewManager, method);
  }
}


void __fastcall PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B120A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationMenu_OnClickInfomation__, method, v2);
    byte_4B120A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationMenu_OnClickInfomation__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v7);
    PartyOrganizationMenu__Callback(this, 3, -1, v9);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  PartyListViewItem_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0

  if ( (byte_4B120A7 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&Method_PartyOrganizationMenu_OnClickItem__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9, v10);
    byte_4B120A7 = 1;
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
    v14 = partyItem;
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
            PartyOrganizationListViewManager__SetMode_32775620((PartyOrganizationListViewManager_o *)partyItem, 1, v12);
            goto LABEL_12;
          }
          goto LABEL_41;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortIndex)
          && !BYTE1(partyItem[1].fields.sortIndex) )
        {
          partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !partyItem )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0LL) )
          {
            v23 = Method_PartyOrganizationMenu_OnClickItem__;
            if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
              v23 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationMenu_OnClickItem__);
            v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
            OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
          }
          goto LABEL_10;
        }
      }
LABEL_16:
      partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
      v18 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                 PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                                 *(_QWORD *)&result,
                                                                 v12,
                                                                 v13);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
        v19);
      if ( partyOrganizationListViewManager )
      {
        partyOrganizationListViewManager->fields.callbackFunc = v18;
        sub_1BCA784(&partyOrganizationListViewManager->fields.callbackFunc, v18);
        PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 2, v20);
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
    v21 = Method_PartyOrganizationMenu_OnClickItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationMenu_OnClickItem__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
LABEL_24:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_32775620((PartyOrganizationListViewManager_o *)partyItem, 1, v12);
      if ( !LOBYTE(v14[1].fields.sortValue0B) || *(_QWORD *)&v14->fields.menuKind )
      {
        v16 = 6;
        goto LABEL_28;
      }
LABEL_12:
      v16 = 5;
LABEL_28:
      PartyOrganizationMenu__Callback(this, v16, n, v15);
      return;
    }
LABEL_41:
    sub_1BCAA3C(partyItem, *(_QWORD *)&result);
  }
}


void __fastcall PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B120A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationMenu_OnClickPointEvent__, method, v2);
    byte_4B120A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v7);
    PartyOrganizationMenu__Callback(this, 4, -1, v9);
  }
}


void __fastcall PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B120A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationMenu_OnClickQuestInfo__, method, v2);
    byte_4B120A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v7);
    PartyOrganizationMenu__Callback(this, 7, -1, v9);
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
      sub_1BCAA3C(0LL, method);
    PartyOrganizationListViewManager__SetMode_32775620(partyOrganizationListViewManager, 1, v2);
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  int v36; // w22
  __int64 v37; // x1
  UISprite_o *startingMemberFriendshipSprite; // x21
  __int64 v39; // x1
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x20

  if ( (byte_4B120A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&menuKind, basePartyItem);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_PartyOrganizationMenu_EndOpen__, v25, v26);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_19873/*"func_group_icon_1009_starting"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12382/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v31, v32);
    byte_4B120A0 = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_1BCA784(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_1BCA784(&this->fields.partyItem, partyItem);
      this->fields.setupInfo = setupInfo;
      sub_1BCA784(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v43);
      PartyOrganizationMenu__SetInput(this, 0, v44);
      PartyOrganizationMenu__SetupButton(this, 1, v45);
      PartyOrganizationMenu__EndOpen(this, v46);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_1BCA784(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_1BCA784(&this->fields.partyItem, partyItem);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      this->fields.basePartyItem = basePartyItem;
      sub_1BCA784(&this->fields.basePartyItem, basePartyItem);
      this->fields.partyItem = partyItem;
      sub_1BCA784(&this->fields.partyItem, partyItem);
      this->fields.setupInfo = setupInfo;
      sub_1BCA784(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( this->fields.startingMemberFriendshipSprite )
        {
          v36 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1080LL);
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                         0LL);
          if ( gameObject )
          {
            if ( v36 < 1 )
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
                      goto LABEL_34;
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
                      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *(_QWORD *)&gameObject[3].fields.m_CachedPtr = partyItem;
                        sub_1BCA784(&gameObject[3].fields, partyItem);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19873/*"func_group_icon_1009_starting"*/,
                          0LL);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12382/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                   0LL);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0LL);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12382/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                     0LL);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0LL);
LABEL_34:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v42);
                            PartyOrganizationMenu__SetInput(this, 0, v47);
                            PartyOrganizationMenu__SetupButton(this, 0, v48);
                            this->fields.state = 1;
                            v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
                            System_Action___ctor(v52, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v52, 0LL);
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
      sub_1BCAA3C(gameObject, v35);
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
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationListViewManager_o *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  v5 = (Il2CppObject *)this;
  if ( (byte_4B1209F & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, isInput, method);
    this = (PartyOrganizationMenu_o *)sub_1BCA7E0(&Method_PartyOrganizationMenu_OnClickItem__, v6, v7);
    byte_4B1209F = 1;
  }
  klass = (PartyOrganizationListViewManager_o *)v5[6].klass;
  if ( !isInput )
  {
    if ( klass )
    {
      v11 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1BCAA3C(this, isInput);
  }
  v9 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                            isInput,
                                                            method,
                                                            v3);
  PartyOrganizationListViewManager_CallbackFunc___ctor(
    v9,
    v5,
    (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
    v10);
  if ( !klass )
    goto LABEL_9;
  klass->fields.callbackFunc = v9;
  sub_1BCA784(&klass->fields.callbackFunc, v9);
  v11 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_32775620(klass, v11, method);
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
    sub_1BCAA3C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Component_o *partyRemoveButton; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  char v25; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v28; // x1
  char v29; // w22
  UnityEngine_GameObject_o *v30; // x20
  PartyOrganizationMenu_c *v31; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v33; // w21
  float OffsetX; // s0
  bool v35; // w1
  struct QuestRestrictionInfo_o *v36; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  __int64 v39; // x1
  BalanceConfig_c *v40; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v42; // x1
  UISprite_o *classInfoSprite; // x19

  if ( (byte_4B120A3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isMove, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&FSUtility_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&PartyOrganizationMenu_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestInformationComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17850/*"buttontxt_formation_20"*/, v19, v20);
    byte_4B120A3 = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
    sub_1BCAA3C(partyRemoveButton, isMove);
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isMove);
      partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)&partyRemoveButton[7].fields.m_CachedPtr + 1097LL) )
    {
      v25 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_71;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_71;
      v25 = eventIdList->max_length != 0;
    }
  }
  else
  {
    v25 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v25, 0LL);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v28);
  if ( !this->fields.hintDialogButton )
    goto LABEL_71;
  v29 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0LL);
  v30 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v29 & 1) != 0 )
  {
    v31 = PartyOrganizationMenu_TypeInfo;
    if ( !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo, isMove);
      v31 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v31->static_fields->LAYOUT_POS_X_HINT;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, isMove);
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_63023884(v25, 0LL);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_71;
    if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
      sub_1BCAA44(partyRemoveButton, isMove);
    v33 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, isMove);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    GameObjectExtensions__SetLocalPositionX(v30, (float)v33 - OffsetX, 0LL);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_71;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
    if ( !partyRemoveButton )
      goto LABEL_71;
    v35 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_71;
    v35 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v35, 0LL);
  if ( this->fields.menuKind == 8 || (v36 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v36->fields.questId;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, isMove);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0LL);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
    v40 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v40->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v39);
  if ( CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_4B1209D & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1209D = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B1209E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1209E = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07594;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0753C;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = n;
  v14 = result;
  if ( (byte_4B120AC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&PartyOrganizationMenu_ResultKind_TypeInfo, v9, v10);
    byte_4B120AC = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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