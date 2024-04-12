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
  PartyListViewItem_o *Member; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v13; // x22
  ListViewDropObject_o *v14; // x8
  __int64 v15; // x11
  ListViewDropObject_o *v16; // x23
  struct ListViewManager_o **p_manager; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v20; // x8
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v22; // x22
  System_Text_StringBuilder_o *v23; // x21
  __int64 v24; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x1
  UILabel_o *v30; // x0
  int32_t v31; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v33; // x0
  __int64 v34; // x0
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AD48C & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_10426/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_B52984(&StringLiteral_10485/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/);
    sub_B52984(&StringLiteral_10487/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/);
    sub_B52984(&StringLiteral_10484/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/);
    sub_B52984(&StringLiteral_10486/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/);
    sub_B52984(&StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    byte_42AD48C = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_B52920(&this->fields.basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_B52920(&this->fields.partyItem);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_17;
  v13 = 0LL;
  while ( (__int64)v13 < dropObjectList->fields._size )
  {
    if ( v13 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v14 = dropObjectList->fields._items->m_Items[v13];
    if ( v14
      && (v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
          *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)v14->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v16 = dropObjectList->fields._items->m_Items[v13];
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    Member = *p_partyItem;
    if ( *p_partyItem )
    {
      Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, v13, 0LL);
      if ( v16 )
      {
        ((void (__fastcall *)(ListViewDropObject_o *, PartyListViewItem_o *, Il2CppMethodPointer))v16->klass->vtable._5_SetItem.method)(
          v16,
          Member,
          v16->klass->vtable._6_SetItem.methodPtr);
        v16->fields.manager = (struct ListViewManager_o *)this;
        p_manager = &v16->fields.manager;
        sub_B52920(p_manager);
        p_manager[1] = (struct ListViewManager_o *)this->fields.dropDragPrefab;
        sub_B52920(p_manager + 1);
        dropObjectList = this->fields.dropObjectList;
        ++v13;
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
    v20 = &StringLiteral_10487/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_49:
    Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
    if ( !explanationLabel )
      goto LABEL_17;
    v29 = (System_String_o *)Member;
    v30 = explanationLabel;
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
    v20 = &StringLiteral_10484/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
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
    v20 = &StringLiteral_10485/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_49;
  }
  v22 = PartyOrganizationServantSwapExplanationFixedServantText;
  v23 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0LL);
  v24 = *(_QWORD *)&v22->max_length;
  if ( (int)v24 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v24; ++i )
    {
      if ( i )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
        if ( !v23 )
          goto LABEL_17;
        Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42994048(v23, (System_String_o *)Member, 0LL);
        LODWORD(v24) = v22->max_length;
      }
      if ( i >= (unsigned int)v24 )
      {
        v34 = sub_B52A88(Member);
        sub_B52A28(v34, 0LL);
      }
      if ( !v23 )
        goto LABEL_17;
      Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42994048(v23, v22->m_Items[i], 0LL);
      LODWORD(v24) = v22->max_length;
    }
  }
  v26 = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10486/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, 0LL);
  if ( !v23 )
    goto LABEL_17;
  v27 = (System_String_o *)Member;
  v28 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                          v23,
                          v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  Member = (PartyListViewItem_o *)System_String__Format(v27, v28, 0LL);
  if ( !v26 )
    goto LABEL_17;
  v29 = (System_String_o *)Member;
  v30 = v26;
LABEL_51:
  UILabel__set_text(v30, v29, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  Member = (PartyListViewItem_o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_17;
  v31 = ((unsigned __int8)Member & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v31, 0LL);
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
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      Member = (PartyListViewItem_o *)System_String__Concat_44568316(v33, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)Member, 0LL, 1, 0, 0LL);
        goto LABEL_67;
      }
    }
LABEL_17:
    sub_B52A5C(Member, v11);
  }
LABEL_67:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  __int64 v4; // x11
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AD48D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_42AD48D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      dropObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v8.fields.current
        && (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
            *(&v8.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v8.fields.current->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v8.fields.current;
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
      v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v6 )
      {
        if ( !current )
          sub_B52A5C(v6, v7);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_B52920(&this->fields.basePartyItem);
  this->fields.partyItem = 0LL;
  sub_B52920(&this->fields.partyItem);
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

  if ( (byte_42AD49A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD49A = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42AD49C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD49C = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__CloseServantEquipStatusDialog(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42AD498 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndCloseShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD498 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__CloseServantStatusDialog(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42AD499 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD499 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B52A5C(v9, v10);
    CommonUI__CloseServantStatusDialog(Instance, v8, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B52920(&this->fields.callbackFunc);
  if ( callbackFunc )
    PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 3, 0, 0LL);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42AD48E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    byte_42AD48E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewItem_TypeInfo )
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
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42AD49E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD49E = 1;
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
                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_22;
  v6 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v5,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_22:
    sub_B52A5C(this, info);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42AD49D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD49D = 1;
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
                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_22;
  v6 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v5,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_22:
    sub_B52A5C(this, info);
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
    sub_B52A5C(basePartyItem, method);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_19935384(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_19935812(this, 10, v5);
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
    sub_B52920(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B52A5C(v5, v6);
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
  struct ListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  CommonUI_o *v7; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x23
  int32_t v15; // w1

  v4 = this;
  if ( (byte_42AD49B & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndShowEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AD49B = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = obj->fields.linkItem;
      if ( !linkItem )
        goto LABEL_8;
      v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewItem_TypeInfo )
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL) < 1 )
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
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                             (PartyOrganizationListViewItem_o *)linkItem,
                             0LL);
            v14 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v14,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowEquip__,
              0LL);
            if ( Instance )
            {
              if ( IsNpc )
                v15 = 19;
              else
                v15 = 14;
              CommonUI__OpenServantEquipStatusDialog_18173384(Instance, v15, EquipTarget1, v14, 0LL, 0LL);
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
        v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL);
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowEquip__,
          0LL);
        if ( v7 )
        {
          CommonUI__OpenServantEquipStatusDialog(v7, 11, EquipUserSvtId, 1, v9, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B52A5C(this, obj);
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
    sub_B52920(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B52A5C(v5, v6);
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
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  PartyListViewItem_o *v10; // x21
  int32_t index; // w20
  bool v12; // zf
  CommonUI_o *v13; // x22
  ServantStatusDialog_FormationEndDelegate_o *v14; // x23
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CommonUI_o *v17; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x22
  ServantStatusDialog_EndDelegate_o *v20; // x23

  v4 = this;
  if ( (byte_42AD497 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__);
    sub_B52984(&Method_PartyOrganizationListViewManager_EndShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AD497 = 1;
  }
  if ( v4->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewItem_TypeInfo )
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v10 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v12 = menuKind == 8;
          v13 = (CommonUI_o *)Instance;
          if ( v12 )
          {
            v14 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B52A54(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v14,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v13 )
            {
              CommonUI__OpenServantStatusDialog_18167424(v13, 1, v10, index, v14, 0, 0LL);
              return;
            }
          }
          else
          {
            v20 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v20,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v13 )
            {
              CommonUI__OpenServantStatusDialog(v13, 1, v10, index, v20, 0, 0LL);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL) < 1 )
          goto LABEL_8;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v4->fields.initMode = 6;
        v17 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v19 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v19,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v17 )
        {
          CommonUI__OpenServantStatusDialog_18171020(v17, 5, ServantLeader, v19, 0LL);
          return;
        }
      }
    }
    sub_B52A5C(this, obj);
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

  if ( (byte_42AD496 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD496 = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920(&this->fields.callbackFunc2);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__RequestDropObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v9; // x9
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AD493 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_42AD493 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      dropObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v14.fields.current;
      if ( v14.fields.current )
      {
        v9 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9
          || (PartyOrganizationListViewDropObject_c *)v14.fields.current->klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v11 = sub_B52D50(v14.fields.current);
LABEL_18:
          sub_B52A5C(v11, v12);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_31261632(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v10,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestDropObject_19935812(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v7; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AD494 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_42AD494 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      dropObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( v12.fields.current )
      {
        v7 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7
          || (PartyOrganizationListViewDropObject_c *)v12.fields.current->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v9 = sub_B52D50(v12.fields.current);
LABEL_18:
          sub_B52A5C(v9, v10);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_31261740(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v8,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  PartyOrganizationListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AD495 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AD495 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B52A5C(ObjectList, v5);
  v6 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v10, 4, v11, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v6->fields._size;
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AD491 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_42AD491 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_19935384(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AD492 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_42AD492 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v6; // x21
  bool v7; // w20
  ListViewDropObject_o *v8; // x8
  __int64 v9; // x11
  __int64 v10; // x11
  PartyOrganizationListViewDropObject_o *v11; // x0

  v4 = this;
  if ( (byte_42AD49F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_42AD49F = 1;
  }
  dropObjectList = v4->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_17:
    sub_B52A5C(this, isDisp);
  v6 = 0LL;
  v7 = isDisp;
  while ( (__int64)v6 < dropObjectList->fields._size )
  {
    if ( v6 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v8 = dropObjectList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (PartyOrganizationListViewDropObject_c *)v8->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        v10 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
          v11 = (PartyOrganizationListViewDropObject_c *)v8->klass->_2.typeHierarchy[v10 - 1] == PartyOrganizationListViewDropObject_TypeInfo
              ? (PartyOrganizationListViewDropObject_o *)dropObjectList->fields._items->m_Items[v6]
              : 0LL;
        else
          v11 = 0LL;
        PartyOrganizationListViewDropObject__SetDispSwapGuide(v11, v7, 0LL);
        dropObjectList = v4->fields.dropObjectList;
        ++v6;
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
  sub_B52920(&this->fields.callbackFunc);
  PartyOrganizationListViewManager__SetMode_19938756(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_19938756(
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
  int v10; // w8
  PartyOrganizationListViewManager_o *v11; // x20
  int v12; // w8
  __int64 v13; // x23
  PartyOrganizationListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v17; // x20
  unsigned __int64 v18; // x21
  ListViewDropObject_o *v19; // x25
  System_Action_o *v20; // x20
  __int64 v21; // x10
  __int64 v22; // x10
  PartyOrganizationListViewDropObject_o *v23; // x0
  int v24; // w8
  PartyOrganizationListViewManager_o *v25; // x20
  int v26; // w8
  __int64 v27; // x23
  PartyOrganizationListViewObject_o *v28; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v31; // x20
  unsigned __int64 v32; // x21
  ListViewDropObject_o *v33; // x25
  System_Action_o *v34; // x20
  __int64 v35; // x10
  __int64 v36; // x10
  PartyOrganizationListViewDropObject_o *v37; // x0
  int v38; // w8
  PartyOrganizationListViewManager_o *v39; // x20
  int v40; // w8
  __int64 v41; // x23
  PartyOrganizationListViewObject_o *v42; // x21
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v45; // x20
  unsigned __int64 v46; // x21
  ListViewDropObject_o *v47; // x25
  System_Action_o *v48; // x20
  __int64 v49; // x10
  __int64 v50; // x10
  PartyOrganizationListViewDropObject_o *v51; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = this;
  if ( (byte_42AD490 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    sub_B52984(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationListViewManager_o *)sub_B52984(&Method_PartyOrganizationListViewManager_OnMoveEnd__);
    byte_42AD490 = 1;
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
        PartyOrganizationListViewManager__RequestListObject_19935384(v4, 2, v7);
        v9 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_19935384(v4, 3, v7);
        v9 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_19935812(v4, v9, v8);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_78;
        v10 = (int)this->fields.dropObjectList;
        v11 = this;
        if ( v10 < 1 )
          goto LABEL_18;
        v4->fields.callbackCount += v10;
        v12 = (int)this->fields.dropObjectList;
        if ( v12 < 1 )
          goto LABEL_18;
        v13 = 0LL;
        do
        {
          if ( v12 <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v14 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v11->fields.m_CachedPtr + 8 * v13 + 32);
          v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v14 )
            goto LABEL_78;
          zero = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v14, 4, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
          v12 = (int)v11->fields.dropObjectList;
          ++v13;
        }
        while ( (int)v13 < v12 );
LABEL_18:
        v17 = v4->fields.dropObjectList;
        if ( !v17 )
          goto LABEL_78;
        v18 = 0LL;
        while ( (__int64)v18 < v17->fields._size )
        {
          if ( v18 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v19 = v17->fields._items->m_Items[v18];
          v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v19 )
          {
            v21 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v21
              && (PartyOrganizationListViewDropObject_c *)v19->klass->_2.typeHierarchy[v21 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v22 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
                v23 = (PartyOrganizationListViewDropObject_c *)v19->klass->_2.typeHierarchy[v22 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v19
                    : 0LL;
              else
                v23 = 0LL;
              PartyOrganizationListViewDropObject__Init_31261632(v23, 2, v20, 0.1, 0LL);
              v17 = v4->fields.dropObjectList;
              ++v18;
              if ( v17 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 4:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_78;
        v24 = (int)this->fields.dropObjectList;
        v25 = this;
        if ( v24 < 1 )
          goto LABEL_41;
        v4->fields.callbackCount += v24;
        v26 = (int)this->fields.dropObjectList;
        if ( v26 < 1 )
          goto LABEL_41;
        v27 = 0LL;
        do
        {
          if ( v26 <= (unsigned int)v27 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v28 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v25->fields.m_CachedPtr + 8 * v27 + 32);
          v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v29, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v28 )
            goto LABEL_78;
          v53 = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v28, 5, v29, 0.1, *(UnityEngine_Vector3_o *)&v53.fields.y, v30);
          v26 = (int)v25->fields.dropObjectList;
          ++v27;
        }
        while ( (int)v27 < v26 );
LABEL_41:
        v31 = v4->fields.dropObjectList;
        if ( !v31 )
          goto LABEL_78;
        v32 = 0LL;
        while ( (__int64)v32 < v31->fields._size )
        {
          if ( v32 >= (unsigned int)v31->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v33 = v31->fields._items->m_Items[v32];
          v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v34, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v33 )
          {
            v35 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v35
              && (PartyOrganizationListViewDropObject_c *)v33->klass->_2.typeHierarchy[v35 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v36 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v36 )
                v37 = (PartyOrganizationListViewDropObject_c *)v33->klass->_2.typeHierarchy[v36 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v33
                    : 0LL;
              else
                v37 = 0LL;
              PartyOrganizationListViewDropObject__Init_31261632(v37, 2, v34, 0.1, 0LL);
              v31 = v4->fields.dropObjectList;
              ++v32;
              if ( v31 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 5:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v6);
        if ( !this )
          goto LABEL_78;
        v38 = (int)this->fields.dropObjectList;
        v39 = this;
        if ( v38 < 1 )
          goto LABEL_64;
        v4->fields.callbackCount += v38;
        v40 = (int)this->fields.dropObjectList;
        if ( v40 < 1 )
          goto LABEL_64;
        v41 = 0LL;
        break;
      default:
        return;
    }
    do
    {
      if ( v40 <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v42 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v39->fields.m_CachedPtr + 8 * v41 + 32);
      v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v42 )
        goto LABEL_78;
      v54 = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v42, 6, v43, 0.1, *(UnityEngine_Vector3_o *)&v54.fields.y, v44);
      v40 = (int)v39->fields.dropObjectList;
      ++v41;
    }
    while ( (int)v41 < v40 );
LABEL_64:
    v45 = v4->fields.dropObjectList;
    if ( !v45 )
LABEL_78:
      sub_B52A5C(this, *(_QWORD *)&mode);
    v46 = 0LL;
    while ( (__int64)v46 < v45->fields._size )
    {
      if ( v46 >= (unsigned int)v45->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v47 = v45->fields._items->m_Items[v46];
      v48 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v48, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v47 )
      {
        v49 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v47->klass->_2.bitflags2 + 1) >= (unsigned int)v49
          && (PartyOrganizationListViewDropObject_c *)v47->klass->_2.typeHierarchy[v49 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          v50 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v47->klass->_2.bitflags2 + 1) >= (unsigned int)v50 )
            v51 = (PartyOrganizationListViewDropObject_c *)v47->klass->_2.typeHierarchy[v50 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                ? (PartyOrganizationListViewDropObject_o *)v47
                : 0LL;
          else
            v51 = 0LL;
          PartyOrganizationListViewDropObject__Init_31261632(v51, 2, v48, 0.1, 0LL);
          v45 = v4->fields.dropObjectList;
          ++v46;
          if ( v45 )
            continue;
        }
      }
      goto LABEL_78;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_19940400(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B52920(&this->fields.callbackFunc2);
  PartyOrganizationListViewManager__SetMode_19938756(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t initMode; // w19
  const MethodInfo *v10; // x3
  int v11; // s1
  int32_t v14; // w1

  if ( (byte_42AD48F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewObject_TypeInfo);
    byte_42AD48F = 1;
  }
  if ( obj )
  {
    v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      if ( (PartyOrganizationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !obj )
      sub_B52A5C(v7, v8);
    initMode = this->fields.initMode;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Vector3__get_zero(0LL);
    if ( initMode == 2 )
      v14 = 3;
    else
      v14 = 2;
    PartyOrganizationListViewObject__Init(
      (PartyOrganizationListViewObject_o *)obj,
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

  if ( (byte_42AD486 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_42AD486 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AD488 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AD488 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B52D50(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  PartyOrganizationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AD48B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD48B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (PartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)current,
                                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AD48A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD48A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_42AD487 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    byte_42AD487 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AD489 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AD489 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B52D50(v7);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42AD417 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&PartyOrganizationListViewManager_ResultKind_TypeInfo);
    byte_42AD417 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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