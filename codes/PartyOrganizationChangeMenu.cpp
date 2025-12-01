void PartyOrganizationChangeMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int v9; // w8

  if ( (byte_4CC2D40 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeMenu_TypeInfo);
    byte_4CC2D40 = 1;
  }
  v1 = sub_1C71458(int___TypeInfo, 2);
  if ( !v1 )
    sub_1C71608(0, v2);
  v9 = *(_DWORD *)(v1 + 24);
  if ( !v9 || (*(_DWORD *)(v1 + 32) = 45, v9 == 1) )
    sub_1C71610(v1);
  *(_DWORD *)(v1 + 36) = 145;
  PartyOrganizationChangeMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = (struct System_Int32_array *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)PartyOrganizationChangeMenu_TypeInfo->static_fields,
    v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void PartyOrganizationChangeMenu___ctor(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationChangeObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC2D3F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&BaseMenu_TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeObject___TypeInfo);
    byte_4CC2D3F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationChangeObject_array *)sub_1C71458(
                                                       PartyOrganizationChangeObject___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.partyOrganizationChangeObjectList = v4;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.partyOrganizationChangeObjectList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void PartyOrganizationChangeMenu__Callback(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationChangeMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)n,
      v9->fields.method);
  }
}


void PartyOrganizationChangeMenu__ClearItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0) )
  {
LABEL_8:
    sub_1C71608(mainDeckBase, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C71610(mainDeckBase);
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


void PartyOrganizationChangeMenu__Close(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationChangeMenu__Close_34401724(this, 0, v2);
}


void PartyOrganizationChangeMenu__Close_34401724(
        PartyOrganizationChangeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC2D37 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_EndClose__);
    byte_4CC2D37 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0);
}


void PartyOrganizationChangeMenu__EndClose(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationChangeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyOrganizationChangeMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton) == 0)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0)) == 0 )
  {
    sub_1C71608(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 1, -1, v4);
}


void PartyOrganizationChangeMenu__EndCloseTutorialArrowEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0)) == 0 )
  {
    sub_1C71608(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 5, 1, v4);
}


void PartyOrganizationChangeMenu__EndOpen(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *v9; // x0
  struct System_Action_o *v10; // x20
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t v14; // w8
  int32_t v15; // w2
  int32_t v16; // w1
  int32_t mode; // w8
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5
  FSOffset_o *tutorialAddOffsetFS; // x20
  UnityEngine_Vector2_o v24; // kr00_8
  Il2CppObject *v25; // x20
  System_Action_o *v26; // x21
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 openSelectMember; // x9
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  Il2CppObject *Instance; // x20
  System_String_o *v32; // x21
  System_Action_o *v33; // x22
  GrandQuestFolderBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v35; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v37; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v40; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4CC2D36 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_10006/*"OpenServantDetail"*/);
    sub_1C713B0(&StringLiteral_13604/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4CC2D36 = 1;
  }
  if ( this->fields.openSelectMember < 0 )
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
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppClass **))tutorialMaskBase->klass[1]._1.nestedTypes)(
          tutorialMaskBase,
          0,
          0,
          tutorialMaskBase->klass[1]._1.implementedInterfaces);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)tutorialMaskBase,
                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_FSOffset___);
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 1, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13604/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0);
        v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0);
        if ( !Instance )
          goto LABEL_47;
        v38.fields.x = AddOffset.fields.x + 422.0;
        v38.fields.y = AddOffset.fields.y + -231.0;
        v39.fields.m_XMin = AddOffset.fields.x + 329.0;
        v39.fields.m_YMin = AddOffset.fields.y + -291.0;
        v39.fields.m_Width = 190.0;
        v39.fields.m_Height = 90.0;
        CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v32, v38, v39, 0.0, 0, -1, v33, 0);
      }
      else if ( mode == 4 )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
        if ( !tutorialMaskBase )
          goto LABEL_47;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
        if ( !tutorialMaskBase )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
        partyItem = this->fields.partyItem;
        v20 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_1C715FC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
        PartyOrganizationChangeObject_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__,
          v21);
        if ( !tutorialPartyOrganizationChangeEmptyObject )
          goto LABEL_47;
        PartyOrganizationChangeObject__SetItem(tutorialPartyOrganizationChangeEmptyObject, partyItem, 1, v20, 0, v22);
        tutorialAddOffsetFS = this->fields.tutorialAddOffsetFS;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v24 = FSUtility__GetAddOffset(tutorialAddOffsetFS, 1, 0);
        v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0);
        if ( !v25 )
          goto LABEL_47;
        v40.fields.m_YMin = v24.fields.y + -205.0;
        v40.fields.m_XMin = v24.fields.x + -320.0;
        v37.fields.y = v24.fields.y + 70.0;
        v37.fields.x = v24.fields.x + -245.0;
        v40.fields.m_Width = 150.0;
        v40.fields.m_Height = 380.0;
        CommonUI__OpenTutorialArrowMark((CommonUI_o *)v25, v37, 0.0, v40, v26, 0);
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
    p_openCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
    v35 = openCallbackFunc;
    if ( openCallbackFunc )
    {
      p_openCallbackFunc->klass = 0;
      sub_1C71354(p_openCallbackFunc, 0, (int32_t)v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, intptr_t))v35->fields.invoke_impl)(v35->fields.method_code, v35->fields.method);
    }
    return;
  }
  v9 = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
  v10 = this->fields.openCallbackFunc;
  this->fields.state = 3;
  if ( v10 )
  {
    v9->klass = 0;
    sub_1C71354(v9, 0, (int32_t)v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
  if ( !this->fields.callbackFunc )
    return;
  tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyItem;
  if ( !tutorialMaskBase )
LABEL_47:
    sub_1C71608(tutorialMaskBase, method);
  PartyListViewItem__GetMember((PartyListViewItem_o *)tutorialMaskBase, this->fields.openSelectMember, 0);
  v14 = this->fields.mode;
  switch ( v14 )
  {
    case 3:
      this->fields.state = 2;
      PartyOrganizationChangeMenu__SetInput(this, 1, v12);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      if ( partyOrganizationChangeObjectList )
      {
        openSelectMember = this->fields.openSelectMember;
        if ( (unsigned int)openSelectMember >= LODWORD(partyOrganizationChangeObjectList->max_length) )
          sub_1C71610(tutorialMaskBase);
        tutorialMaskBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[openSelectMember];
        if ( tutorialMaskBase )
        {
          UnityEngine_Component__SendMessage_71695820(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (System_String_o *)StringLiteral_10006/*"OpenServantDetail"*/,
            0);
          return;
        }
      }
      goto LABEL_47;
    case 2:
      v15 = this->fields.openSelectMember;
      v16 = 6;
      goto LABEL_30;
    case 1:
      v15 = this->fields.openSelectMember;
      v16 = 5;
LABEL_30:
      this->fields.state = 3;
      PartyOrganizationChangeMenu__Callback(this, v16, v15, v13);
      return;
  }
  this->fields.openSelectMember = -1;
  this->fields.state = 2;
  PartyOrganizationChangeMenu__SetInput(this, 1, v12);
}


void PartyOrganizationChangeMenu__EndOpenTutorialArrow(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1C71608(0, method);
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, v2);
}


PartyListViewItem_o *PartyOrganizationChangeMenu__GetItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


void PartyOrganizationChangeMenu__Init(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  PartyOrganizationChangeMenu__ClearItem(this, method);
  this->fields.partyItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, 0, v3, v4, v5, v6, v7, v8);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyOrganizationChangeMenu__IsHintDialog(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC2D3E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2D3E = 1;
  }
  entity = 0;
  v11 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v11, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_1C71608(Master_object, v7);
    }
    return 0;
  }
  return 1;
}


bool PartyOrganizationChangeMenu__IsThroughSelect(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  return this->fields.openSelectMember >= 0;
}


void PartyOrganizationChangeMenu__ModifyItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_8;
  PartyListViewItem__Modify(partyItem, 0, 0);
  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
    goto LABEL_8;
  v5 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C71610(partyItem);
    partyItem = (PartyListViewItem_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( partyItem )
    {
      PartyOrganizationChangeObject__ModifyItem((PartyOrganizationChangeObject_o *)partyItem, method);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_8;
  }
  partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
  if ( !partyItem )
LABEL_8:
    sub_1C71608(partyItem, method);
  PartyListViewIndicator__UpdateCost((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0);
}


void PartyOrganizationChangeMenu__OnClickCancel(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 0, -1, v2);
  }
}


void PartyOrganizationChangeMenu__OnClickDecide(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t state; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC2D39 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickDecide__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2D39 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 5 )
    {
      this->fields.state = 8;
      v5 = Method_PartyOrganizationChangeMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationChangeMenu_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__,
        0);
      if ( !Instance )
        sub_1C71608(v9, v10);
      CommonUI__CloseTutorialNotificationDialogArrow_31466188((CommonUI_o *)Instance, v8, 0);
    }
  }
  else if ( state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 1, -1, v2);
  }
}


void PartyOrganizationChangeMenu__OnClickEmptyItem(
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

  if ( (byte_4CC2D3D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2D3D = 1;
  }
  if ( this->fields.state == 7 && this->fields.mode == 4 )
  {
    this->fields.state = 8;
    v5 = Method_PartyOrganizationChangeMenu_OnClickEmptyItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__,
      0);
    if ( !Instance )
      sub_1C71608(v9, v10);
    CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationChangeMenu__OnClickInfomation(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4CC2D3A & 1) == 0 )
  {
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    byte_4CC2D3A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 3, -1, v5);
  }
}


void PartyOrganizationChangeMenu__OnClickItem(
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


void PartyOrganizationChangeMenu__OnClickPointEvent(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4CC2D3B & 1) == 0 )
  {
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    byte_4CC2D3B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 4, -1, v5);
  }
}


void PartyOrganizationChangeMenu__OnClickQuestInfomation(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4CC2D3C & 1) == 0 )
  {
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    byte_4CC2D3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 7, -1, v5);
  }
}


void PartyOrganizationChangeMenu__OnClickRemove(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 2, -1, v2);
  }
}


void PartyOrganizationChangeMenu__OnModifyItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  __int64 v4; // x1
  PartyListViewIndicator_o *partyListViewIndicator; // x0

  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    PartyListViewItem__Modify(partyItem, 0, 0);
    partyListViewIndicator = this->fields.partyListViewIndicator;
    if ( !partyListViewIndicator )
      sub_1C71608(0, v4);
    PartyListViewIndicator__UpdateCost(partyListViewIndicator, this->fields.partyItem, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeMenu__Open(
        PartyOrganizationChangeMenu_o *this,
        int32_t kind,
        int32_t tutorialMode,
        PartyListViewItem_o *partyItem,
        int32_t selectMember,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationChangeMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v57; // x1
  UILabel_o *explanationLabel; // x22
  const MethodInfo *v59; // x2
  UIRangeLabel_o *titleExplanationLabel; // x21
  System_String_o *v61; // x0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  System_Action_o *v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x1
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC2D35 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_EndOpen__);
    sub_1C713B0(&StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C713B0(&StringLiteral_10294/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/);
    byte_4CC2D35 = 1;
  }
  message = 0;
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = kind;
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)partyItem,
        *(System_String_o **)&selectMember,
        (int32_t)setupInfo,
        (int64_t)questRestrictionInfo,
        (System_String_o *)callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      this->fields.partyItem = partyItem;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = this->fields.explanationBase;
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, 0);
      if ( !explanationLabel )
        goto LABEL_22;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
      gameObject = this->fields.titleExplanationBase;
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0) )
      {
        gameObject = this->fields.titleExplanationBase;
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        titleExplanationLabel = this->fields.titleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64031724(v61, message, 0);
        if ( !titleExplanationLabel )
LABEL_22:
          sub_1C71608(gameObject, v57);
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      }
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v59);
      PartyOrganizationChangeMenu__SetInput(this, 0, v62);
      PartyOrganizationChangeMenu__SetupButton(this, 0, v63);
      this->fields.state = 1;
      v64 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v64, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v64, 0);
      break;
    case 2:
    case 3:
    case 7:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)partyItem,
        *(System_String_o **)&selectMember,
        (int32_t)setupInfo,
        (int64_t)questRestrictionInfo,
        (System_String_o *)callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this->fields.partyItem = partyItem;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      this->fields.openSelectMember = selectMember;
      goto LABEL_21;
    case 5:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        tutorialMode,
        (int32_t)partyItem,
        *(System_String_o **)&selectMember,
        (int32_t)setupInfo,
        (int64_t)questRestrictionInfo,
        (System_String_o *)callback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      this->fields.partyItem = partyItem;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
LABEL_21:
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v31);
      PartyOrganizationChangeMenu__SetInput(this, 0, v89);
      PartyOrganizationChangeMenu__SetupButton(this, 1, v90);
      PartyOrganizationChangeMenu__EndOpen(this, v91);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeMenu__SetInput(PartyOrganizationChangeMenu_o *this, bool isInput, const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  PartyOrganizationChangeMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
LABEL_7:
    sub_1C71608(this, isInput);
  v4 = this;
  v5 = 0;
  v6 = isInput;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C71610(this);
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
void PartyOrganizationChangeMenu__SetItem(
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
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x5

  if ( (byte_4CC2D34 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnClickItem__);
    sub_1C713B0(&Method_PartyOrganizationChangeMenu_OnModifyItem__);
    byte_4CC2D34 = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0) )
  {
LABEL_11:
    sub_1C71608(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  v7 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C71610(partyListViewIndicator);
    partyItem = this->fields.partyItem;
    v10 = partyOrganizationChangeObjectList->m_Items[v7];
    v11 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_1C715FC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    PartyOrganizationChangeObject_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_OnClickItem__,
      v12);
    v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_OnModifyItem__, 0);
    if ( v10 )
    {
      PartyOrganizationChangeObject__SetItem(v10, partyItem, v7, v11, v13, v14);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v7;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeMenu__SetupButton(
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

  if ( (byte_4CC2D38 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeMenu_TypeInfo);
    sub_1C713B0(&QuestInformationComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_17689/*"buttontxt_formation_20"*/);
    byte_4CC2D38 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
      goto LABEL_8;
    partyRemoveButton = this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_45;
    if ( partyRemoveButton->fields.isFixedMyServantSingle || QuestRestrictionInfo__IsUseEventDeck(partyRemoveButton, 0) )
    {
LABEL_8:
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_45;
      ((void (__fastcall *)(QuestRestrictionInfo_o *, __int64, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
        partyRemoveButton,
        3,
        isMove,
        partyRemoveButton->klass[1]._1.implementedInterfaces);
    }
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  setupInfo = this->fields.setupInfo;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0);
  if ( !partyRemoveButton )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, this->fields.setupInfo != 0, 0);
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  ((void (__fastcall *)(QuestRestrictionInfo_o *, _QWORD, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
    partyRemoveButton,
    0,
    isMove,
    partyRemoveButton->klass[1]._1.implementedInterfaces);
  partyRemoveButton = (QuestRestrictionInfo_o *)PartyOrganizationChangeMenu__IsHintDialog(this, v8);
  if ( !this->fields.hintDialogButton )
    goto LABEL_45;
  v9 = (char)partyRemoveButton;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                  0);
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
    partyRemoveButton = (QuestRestrictionInfo_o *)System_Convert__ToInt32_65085040(setupInfo != 0, 0);
    if ( LAYOUT_POS_X_HINT )
    {
      if ( (unsigned int)partyRemoveButton >= LODWORD(LAYOUT_POS_X_HINT->max_length) )
        sub_1C71610(partyRemoveButton);
      v13 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
      GameObjectExtensions__SetLocalPositionX(v10, (float)v13 - OffsetX, 0);
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.hintDialogButton;
      if ( partyRemoveButton )
      {
        partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)partyRemoveButton,
                                                        0);
        if ( partyRemoveButton )
        {
          v15 = 1;
          goto LABEL_28;
        }
      }
    }
LABEL_45:
    sub_1C71608(partyRemoveButton, isMove);
  }
  if ( !partyRemoveButton )
    goto LABEL_45;
  v15 = 0;
LABEL_28:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v15, 0);
  if ( this->fields.menuKind == 8 || (v16 = this->fields.questRestrictionInfo) == 0 )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v16->fields.questId;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0);
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_45;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0);
  if ( !partyRemoveButton )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_40596552(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17689/*"buttontxt_formation_20"*/, 0);
  }
}


void PartyOrganizationChangeMenu__add_callbackFunc(
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

  if ( (byte_4CC2D32 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_4CC2D32 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeMenu_o *)sub_1C719A4(v8);
  PartyOrganizationChangeMenu__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationChangeMenu__remove_callbackFunc(
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

  if ( (byte_4CC2D33 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_4CC2D33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeMenu_o *)sub_1C719A4(v8);
  PartyOrganizationChangeMenu__IsThroughSelect(v11, v12);
}


void PartyOrganizationChangeMenu_CallbackFunc___ctor(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA0FFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0FA4;
}


System_IAsyncResult_o *PartyOrganizationChangeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = n;
  v12 = result;
  if ( (byte_4CC2D41 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&PartyOrganizationChangeMenu_ResultKind_TypeInfo);
    byte_4CC2D41 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationChangeMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void PartyOrganizationChangeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void PartyOrganizationChangeMenu_CallbackFunc__Invoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    this->fields.method);
}