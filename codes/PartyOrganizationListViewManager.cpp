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
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v24; // x22
  ListViewDropObject_o *v25; // x8
  __int64 v26; // x11
  ListViewDropObject_o *v27; // x23
  struct ListViewManager_o **p_manager; // x23
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v32; // x8
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v34; // x22
  System_Text_StringBuilder_o *v35; // x21
  __int64 v36; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v38; // x22
  System_String_o *v39; // x23
  Il2CppObject *v40; // x0
  System_String_o *v41; // x1
  UILabel_o *v42; // x0
  int32_t v43; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v45; // x0
  __int64 v46; // x0
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4184F76 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v14);
    sub_B2C35C(&StringLiteral_10421/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, v15);
    sub_B2C35C(&StringLiteral_10423/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v16);
    sub_B2C35C(&StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/, v17);
    sub_B2C35C(&StringLiteral_10422/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v18);
    sub_B2C35C(&StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v19);
    byte_4184F76 = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_B2C2F8(&this->fields.basePartyItem, basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_B2C2F8(&this->fields.partyItem, partyItem);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_17;
  v24 = 0LL;
  while ( (__int64)v24 < dropObjectList->fields._size )
  {
    if ( v24 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v25 = dropObjectList->fields._items->m_Items[v24];
    if ( v25
      && (v26 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
          *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)v25->klass->_2.typeHierarchy[v26 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v27 = dropObjectList->fields._items->m_Items[v24];
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    Member = *p_partyItem;
    if ( *p_partyItem )
    {
      Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, v24, 0LL);
      if ( v27 )
      {
        ((void (__fastcall *)(ListViewDropObject_o *, PartyListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
          v27,
          Member,
          v27->klass->vtable._6_SetItem.methodPtr);
        v27->fields.manager = (struct ListViewManager_o *)this;
        p_manager = &v27->fields.manager;
        sub_B2C2F8(p_manager, this);
        dropDragPrefab = this->fields.dropDragPrefab;
        p_manager[1] = (struct ListViewManager_o *)dropDragPrefab;
        sub_B2C2F8(p_manager + 1, dropDragPrefab);
        dropObjectList = this->fields.dropObjectList;
        ++v24;
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
    v32 = &StringLiteral_10423/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_49:
    Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
    if ( !explanationLabel )
      goto LABEL_17;
    v41 = (System_String_o *)Member;
    v42 = explanationLabel;
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
    v32 = &StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
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
    v32 = &StringLiteral_10421/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_49;
  }
  v34 = PartyOrganizationServantSwapExplanationFixedServantText;
  v35 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v35, 0LL);
  v36 = *(_QWORD *)&v34->max_length;
  if ( (int)v36 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v36; ++i )
    {
      if ( i )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
        if ( !v35 )
          goto LABEL_17;
        Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42408700(v35, (System_String_o *)Member, 0LL);
        LODWORD(v36) = v34->max_length;
      }
      if ( i >= (unsigned int)v36 )
      {
        v46 = sub_B2C460(Member);
        sub_B2C400(v46, 0LL);
      }
      if ( !v35 )
        goto LABEL_17;
      Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42408700(v35, v34->m_Items[i], 0LL);
      LODWORD(v36) = v34->max_length;
    }
  }
  v38 = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, 0LL);
  if ( !v35 )
    goto LABEL_17;
  v39 = (System_String_o *)Member;
  v40 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                          v35,
                          v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  Member = (PartyListViewItem_o *)System_String__Format(v39, v40, 0LL);
  if ( !v38 )
    goto LABEL_17;
  v41 = (System_String_o *)Member;
  v42 = v38;
LABEL_51:
  UILabel__set_text(v42, v41, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  Member = (PartyListViewItem_o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_17;
  v43 = ((unsigned __int8)Member & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v43, 0LL);
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
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      Member = (PartyListViewItem_o *)System_String__Concat_44305532(v45, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)Member, 0LL, 1, 0, 0LL);
        goto LABEL_67;
      }
    }
LABEL_17:
    sub_B2C434(Member, v22);
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
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4184F77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v7);
    byte_4184F77 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      dropObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v13.fields.current
        && (v9 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
            *(&v13.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v13.fields.current->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v13.fields.current;
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
          sub_B2C434(v11, v12);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_B2C2F8(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_B2C2F8(&this->fields.partyItem, 0LL);
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
  __int64 v3; // x1

  if ( (byte_4184F84 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4184F84 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4184F86 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4184F86 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantEquipStatusDialog(Instance, v8, 0LL);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4184F82 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4184F82 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantStatusDialog(Instance, v8, 0LL);
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
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4184F83 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4184F83 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B2C434(v11, v12);
    CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(&this->fields.callbackFunc, 0LL);
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

  if ( (byte_4184F78 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_4184F78 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4184F88 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___, info);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4184F88 = 1;
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
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_22;
  v8 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
    sub_B2C434(this, info);
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

  if ( (byte_4184F87 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___, info);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4184F87 = 1;
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
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v7 = info->fields.dropSurfaceObject;
  if ( !v7 )
    goto LABEL_22;
  v8 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
    sub_B2C434(this, info);
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
  PartyListViewItem_o *basePartyItem; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, 0LL), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(basePartyItem, 0LL), (basePartyItem = this->fields.partyItem) == 0LL) )
  {
    sub_B2C434(basePartyItem, method);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_19882644(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_19883072(this, 10, v5);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B2C434(v5, v6);
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
  ServantStatusDialog_EndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x23
  int32_t v20; // w1

  v4 = this;
  if ( (byte_4184F85 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndShowEquip__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4184F85 = 1;
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL) < 1 )
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
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                             (PartyOrganizationListViewItem_o *)linkItem,
                             0LL);
            v19 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v19,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowEquip__,
              0LL);
            if ( Instance )
            {
              if ( IsNpc )
                v20 = 19;
              else
                v20 = 14;
              CommonUI__OpenServantEquipStatusDialog_17986440(Instance, v20, EquipTarget1, v19, 0LL, 0LL);
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
        v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL);
        v14 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v14,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowEquip__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenServantEquipStatusDialog(v12, 11, EquipUserSvtId, 1, v14, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B2C434(this, obj);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B2C434(v5, v6);
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
  PartyListViewItem_o *v17; // x21
  int32_t index; // w20
  bool v19; // zf
  CommonUI_o *v20; // x22
  ServantStatusDialog_FormationEndDelegate_o *v21; // x23
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CommonUI_o *v24; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v26; // x22
  ServantStatusDialog_EndDelegate_o *v27; // x23

  v4 = this;
  if ( (byte_4184F81 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B2C35C(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v8);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_EndShowServant__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_4184F81 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v19 = menuKind == 8;
          v20 = (CommonUI_o *)Instance;
          if ( v19 )
          {
            v21 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B2C42C(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v21,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v20 )
            {
              CommonUI__OpenServantStatusDialog_17980576(v20, 1, v17, index, v21, 0LL);
              return;
            }
          }
          else
          {
            v27 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v27,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v20 )
            {
              CommonUI__OpenServantStatusDialog(v20, 1, v17, index, v27, 0LL);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL) < 1 )
          goto LABEL_8;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v4->fields.initMode = 6;
        v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v26,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v24 )
        {
          CommonUI__OpenServantStatusDialog_17984076(v24, 5, ServantLeader, v26, 0LL);
          return;
        }
      }
    }
    sub_B2C434(this, obj);
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
  struct UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4184F80 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184F80 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8(&this->fields.callbackFunc2, 0LL);
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
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4184F7D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v13);
    byte_4184F7D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      dropObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v21.fields.current;
      if ( v21.fields.current )
      {
        v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (PartyOrganizationListViewDropObject_c *)v21.fields.current->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v18 = sub_B2C728(v21.fields.current);
LABEL_18:
          sub_B2C434(v18, v19);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_32203540(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v17,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject_19883072(
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
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4184F7E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v11);
    byte_4184F7E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      dropObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v19.fields.current;
      if ( v19.fields.current )
      {
        v14 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (PartyOrganizationListViewDropObject_c *)v19.fields.current->klass->_2.typeHierarchy[v14 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v16 = sub_B2C728(v19.fields.current);
LABEL_18:
          sub_B2C434(v16, v17);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_32203648(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v15,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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
  __int64 v9; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  PartyOrganizationListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4184F7F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v4);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_4184F7F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v14, 4, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v14; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4184F7B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v12);
    byte_4184F7B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v14);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v18, v19);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v17,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_19882644(
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
  __int64 v12; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4184F7C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4184F7C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v12);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v16, v17);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v15,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
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
  if ( (byte_4184F89 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v5);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    byte_4184F89 = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_17:
    sub_B2C434(this, isDisp);
  v8 = 0LL;
  v9 = isDisp;
  while ( (__int64)v8 < dropObjectList->fields._size )
  {
    if ( v8 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  PartyOrganizationListViewManager__SetMode_19886016(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_19886016(
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
  int v16; // w8
  PartyOrganizationListViewManager_o *v17; // x20
  int v18; // w8
  __int64 v19; // x23
  PartyOrganizationListViewObject_o *v20; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v23; // x20
  unsigned __int64 v24; // x21
  ListViewDropObject_o *v25; // x25
  System_Action_o *v26; // x20
  __int64 v27; // x10
  __int64 v28; // x10
  PartyOrganizationListViewDropObject_o *v29; // x0
  int v30; // w8
  PartyOrganizationListViewManager_o *v31; // x20
  int v32; // w8
  __int64 v33; // x23
  PartyOrganizationListViewObject_o *v34; // x21
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v37; // x20
  unsigned __int64 v38; // x21
  ListViewDropObject_o *v39; // x25
  System_Action_o *v40; // x20
  __int64 v41; // x10
  __int64 v42; // x10
  PartyOrganizationListViewDropObject_o *v43; // x0
  int v44; // w8
  PartyOrganizationListViewManager_o *v45; // x20
  int v46; // w8
  __int64 v47; // x23
  PartyOrganizationListViewObject_o *v48; // x21
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v51; // x20
  unsigned __int64 v52; // x21
  ListViewDropObject_o *v53; // x25
  System_Action_o *v54; // x20
  __int64 v55; // x10
  __int64 v56; // x10
  PartyOrganizationListViewDropObject_o *v57; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = this;
  if ( (byte_4184F7A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v8);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v9);
    this = (PartyOrganizationListViewManager_o *)sub_B2C35C(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_4184F7A = 1;
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
        PartyOrganizationListViewManager__RequestListObject_19882644(v4, 2, v13);
        v15 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_19882644(v4, 3, v13);
        v15 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_19883072(v4, v15, v14);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v12);
        if ( !this )
          goto LABEL_78;
        v16 = (int)this->fields.dropObjectList;
        v17 = this;
        if ( v16 < 1 )
          goto LABEL_18;
        v4->fields.callbackCount += v16;
        v18 = (int)this->fields.dropObjectList;
        if ( v18 < 1 )
          goto LABEL_18;
        v19 = 0LL;
        do
        {
          if ( v18 <= (unsigned int)v19 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v20 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v17->fields.m_CachedPtr + 8 * v19 + 32);
          v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v20 )
            goto LABEL_78;
          zero = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v20, 4, v21, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v22);
          v18 = (int)v17->fields.dropObjectList;
          ++v19;
        }
        while ( (int)v19 < v18 );
LABEL_18:
        v23 = v4->fields.dropObjectList;
        if ( !v23 )
          goto LABEL_78;
        v24 = 0LL;
        while ( (__int64)v24 < v23->fields._size )
        {
          if ( v24 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v25 = v23->fields._items->m_Items[v24];
          v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v26, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v25 )
          {
            v27 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v27
              && (PartyOrganizationListViewDropObject_c *)v25->klass->_2.typeHierarchy[v27 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v28 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v28 )
                v29 = (PartyOrganizationListViewDropObject_c *)v25->klass->_2.typeHierarchy[v28 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v25
                    : 0LL;
              else
                v29 = 0LL;
              PartyOrganizationListViewDropObject__Init_32203540(v29, 2, v26, 0.1, 0LL);
              v23 = v4->fields.dropObjectList;
              ++v24;
              if ( v23 )
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
        v30 = (int)this->fields.dropObjectList;
        v31 = this;
        if ( v30 < 1 )
          goto LABEL_41;
        v4->fields.callbackCount += v30;
        v32 = (int)this->fields.dropObjectList;
        if ( v32 < 1 )
          goto LABEL_41;
        v33 = 0LL;
        do
        {
          if ( v32 <= (unsigned int)v33 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v34 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v31->fields.m_CachedPtr + 8 * v33 + 32);
          v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v35, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v34 )
            goto LABEL_78;
          v59 = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v34, 5, v35, 0.1, *(UnityEngine_Vector3_o *)&v59.fields.y, v36);
          v32 = (int)v31->fields.dropObjectList;
          ++v33;
        }
        while ( (int)v33 < v32 );
LABEL_41:
        v37 = v4->fields.dropObjectList;
        if ( !v37 )
          goto LABEL_78;
        v38 = 0LL;
        while ( (__int64)v38 < v37->fields._size )
        {
          if ( v38 >= (unsigned int)v37->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v39 = v37->fields._items->m_Items[v38];
          v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v40, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v39 )
          {
            v41 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v39->klass->_2.bitflags2 + 1) >= (unsigned int)v41
              && (PartyOrganizationListViewDropObject_c *)v39->klass->_2.typeHierarchy[v41 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v42 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v39->klass->_2.bitflags2 + 1) >= (unsigned int)v42 )
                v43 = (PartyOrganizationListViewDropObject_c *)v39->klass->_2.typeHierarchy[v42 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v39
                    : 0LL;
              else
                v43 = 0LL;
              PartyOrganizationListViewDropObject__Init_32203540(v43, 2, v40, 0.1, 0LL);
              v37 = v4->fields.dropObjectList;
              ++v38;
              if ( v37 )
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
        v44 = (int)this->fields.dropObjectList;
        v45 = this;
        if ( v44 < 1 )
          goto LABEL_64;
        v4->fields.callbackCount += v44;
        v46 = (int)this->fields.dropObjectList;
        if ( v46 < 1 )
          goto LABEL_64;
        v47 = 0LL;
        break;
      default:
        return;
    }
    do
    {
      if ( v46 <= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v48 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v45->fields.m_CachedPtr + 8 * v47 + 32);
      v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v48 )
        goto LABEL_78;
      v60 = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v48, 6, v49, 0.1, *(UnityEngine_Vector3_o *)&v60.fields.y, v50);
      v46 = (int)v45->fields.dropObjectList;
      ++v47;
    }
    while ( (int)v47 < v46 );
LABEL_64:
    v51 = v4->fields.dropObjectList;
    if ( !v51 )
LABEL_78:
      sub_B2C434(this, *(_QWORD *)&mode);
    v52 = 0LL;
    while ( (__int64)v52 < v51->fields._size )
    {
      if ( v52 >= (unsigned int)v51->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v53 = v51->fields._items->m_Items[v52];
      v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v54, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v53 )
      {
        v55 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v55
          && (PartyOrganizationListViewDropObject_c *)v53->klass->_2.typeHierarchy[v55 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          v56 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v56 )
            v57 = (PartyOrganizationListViewDropObject_c *)v53->klass->_2.typeHierarchy[v56 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                ? (PartyOrganizationListViewDropObject_o *)v53
                : 0LL;
          else
            v57 = 0LL;
          PartyOrganizationListViewDropObject__Init_32203540(v57, 2, v54, 0.1, 0LL);
          v51 = v4->fields.dropObjectList;
          ++v52;
          if ( v51 )
            continue;
        }
      }
      goto LABEL_78;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_19887660(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(&this->fields.callbackFunc2, callback);
  PartyOrganizationListViewManager__SetMode_19886016(this, mode, v6);
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
  __int64 v9; // x1
  int32_t initMode; // w19
  const MethodInfo *v11; // x3
  int v12; // s1
  int32_t v15; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4184F79 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, obj);
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, v6);
    byte_4184F79 = 1;
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
      sub_B2C434(v8, v9);
    initMode = this->fields.initMode;
    *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Vector3__get_zero(0LL);
    if ( initMode == 2 )
      v15 = 3;
    else
      v15 = 2;
    PartyOrganizationListViewObject__Init(
      (PartyOrganizationListViewObject_o *)v4,
      v15,
      0LL,
      0.0,
      *(UnityEngine_Vector3_o *)&v12,
      v11);
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

  if ( (byte_4184F70 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4184F70 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4184F72 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4184F72 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B2C728(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  PartyOrganizationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4184F75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4184F75 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (PartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)current,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4184F74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4184F74 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4184F71 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4184F71 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4184F73 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4184F73 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185290 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9);
    byte_4185290 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}