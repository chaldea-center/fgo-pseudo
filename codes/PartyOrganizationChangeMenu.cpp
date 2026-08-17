void PartyOrganizationChangeMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  int v9; // w8
  __int64 v10; // x1
  MissionNaviTransitionBoardItem_o *static_fields; // x0

  if ( (byte_596BF78 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&PartyOrganizationChangeMenu_TypeInfo);
    byte_596BF78 = 1;
  }
  v1 = sub_2213B20(int___TypeInfo, 2);
  if ( !v1 )
    sub_2213CDC(0, v2);
  v9 = *(_DWORD *)(v1 + 24);
  v10 = v1;
  if ( !v9 || (*(_DWORD *)(v1 + 32) = 45, v9 == 1) )
    sub_2213CE4(v1);
  PartyOrganizationChangeMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = (struct System_Int32_array *)v1;
  static_fields = (MissionNaviTransitionBoardItem_o *)PartyOrganizationChangeMenu_TypeInfo->static_fields;
  *(_DWORD *)(v10 + 36) = 145;
  sub_2213A04(static_fields, v10, v3, v4, v5, v6, v7, v8);
}


void PartyOrganizationChangeMenu___ctor(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationChangeObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_596BF77 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&PartyOrganizationChangeObject___TypeInfo);
    byte_596BF77 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationChangeObject_array *)sub_2213B20(
                                                       PartyOrganizationChangeObject___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.partyOrganizationChangeObjectList = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partyOrganizationChangeObjectList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v12, v13);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeMenu__Callback(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationChangeMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, *(System_String_o **)&n, (System_String_o *)method, v4, v5, v6, v7);
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
    sub_2213CDC(mainDeckBase, method);
  }
  v5 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(mainDeckBase);
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

  PartyOrganizationChangeMenu__Close_40900604(this, 0, v2);
}


void PartyOrganizationChangeMenu__Close_40900604(
        PartyOrganizationChangeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BF6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_EndClose__);
    byte_596BF6F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


void PartyOrganizationChangeMenu__EndClose(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationChangeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_2213CDC(tutorialMaskBase, method);
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
    sub_2213CDC(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 5, 1, v4);
}


void PartyOrganizationChangeMenu__EndOpen(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *v9; // x0
  struct System_Action_o *v10; // x20
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t v14; // w8
  int32_t v15; // w2
  PartyOrganizationChangeMenu_o *v16; // x0
  int32_t v17; // w1
  int32_t mode; // w8
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_CallbackFunc_o *v21; // x22
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  __int64 v24; // x1
  __int64 v25; // x2
  FSOffset_o *tutorialAddOffsetFS; // x20
  UnityEngine_Vector2_o v27; // kr00_8
  Il2CppObject *v28; // x20
  System_Action_o *v29; // x21
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 openSelectMember; // x9
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v39; // x21
  System_Action_o *v40; // x22
  MissionNaviTransitionBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v42; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v46; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v47; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596BF6E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10408/*"OpenServantDetail"*/);
    sub_2213A60(&StringLiteral_14153/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_596BF6E = 1;
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
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v32, v33);
        AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 1, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_14153/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0);
        v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v40, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0);
        if ( !Instance )
          goto LABEL_47;
        v46.fields.m_Width = 190.0;
        v45.fields.x = AddOffset.fields.x + 422.0;
        v45.fields.y = AddOffset.fields.y + -231.0;
        v46.fields.m_XMin = AddOffset.fields.x + 329.0;
        v46.fields.m_YMin = AddOffset.fields.y + -291.0;
        v46.fields.m_Height = 90.0;
        CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v39, v45, v46, 0.0, 0, -1, v40, 0);
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
        v21 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_2213CCC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
        PartyOrganizationChangeObject_CallbackFunc___ctor(
          v21,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__,
          v22);
        if ( !tutorialPartyOrganizationChangeEmptyObject )
          goto LABEL_47;
        PartyOrganizationChangeObject__SetItem(tutorialPartyOrganizationChangeEmptyObject, partyItem, 1, v21, 0, v23);
        tutorialAddOffsetFS = this->fields.tutorialAddOffsetFS;
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v24, v25);
        v27 = FSUtility__GetAddOffset(tutorialAddOffsetFS, 1, 0);
        v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v29, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0);
        if ( !v28 )
          goto LABEL_47;
        v47.fields.m_YMin = v27.fields.y + -205.0;
        v47.fields.m_XMin = v27.fields.x + -320.0;
        v47.fields.m_Height = 380.0;
        v44.fields.y = v27.fields.y + 70.0;
        v44.fields.x = v27.fields.x + -245.0;
        v47.fields.m_Width = 150.0;
        CommonUI__OpenTutorialArrowMark((CommonUI_o *)v28, v44, 0.0, v47, v29, 0);
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
    p_openCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
    v42 = openCallbackFunc;
    if ( openCallbackFunc )
    {
      p_openCallbackFunc->klass = 0;
      sub_2213A04(p_openCallbackFunc, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, intptr_t))v42->fields.invoke_impl)(v42->fields.method_code, v42->fields.method);
    }
    return;
  }
  v9 = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
  v10 = this->fields.openCallbackFunc;
  this->fields.state = 3;
  if ( v10 )
  {
    v9->klass = 0;
    sub_2213A04(v9, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
  if ( !this->fields.callbackFunc )
    return;
  tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyItem;
  if ( !tutorialMaskBase )
LABEL_47:
    sub_2213CDC(tutorialMaskBase, method);
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
          sub_2213CE4(tutorialMaskBase);
        tutorialMaskBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[openSelectMember];
        if ( tutorialMaskBase )
        {
          UnityEngine_Component__SendMessage_83422876(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (System_String_o *)StringLiteral_10408/*"OpenServantDetail"*/,
            0);
          return;
        }
      }
      goto LABEL_47;
    case 2:
      v15 = this->fields.openSelectMember;
      v16 = this;
      v17 = 6;
      goto LABEL_26;
    case 1:
      v15 = this->fields.openSelectMember;
      v16 = this;
      v17 = 5;
LABEL_26:
      this->fields.state = 3;
      PartyOrganizationChangeMenu__Callback(v16, v17, v15, v13);
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
    sub_2213CDC(0, method);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  PartyOrganizationChangeMenu__ClearItem(this, method);
  this->fields.partyItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, 0, v3, v4, v5, v6, v7, v8);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyOrganizationChangeMenu__IsHintDialog(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w19
  int32_t questPhase; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596BF76 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BF76 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  entity = 0;
  v14 = 0;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v14, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_2213CDC(Master_object, v8);
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
      sub_2213CE4(partyItem);
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
    sub_2213CDC(partyItem, method);
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

  if ( (byte_596BF71 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickDecide__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF71 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 5 )
    {
      this->fields.state = 8;
      v5 = Method_PartyOrganizationChangeMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeMenu_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__,
        0);
      if ( !Instance )
        sub_2213CDC(v9, v10);
      CommonUI__CloseTutorialNotificationDialogArrow_37396472((CommonUI_o *)Instance, v8, 0);
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

  if ( (byte_596BF75 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF75 = 1;
  }
  if ( this->fields.state == 7 && this->fields.mode == 4 )
  {
    this->fields.state = 8;
    v5 = Method_PartyOrganizationChangeMenu_OnClickEmptyItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickEmptyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeMenu_OnClickEmptyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__,
      0);
    if ( !Instance )
      sub_2213CDC(v9, v10);
    CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationChangeMenu__OnClickInfomation(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_596BF72 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    byte_596BF72 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BF73 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    byte_596BF73 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BF74 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    byte_596BF74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeMenu_OnClickQuestInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
      sub_2213CDC(0, v4);
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
  int32_t state; // w8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *explanationLabel; // x22
  const MethodInfo *v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  UIRangeLabel_o *titleExplanationLabel; // x21
  System_String_o *v53; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  System_Action_o *v56; // x20
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x2
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  System_String_o *message; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596BF6D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_EndOpen__);
    sub_2213A60(&StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_2213A60(&StringLiteral_10703/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/);
    byte_596BF6D = 1;
  }
  state = this->fields.state;
  message = 0;
  if ( state > 4 )
  {
    if ( state == 5 )
    {
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        *(System_String_o **)&tutorialMode,
        (System_String_o *)partyItem,
        selectMember,
        (int32_t)setupInfo,
        (bool)questRestrictionInfo,
        (bool)callback);
      this->fields.openCallbackFunc = openCallback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      this->fields.partyItem = partyItem;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      goto LABEL_26;
    }
    if ( state != 7 )
      return;
LABEL_22:
    this->fields.mode = tutorialMode;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&tutorialMode,
      (System_String_o *)partyItem,
      selectMember,
      (int32_t)setupInfo,
      (bool)questRestrictionInfo,
      (bool)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    this->fields.partyItem = partyItem;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
      (int32_t)partyItem,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    this->fields.openSelectMember = selectMember;
LABEL_26:
    PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v69);
    PartyOrganizationChangeMenu__SetInput(this, 0, v94);
    PartyOrganizationChangeMenu__SetupButton(this, 1, v95);
    PartyOrganizationChangeMenu__EndOpen(this, v96);
    return;
  }
  if ( (unsigned int)(state - 2) < 2 )
    goto LABEL_22;
  if ( !state )
  {
    this->fields.menuKind = kind;
    this->fields.mode = tutorialMode;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&tutorialMode,
      (System_String_o *)partyItem,
      selectMember,
      (int32_t)setupInfo,
      (bool)questRestrictionInfo,
      (bool)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this->fields.partyItem = partyItem;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
      (int32_t)partyItem,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    this->fields.openSelectMember = selectMember;
    this->fields.setupInfo = setupInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
      (int32_t)setupInfo,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = this->fields.explanationBase;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10703/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, 0);
        if ( explanationLabel )
        {
          UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
          gameObject = this->fields.titleExplanationBase;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
            if ( !questRestrictionInfo
              || !QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0) )
            {
              goto LABEL_19;
            }
            gameObject = this->fields.titleExplanationBase;
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 1, 0);
              titleExplanationLabel = this->fields.titleExplanationLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
              v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(v53, message, 0);
              if ( titleExplanationLabel )
              {
                UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
LABEL_19:
                PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v49);
                PartyOrganizationChangeMenu__SetInput(this, 0, v54);
                PartyOrganizationChangeMenu__SetupButton(this, 0, v55);
                this->fields.state = 1;
                v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v56, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpen__, 0);
                BaseMenu__Open((BaseMenu_o *)this, v56, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(gameObject, v45);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeMenu__SetInput(PartyOrganizationChangeMenu_o *this, bool isInput, const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  PartyOrganizationChangeMenu_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9

  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
LABEL_7:
    sub_2213CDC(this, isInput);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (PartyOrganizationChangeMenu_o *)partyOrganizationChangeObjectList->m_Items[v6];
    if ( this )
    {
      PartyOrganizationChangeObject__SetInput((PartyOrganizationChangeObject_o *)this, isInput, method);
      partyOrganizationChangeObjectList = v4->fields.partyOrganizationChangeObjectList;
      ++v6;
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
  PartyListViewItem_o *partyItem; // x22
  PartyOrganizationChangeObject_o *v10; // x21
  PartyOrganizationChangeObject_CallbackFunc_o *v11; // x23
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x5

  if ( (byte_596BF6C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnClickItem__);
    sub_2213A60(&Method_PartyOrganizationChangeMenu_OnModifyItem__);
    byte_596BF6C = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0) )
  {
LABEL_11:
    sub_2213CDC(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  v7 = 0;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_2213CE4(partyListViewIndicator);
    partyItem = this->fields.partyItem;
    v10 = partyOrganizationChangeObjectList->m_Items[v7];
    v11 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_2213CCC(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    PartyOrganizationChangeObject_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_OnClickItem__,
      v12);
    v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  struct EventUpValSetupInfo_o *setupInfo; // x21
  const MethodInfo *v8; // x1
  bool v9; // w8
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  PartyOrganizationChangeMenu_c *v13; // x8
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  __int64 v15; // x2
  int v16; // w21
  float OffsetX; // s0
  bool v18; // w1
  __int64 v19; // x2
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  __int64 v23; // x1
  __int64 v24; // x2
  BalanceConfig_c *v25; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v27; // x1
  __int64 v28; // x2
  UISprite_o *classInfoSprite; // x19

  if ( (byte_596BF70 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&PartyOrganizationChangeMenu_TypeInfo);
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&StringLiteral_18443/*"buttontxt_formation_20"*/);
    byte_596BF70 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
      goto LABEL_8;
    partyRemoveButton = this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_46;
    if ( partyRemoveButton->fields.isFixedMyServantSingle || QuestRestrictionInfo__IsUseEventDeck(partyRemoveButton, 0) )
    {
LABEL_8:
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_46;
      ((void (__fastcall *)(QuestRestrictionInfo_o *, __int64, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
        partyRemoveButton,
        3,
        isMove,
        partyRemoveButton->klass[1]._1.implementedInterfaces);
    }
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_46;
  setupInfo = this->fields.setupInfo;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0);
  if ( !partyRemoveButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, this->fields.setupInfo != 0, 0);
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_46;
  ((void (__fastcall *)(QuestRestrictionInfo_o *, _QWORD, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
    partyRemoveButton,
    0,
    isMove,
    partyRemoveButton->klass[1]._1.implementedInterfaces);
  v9 = PartyOrganizationChangeMenu__IsHintDialog(this, v8);
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.hintDialogButton;
  if ( v9 )
  {
    if ( partyRemoveButton )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)partyRemoveButton, 0);
      v13 = PartyOrganizationChangeMenu_TypeInfo;
      if ( !*(&PartyOrganizationChangeMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationChangeMenu_TypeInfo, v10, v11);
        v13 = PartyOrganizationChangeMenu_TypeInfo;
      }
      LAYOUT_POS_X_HINT = v13->static_fields->LAYOUT_POS_X_HINT;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10, v11);
      partyRemoveButton = (QuestRestrictionInfo_o *)System_Convert__ToInt32_76657380(setupInfo != 0, 0);
      if ( LAYOUT_POS_X_HINT )
      {
        if ( (unsigned int)partyRemoveButton >= LODWORD(LAYOUT_POS_X_HINT->max_length) )
          sub_2213CE4(partyRemoveButton);
        v16 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton];
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, isMove, v15);
        OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)v16 - OffsetX, 0);
        partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.hintDialogButton;
        if ( partyRemoveButton )
        {
          partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)partyRemoveButton,
                                                          0);
          if ( partyRemoveButton )
          {
            v18 = 1;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(partyRemoveButton, isMove);
  }
  if ( !partyRemoveButton )
    goto LABEL_46;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0);
  if ( !partyRemoveButton )
    goto LABEL_46;
  v18 = 0;
LABEL_29:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v18, 0);
  if ( this->fields.menuKind == 8 || (v20 = this->fields.questRestrictionInfo) == 0 )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v20->fields.questId;
    if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, isMove, v19);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0);
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_46;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0);
  if ( !partyRemoveButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0);
  v25 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23, v24);
    v25 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v25->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23, v24);
  if ( CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27, v28);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_18443/*"buttontxt_formation_20"*/, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeMenu_o *v13; // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF6A & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_596BF6A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeMenu_o *)sub_221405C(v8, PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationChangeMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BF6B & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    byte_596BF6B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeMenu_o *)sub_221405C(v8, PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationChangeMenu__IsThroughSelect(v13, v14);
}


void PartyOrganizationChangeMenu_CallbackFunc___ctor(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200427C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004224;
}


System_IAsyncResult_o *PartyOrganizationChangeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = n;
  if ( (byte_596BF79 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeMenu_ResultKind_TypeInfo);
    byte_596BF79 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationChangeMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void PartyOrganizationChangeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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