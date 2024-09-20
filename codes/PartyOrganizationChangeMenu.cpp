void __fastcall PartyOrganizationChangeMenu___cctor(const MethodInfo *method)
{
  struct System_Int32_array *v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A56FF1 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeMenu_TypeInfo);
    byte_4A56FF1 = 1;
  }
  v1 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !v1 )
    sub_1B8880C(0LL, v2);
  max_length = v1->max_length;
  if ( !max_length || (v1->m_Items[1] = 45, max_length == 1) )
    sub_1B88814(v1, v1);
  v1->m_Items[2] = 145;
  PartyOrganizationChangeMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationChangeMenu_TypeInfo->static_fields,
    (int32_t)v1,
    v3,
    v4);
}


void __fastcall PartyOrganizationChangeMenu___ctor(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationChangeObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A56FF0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BaseMenu_TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeObject___TypeInfo);
    byte_4A56FF0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationChangeObject_array *)sub_1B88658(
                                                       PartyOrganizationChangeObject___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.partyOrganizationChangeObjectList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyOrganizationChangeObjectList, (int32_t)v4, v5, v6);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeMenu__Callback(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationChangeMenu_CallbackFunc_o *v5; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1

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


void __fastcall PartyOrganizationChangeMenu__ClearItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0LL),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(mainDeckBase, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(mainDeckBase, method);
    mainDeckBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( mainDeckBase )
    {
      PartyOrganizationChangeObject__ClearItem((PartyOrganizationChangeObject_o *)mainDeckBase, method);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_8;
  }
}


void __fastcall PartyOrganizationChangeMenu__Close(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationChangeMenu__Close_31985988(this, 0LL, v2);
}


void __fastcall PartyOrganizationChangeMenu__Close_31985988(
        PartyOrganizationChangeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A56FE8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_EndClose__);
    byte_4A56FE8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationChangeMenu__EndClose(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationChangeMenu__Init(this, method);
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


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationChangeMenu_o *this,
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
  PartyOrganizationChangeMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL )
  {
    sub_1B8880C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 5, 1, v4);
}


void __fastcall PartyOrganizationChangeMenu__EndOpen(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *v5; // x0
  struct System_Action_o *v6; // x20
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t v10; // w8
  int32_t v11; // w2
  int32_t v12; // w1
  int32_t mode; // w8
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x4
  FSOffset_o *tutorialAddOffsetFS; // x20
  UnityEngine_Vector2_o v19; // kr00_8
  Il2CppObject *v20; // x20
  System_Action_o *v21; // x21
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 openSelectMember; // x9
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x21
  System_Action_o *v28; // x22
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v30; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v35; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A56FE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_10002/*"OpenServantDetail"*/);
    sub_1B885B0(&StringLiteral_13502/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4A56FE7 = 1;
  }
  if ( (this->fields.openSelectMember & 0x80000000) != 0 )
  {
    mode = this->fields.mode;
    if ( mode )
    {
      this->fields.state = 6;
      if ( mode == 5 )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
          tutorialMaskBase,
          0LL,
          0LL,
          tutorialMaskBase->klass[1]._1.interfaceOffsets);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)tutorialMaskBase,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_FSOffset___);
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 1, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
        v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !Instance )
          goto LABEL_47;
        v33.fields.x = AddOffset.fields.x + 422.0;
        v33.fields.y = AddOffset.fields.y + -231.0;
        v34.fields.m_XMin = AddOffset.fields.x + 329.0;
        v34.fields.m_YMin = AddOffset.fields.y + -291.0;
        v34.fields.m_Width = 190.0;
        v34.fields.m_Height = 90.0;
        CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v27, v33, v34, 0.0, 0LL, -1, v28, 0LL);
      }
      else if ( mode == 4 )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
        partyItem = this->fields.partyItem;
        v16 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_1B887FC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
        PartyOrganizationChangeObject_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__,
          0LL);
        if ( !tutorialPartyOrganizationChangeEmptyObject )
          goto LABEL_47;
        PartyOrganizationChangeObject__SetItem(tutorialPartyOrganizationChangeEmptyObject, partyItem, 1, v16, v17);
        tutorialAddOffsetFS = this->fields.tutorialAddOffsetFS;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v19 = FSUtility__GetAddOffset(tutorialAddOffsetFS, 1, 0LL);
        v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !v20 )
          goto LABEL_47;
        v35.fields.m_YMin = v19.fields.y + -205.0;
        v35.fields.m_XMin = v19.fields.x + -320.0;
        v32.fields.y = v19.fields.y + 70.0;
        v32.fields.x = v19.fields.x + -245.0;
        v35.fields.m_Width = 150.0;
        v35.fields.m_Height = 380.0;
        CommonUI__OpenTutorialArrowMark((CommonUI_o *)v20, v32, 0.0, v35, v21, 0LL);
      }
    }
    else if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      PartyOrganizationChangeMenu__SetInput(this, 1, v2);
    }
    else
    {
      this->fields.state = 3;
    }
    openCallbackFunc = this->fields.openCallbackFunc;
    p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
    v30 = openCallbackFunc;
    if ( openCallbackFunc )
    {
      p_openCallbackFunc->klass = 0LL;
      sub_1B88554(p_openCallbackFunc, 0, (int32_t)v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v30->fields.m_target)(
        v30->fields.original_method_info,
        *(_QWORD *)&v30->fields.extra_arg);
    }
    return;
  }
  v5 = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v6 = this->fields.openCallbackFunc;
  this->fields.state = 3;
  if ( v6 )
  {
    v5->klass = 0LL;
    sub_1B88554(v5, 0, (int32_t)v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
  if ( !this->fields.callbackFunc )
    return;
  tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyItem;
  if ( !tutorialMaskBase )
LABEL_47:
    sub_1B8880C(tutorialMaskBase, method);
  PartyListViewItem__GetMember((PartyListViewItem_o *)tutorialMaskBase, this->fields.openSelectMember, v2);
  v10 = this->fields.mode;
  switch ( v10 )
  {
    case 3:
      this->fields.state = 2;
      PartyOrganizationChangeMenu__SetInput(this, 1, v8);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      if ( partyOrganizationChangeObjectList )
      {
        openSelectMember = this->fields.openSelectMember;
        if ( (unsigned int)openSelectMember >= partyOrganizationChangeObjectList->max_length )
          sub_1B88814(tutorialMaskBase, method);
        tutorialMaskBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[openSelectMember];
        if ( tutorialMaskBase )
        {
          UnityEngine_Component__SendMessage_69430620(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (System_String_o *)StringLiteral_10002/*"OpenServantDetail"*/,
            0LL);
          return;
        }
      }
      goto LABEL_47;
    case 2:
      v11 = this->fields.openSelectMember;
      v12 = 6;
      goto LABEL_30;
    case 1:
      v11 = this->fields.openSelectMember;
      v12 = 5;
LABEL_30:
      this->fields.state = 3;
      PartyOrganizationChangeMenu__Callback(this, v12, v11, v9);
      return;
  }
  this->fields.openSelectMember = -1;
  this->fields.state = 2;
  PartyOrganizationChangeMenu__SetInput(this, 1, v8);
}


void __fastcall PartyOrganizationChangeMenu__EndOpenTutorialArrow(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1B8880C(0LL, method);
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, v2);
}


PartyListViewItem_o *__fastcall PartyOrganizationChangeMenu__GetBaseItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.basePartyItem;
}


PartyListViewItem_o *__fastcall PartyOrganizationChangeMenu__GetItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


void __fastcall PartyOrganizationChangeMenu__Init(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  PartyOrganizationChangeMenu__ClearItem(this, method);
  this->fields.basePartyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, 0, v3, v4);
  this->fields.partyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v5, v6);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationChangeMenu__IsHintDialog(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A56FEF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56FEF = 1;
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


bool __fastcall PartyOrganizationChangeMenu__IsThroughSelect(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.openSelectMember >= 0;
}


void __fastcall PartyOrganizationChangeMenu__ModifyItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *basePartyItem; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, method), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(basePartyItem, method), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__CheckRestriction(basePartyItem, method),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(basePartyItem, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(basePartyItem, method);
    basePartyItem = (PartyListViewItem_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( basePartyItem )
    {
      PartyOrganizationChangeObject__ModifyItem((PartyOrganizationChangeObject_o *)basePartyItem, method);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_10;
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickCancel(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 0, -1, v2);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickDecide(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t state; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A56FEA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickDecide__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56FEA = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 5 )
    {
      this->fields.state = 8;
      v5 = Method_PartyOrganizationChangeMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeMenu_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__,
        0LL);
      if ( !Instance )
        sub_1B8880C(v9, v10);
      CommonUI__CloseTutorialNotificationDialogArrow_30519592((CommonUI_o *)Instance, v8, 0LL);
    }
  }
  else if ( state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 1, -1, v2);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A56FEE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56FEE = 1;
  }
  if ( this->fields.state == 7 && this->fields.mode == 4 )
  {
    this->fields.state = 8;
    v5 = Method_PartyOrganizationChangeMenu_OnClickEmptyItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v9, v10);
    CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v8, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickInfomation(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A56FEB & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    byte_4A56FEB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 3, -1, v5);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( this->fields.state == 2 )
  {
    if ( result == 2 )
      v4 = 6;
    else
      v4 = 5;
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, v4, n, method);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickPointEvent(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A56FEC & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    byte_4A56FEC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 4, -1, v5);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickQuestInfomation(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A56FED & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    byte_4A56FED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 7, -1, v5);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickRemove(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 2, -1, v2);
  }
}


void __fastcall PartyOrganizationChangeMenu__Open(
        PartyOrganizationChangeMenu_o *this,
        int32_t kind,
        int32_t tutorialMode,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        int32_t selectMember,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationChangeMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  UILabel_o *explanationLabel; // x22
  const MethodInfo *v40; // x2
  UIRangeLabel_o *titleExplanationLabel; // x21
  System_String_o *v42; // x0
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  System_Action_o *v45; // x20
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
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A56FE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_EndOpen__);
    sub_1B885B0(&StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1B885B0(&StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/);
    byte_4A56FE6 = 1;
  }
  message = 0LL;
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = kind;
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)basePartyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v27, v28);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v29, v30);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v31, v32);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v33, v34);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v35,
        v36);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = this->fields.explanationBase;
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_22;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.titleExplanationBase;
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
      {
        gameObject = this->fields.titleExplanationBase;
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        titleExplanationLabel = this->fields.titleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(v42, message, 0LL);
        if ( !titleExplanationLabel )
LABEL_22:
          sub_1B8880C(gameObject, v38);
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      }
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v40);
      PartyOrganizationChangeMenu__SetInput(this, 0, v43);
      PartyOrganizationChangeMenu__SetupButton(this, 0, v44);
      this->fields.state = 1;
      v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v45, 0LL);
      break;
    case 2:
    case 3:
    case 7:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)basePartyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v20, v21);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v22, v23);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v24, v25);
      this->fields.openSelectMember = selectMember;
      goto LABEL_21;
    case 5:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)basePartyItem);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v46, v47);
      this->fields.basePartyItem = basePartyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, (int32_t)basePartyItem, v48, v49);
      this->fields.partyItem = partyItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v50, v51);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v52, v53);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v54,
        v55);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_21:
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v26);
      PartyOrganizationChangeMenu__SetInput(this, 0, v56);
      PartyOrganizationChangeMenu__SetupButton(this, 1, v57);
      PartyOrganizationChangeMenu__EndOpen(this, v58);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetInput(
        PartyOrganizationChangeMenu_o *this,
        bool isInput,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  PartyOrganizationChangeMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
LABEL_7:
    sub_1B8880C(this, isInput);
  v4 = this;
  v5 = 0LL;
  v6 = isInput;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, isInput);
    this = (PartyOrganizationChangeMenu_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( this )
    {
      PartyOrganizationChangeObject__SetInput((PartyOrganizationChangeObject_o *)this, v6, method);
      partyOrganizationChangeObjectList = v4->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v7; // x20
  int max_length; // w9
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_o *v10; // x22
  PartyOrganizationChangeObject_CallbackFunc_o *v11; // x23
  const MethodInfo *v12; // x4

  if ( (byte_4A56FE5 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeMenu_OnClickItem__);
    byte_4A56FE5 = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0LL),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0LL)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0LL),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B88814(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
    partyItem = this->fields.partyItem;
    v10 = partyOrganizationChangeObjectList->m_Items[v7];
    v11 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_1B887FC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    PartyOrganizationChangeObject_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_OnClickItem__,
      0LL);
    if ( v10 )
    {
      PartyOrganizationChangeObject__SetItem(v10, partyItem, v7, v11, v12);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v7;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetupButton(
        PartyOrganizationChangeMenu_o *this,
        bool isMove,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *partyRemoveButton; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  const MethodInfo *v8; // x1
  char v9; // w21
  UnityEngine_GameObject_o *v10; // x20
  PartyOrganizationChangeMenu_c *v11; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x21
  int v13; // w21
  float OffsetX; // s0
  bool v15; // w1
  struct QuestRestrictionInfo_o *v16; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v19; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_4A56FE9 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeMenu_TypeInfo);
    sub_1B885B0(&QuestInformationComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_17671/*"buttontxt_formation_20"*/);
    byte_4A56FE9 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_8;
    partyRemoveButton = this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_45;
    if ( partyRemoveButton->fields.isFixedMyServantSingle
      || QuestRestrictionInfo__IsUseEventDeck(partyRemoveButton, 0LL) )
    {
LABEL_8:
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_45;
      ((void (__fastcall *)(QuestRestrictionInfo_o *, __int64, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
        partyRemoveButton,
        3LL,
        isMove,
        partyRemoveButton->klass[1]._1.interfaceOffsets);
    }
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  setupInfo = this->fields.setupInfo;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0LL);
  if ( !partyRemoveButton )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, this->fields.setupInfo != 0LL, 0LL);
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  ((void (__fastcall *)(QuestRestrictionInfo_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (QuestRestrictionInfo_o *)PartyOrganizationChangeMenu__IsHintDialog(this, v8);
  if ( !this->fields.hintDialogButton )
    goto LABEL_45;
  v9 = (char)partyRemoveButton;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                  0LL);
  v10 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v9 & 1) != 0 )
  {
    v11 = PartyOrganizationChangeMenu_TypeInfo;
    if ( !PartyOrganizationChangeMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationChangeMenu_TypeInfo);
      v11 = PartyOrganizationChangeMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v11->static_fields->LAYOUT_POS_X_HINT;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    partyRemoveButton = (QuestRestrictionInfo_o *)System_Convert__ToInt32_62329368(setupInfo != 0LL, 0LL);
    if ( LAYOUT_POS_X_HINT )
    {
      if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
        sub_1B88814(partyRemoveButton, isMove);
      v13 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v10, (float)v13 - OffsetX, 0LL);
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.hintDialogButton;
      if ( partyRemoveButton )
      {
        partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)partyRemoveButton,
                                                        0LL);
        if ( partyRemoveButton )
        {
          v15 = 1;
          goto LABEL_28;
        }
      }
    }
LABEL_45:
    sub_1B8880C(partyRemoveButton, isMove);
  }
  if ( !partyRemoveButton )
    goto LABEL_45;
  v15 = 0;
LABEL_28:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v15, 0LL);
  if ( this->fields.menuKind == 8 || (v16 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v16->fields.questId;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0LL);
  if ( !partyRemoveButton )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
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


void __fastcall PartyOrganizationChangeMenu__add_callbackFunc(
        PartyOrganizationChangeMenu_o *this,
        PartyOrganizationChangeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeMenu_o *v11; // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A56FE3 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_4A56FE3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeMenu_o *)sub_1B88ACC(v8);
  PartyOrganizationChangeMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationChangeMenu__remove_callbackFunc(
        PartyOrganizationChangeMenu_o *this,
        PartyOrganizationChangeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A56FE4 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_4A56FE4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeMenu_o *)sub_1B88ACC(v8);
  PartyOrganizationChangeMenu__IsThroughSelect(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu_CallbackFunc___ctor(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19C8D80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8D28;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationChangeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
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
  if ( (byte_4A56FF2 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeMenu_ResultKind_TypeInfo);
    byte_4A56FF2 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationChangeMenu_ResultKind_TypeInfo, &v15, *(_QWORD *)&n, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyOrganizationChangeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PartyOrganizationChangeMenu_CallbackFunc__Invoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
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