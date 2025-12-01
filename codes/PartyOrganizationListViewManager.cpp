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
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewItem_o **p_partyItem; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v21; // w22
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v40; // x8
  System_String_o *v41; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v43; // x22
  System_Text_StringBuilder_o *v44; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v47; // x22
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  System_String_o *v50; // x1
  UILabel_o *v51; // x0
  int32_t v52; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v54; // x0
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC2E4D & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C713B0(&StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C713B0(&StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/);
    sub_1C713B0(&StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/);
    sub_1C713B0(&StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/);
    sub_1C713B0(&StringLiteral_10146/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    byte_4CC2E4D = 1;
  }
  message = 0;
  this->fields.menuKind = menuKind;
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    (int32_t)partyItem,
    (int32_t)modifyCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.callbackFuncModify = modifyCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFuncModify,
    (int32_t)modifyCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_15;
  v21 = 0;
  while ( v21 < dropObjectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dropObjectList,
             v21,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( Item
      && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
          Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v24 = Item;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    dropObjectList = (System_Collections_Generic_List_object__o *)*p_partyItem;
    if ( *p_partyItem )
    {
      dropObjectList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetMember(
                                                                      (PartyListViewItem_o *)dropObjectList,
                                                                      v21,
                                                                      0);
      if ( v24 )
      {
        ((void (__fastcall *)(Il2CppObject *, System_Collections_Generic_List_object__o *, const MethodInfo *))v24->klass->vtable[5].methodPtr)(
          v24,
          dropObjectList,
          v24->klass->vtable[5].method);
        v24[2].monitor = this;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v24[2].monitor, (int32_t)this, v25, v26, v27, v28, v29, v30);
        dropDragPrefab = this->fields.dropDragPrefab;
        v24[3].klass = (Il2CppClass *)dropDragPrefab;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v24[3], (int32_t)dropDragPrefab, v32, v33, v34, v35, v36, v37);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v21;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = &StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_23:
    v41 = (System_String_o *)*v40;
LABEL_45:
    dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(v41, 0);
    if ( !explanationLabel )
      goto LABEL_15;
    v50 = (System_String_o *)dropObjectList;
    v51 = explanationLabel;
    goto LABEL_47;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0) )
  {
LABEL_42:
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = (System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
    goto LABEL_45;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = &StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_23;
  }
  v43 = PartyOrganizationServantSwapExplanationFixedServantText;
  v44 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v44, 0);
  max_length = v43->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10146/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                                        0);
        if ( !v44 )
          goto LABEL_15;
        dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_64115684(
                                                                        v44,
                                                                        (System_String_o *)dropObjectList,
                                                                        0);
        if ( i >= LODWORD(v43->max_length) )
          goto LABEL_65;
      }
      else
      {
        if ( !(_DWORD)max_length )
LABEL_65:
          sub_1C71610(dropObjectList);
        if ( !v44 )
          goto LABEL_15;
      }
      dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_64115684(
                                                                      v44,
                                                                      v43->m_Items[i],
                                                                      0);
      LODWORD(max_length) = v43->max_length;
    }
  }
  v47 = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/,
                                                                  0);
  if ( !v44 )
    goto LABEL_15;
  v48 = (System_String_o *)dropObjectList;
  v49 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v44->klass->vtable._3_ToString.methodPtr)(
                          v44,
                          v44->klass->vtable._3_ToString.method);
  dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Format(v48, v49, 0);
  if ( !v47 )
    goto LABEL_15;
  v50 = (System_String_o *)dropObjectList;
  v51 = v47;
LABEL_47:
  UILabel__set_text(v51, v50, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)FSUtility__IsOverScope(0);
  if ( !this->fields.explanationLabel )
    goto LABEL_15;
  v52 = ((unsigned __int8)dropObjectList & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v52, 0, 0);
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
      dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Concat_64031724(v54, message, 0);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)dropObjectList, 0, 1, 0, 0, 0);
        goto LABEL_61;
      }
    }
LABEL_15:
    sub_1C71608(dropObjectList, v19);
  }
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PartyOrganizationListViewManager__DestroyList(PartyOrganizationListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC2E4E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4CC2E4E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      dropObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v21.fields._current
        && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
            v21.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v21.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v21.fields._current;
        else
          current = 0;
      }
      else
      {
        current = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v12 )
      {
        if ( !current )
          sub_1C71608(v12, v13);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.callbackFuncModify = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFuncModify, 0, v2, v3, v4, v5, v6, v7);
  this->fields.partyItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, 0, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4CC2E5B & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC2E5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
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

  if ( (byte_4CC2E5D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2E5D = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0);
  if ( !Instance )
    sub_1C71608(v8, v9);
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

  if ( (byte_4CC2E59 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndCloseShowServant__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2E59 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_1C71608(v8, v9);
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

  if ( (byte_4CC2E5A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2E5A = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0);
    if ( !Instance )
      sub_1C71608(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *dragObj,
        ListViewObject_o *dropObj,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 Index; // x0
  __int64 v12; // x1
  unsigned int v13; // w20
  unsigned int v14; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    0,
    (int32_t)dropObj,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !dragObj || (Index = ListViewObject__get_Index(dragObj, 0), !dropObj) )
      sub_1C71608(Index, v12);
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

  if ( (byte_4CC2E4F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4CC2E4F = 1;
  }
  result = (PartyOrganizationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4CC2E5F & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E5F = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1C71608(this, info);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4CC2E5E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E5E = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1C71608(this, info);
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

  PartyOrganizationListViewManager__RequestListObject_34549592(this, 9, v2);
  PartyOrganizationListViewManager__RequestDropObject_34550044(this, 10, v4);
}


void PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C71608(v10, v11);
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  bool IsNpc; // w22
  Il2CppObject *v18; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v20; // x23
  int32_t v21; // w1

  v4 = this;
  if ( (byte_4CC2E5C & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndShowEquip__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2E5C = 1;
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
        v7 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0) >= 1 )
    {
      v9 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      v4->fields.initMode = 7;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0);
      v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
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
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(EquipSvtId, 0) < 1 )
      goto LABEL_8;
    v15 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C71394(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    v4->fields.initMode = 7;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0);
    if ( !this
      || (IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0),
          v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1((PartyOrganizationListViewItem_o *)linkItem, 0),
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)v4,
            Method_PartyOrganizationListViewManager_EndShowEquip__,
            0),
          !v18) )
    {
LABEL_31:
      sub_1C71608(this, obj);
    }
    if ( IsNpc )
      v21 = 19;
    else
      v21 = 14;
    CommonUI__OpenServantEquipStatusDialog_31456076((CommonUI_o *)v18, v21, EquipTarget1, v20, 0, 0);
  }
}


void PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C71608(v10, v11);
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v21; // x21
  int32_t index; // w20
  bool v23; // zf
  CommonUI_o *v24; // x22
  ServantStatusDialog_FormationEndDelegate_o *v25; // x23
  ServantStatusDialog_EndDelegate_o *v26; // x23

  v4 = this;
  if ( (byte_4CC2E58 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_EndShowServant__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2E58 = 1;
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
          v7 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
        return;
      }
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        v16 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v17 = (System_Reflection_MethodBase_o *)sub_1C71394(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v23 = menuKind == 8;
          v24 = (CommonUI_o *)Instance;
          if ( v23 )
          {
            v25 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C715FC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v25,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog_31449556(v24, 1, v21, index, v25, 0, 0, 0);
              return;
            }
          }
          else
          {
            v26 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v26,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog(v24, 1, v21, index, v26, 0, 0, 0);
              return;
            }
          }
        }
      }
      else
      {
        followerInfo = linkItem->fields.followerInfo;
        if ( !followerInfo || FollowerInfo__get_IsNpc(followerInfo, 0) )
          goto LABEL_8;
        SvtId = PartyOrganizationListViewItem__get_SvtId(linkItem, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0) < 1 )
          goto LABEL_8;
        v11 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C713C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C71394(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
        v4->fields.initMode = 6;
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0);
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0);
        if ( v13 )
        {
          CommonUI__OpenServantStatusDialog_31452968((CommonUI_o *)v13, 5, ServantLeader, v15, 0);
          return;
        }
      }
    }
    sub_1C71608(this, obj);
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
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CC2E57 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E57 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC2E54 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4CC2E54 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      dropObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( v14.fields._current )
      {
        naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (PartyOrganizationListViewDropObject_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v11 = sub_1C719A4(v14.fields._current);
LABEL_17:
          sub_1C71608(v11, v12);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_34468684(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v10,
          delay,
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void PartyOrganizationListViewManager__RequestDropObject_34550044(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC2E55 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4CC2E55 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      dropObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( v12.fields._current )
      {
        naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (PartyOrganizationListViewDropObject_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v9 = sub_1C719A4(v12.fields._current);
LABEL_17:
          sub_1C71608(v9, v10);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_34468812(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v8,
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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

  if ( (byte_4CC2E56 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC2E56 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C71608(ObjectList, v5);
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      PartyOrganizationListViewObject__Init_34554424((PartyOrganizationListViewObject_o *)Item, 4, v11, 0.1, v12);
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC2E52 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4CC2E52 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v8);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v12, v13);
      PartyOrganizationListViewObject__Init_34554424(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__RequestListObject_34549592(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC2E53 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4CC2E53 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      PartyOrganizationListViewObject__Init_34554996((PartyOrganizationListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v6; // w20
  bool v7; // w21
  __int64 naturalAligment; // x10

  if ( (byte_4CC2E60 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4CC2E60 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_10:
    sub_1C71608(dropObjectList, isDisp);
  v6 = 0;
  v7 = isDisp;
  while ( v6 < dropObjectList->fields._size )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    dropObjectList,
                                                                    v6,
                                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( dropObjectList )
    {
      naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
      if ( dropObjectList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyOrganizationListViewDropObject_c *)dropObjectList->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__SetDispSwapGuide(
          (PartyOrganizationListViewDropObject_o *)dropObjectList,
          v7,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_34552916(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewManager__SetMode_34552916(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  int m_CancellationTokenSource; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  Il2CppObject *v17; // x21
  System_Action_o *v18; // x22
  __int64 naturalAligment; // x10
  int v20; // w8
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w21
  Il2CppObject *v23; // x22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w20
  Il2CppObject *v27; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x10
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

  v4 = this;
  if ( (byte_4CC2E51 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_1C713B0(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationListViewManager_o *)sub_1C713B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4CC2E51 = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  v4->fields.initMode = mode;
  if ( !dropObjectList )
    goto LABEL_46;
  v4->fields.callbackCount = dropObjectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 2, 0);
  switch ( mode )
  {
    case 1:
      PartyOrganizationListViewManager__RequestListObject_34549592(v4, 2, v7);
      v9 = 2;
      goto LABEL_7;
    case 2:
      PartyOrganizationListViewManager__RequestListObject_34549592(v4, 3, v7);
      v9 = 4;
LABEL_7:
      PartyOrganizationListViewManager__RequestDropObject_34550044(v4, v9, v8);
      return;
    case 3:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_46;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v11 = (System_Collections_Generic_List_object__o *)this;
      if ( m_CancellationTokenSource < 1 )
        goto LABEL_13;
      v4->fields.callbackCount += m_CancellationTokenSource;
      v12 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          goto LABEL_46;
        PartyOrganizationListViewObject__Init_34554424((PartyOrganizationListViewObject_o *)Item, 4, v14, 0.1, v15);
        ++v12;
      }
      while ( v12 < v11->fields._size );
LABEL_13:
      this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v16 = 0;
      while ( v16 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        v17 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v16,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
        v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( v17 )
        {
          naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
          if ( v17->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (PartyOrganizationListViewDropObject_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          {
            PartyOrganizationListViewDropObject__Init_34468684(
              (PartyOrganizationListViewDropObject_o *)v17,
              2,
              v18,
              0.1,
              0);
            this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
            ++v16;
            if ( this )
              continue;
          }
        }
        goto LABEL_46;
      }
      return;
    case 4:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_46;
      v20 = (int)this->fields.m_CancellationTokenSource;
      v21 = (System_Collections_Generic_List_object__o *)this;
      if ( v20 < 1 )
        goto LABEL_26;
      v4->fields.callbackCount += v20;
      v22 = 0;
      do
      {
        v23 = System_Collections_Generic_List_object___get_Item(
                v21,
                v22,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v24 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( !v23 )
          goto LABEL_46;
        PartyOrganizationListViewObject__Init_34554424((PartyOrganizationListViewObject_o *)v23, 5, v24, 0.1, v25);
        ++v22;
      }
      while ( v22 < v21->fields._size );
LABEL_26:
      this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v26 = 0;
      while ( v26 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        v27 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v26,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
        v28 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
        if ( v27 )
        {
          v29 = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
          if ( v27->klass->_2.naturalAligment >= (unsigned int)v29
            && (PartyOrganizationListViewDropObject_c *)v27->klass->_2.typeHierarchy[v29 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          {
            PartyOrganizationListViewDropObject__Init_34468684(
              (PartyOrganizationListViewDropObject_o *)v27,
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
        goto LABEL_46;
      }
      return;
    case 5:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
      if ( !this )
        goto LABEL_46;
      v30 = (int)this->fields.m_CancellationTokenSource;
      v31 = (System_Collections_Generic_List_object__o *)this;
      if ( v30 < 1 )
        goto LABEL_39;
      v4->fields.callbackCount += v30;
      v32 = 0;
      break;
    default:
      return;
  }
  do
  {
    v33 = System_Collections_Generic_List_object___get_Item(
            v31,
            v32,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    v34 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
    if ( !v33 )
      goto LABEL_46;
    PartyOrganizationListViewObject__Init_34554424((PartyOrganizationListViewObject_o *)v33, 6, v34, 0.1, v35);
    ++v32;
  }
  while ( v32 < v31->fields._size );
LABEL_39:
  this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
  if ( !this )
LABEL_46:
    sub_1C71608(this, *(_QWORD *)&mode);
  v36 = 0;
  while ( v36 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    v37 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)this,
            v36,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    v38 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0);
    if ( v37 )
    {
      v39 = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
      if ( v37->klass->_2.naturalAligment >= (unsigned int)v39
        && (PartyOrganizationListViewDropObject_c *)v37->klass->_2.typeHierarchy[v39 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__Init_34468684((PartyOrganizationListViewDropObject_o *)v37, 2, v38, 0.1, 0);
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        ++v36;
        if ( this )
          continue;
      }
    }
    goto LABEL_46;
  }
}


void PartyOrganizationListViewManager__SetMode_34554372(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_34552916(this, mode, v10);
}


void PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4CC2E50 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewObject_TypeInfo);
    byte_4CC2E50 = 1;
  }
  if ( obj )
  {
    naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (PartyOrganizationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v7 )
  {
    if ( !obj )
      sub_1C71608(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 3;
    else
      v10 = 2;
    PartyOrganizationListViewObject__Init_34552788((PartyOrganizationListViewObject_o *)obj, v10, v9);
  }
}


void PartyOrganizationListViewManager__add_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC2E45 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2E45 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__remove_callbackFunc(v10, v11, v12);
}


void PartyOrganizationListViewManager__add_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC2E47 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2E47 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void PartyOrganizationListViewManager__add_callbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFuncModify; // x21
  struct System_Action_o **p_callbackFuncModify; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC2E49 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2E49 = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFuncModify, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFuncModify, v7, callbackFuncModify);
    v9 = callbackFuncModify == (System_Delegate_o *)v8;
    callbackFuncModify = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__remove_callbackFuncModify(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC2E4C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E4C = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(
                                 (PartyOrganizationListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC2E4B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E4B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


void PartyOrganizationListViewManager__remove_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC2E46 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2E46 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__add_callbackFunc2(v10, v11, v12);
}


void PartyOrganizationListViewManager__remove_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC2E48 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2E48 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__add_callbackFuncModify(v10, v11, v12);
}


void PartyOrganizationListViewManager__remove_callbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFuncModify; // x21
  struct System_Action_o **p_callbackFuncModify; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CC2E4A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2E4A = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFuncModify, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFuncModify, v7, callbackFuncModify);
    v9 = callbackFuncModify == (System_Delegate_o *)v8;
    callbackFuncModify = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1C719A4(v7);
  PartyOrganizationListViewManager__get_ObjectList(v10, v11);
}


void PartyOrganizationListViewManager_CallbackFunc___ctor(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
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
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA14EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA148C;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  v13 = opt1;
  if ( (byte_4CC2E61 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewManager_ResultKind_TypeInfo);
    byte_4CC2E61 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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