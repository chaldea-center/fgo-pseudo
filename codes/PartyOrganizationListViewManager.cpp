void __fastcall PartyOrganizationListViewManager___ctor(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewManager__CreateList(
        PartyOrganizationListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        PartyListViewItem_o *basePartyItem,
        const MethodInfo *method)
{
  struct PartyListViewItem_o **p_partyItem; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v25; // x8
  System_String_o *v26; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v28; // x22
  System_Text_StringBuilder_o *v29; // x21
  __int64 v30; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v32; // x22
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  System_String_o *v35; // x1
  UILabel_o *v36; // x0
  int32_t v37; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v39; // x0
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A57196 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1B885B0(&StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/);
    sub_1B885B0(&StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/);
    sub_1B885B0(&StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/);
    sub_1B885B0(&StringLiteral_10167/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    byte_4A57196 = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem,
    (int32_t)basePartyItem,
    (int32_t)partyItem,
    (int32_t)basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v10, v11);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_15;
  v14 = 0;
  while ( v14 < dropObjectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dropObjectList,
             v14,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v17 = Item;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    dropObjectList = (System_Collections_Generic_List_object__o *)*p_partyItem;
    if ( *p_partyItem )
    {
      dropObjectList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetMember(
                                                                      (PartyListViewItem_o *)dropObjectList,
                                                                      v14,
                                                                      0LL);
      if ( v17 )
      {
        ((void (__fastcall *)(Il2CppObject *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))v17->klass->vtable[5].method)(
          v17,
          dropObjectList,
          v17->klass->vtable[6].methodPtr);
        v17[2].monitor = this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[2].monitor, (int32_t)this, v18, v19);
        dropDragPrefab = this->fields.dropDragPrefab;
        v17[3].klass = (Il2CppClass *)dropDragPrefab;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[3], (int32_t)dropDragPrefab, v21, v22);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v14;
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
    v25 = &StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_23:
    v26 = (System_String_o *)*v25;
LABEL_45:
    dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(v26, 0LL);
    if ( !explanationLabel )
      goto LABEL_15;
    v35 = (System_String_o *)dropObjectList;
    v36 = explanationLabel;
    goto LABEL_47;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0LL) )
  {
LABEL_42:
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = (System_String_o *)StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
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
    v25 = &StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_23;
  }
  v28 = PartyOrganizationServantSwapExplanationFixedServantText;
  v29 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v29, 0LL);
  v30 = *(_QWORD *)&v28->max_length;
  if ( (int)v30 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v30; ++i )
    {
      if ( i )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10167/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                                        0LL);
        if ( !v29 )
          goto LABEL_15;
        dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_60868928(
                                                                        v29,
                                                                        (System_String_o *)dropObjectList,
                                                                        0LL);
        if ( i >= v28->max_length )
          goto LABEL_65;
      }
      else
      {
        if ( !(_DWORD)v30 )
LABEL_65:
          sub_1B88814(dropObjectList, v12);
        if ( !v29 )
          goto LABEL_15;
      }
      dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_60868928(
                                                                      v29,
                                                                      v28->m_Items[i],
                                                                      0LL);
      LODWORD(v30) = v28->max_length;
    }
  }
  v32 = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/,
                                                                  0LL);
  if ( !v29 )
    goto LABEL_15;
  v33 = (System_String_o *)dropObjectList;
  v34 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                          v29,
                          v29->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Format(v33, v34, 0LL);
  if ( !v32 )
    goto LABEL_15;
  v35 = (System_String_o *)dropObjectList;
  v36 = v32;
LABEL_47:
  UILabel__set_text(v36, v35, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  dropObjectList = (System_Collections_Generic_List_object__o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_15;
  v37 = ((unsigned __int8)dropObjectList & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v37, 0LL);
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
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Concat_61707032(v39, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)dropObjectList, 0LL, 1, 0, 0LL);
        goto LABEL_61;
      }
    }
LABEL_15:
    sub_1B8880C(dropObjectList, v12);
  }
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57197 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4A57197 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      dropObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v13 = v12;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v13.fields._current
        && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v13.fields._current;
        else
          current = 0LL;
      }
      else
      {
        current = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v8 )
      {
        if ( !current )
          sub_1B8880C(v8, v9);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePartyItem, 0, v2, v3);
  this->fields.partyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v10, v11);
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

  if ( (byte_4A571A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A571A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A571A6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571A6 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A571A2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571A2 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A571A3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571A3 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A57198 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A57198 = 1;
  }
  result = (PartyOrganizationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20

  if ( (byte_4A571A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A571A8 = 1;
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
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1B8880C(this, info);
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v6, 0LL) != 0;
}


bool __fastcall PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20

  if ( (byte_4A571A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A571A7 = 1;
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
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1B8880C(this, info);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v6, (const MethodInfo *)info) != 0;
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
  PartyListViewItem_o *basePartyItem; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, 0LL), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(basePartyItem, 0LL), (basePartyItem = this->fields.partyItem) == 0LL) )
  {
    sub_1B8880C(basePartyItem, method);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_32222976(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_32223428(this, 10, v5);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v6, v7);
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
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
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
  if ( (byte_4A571A5 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndShowEquip__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571A5 = 1;
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
      v7 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
      return;
    }
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL) >= 1 )
    {
      v9 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
      v4->fields.initMode = 7;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                         (PartyOrganizationListViewItem_o *)linkItem,
                         0LL);
      v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_PartyOrganizationListViewManager_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v13, 0LL, 0LL);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL) < 1 )
      goto LABEL_8;
    v15 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    v4->fields.initMode = 7;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0LL);
    if ( !this
      || (IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL),
          v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL),
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)v4,
            Method_PartyOrganizationListViewManager_EndShowEquip__,
            0LL),
          !v18) )
    {
LABEL_31:
      sub_1B8880C(this, obj);
    }
    if ( IsNpc )
      v21 = 19;
    else
      v21 = 14;
    CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)v18, v21, EquipTarget1, v20, 0LL, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v6, v7);
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
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
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
  if ( (byte_4A571A1 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_EndShowServant__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
    this = (PartyOrganizationListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A571A1 = 1;
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
        v7 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
        return;
      }
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        v16 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v23 = menuKind == 8;
          v24 = (CommonUI_o *)Instance;
          if ( v23 )
          {
            v25 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B887FC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v25,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog_30503084(v24, 1, v21, index, v25, 0, 0LL);
              return;
            }
          }
          else
          {
            v26 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v26,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog(v24, 1, v21, index, v26, 0, 0LL);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL) < 1 )
          goto LABEL_8;
        v11 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
        v4->fields.initMode = 6;
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v13 )
        {
          CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)v13, 5, ServantLeader, v15, 0LL);
          return;
        }
      }
    }
    sub_1B8880C(this, obj);
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
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A571A0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A571A0 = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__RequestDropObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5719D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4A5719D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      dropObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( v14.fields._current )
      {
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v11 = sub_1B88ACC(v14.fields._current);
LABEL_17:
          sub_1B8880C(v11, v12);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_32054992(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v10,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestDropObject_32223428(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5719E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4A5719E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      dropObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( v12.fields._current )
      {
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v9 = sub_1B88ACC(v12.fields._current);
LABEL_17:
          sub_1B8880C(v9, v10);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_32055120(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v8,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5719F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5719F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      PartyOrganizationListViewObject__Init_32227840((PartyOrganizationListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5719B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4A5719B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      PartyOrganizationListViewObject__Init_32227840(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_32222976(
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

  if ( (byte_4A5719C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4A5719C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      PartyOrganizationListViewObject__Init_32228412((PartyOrganizationListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v6; // w20
  bool v7; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4A571A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4A571A9 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_10:
    sub_1B8880C(dropObjectList, isDisp);
  v6 = 0;
  v7 = isDisp;
  while ( v6 < dropObjectList->fields._size )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    dropObjectList,
                                                                    v6,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (PartyOrganizationListViewDropObject_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__SetDispSwapGuide(
          (PartyOrganizationListViewDropObject_o *)dropObjectList,
          v7,
          0LL);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v6;
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationListViewManager__SetMode_32226292(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_32226292(
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
  __int64 methodPtr_low; // x10
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
  if ( (byte_4A5719A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationListViewManager_o *)sub_1B885B0(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_4A5719A = 1;
  }
  if ( mode == 9 )
  {
    PartyOrganizationListViewManager__ModifyItem(v4, *(const MethodInfo **)&mode);
  }
  else
  {
    dropObjectList = v4->fields.dropObjectList;
    v4->fields.initMode = mode;
    if ( !dropObjectList )
      goto LABEL_48;
    v4->fields.callbackCount = dropObjectList->fields._size;
    ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 2, 0LL);
    switch ( mode )
    {
      case 1:
        PartyOrganizationListViewManager__RequestListObject_32222976(v4, 2, v7);
        v9 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_32222976(v4, 3, v7);
        v9 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_32223428(v4, v9, v8);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_48;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        v11 = (System_Collections_Generic_List_object__o *)this;
        if ( m_CancellationTokenSource < 1 )
          goto LABEL_15;
        v4->fields.callbackCount += m_CancellationTokenSource;
        v12 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v12,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
          v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v14, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            goto LABEL_48;
          PartyOrganizationListViewObject__Init_32227840((PartyOrganizationListViewObject_o *)Item, 4, v14, 0.1, v15);
          ++v12;
        }
        while ( v12 < v11->fields._size );
LABEL_15:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_48;
        v16 = 0;
        while ( v16 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v17 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v16,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v17 )
          {
            methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v17->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (PartyOrganizationListViewDropObject_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_32054992(
                (PartyOrganizationListViewDropObject_o *)v17,
                2,
                v18,
                0.1,
                0LL);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v16;
              if ( this )
                continue;
            }
          }
          goto LABEL_48;
        }
        return;
      case 4:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_48;
        v20 = (int)this->fields.m_CancellationTokenSource;
        v21 = (System_Collections_Generic_List_object__o *)this;
        if ( v20 < 1 )
          goto LABEL_28;
        v4->fields.callbackCount += v20;
        v22 = 0;
        do
        {
          v23 = System_Collections_Generic_List_object___get_Item(
                  v21,
                  v22,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
          v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v23 )
            goto LABEL_48;
          PartyOrganizationListViewObject__Init_32227840((PartyOrganizationListViewObject_o *)v23, 5, v24, 0.1, v25);
          ++v22;
        }
        while ( v22 < v21->fields._size );
LABEL_28:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_48;
        v26 = 0;
        while ( v26 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v27 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v26,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v27 )
          {
            v29 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v27->klass->vtable[0].methodPtr) >= (unsigned int)v29
              && (PartyOrganizationListViewDropObject_c *)v27->klass->_2.typeHierarchy[v29 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_32054992(
                (PartyOrganizationListViewDropObject_o *)v27,
                2,
                v28,
                0.1,
                0LL);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v26;
              if ( this )
                continue;
            }
          }
          goto LABEL_48;
        }
        return;
      case 5:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_48;
        v30 = (int)this->fields.m_CancellationTokenSource;
        v31 = (System_Collections_Generic_List_object__o *)this;
        if ( v30 < 1 )
          goto LABEL_41;
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
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
      v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v33 )
        goto LABEL_48;
      PartyOrganizationListViewObject__Init_32227840((PartyOrganizationListViewObject_o *)v33, 6, v34, 0.1, v35);
      ++v32;
    }
    while ( v32 < v31->fields._size );
LABEL_41:
    this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
    if ( !this )
LABEL_48:
      sub_1B8880C(this, *(_QWORD *)&mode);
    v36 = 0;
    while ( v36 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v37 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v36,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v37 )
      {
        v39 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v37->klass->vtable[0].methodPtr) >= (unsigned int)v39
          && (PartyOrganizationListViewDropObject_c *)v37->klass->_2.typeHierarchy[v39 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          PartyOrganizationListViewDropObject__Init_32054992(
            (PartyOrganizationListViewDropObject_o *)v37,
            2,
            v38,
            0.1,
            0LL);
          this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
          ++v36;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_32227788(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationListViewManager__SetMode_32226292(this, mode, v6);
}


void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4A57199 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewObject_TypeInfo);
    byte_4A57199 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (PartyOrganizationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !obj )
      sub_1B8880C(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 3;
    else
      v10 = 2;
    PartyOrganizationListViewObject__Init_32226164((PartyOrganizationListViewObject_o *)obj, v10, v9);
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

  if ( (byte_4A57190 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_4A57190 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A57192 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57192 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1B88ACC(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57195 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57195 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(
                                 (PartyOrganizationListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57194 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57194 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
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

  if ( (byte_4A57191 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_4A57191 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1B88ACC(v7);
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
  const MethodInfo *v11; // x1

  if ( (byte_4A57193 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57193 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1B88ACC(v7);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9268;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9210;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A571AA & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewManager_ResultKind_TypeInfo);
    byte_4A571AA = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PartyOrganizationListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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