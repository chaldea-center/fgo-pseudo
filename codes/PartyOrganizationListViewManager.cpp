void __fastcall PartyOrganizationListViewManager___ctor(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewManager__CallbackFuncModify(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8

  callbackFuncModify = this->fields.callbackFuncModify;
  if ( callbackFuncModify )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFuncModify->fields.m_target)(
      callbackFuncModify->fields.original_method_info,
      *(_QWORD *)&callbackFuncModify->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__CreateList(
        PartyOrganizationListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        System_Action_o *modifyCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct PartyListViewItem_o **p_partyItem; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v25; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v36; // x8
  System_String_o *v37; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v39; // x22
  System_Text_StringBuilder_o *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v44; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  System_String_o *v47; // x1
  UILabel_o *v48; // x0
  int32_t v49; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v51; // x0
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFDC54 & 1) == 0 )
  {
    sub_1BC3008(&FSUtility_TypeInfo, *(_QWORD *)&menuKind);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_10175/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v14);
    sub_1BC3008(&StringLiteral_10237/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, v15);
    sub_1BC3008(&StringLiteral_10239/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v16);
    sub_1BC3008(&StringLiteral_10236/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/, v17);
    sub_1BC3008(&StringLiteral_10238/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v18);
    sub_1BC3008(&StringLiteral_10055/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v19);
    byte_4AFDC54 = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    (int32_t)partyItem,
    (const MethodInfo *)modifyCallback);
  this->fields.callbackFuncModify = modifyCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFuncModify, (int32_t)modifyCallback, v21, v22);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_15;
  v25 = 0;
  while ( v25 < dropObjectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dropObjectList,
             v25,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v28 = Item;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = 0LL;
    }
    dropObjectList = (System_Collections_Generic_List_object__o *)*p_partyItem;
    if ( *p_partyItem )
    {
      dropObjectList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetMember(
                                                                      (PartyListViewItem_o *)dropObjectList,
                                                                      v25,
                                                                      0LL);
      if ( v28 )
      {
        ((void (__fastcall *)(Il2CppObject *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))v28->klass->vtable[5].method)(
          v28,
          dropObjectList,
          v28->klass->vtable[6].methodPtr);
        v28[2].monitor = this;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v28[2].monitor, (int32_t)this, v29, v30);
        dropDragPrefab = this->fields.dropDragPrefab;
        v28[3].klass = (Il2CppClass *)dropDragPrefab;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v28[3], (int32_t)dropDragPrefab, v32, v33);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v25;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_15;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.explanationBase;
  if ( !dropObjectList )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 1, 0LL);
  if ( !partyItem )
    goto LABEL_15;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_42;
  if ( QuestRestrictionInfo__IsFixedSupportPosition(questRestrictionInfo, 0LL) )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = &StringLiteral_10239/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_23:
    v37 = (System_String_o *)*v36;
LABEL_45:
    dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(v37, 0LL);
    if ( !explanationLabel )
      goto LABEL_15;
    v47 = (System_String_o *)dropObjectList;
    v48 = explanationLabel;
    goto LABEL_47;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0LL) )
  {
LABEL_42:
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = (System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
    goto LABEL_45;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0LL);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = &StringLiteral_10237/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_23;
  }
  v39 = PartyOrganizationServantSwapExplanationFixedServantText;
  v40 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v40, 0LL);
  v42 = *(_QWORD *)&v39->max_length;
  if ( (int)v42 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v42; ++i )
    {
      if ( i )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10055/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                                        0LL);
        if ( !v40 )
          goto LABEL_15;
        dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_62432592(
                                                                        v40,
                                                                        (System_String_o *)dropObjectList,
                                                                        0LL);
        if ( i >= v39->max_length )
          goto LABEL_65;
      }
      else
      {
        if ( !(_DWORD)v42 )
LABEL_65:
          sub_1BC326C(dropObjectList, v23, v41);
        if ( !v40 )
          goto LABEL_15;
      }
      dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_62432592(
                                                                      v40,
                                                                      v39->m_Items[i],
                                                                      0LL);
      LODWORD(v42) = v39->max_length;
    }
  }
  v44 = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/,
                                                                  0LL);
  if ( !v40 )
    goto LABEL_15;
  v45 = (System_String_o *)dropObjectList;
  v46 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v40->klass->vtable._3_ToString.method)(
                          v40,
                          v40->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Format(v45, v46, 0LL);
  if ( !v44 )
    goto LABEL_15;
  v47 = (System_String_o *)dropObjectList;
  v48 = v44;
LABEL_47:
  UILabel__set_text(v48, v47, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_15;
  v49 = ((unsigned __int8)dropObjectList & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v49, 0, 0LL);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.titleExplanationBase;
  if ( !dropObjectList )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 0, 0LL);
  if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.titleExplanationBase;
    if ( dropObjectList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dropObjectList, 1, 0LL);
      titleExplanationLabel = this->fields.titleExplanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10175/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Concat_62348648(v51, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)dropObjectList, 0LL, 1, 0, 0, 0LL);
        goto LABEL_61;
      }
    }
LABEL_15:
    sub_1BC3264(dropObjectList, v23);
  }
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFDC55 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v9);
    byte_4AFDC55 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      dropObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v18 = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v18.fields._current
        && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v18.fields._current;
        else
          current = 0LL;
      }
      else
      {
        current = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v13 )
      {
        if ( !current )
          sub_1BC3264(v13, v14);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.callbackFuncModify = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFuncModify, 0, v2, v3);
  this->fields.partyItem = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.partyItem, 0, v15, v16);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowServant(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowServantQuestJump(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AFDC62 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4AFDC62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4AFDC64 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFDC64 = 1;
  }
  if ( isDecide )
  {
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callbackFuncModify->fields.m_target)(
        callbackFuncModify->fields.original_method_info,
        *(_QWORD *)&callbackFuncModify->fields.extra_arg,
        method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1BC3264(v10, v11);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4AFDC60 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFDC60 = 1;
  }
  if ( isDecide )
  {
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callbackFuncModify->fields.m_target)(
        callbackFuncModify->fields.original_method_info,
        *(_QWORD *)&callbackFuncModify->fields.extra_arg,
        method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BC3264(v10, v11);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4AFDC61 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AFDC61 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1BC3264(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyOrganizationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AFDC56 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_4AFDC56 = 1;
  }
  result = (PartyOrganizationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyOrganizationListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


PartyListViewItem_o *__fastcall PartyOrganizationListViewManager__GetPartyItem(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


bool __fastcall PartyOrganizationListViewManager__IsCanDrag(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.initMode == 2;
}


bool __fastcall PartyOrganizationListViewManager__IsDropDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v7; // x8
  UnityEngine_Object_o *v8; // x19
  Il2CppObject *Component_object; // x20

  if ( (byte_4AFDC66 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___, info);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFDC66 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_19;
  v8 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v8 )
LABEL_19:
    sub_1BC3264(this, info);
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v8, 0LL) != 0;
}


bool __fastcall PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v7; // x8
  UnityEngine_Object_o *v8; // x19
  Il2CppObject *Component_object; // x20

  if ( (byte_4AFDC65 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___, info);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFDC65 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_19;
  v8 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v8 )
LABEL_19:
    sub_1BC3264(this, info);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v8, (const MethodInfo *)info) != 0;
}


void __fastcall PartyOrganizationListViewManager__ItemDragEnd(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  if ( this->fields.initMode == 8 )
  {
    this->fields.initMode = 2;
    ListViewManager__ItemDragEnd((ListViewManager_o *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__ItemDragStart(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  if ( this->fields.initMode == 2 )
  {
    this->fields.initMode = 8;
    ListViewManager__ItemDragStart((ListViewManager_o *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__ModifyItem(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  PartyOrganizationListViewManager__RequestListObject_33550488(this, 9, v2);
  PartyOrganizationListViewManager__RequestDropObject_33550940(this, 10, v4);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v6, v7);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        2LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquipDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  bool IsNpc; // w22
  Il2CppObject *v23; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v25; // x23
  int32_t v26; // w1

  v4 = this;
  if ( (byte_4AFDC63 & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v6);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndShowEquip__, v7);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__, v8);
    this = (PartyOrganizationListViewManager_o *)sub_1BC3008(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v9);
    byte_4AFDC63 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( !obj )
      goto LABEL_31;
    linkItem = obj->fields.linkItem;
    if ( !linkItem
      || (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
    {
LABEL_8:
      v12 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
      return;
    }
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL) >= 1 )
    {
      v14 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      v4->fields.initMode = 7;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                         (PartyOrganizationListViewItem_o *)linkItem,
                         0LL);
      v18 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_PartyOrganizationListViewManager_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v18, 0LL, 0LL);
        return;
      }
      goto LABEL_31;
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)linkItem, 0LL) )
      goto LABEL_8;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0LL);
    if ( !this )
      goto LABEL_31;
    if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
      goto LABEL_8;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL) < 1 )
      goto LABEL_8;
    v20 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    v4->fields.initMode = 7;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0LL);
    if ( !this
      || (IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL),
          v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL),
          v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v25,
            (Il2CppObject *)v4,
            Method_PartyOrganizationListViewManager_EndShowEquip__,
            0LL),
          !v23) )
    {
LABEL_31:
      sub_1BC3264(this, obj);
    }
    if ( IsNpc )
      v26 = 19;
    else
      v26 = 14;
    CommonUI__OpenServantEquipStatusDialog_30746480((CommonUI_o *)v23, v26, EquipTarget1, v25, 0LL, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v6, v7);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServantDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *v20; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v22; // x22
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v28; // x21
  int32_t index; // w20
  bool v30; // zf
  CommonUI_o *v31; // x22
  ServantStatusDialog_FormationEndDelegate_o *v32; // x23
  ServantStatusDialog_EndDelegate_o *v33; // x23

  v4 = this;
  if ( (byte_4AFDC5F & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1BC3008(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v7);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v8);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_EndShowServant__, v9);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__, v10);
    this = (PartyOrganizationListViewManager_o *)sub_1BC3008(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v11);
    byte_4AFDC5F = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
LABEL_8:
        v14 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
        return;
      }
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        v23 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v24 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v30 = menuKind == 8;
          v31 = (CommonUI_o *)Instance;
          if ( v30 )
          {
            v32 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BC3254(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v32,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v31 )
            {
              CommonUI__OpenServantStatusDialog_30739976(v31, 1, v28, index, v32, 0, 0LL, 0LL);
              return;
            }
          }
          else
          {
            v33 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v33,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v31 )
            {
              CommonUI__OpenServantStatusDialog(v31, 1, v28, index, v33, 0, 0LL, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        followerInfo = linkItem->fields.followerInfo;
        if ( !followerInfo || FollowerInfo__get_IsNpc(followerInfo, 0LL) )
          goto LABEL_8;
        SvtId = PartyOrganizationListViewItem__get_SvtId(linkItem, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(SvtId, 0LL) < 1 )
          goto LABEL_8;
        v18 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v19 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
        v4->fields.initMode = 6;
        v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v22 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v22,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v20 )
        {
          CommonUI__OpenServantStatusDialog_30743384((CommonUI_o *)v20, 5, ServantLeader, v22, 0LL);
          return;
        }
      }
    }
    sub_1BC3264(this, obj);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListView(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationListViewManager__OnMoveEnd(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4AFDC5E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDC5E = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BC3264(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFDC5B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v13);
    byte_4AFDC5B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      dropObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v21.fields._current;
      if ( v21.fields._current )
      {
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v18 = sub_1BC3524(v21.fields._current);
LABEL_17:
          sub_1BC3264(v18, v19);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_33350384(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v17,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject_33550940(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFDC5C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v11);
    byte_4AFDC5C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      dropObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v19.fields._current;
      if ( v19.fields._current )
      {
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v16 = sub_1BC3524(v19.fields._current);
LABEL_17:
          sub_1BC3264(v16, v17);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_33350512(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v15,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4AFDC5D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v4);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v6);
    byte_4AFDC5D = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BC3264(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      PartyOrganizationListViewObject__Init_33555320((PartyOrganizationListViewObject_o *)Item, 4, v15, 0.1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFDC59 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v11);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v12);
    byte_4AFDC59 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v14);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v18, v19);
      PartyOrganizationListViewObject__Init_33555320(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v17,
        delay,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_33550488(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFDC5A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4AFDC5A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v12);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v16, v17);
      PartyOrganizationListViewObject__Init_33555892((PartyOrganizationListViewObject_o *)current, mode, v15, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v8; // w20
  bool v9; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4AFDC67 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v5);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    byte_4AFDC67 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_10:
    sub_1BC3264(dropObjectList, isDisp);
  v8 = 0;
  v9 = isDisp;
  while ( v8 < dropObjectList->fields._size )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    dropObjectList,
                                                                    v8,
                                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (PartyOrganizationListViewDropObject_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__SetDispSwapGuide(
          (PartyOrganizationListViewDropObject_o *)dropObjectList,
          v9,
          0LL);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v8;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        PartyOrganizationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationListViewManager__SetMode_33553812(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_33553812(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  int m_CancellationTokenSource; // w8
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w20
  Il2CppObject *v23; // x21
  System_Action_o *v24; // x22
  __int64 methodPtr_low; // x10
  int v26; // w8
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  Il2CppObject *v29; // x22
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x3
  int32_t v32; // w20
  Il2CppObject *v33; // x21
  System_Action_o *v34; // x22
  __int64 v35; // x10
  int v36; // w8
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w21
  Il2CppObject *v39; // x22
  System_Action_o *v40; // x23
  const MethodInfo *v41; // x3
  int32_t v42; // w20
  Il2CppObject *v43; // x21
  System_Action_o *v44; // x22
  __int64 v45; // x10

  v4 = this;
  if ( (byte_4AFDC58 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v8);
    sub_1BC3008(&PartyOrganizationListViewDropObject_TypeInfo, v9);
    this = (PartyOrganizationListViewManager_o *)sub_1BC3008(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4AFDC58 = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  v4->fields.initMode = mode;
  if ( !dropObjectList )
    goto LABEL_46;
  v4->fields.callbackCount = dropObjectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 2, 0LL);
  switch ( mode )
  {
    case 1:
      PartyOrganizationListViewManager__RequestListObject_33550488(v4, 2, v13);
      v15 = 2;
      goto LABEL_7;
    case 2:
      PartyOrganizationListViewManager__RequestListObject_33550488(v4, 3, v13);
      v15 = 4;
LABEL_7:
      PartyOrganizationListViewManager__RequestDropObject_33550940(v4, v15, v14);
      return;
    case 3:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
      if ( !this )
        goto LABEL_46;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v17 = (System_Collections_Generic_List_object__o *)this;
      if ( m_CancellationTokenSource < 1 )
        goto LABEL_13;
      v4->fields.callbackCount += m_CancellationTokenSource;
      v18 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v17,
                 v18,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v20 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          goto LABEL_46;
        PartyOrganizationListViewObject__Init_33555320((PartyOrganizationListViewObject_o *)Item, 4, v20, 0.1, v21);
        ++v18;
      }
      while ( v18 < v17->fields._size );
LABEL_13:
      this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v22 = 0;
      while ( v22 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        v23 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v22,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
        v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( v23 )
        {
          methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (PartyOrganizationListViewDropObject_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          {
            PartyOrganizationListViewDropObject__Init_33350384(
              (PartyOrganizationListViewDropObject_o *)v23,
              2,
              v24,
              0.1,
              0LL);
            this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
            ++v22;
            if ( this )
              continue;
          }
        }
        goto LABEL_46;
      }
      return;
    case 4:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
      if ( !this )
        goto LABEL_46;
      v26 = (int)this->fields.m_CancellationTokenSource;
      v27 = (System_Collections_Generic_List_object__o *)this;
      if ( v26 < 1 )
        goto LABEL_26;
      v4->fields.callbackCount += v26;
      v28 = 0;
      do
      {
        v29 = System_Collections_Generic_List_object___get_Item(
                v27,
                v28,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
        v30 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v30, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !v29 )
          goto LABEL_46;
        PartyOrganizationListViewObject__Init_33555320((PartyOrganizationListViewObject_o *)v29, 5, v30, 0.1, v31);
        ++v28;
      }
      while ( v28 < v27->fields._size );
LABEL_26:
      this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v32 = 0;
      while ( v32 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        v33 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v32,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
        v34 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v34, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( v33 )
        {
          v35 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v33->klass->vtable[0].methodPtr) >= (unsigned int)v35
            && (PartyOrganizationListViewDropObject_c *)v33->klass->_2.typeHierarchy[v35 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          {
            PartyOrganizationListViewDropObject__Init_33350384(
              (PartyOrganizationListViewDropObject_o *)v33,
              2,
              v34,
              0.1,
              0LL);
            this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
            ++v32;
            if ( this )
              continue;
          }
        }
        goto LABEL_46;
      }
      return;
    case 5:
      this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
      if ( !this )
        goto LABEL_46;
      v36 = (int)this->fields.m_CancellationTokenSource;
      v37 = (System_Collections_Generic_List_object__o *)this;
      if ( v36 < 1 )
        goto LABEL_39;
      v4->fields.callbackCount += v36;
      v38 = 0;
      break;
    default:
      return;
  }
  do
  {
    v39 = System_Collections_Generic_List_object___get_Item(
            v37,
            v38,
            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
    if ( !v39 )
      goto LABEL_46;
    PartyOrganizationListViewObject__Init_33555320((PartyOrganizationListViewObject_o *)v39, 6, v40, 0.1, v41);
    ++v38;
  }
  while ( v38 < v37->fields._size );
LABEL_39:
  this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
  if ( !this )
LABEL_46:
    sub_1BC3264(this, *(_QWORD *)&mode);
  v42 = 0;
  while ( v42 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    v43 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)this,
            v42,
            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    v44 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
    if ( v43 )
    {
      v45 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v43->klass->vtable[0].methodPtr) >= (unsigned int)v45
        && (PartyOrganizationListViewDropObject_c *)v43->klass->_2.typeHierarchy[v45 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__Init_33350384(
          (PartyOrganizationListViewDropObject_o *)v43,
          2,
          v44,
          0.1,
          0LL);
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        ++v42;
        if ( this )
          continue;
      }
    }
    goto LABEL_46;
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_33555268(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationListViewManager__SetMode_33553812(this, mode, v6);
}


void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4AFDC57 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, obj);
    sub_1BC3008(&PartyOrganizationListViewObject_TypeInfo, v6);
    byte_4AFDC57 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (PartyOrganizationListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v4 )
      sub_1BC3264(v8, v9);
    if ( this->fields.initMode == 2 )
      v11 = 3;
    else
      v11 = 2;
    PartyOrganizationListViewObject__Init_33553684((PartyOrganizationListViewObject_o *)v4, v11, v10);
  }
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc(
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

  if ( (byte_4AFDC4C & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFDC4C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc2(
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

  if ( (byte_4AFDC4E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFDC4E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__add_callbackFuncModify(
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

  if ( (byte_4AFDC50 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFDC50 = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFuncModify, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFuncModify, v7, callbackFuncModify);
    v9 = callbackFuncModify == (System_Delegate_o *)v8;
    callbackFuncModify = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__remove_callbackFuncModify(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AFDC53 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFDC53 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(
                                 (PartyOrganizationListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v11;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFDC52 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFDC52 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v11;
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc(
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

  if ( (byte_4AFDC4D & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFDC4D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc2(
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

  if ( (byte_4AFDC4F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFDC4F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__add_callbackFuncModify(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFuncModify(
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

  if ( (byte_4AFDC51 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFDC51 = 1;
  }
  callbackFuncModify = (System_Delegate_o *)this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFuncModify, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFuncModify, v7, callbackFuncModify);
    v9 = callbackFuncModify == (System_Delegate_o *)v8;
    callbackFuncModify = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BC3524(v7);
  PartyOrganizationListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager_CallbackFunc___ctor(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07D9C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07D44;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
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

  v15 = result;
  v16 = kind;
  if ( (byte_4AFDC68 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9);
    byte_4AFDC68 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__Invoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}