void __fastcall PartyOrganizationListViewManager___ctor(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__CreateList(
        PartyOrganizationListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        PartyListViewItem_o *basePartyItem,
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
  PartyListViewItem_o *Member; // x0
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v23; // x22
  ListViewDropObject_o *v24; // x8
  __int64 v25; // x11
  ListViewDropObject_o *v26; // x23
  struct ListViewManager_o **p_manager; // x23
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v31; // x8
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_array *v35; // x22
  System_Text_StringBuilder_o *v36; // x21
  __int64 v37; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v39; // x22
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x1
  UILabel_o *v43; // x0
  int32_t v44; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v46; // x0
  __int64 v47; // x0
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211BF5 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, *(_QWORD *)&menuKind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_10386/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v14);
    sub_B0D8A4(&StringLiteral_10445/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, v15);
    sub_B0D8A4(&StringLiteral_10447/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v16);
    sub_B0D8A4(&StringLiteral_10444/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/, v17);
    sub_B0D8A4(&StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v18);
    sub_B0D8A4(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v19);
    byte_4211BF5 = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_B0D840(&this->fields.basePartyItem, basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_B0D840(&this->fields.partyItem, partyItem);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_17;
  v23 = 0LL;
  while ( (__int64)v23 < dropObjectList->fields._size )
  {
    if ( v23 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v24 = dropObjectList->fields._items->m_Items[v23];
    if ( v24
      && (v25 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
          *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)v24->klass->_2.typeHierarchy[v25 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v26 = dropObjectList->fields._items->m_Items[v23];
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    Member = *p_partyItem;
    if ( *p_partyItem )
    {
      Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, v23, 0LL);
      if ( v26 )
      {
        ((void (__fastcall *)(ListViewDropObject_o *, PartyListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
          v26,
          Member,
          v26->klass->vtable._6_SetItem.methodPtr);
        v26->fields.manager = (struct ListViewManager_o *)this;
        p_manager = &v26->fields.manager;
        sub_B0D840(p_manager, this);
        dropDragPrefab = this->fields.dropDragPrefab;
        p_manager[1] = (struct ListViewManager_o *)dropDragPrefab;
        sub_B0D840(p_manager + 1, dropDragPrefab);
        dropObjectList = this->fields.dropObjectList;
        ++v23;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_17;
  }
  Member = (PartyListViewItem_o *)this->fields.explanationBase;
  if ( !Member )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Member, 1, 0LL);
  if ( !partyItem )
    goto LABEL_17;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_45;
  if ( QuestRestrictionInfo__IsFixedSupportPosition(questRestrictionInfo, 0LL) )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_10447/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_49:
    Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
    if ( !explanationLabel )
      goto LABEL_17;
    v42 = (System_String_o *)Member;
    v43 = explanationLabel;
    goto LABEL_51;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0LL) )
  {
LABEL_45:
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_10444/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
    goto LABEL_49;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0LL);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_10445/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_49;
  }
  v35 = PartyOrganizationServantSwapExplanationFixedServantText;
  v36 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v33, v34);
  System_Text_StringBuilder___ctor(v36, 0LL);
  v37 = *(_QWORD *)&v35->max_length;
  if ( (int)v37 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v37; ++i )
    {
      if ( i )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
        if ( !v36 )
          goto LABEL_17;
        Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42155400(v36, (System_String_o *)Member, 0LL);
        LODWORD(v37) = v35->max_length;
      }
      if ( i >= (unsigned int)v37 )
      {
        v47 = sub_B0D9A8(Member);
        sub_B0D948(v47, 0LL);
      }
      if ( !v36 )
        goto LABEL_17;
      Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42155400(v36, v35->m_Items[i], 0LL);
      LODWORD(v37) = v35->max_length;
    }
  }
  v39 = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, 0LL);
  if ( !v36 )
    goto LABEL_17;
  v40 = (System_String_o *)Member;
  v41 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v36->klass->vtable._3_ToString.method)(
                          v36,
                          v36->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  Member = (PartyListViewItem_o *)System_String__Format(v40, v41, 0LL);
  if ( !v39 )
    goto LABEL_17;
  v42 = (System_String_o *)Member;
  v43 = v39;
LABEL_51:
  UILabel__set_text(v43, v42, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  Member = (PartyListViewItem_o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_17;
  v44 = ((unsigned __int8)Member & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v44, 0LL);
  Member = (PartyListViewItem_o *)this->fields.titleExplanationBase;
  if ( !Member )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Member, 0, 0LL);
  if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
  {
    Member = (PartyListViewItem_o *)this->fields.titleExplanationBase;
    if ( Member )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Member, 1, 0LL);
      titleExplanationLabel = this->fields.titleExplanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      Member = (PartyListViewItem_o *)System_String__Concat_43849904(v46, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)Member, 0LL, 1, 0, 0LL);
        goto LABEL_67;
      }
    }
LABEL_17:
    sub_B0D97C(Member);
  }
LABEL_67:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  __int64 v9; // x11
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211BF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v7);
    byte_4211BF6 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      dropObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v12.fields.current
        && (v9 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
            *(&v12.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v12.fields.current->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v12.fields.current;
        else
          current = 0LL;
      }
      else
      {
        current = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v11 )
      {
        if ( !current )
          sub_B0D97C(v11);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_B0D840(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_B0D840(&this->fields.partyItem, 0LL);
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
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211C03 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4211C03 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4211C05 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4211C05 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantEquipStatusDialog(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4211C01 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4211C01 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
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
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4211C02 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4211C02 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B0D97C(v13);
    CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
    PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 3, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4211BF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_4211BF7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4211C07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___, info);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211C07 = 1;
  }
  if ( !info )
    goto LABEL_22;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_22;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_22;
  v8 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v8 )
LABEL_22:
    sub_B0D97C(this);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4211C06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___, info);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211C06 = 1;
  }
  if ( !info )
    goto LABEL_22;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_22;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_22;
  v8 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v8 )
LABEL_22:
    sub_B0D97C(this);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v8, v10) != 0;
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
    sub_B0D97C(basePartyItem);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_19266068(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_19266496(this, 10, v5);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v5; // x0
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B0D97C(v5);
      Index = ListViewObject__get_Index(obj, 0LL);
      PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
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
  __int64 v11; // x10
  CommonUI_o *v12; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusDialog_EndDelegate_o *v23; // x23
  int32_t v24; // w1

  v4 = this;
  if ( (byte_4211C04 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v6);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndShowEquip__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v9);
    byte_4211C04 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = obj->fields.linkItem;
      if ( !linkItem )
        goto LABEL_8;
      v11 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        goto LABEL_8;
      }
      if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL) < 1 )
      {
        if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)linkItem, 0LL) )
        {
LABEL_8:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          return;
        }
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                       (PartyOrganizationListViewItem_o *)linkItem,
                                                       0LL);
        if ( this )
        {
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_8;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL) < 1 )
            goto LABEL_8;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v4->fields.initMode = 7;
          this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                         (PartyOrganizationListViewItem_o *)linkItem,
                                                         0LL);
          if ( this )
          {
            IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                             (PartyOrganizationListViewItem_o *)linkItem,
                             0LL);
            v23 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v21, v22);
            ServantStatusDialog_EndDelegate___ctor(
              v23,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowEquip__,
              0LL);
            if ( Instance )
            {
              if ( IsNpc )
                v24 = 19;
              else
                v24 = 14;
              CommonUI__OpenServantEquipStatusDialog_17032132(Instance, v24, EquipTarget1, v23, 0LL, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v4->fields.initMode = 7;
        v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL);
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
        ServantStatusDialog_EndDelegate___ctor(
          v16,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowEquip__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenServantEquipStatusDialog(v12, 11, EquipUserSvtId, 1, v16, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(this);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v5; // x0
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B0D97C(v5);
      Index = ListViewObject__get_Index(obj, 0LL);
      PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
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
  __int64 v13; // x10
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  PartyListViewItem_o *v19; // x21
  int32_t index; // w20
  bool v21; // zf
  CommonUI_o *v22; // x22
  ServantStatusDialog_FormationEndDelegate_o *v23; // x23
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CommonUI_o *v26; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  ServantStatusDialog_EndDelegate_o *v30; // x22
  ServantStatusDialog_EndDelegate_o *v31; // x23

  v4 = this;
  if ( (byte_4211C00 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B0D8A4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v8);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_EndShowServant__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v11);
    byte_4211C00 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (v13 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
LABEL_8:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      if ( linkItem->fields.userServantEntity )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v21 = menuKind == 8;
          v22 = (CommonUI_o *)Instance;
          if ( v21 )
          {
            v23 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B0D974(
                                                                  ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                  v17,
                                                                  v18);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v23,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_17026172(v22, 1, v19, index, v23, 0, 0LL);
              return;
            }
          }
          else
          {
            v31 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18);
            ServantStatusDialog_EndDelegate___ctor(
              v31,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog(v22, 1, v19, index, v31, 0, 0LL);
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL) < 1 )
          goto LABEL_8;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v4->fields.initMode = 6;
        v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v28, v29);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v26 )
        {
          CommonUI__OpenServantStatusDialog_17029768(v26, 5, ServantLeader, v30, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(this);
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
  struct UIScrollView_o *v7; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4211BFF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211BFF = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v16; // x9
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4211BFC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v13);
    byte_4211BFC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      dropObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v22.fields.current;
      if ( v22.fields.current )
      {
        v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v22.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (PartyOrganizationListViewDropObject_c *)v22.fields.current->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v20 = sub_B0DC70(v22.fields.current);
LABEL_18:
          sub_B0D97C(v20);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_30728600(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v19,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject_19266496(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4211BFD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v11);
    byte_4211BFD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      dropObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v20.fields.current;
      if ( v20.fields.current )
      {
        v14 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (PartyOrganizationListViewDropObject_c *)v20.fields.current->klass->_2.typeHierarchy[v14 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v18 = sub_B0DC70(v20.fields.current);
LABEL_18:
          sub_B0D97C(v18);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_30728708(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v17,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  PartyOrganizationListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4211BFE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v4);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v5);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v6);
    byte_4211BFE = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B0D97C(ObjectList);
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v13, 4, v16, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4211BFA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v12);
    byte_4211BFA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v19);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_19266068(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4211BFB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4211BFB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v17);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v8; // x21
  bool v9; // w20
  ListViewDropObject_o *v10; // x8
  __int64 v11; // x11
  __int64 v12; // x11
  PartyOrganizationListViewDropObject_o *v13; // x0

  v4 = this;
  if ( (byte_4211C08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v5);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    byte_4211C08 = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_17:
    sub_B0D97C(this);
  v8 = 0LL;
  v9 = isDisp;
  while ( (__int64)v8 < dropObjectList->fields._size )
  {
    if ( v8 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = dropObjectList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (PartyOrganizationListViewDropObject_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
          v13 = (PartyOrganizationListViewDropObject_c *)v10->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewDropObject_TypeInfo
              ? (PartyOrganizationListViewDropObject_o *)dropObjectList->fields._items->m_Items[v8]
              : 0LL;
        else
          v13 = 0LL;
        PartyOrganizationListViewDropObject__SetDispSwapGuide(v13, v9, 0LL);
        dropObjectList = v4->fields.dropObjectList;
        ++v8;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_17;
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
  sub_B0D840(&this->fields.callbackFunc, callback);
  PartyOrganizationListViewManager__SetMode_19269440(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_19269440(
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
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w8
  PartyOrganizationListViewManager_o *v19; // x20
  int v20; // w8
  __int64 v21; // x23
  PartyOrganizationListViewObject_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v25; // x20
  unsigned __int64 v26; // x21
  ListViewDropObject_o *v27; // x25
  System_Action_o *v28; // x20
  __int64 v29; // x10
  __int64 v30; // x10
  PartyOrganizationListViewDropObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  int v34; // w8
  PartyOrganizationListViewManager_o *v35; // x20
  int v36; // w8
  __int64 v37; // x23
  PartyOrganizationListViewObject_o *v38; // x21
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v41; // x20
  unsigned __int64 v42; // x21
  ListViewDropObject_o *v43; // x25
  System_Action_o *v44; // x20
  __int64 v45; // x10
  __int64 v46; // x10
  PartyOrganizationListViewDropObject_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  int v50; // w8
  PartyOrganizationListViewManager_o *v51; // x20
  int v52; // w8
  __int64 v53; // x23
  PartyOrganizationListViewObject_o *v54; // x21
  System_Action_o *v55; // x22
  const MethodInfo *v56; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v57; // x20
  unsigned __int64 v58; // x21
  ListViewDropObject_o *v59; // x25
  System_Action_o *v60; // x20
  __int64 v61; // x10
  __int64 v62; // x10
  PartyOrganizationListViewDropObject_o *v63; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = this;
  if ( (byte_4211BF9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v8);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v9);
    this = (PartyOrganizationListViewManager_o *)sub_B0D8A4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4211BF9 = 1;
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
      goto LABEL_78;
    v4->fields.callbackCount = dropObjectList->fields._size;
    ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 2, 0LL);
    switch ( mode )
    {
      case 1:
        PartyOrganizationListViewManager__RequestListObject_19266068(v4, 2, v13);
        v15 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_19266068(v4, 3, v13);
        v15 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_19266496(v4, v15, v14);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
        if ( !this )
          goto LABEL_78;
        v18 = (int)this->fields.dropObjectList;
        v19 = this;
        if ( v18 < 1 )
          goto LABEL_18;
        v4->fields.callbackCount += v18;
        v20 = (int)this->fields.dropObjectList;
        if ( v20 < 1 )
          goto LABEL_18;
        v21 = 0LL;
        do
        {
          if ( v20 <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v22 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v19->fields.m_CachedPtr + 8 * v21 + 32);
          v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
          System_Action___ctor(v23, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v22 )
            goto LABEL_78;
          zero = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v22, 4, v23, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v24);
          v20 = (int)v19->fields.dropObjectList;
          ++v21;
        }
        while ( (int)v21 < v20 );
LABEL_18:
        v25 = v4->fields.dropObjectList;
        if ( !v25 )
          goto LABEL_78;
        v26 = 0LL;
        while ( (__int64)v26 < v25->fields._size )
        {
          if ( v26 >= (unsigned int)v25->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v27 = v25->fields._items->m_Items[v26];
          v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
          System_Action___ctor(v28, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v27 )
          {
            v29 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v29
              && (PartyOrganizationListViewDropObject_c *)v27->klass->_2.typeHierarchy[v29 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v30 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v30 )
                v31 = (PartyOrganizationListViewDropObject_c *)v27->klass->_2.typeHierarchy[v30 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v27
                    : 0LL;
              else
                v31 = 0LL;
              PartyOrganizationListViewDropObject__Init_30728600(v31, 2, v28, 0.1, 0LL);
              v25 = v4->fields.dropObjectList;
              ++v26;
              if ( v25 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 4:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
        if ( !this )
          goto LABEL_78;
        v34 = (int)this->fields.dropObjectList;
        v35 = this;
        if ( v34 < 1 )
          goto LABEL_41;
        v4->fields.callbackCount += v34;
        v36 = (int)this->fields.dropObjectList;
        if ( v36 < 1 )
          goto LABEL_41;
        v37 = 0LL;
        do
        {
          if ( v36 <= (unsigned int)v37 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v38 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v35->fields.m_CachedPtr + 8 * v37 + 32);
          v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
          System_Action___ctor(v39, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v38 )
            goto LABEL_78;
          v65 = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v38, 5, v39, 0.1, *(UnityEngine_Vector3_o *)&v65.fields.y, v40);
          v36 = (int)v35->fields.dropObjectList;
          ++v37;
        }
        while ( (int)v37 < v36 );
LABEL_41:
        v41 = v4->fields.dropObjectList;
        if ( !v41 )
          goto LABEL_78;
        v42 = 0LL;
        while ( (__int64)v42 < v41->fields._size )
        {
          if ( v42 >= (unsigned int)v41->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v43 = v41->fields._items->m_Items[v42];
          v44 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
          System_Action___ctor(v44, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v43 )
          {
            v45 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v43->klass->_2.bitflags2 + 1) >= (unsigned int)v45
              && (PartyOrganizationListViewDropObject_c *)v43->klass->_2.typeHierarchy[v45 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v46 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v43->klass->_2.bitflags2 + 1) >= (unsigned int)v46 )
                v47 = (PartyOrganizationListViewDropObject_c *)v43->klass->_2.typeHierarchy[v46 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v43
                    : 0LL;
              else
                v47 = 0LL;
              PartyOrganizationListViewDropObject__Init_30728600(v47, 2, v44, 0.1, 0LL);
              v41 = v4->fields.dropObjectList;
              ++v42;
              if ( v41 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 5:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
        if ( !this )
          goto LABEL_78;
        v50 = (int)this->fields.dropObjectList;
        v51 = this;
        if ( v50 < 1 )
          goto LABEL_64;
        v4->fields.callbackCount += v50;
        v52 = (int)this->fields.dropObjectList;
        if ( v52 < 1 )
          goto LABEL_64;
        v53 = 0LL;
        break;
      default:
        return;
    }
    do
    {
      if ( v52 <= (unsigned int)v53 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v54 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v51->fields.m_CachedPtr + 8 * v53 + 32);
      v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
      System_Action___ctor(v55, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v54 )
        goto LABEL_78;
      v66 = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v54, 6, v55, 0.1, *(UnityEngine_Vector3_o *)&v66.fields.y, v56);
      v52 = (int)v51->fields.dropObjectList;
      ++v53;
    }
    while ( (int)v53 < v52 );
LABEL_64:
    v57 = v4->fields.dropObjectList;
    if ( !v57 )
LABEL_78:
      sub_B0D97C(this);
    v58 = 0LL;
    while ( (__int64)v58 < v57->fields._size )
    {
      if ( v58 >= (unsigned int)v57->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v59 = v57->fields._items->m_Items[v58];
      v60 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
      System_Action___ctor(v60, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v59 )
      {
        v61 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v59->klass->_2.bitflags2 + 1) >= (unsigned int)v61
          && (PartyOrganizationListViewDropObject_c *)v59->klass->_2.typeHierarchy[v61 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          v62 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v59->klass->_2.bitflags2 + 1) >= (unsigned int)v62 )
            v63 = (PartyOrganizationListViewDropObject_c *)v59->klass->_2.typeHierarchy[v62 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                ? (PartyOrganizationListViewDropObject_o *)v59
                : 0LL;
          else
            v63 = 0LL;
          PartyOrganizationListViewDropObject__Init_30728600(v63, 2, v60, 0.1, 0LL);
          v57 = v4->fields.dropObjectList;
          ++v58;
          if ( v57 )
            continue;
        }
      }
      goto LABEL_78;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_19271084(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B0D840(&this->fields.callbackFunc2, callback);
  PartyOrganizationListViewManager__SetMode_19269440(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x10
  _BOOL8 v8; // x0
  int32_t initMode; // w19
  const MethodInfo *v10; // x3
  int v11; // s1
  int32_t v14; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4211BF8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, obj);
    sub_B0D8A4(&PartyOrganizationListViewObject_TypeInfo, v6);
    byte_4211BF8 = 1;
  }
  if ( v4 )
  {
    v7 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      if ( (PartyOrganizationListViewObject_c *)v4->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v4 )
      sub_B0D97C(v8);
    initMode = this->fields.initMode;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Vector3__get_zero(0LL);
    if ( initMode == 2 )
      v14 = 3;
    else
      v14 = 2;
    PartyOrganizationListViewObject__Init(
      (PartyOrganizationListViewObject_o *)v4,
      v14,
      0LL,
      0.0,
      *(UnityEngine_Vector3_o *)&v11,
      v10);
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

  if ( (byte_4211BEF & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4211BEF = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4211BF1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4211BF1 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B0DC70(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  PartyOrganizationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4211BF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4211BF4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (PartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)current,
                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v12;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4211BF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4211BF3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v12;
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

  if ( (byte_4211BF0 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4211BF0 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4211BF2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4211BF2 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B0DC70(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4212182 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9);
    byte_4212182 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager_CallbackFunc__Invoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}