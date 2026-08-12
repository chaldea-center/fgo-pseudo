void PartyOrganizationListViewManager___ctor(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PartyOrganizationListViewManager__CallbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8

  callbackFuncModify = this->fields.callbackFuncModify;
  if ( callbackFuncModify )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFuncModify->fields.invoke_impl)(
      callbackFuncModify->fields.method_code,
      callbackFuncModify->fields.method);
}


void PartyOrganizationListViewManager__CreateList(
        PartyOrganizationListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        System_Action_o *modifyCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v20; // w21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  struct UILabel_o *explanationLabel; // x21
  __int64 *v42; // x8
  System_String_o *v43; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_array *v47; // x22
  System_Text_StringBuilder_o *v48; // x21
  __int64 v49; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v52; // x22
  System_String_o *v53; // x23
  Il2CppObject *v54; // x0
  System_String_o *v55; // x1
  UILabel_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  int32_t v59; // w1
  __int64 v60; // x1
  __int64 v61; // x2
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v63; // x0
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596C07A & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_2213A60(&StringLiteral_10740/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/);
    sub_2213A60(&StringLiteral_10742/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/);
    sub_2213A60(&StringLiteral_10739/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10741/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/);
    sub_2213A60(&StringLiteral_10553/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    byte_596C07A = 1;
  }
  message = 0;
  this->fields.menuKind = menuKind;
  this->fields.partyItem = partyItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    (System_String_o *)partyItem,
    (System_String_o *)modifyCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.callbackFuncModify = modifyCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncModify,
    (int32_t)modifyCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_15;
  v20 = 0;
  while ( v20 < dropObjectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dropObjectList,
             v20,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( Item
      && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
          Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v23 = Item;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
    dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.partyItem;
    if ( dropObjectList )
    {
      dropObjectList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetMember(
                                                                      (PartyListViewItem_o *)dropObjectList,
                                                                      v20,
                                                                      0);
      if ( v23 )
      {
        ((void (__fastcall *)(Il2CppObject *, System_Collections_Generic_List_object__o *, const MethodInfo *))v23->klass->vtable[5].methodPtr)(
          v23,
          dropObjectList,
          v23->klass->vtable[5].method);
        v23[2].monitor = this;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23[2].monitor, (int32_t)this, v24, v25, v26, v27, v28, v29);
        dropDragPrefab = this->fields.dropDragPrefab;
        v23[3].klass = (Il2CppClass *)dropDragPrefab;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23[3], (int32_t)dropDragPrefab, v31, v32, v33, v34, v35, v36);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v20;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_15;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.explanationBase;
  if ( !dropObjectList )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 1, 0);
  if ( !partyItem )
    goto LABEL_15;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_42;
  if ( QuestRestrictionInfo__IsFixedSupportPosition(questRestrictionInfo, 0) )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
    v42 = &StringLiteral_10742/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_23:
    v43 = (System_String_o *)*v42;
LABEL_45:
    dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(v43, 0);
    if ( !explanationLabel )
      goto LABEL_15;
    v55 = (System_String_o *)dropObjectList;
    v56 = explanationLabel;
    goto LABEL_47;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0) )
  {
LABEL_42:
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v37);
    v43 = (System_String_o *)StringLiteral_10739/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
    goto LABEL_45;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
    v42 = &StringLiteral_10740/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_23;
  }
  v47 = PartyOrganizationServantSwapExplanationFixedServantText;
  v48 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v48, 0);
  max_length = v47->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v49);
        dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10553/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                                        0);
        if ( !v48 )
          goto LABEL_15;
        dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_75735064(
                                                                        v48,
                                                                        (System_String_o *)dropObjectList,
                                                                        0);
        if ( i >= LODWORD(v47->max_length) )
          goto LABEL_65;
      }
      else
      {
        if ( !(_DWORD)max_length )
LABEL_65:
          sub_2213CE4(dropObjectList);
        if ( !v48 )
          goto LABEL_15;
      }
      dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_75735064(
                                                                      v48,
                                                                      v47->m_Items[i],
                                                                      0);
      LODWORD(max_length) = v47->max_length;
    }
  }
  v52 = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v49);
  dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10741/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/,
                                                                  0);
  if ( !v48 )
    goto LABEL_15;
  v53 = (System_String_o *)dropObjectList;
  v54 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v48->klass->vtable._3_ToString.methodPtr)(
                          v48,
                          v48->klass->vtable._3_ToString.method);
  dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Format(v53, v54, 0);
  if ( !v52 )
    goto LABEL_15;
  v55 = (System_String_o *)dropObjectList;
  v56 = v52;
LABEL_47:
  UILabel__set_text(v56, v55, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v57, v58);
  dropObjectList = (System_Collections_Generic_List_object__o *)FSUtility__IsOverScope(0);
  if ( !this->fields.explanationLabel )
    goto LABEL_15;
  v59 = ((unsigned __int8)dropObjectList & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v59, 0, 0);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.titleExplanationBase;
  if ( !dropObjectList )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 0, 0);
  if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0) )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.titleExplanationBase;
    if ( dropObjectList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 1, 0);
      titleExplanationLabel = this->fields.titleExplanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60, v61);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
      dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Concat_75651716(v63, message, 0);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)dropObjectList, 0, 1, 0, 0, 0);
        goto LABEL_61;
      }
    }
LABEL_15:
    sub_2213CDC(dropObjectList, v18);
  }
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PartyOrganizationListViewManager__DestroyList(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596C07B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_596C07B = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v22, 0, sizeof(v22));
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      dropObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v22.fields._current
        && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
            v22.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v22.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v22.fields._current;
        else
          current = 0;
      }
      else
      {
        current = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v14 )
      {
        if ( !current )
          sub_2213CDC(v14, v15);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.callbackFuncModify = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncModify, 0, v2, v3, v4, v5, v6, v7);
  this->fields.partyItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, 0, v16, v17, v18, v19, v20, v21);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


void PartyOrganizationListViewManager__EndCloseShowEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void PartyOrganizationListViewManager__EndCloseShowServant(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void PartyOrganizationListViewManager__EndCloseShowServantQuestJump(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C088 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C088 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_596C08A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C08A = 1;
  }
  if ( isDecide )
  {
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callbackFuncModify->fields.invoke_impl)(
        callbackFuncModify->fields.method_code,
        callbackFuncModify->fields.method,
        method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_596C086 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C086 = 1;
  }
  if ( isDecide )
  {
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callbackFuncModify->fields.invoke_impl)(
        callbackFuncModify->fields.method_code,
        callbackFuncModify->fields.method,
        method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596C087 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C087 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0);
    if ( !Instance )
      sub_2213CDC(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *dragObj,
        ListViewObject_o *dropObj,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 Index; // x0
  __int64 v12; // x1
  unsigned int v13; // w20
  unsigned int v14; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)dropObj,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !dragObj || (Index = ListViewObject__get_Index(dragObj, 0), !dropObj) )
      sub_2213CDC(Index, v12);
    v13 = Index;
    v14 = ListViewObject__get_Index(dropObj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      v13,
      v14,
      callbackFunc->fields.method);
  }
}


PartyOrganizationListViewItem_o *PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C07C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C07C = 1;
  }
  result = (PartyOrganizationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyOrganizationListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


PartyListViewItem_o *PartyOrganizationListViewManager__GetPartyItem(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


bool PartyOrganizationListViewManager__IsCanDrag(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.initMode == 2;
}


bool PartyOrganizationListViewManager__IsDropDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596C08C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C08C = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info, method);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_2213CDC(this, info);
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v6, 0) != 0;
}


bool PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596C08B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C08B = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info, method);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_2213CDC(this, info);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v6, (const MethodInfo *)info) != 0;
}


void PartyOrganizationListViewManager__ItemDragEnd(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  if ( this->fields.initMode == 8 )
  {
    this->fields.initMode = 2;
    ListViewManager__ItemDragEnd((ListViewManager_o *)this, 0);
  }
}


void PartyOrganizationListViewManager__ItemDragStart(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  if ( this->fields.initMode == 2 )
  {
    this->fields.initMode = 8;
    ListViewManager__ItemDragStart((ListViewManager_o *)this, 0);
  }
}


void PartyOrganizationListViewManager__ModifyItem(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  PartyOrganizationListViewManager__RequestListObject_41045512(this, 9, v2);
  PartyOrganizationListViewManager__RequestDropObject_41045952(this, 10, v4);
}


void PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v10, v11);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        Index,
        0,
        callbackFunc->fields.method);
    }
  }
}


void PartyOrganizationListViewManager__OnClickListDropEquipDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v13; // x22
  __int64 v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  bool IsNpc; // w21
  Il2CppObject *v19; // x22
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v21; // x23
  int32_t v22; // w1

  v4 = this;
  if ( (byte_596C089 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndShowEquip__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C089 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( !obj )
      goto LABEL_31;
    linkItem = obj->fields.linkItem;
    if ( !linkItem
      || (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
    {
LABEL_8:
      v7 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0) >= 1 )
    {
      v9 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      v4->fields.initMode = 7;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0);
      v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_PartyOrganizationListViewManager_EndShowEquip__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v13, 0, 0, 0);
        return;
      }
      goto LABEL_31;
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)linkItem, 0) )
      goto LABEL_8;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0);
    if ( !this )
      goto LABEL_31;
    if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
      goto LABEL_8;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)linkItem, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&EquipSvtId.fields.fakeValue,
        v14);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0) < 1 )
      goto LABEL_8;
    v16 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    v4->fields.initMode = 7;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0);
    if ( !this
      || (IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0),
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1((PartyOrganizationListViewItem_o *)linkItem, 0),
          v21 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v21,
            (Il2CppObject *)v4,
            Method_PartyOrganizationListViewManager_EndShowEquip__,
            0),
          !v19) )
    {
LABEL_31:
      sub_2213CDC(this, obj);
    }
    if ( IsNpc )
      v22 = 19;
    else
      v22 = 14;
    CommonUI__OpenServantEquipStatusDialog_37388712((CommonUI_o *)v19, v22, EquipTarget1, v21, 0, 0);
  }
}


void PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v10, v11);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        0,
        Index,
        0,
        callbackFunc->fields.method);
    }
  }
}


void PartyOrganizationListViewManager__OnClickListDropServantDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  FollowerInfo_o *followerInfo; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *v12; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v20; // x21
  int32_t index; // w20
  bool v22; // zf
  CommonUI_o *v23; // x22
  ServantStatusDialog_FormationEndDelegate_o *v24; // x23
  ServantStatusDialog_EndDelegate_o *v25; // x23

  v4 = this;
  if ( (byte_596C085 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_EndShowServant__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C085 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
LABEL_8:
        v7 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
        return;
      }
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        v15 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v22 = menuKind == 8;
          v23 = (CommonUI_o *)Instance;
          if ( v22 )
          {
            v24 = (ServantStatusDialog_FormationEndDelegate_o *)sub_2213CCC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v24,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0);
            if ( v23 )
            {
              CommonUI__OpenServantStatusDialog_37382388(v23, 1, v20, index, v24, 0, 0, 0);
              return;
            }
          }
          else
          {
            v25 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v25,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0);
            if ( v23 )
            {
              CommonUI__OpenServantStatusDialog(v23, 1, v20, index, v25, 0, 0, 0);
              return;
            }
          }
        }
      }
      else
      {
        followerInfo = linkItem->fields.followerInfo;
        if ( !followerInfo
          || FollowerInfo__get_IsNpc(followerInfo, 0)
          || PartyOrganizationListViewItem__get_ServantId(linkItem, 0) < 1 )
        {
          goto LABEL_8;
        }
        v10 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_2213A78(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        v4->fields.initMode = 6;
        v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0);
        v14 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v14,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0);
        if ( v12 )
        {
          CommonUI__OpenServantStatusDialog_37385604((CommonUI_o *)v12, 5, ServantLeader, v14, 0);
          return;
        }
      }
    }
    sub_2213CDC(this, obj);
  }
}


void PartyOrganizationListViewManager__OnClickListView(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationListViewManager__OnMoveEnd(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596C084 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C084 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void PartyOrganizationListViewManager__RequestDropObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  PartyOrganizationListViewDropObject_c *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C081 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_596C081 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v17, 0, sizeof(v17));
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      dropObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v17 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( v17.fields._current )
      {
        v8 = PartyOrganizationListViewDropObject_TypeInfo;
        naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v17.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (PartyOrganizationListViewDropObject_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v14 = sub_221405C(v17.fields._current, PartyOrganizationListViewDropObject_TypeInfo, v9, v10);
LABEL_17:
          sub_2213CDC(v14, v15);
        }
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_40966472(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v13,
          delay,
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void PartyOrganizationListViewManager__RequestDropObject_41045952(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  PartyOrganizationListViewDropObject_c *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C082 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_596C082 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v15, 0, sizeof(v15));
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      dropObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v15 = v14;
    v14.fields._list = 0;
    *(_QWORD *)&v14.fields._index = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( v15.fields._current )
      {
        v6 = PartyOrganizationListViewDropObject_TypeInfo;
        naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (PartyOrganizationListViewDropObject_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v12 = sub_221405C(v15.fields._current, PartyOrganizationListViewDropObject_TypeInfo, v7, v8);
LABEL_17:
          sub_2213CDC(v12, v13);
        }
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_40966600(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v11,
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void PartyOrganizationListViewManager__RequestInto(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1

  if ( (byte_596C083 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C083 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_2213CDC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  v9 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v9,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      PartyOrganizationListViewObject__Init_41050252((PartyOrganizationListViewObject_o *)Item, 4, v11, 0.1, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v9;
  }
  while ( v9 < v7->fields._size );
  if ( !v8 )
  {
LABEL_12:
    v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, 0.0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__RequestListObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C07F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_596C07F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      PartyOrganizationListViewObject__Init_41050252(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__RequestListObject_41045512(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C080 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_596C080 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      PartyOrganizationListViewObject__Init_41050812((PartyOrganizationListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v6; // w21
  __int64 naturalAligment; // x10

  if ( (byte_596C08D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_596C08D = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_10:
    sub_2213CDC(dropObjectList, isDisp);
  v6 = 0;
  while ( v6 < dropObjectList->fields._size )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    dropObjectList,
                                                                    v6,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( dropObjectList )
    {
      naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
      if ( dropObjectList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyOrganizationListViewDropObject_c *)dropObjectList->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__SetDispSwapGuide(
          (PartyOrganizationListViewDropObject_o *)dropObjectList,
          isDisp,
          0);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v6;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void PartyOrganizationListViewManager__SetMode(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        PartyOrganizationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_41048784(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__SetMode_41048784(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21
  Il2CppObject *v11; // x22
  System_Action_o *v12; // x23
  const MethodInfo *v13; // x3
  int32_t v14; // w20
  Il2CppObject *v15; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x10
  int32_t v18; // w20
  int32_t v19; // w1
  int m_CancellationTokenSource; // w8
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w21
  Il2CppObject *v23; // x22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w20
  Il2CppObject *Item; // x21
  System_Action_o *v28; // x22
  __int64 naturalAligment; // x10
  int v30; // w8
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w21
  Il2CppObject *v33; // x22
  System_Action_o *v34; // x23
  const MethodInfo *v35; // x3
  int32_t v36; // w20
  Il2CppObject *v37; // x21
  System_Action_o *v38; // x22
  __int64 v39; // x10
  const MethodInfo *v40; // x2

  v4 = this;
  if ( (byte_596C07E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationListViewManager_o *)sub_2213A60(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_596C07E = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  v4->fields.initMode = mode;
  if ( !dropObjectList )
    goto LABEL_49;
  v4->fields.callbackCount = dropObjectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 2, 0);
  if ( mode <= 2 )
  {
    if ( mode == 1 )
    {
      v19 = 2;
      v18 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      v18 = 4;
      v19 = 3;
    }
    PartyOrganizationListViewManager__RequestListObject_41045512(v4, v19, v7);
    PartyOrganizationListViewManager__RequestDropObject_41045952(v4, v18, v40);
    return;
  }
  switch ( mode )
  {
    case 3:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_49;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v21 = (System_Collections_Generic_List_object__o *)this;
      if ( m_CancellationTokenSource < 1 )
      {
LABEL_29:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_49;
        v26 = 0;
        while ( v26 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v26,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
          if ( Item )
          {
            naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
            if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_40966472(
                (PartyOrganizationListViewDropObject_o *)Item,
                2,
                v28,
                0.1,
                0);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v26;
              if ( this )
                continue;
            }
          }
          goto LABEL_49;
        }
        return;
      }
      v22 = 0;
      v4->fields.callbackCount += m_CancellationTokenSource;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_object___get_Item(
                v21,
                v22,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !v23 )
          goto LABEL_49;
        PartyOrganizationListViewObject__Init_41050252((PartyOrganizationListViewObject_o *)v23, 4, v24, 0.1, v25);
        if ( ++v22 >= v21->fields._size )
          goto LABEL_29;
      }
    case 4:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_49;
      v30 = (int)this->fields.m_CancellationTokenSource;
      v31 = (System_Collections_Generic_List_object__o *)this;
      if ( v30 < 1 )
      {
LABEL_42:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_49;
        v36 = 0;
        while ( v36 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v37 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v36,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v38, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
          if ( v37 )
          {
            v39 = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
            if ( v37->klass->_2.naturalAligment >= (unsigned int)v39
              && (PartyOrganizationListViewDropObject_c *)v37->klass->_2.typeHierarchy[v39 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_40966472(
                (PartyOrganizationListViewDropObject_o *)v37,
                2,
                v38,
                0.1,
                0);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v36;
              if ( this )
                continue;
            }
          }
          goto LABEL_49;
        }
        return;
      }
      v32 = 0;
      v4->fields.callbackCount += v30;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_object___get_Item(
                v31,
                v32,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v34, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !v33 )
          break;
        PartyOrganizationListViewObject__Init_41050252((PartyOrganizationListViewObject_o *)v33, 5, v34, 0.1, v35);
        if ( ++v32 >= v31->fields._size )
          goto LABEL_42;
      }
LABEL_49:
      sub_2213CDC(this, *(_QWORD *)&mode);
    case 5:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_49;
      v8 = (int)this->fields.m_CancellationTokenSource;
      v9 = (System_Collections_Generic_List_object__o *)this;
      if ( v8 >= 1 )
      {
        v10 = 0;
        v4->fields.callbackCount += v8;
        do
        {
          v11 = System_Collections_Generic_List_object___get_Item(
                  v9,
                  v10,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
          v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v12, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
          if ( !v11 )
            goto LABEL_49;
          PartyOrganizationListViewObject__Init_41050252((PartyOrganizationListViewObject_o *)v11, 6, v12, 0.1, v13);
        }
        while ( ++v10 < v9->fields._size );
      }
      this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
      if ( !this )
        goto LABEL_49;
      v14 = 0;
      while ( v14 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        v15 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v14,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v16, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( v15 )
        {
          v17 = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
          if ( v15->klass->_2.naturalAligment >= (unsigned int)v17
            && (PartyOrganizationListViewDropObject_c *)v15->klass->_2.typeHierarchy[v17 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          {
            PartyOrganizationListViewDropObject__Init_40966472(
              (PartyOrganizationListViewDropObject_o *)v15,
              2,
              v16,
              0.1,
              0);
            this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
            ++v14;
            if ( this )
              continue;
          }
        }
        goto LABEL_49;
      }
      break;
  }
}


void PartyOrganizationListViewManager__SetMode_41050200(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_41048784(this, mode, v10);
}


void PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_596C07D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    byte_596C07D = 1;
  }
  if ( v4 )
  {
    naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (PartyOrganizationListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
  v7 = UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( !v7 )
  {
    if ( this->fields.initMode == 2 )
    {
      if ( v4 )
      {
        v10 = 3;
LABEL_16:
        PartyOrganizationListViewObject__Init_41048656((PartyOrganizationListViewObject_o *)v4, v10, v9);
        return;
      }
    }
    else if ( v4 )
    {
      v10 = 2;
      goto LABEL_16;
    }
    sub_2213CDC(v7, v8);
  }
}


void PartyOrganizationListViewManager__add_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C072 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_596C072 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v6->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(
                                                v6,
                                                PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                v7,
                                                v8);
  PartyOrganizationListViewManager__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationListViewManager__add_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C074 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C074 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void PartyOrganizationListViewManager__add_callbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFuncModify; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C076 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C076 = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFuncModify, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFuncModify, v6, callbackFuncModify);
    v10 = v9 == (_QWORD)callbackFuncModify;
    callbackFuncModify = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationListViewManager__remove_callbackFuncModify(v11, v12, v13);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C079 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C079 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(
                                 (PartyOrganizationListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596C078 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C078 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


void PartyOrganizationListViewManager__remove_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C073 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_596C073 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v6->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(
                                                v6,
                                                PartyOrganizationListViewManager_CallbackFunc_TypeInfo,
                                                v7,
                                                v8);
  PartyOrganizationListViewManager__add_callbackFunc2(v11, v12, v13);
}


void PartyOrganizationListViewManager__remove_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C075 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C075 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationListViewManager__add_callbackFuncModify(v11, v12, v13);
}


void PartyOrganizationListViewManager__remove_callbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFuncModify; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C077 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C077 = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFuncModify, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFuncModify, v6, callbackFuncModify);
    v10 = v9 == (_QWORD)callbackFuncModify;
    callbackFuncModify = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationListViewManager__get_ObjectList(v11, v12);
}


void PartyOrganizationListViewManager_CallbackFunc___ctor(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
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
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20048DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200487C;
}


System_IAsyncResult_o *PartyOrganizationListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t opt1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  v13 = opt1;
  if ( (byte_596C08E & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewManager_ResultKind_TypeInfo);
    byte_596C08E = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PartyOrganizationListViewManager_CallbackFunc__Invoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t opt1,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    opt1,
    this->fields.method);
}