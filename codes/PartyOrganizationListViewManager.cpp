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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  struct PartyListViewItem_o **p_partyItem; // x21
  PartyListViewItem_o *Member; // x0
  __int64 v44; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v46; // x22
  ListViewDropObject_o *v47; // x8
  __int64 v48; // x11
  ListViewDropObject_o *v49; // x23
  struct ListViewManager_o **p_manager; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v53; // x8
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  System_String_array *v55; // x22
  System_Text_StringBuilder_o *v56; // x21
  __int64 v57; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v59; // x22
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x1
  UILabel_o *v63; // x0
  int32_t v64; // w1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v66; // x0
  __int64 v67; // x0
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E581A & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, menuKind, (_DWORD)partyItem, basePartyItem);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10468/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10529/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10531/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10530/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_10356/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v39, v40, v41);
    byte_42E581A = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_B5D560(&this->fields.basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_B5D560(&this->fields.partyItem);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_17;
  v46 = 0LL;
  while ( (__int64)v46 < dropObjectList->fields._size )
  {
    if ( v46 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v47 = dropObjectList->fields._items->m_Items[v46];
    if ( v47
      && (v48 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
          *(&v47->klass->_2.bitflags2 + 1) >= (unsigned int)v48) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)v47->klass->_2.typeHierarchy[v48 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v49 = dropObjectList->fields._items->m_Items[v46];
      else
        v49 = 0LL;
    }
    else
    {
      v49 = 0LL;
    }
    Member = *p_partyItem;
    if ( *p_partyItem )
    {
      Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, v46, 0LL);
      if ( v49 )
      {
        ((void (__fastcall *)(ListViewDropObject_o *, PartyListViewItem_o *, Il2CppMethodPointer))v49->klass->vtable._5_SetItem.method)(
          v49,
          Member,
          v49->klass->vtable._6_SetItem.methodPtr);
        v49->fields.manager = (struct ListViewManager_o *)this;
        p_manager = &v49->fields.manager;
        sub_B5D560(p_manager);
        p_manager[1] = (struct ListViewManager_o *)this->fields.dropDragPrefab;
        sub_B5D560(p_manager + 1);
        dropObjectList = this->fields.dropObjectList;
        ++v46;
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
    v53 = &StringLiteral_10531/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_49:
    Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
    if ( !explanationLabel )
      goto LABEL_17;
    v62 = (System_String_o *)Member;
    v63 = explanationLabel;
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
    v53 = &StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
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
    v53 = &StringLiteral_10529/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_49;
  }
  v55 = PartyOrganizationServantSwapExplanationFixedServantText;
  v56 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v56, 0LL);
  v57 = *(_QWORD *)&v55->max_length;
  if ( (int)v57 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v57; ++i )
    {
      if ( i )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
        if ( !v56 )
          goto LABEL_17;
        Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42953744(v56, (System_String_o *)Member, 0LL);
        LODWORD(v57) = v55->max_length;
      }
      if ( i >= (unsigned int)v57 )
      {
        v67 = sub_B5D6C8(Member);
        sub_B5D668(v67, 0LL);
      }
      if ( !v56 )
        goto LABEL_17;
      Member = (PartyListViewItem_o *)System_Text_StringBuilder__Append_42953744(v56, v55->m_Items[i], 0LL);
      LODWORD(v57) = v55->max_length;
    }
  }
  v59 = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = (PartyListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10530/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, 0LL);
  if ( !v56 )
    goto LABEL_17;
  v60 = (System_String_o *)Member;
  v61 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v56->klass->vtable._3_ToString.method)(
                          v56,
                          v56->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  Member = (PartyListViewItem_o *)System_String__Format(v60, v61, 0LL);
  if ( !v59 )
    goto LABEL_17;
  v62 = (System_String_o *)Member;
  v63 = v59;
LABEL_51:
  UILabel__set_text(v63, v62, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  Member = (PartyListViewItem_o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_17;
  v64 = ((unsigned __int8)Member & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v64, 0LL);
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
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      Member = (PartyListViewItem_o *)System_String__Concat_44577788(v66, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)Member, 0LL, 1, 0, 0LL);
        goto LABEL_67;
      }
    }
LABEL_17:
    sub_B5D69C(Member, v44);
  }
LABEL_67:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  __int64 v21; // x11
  Il2CppObject *current; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E581B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v17, v18, v19);
    byte_42E581B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      dropObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v25.fields.current
        && (v21 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
            *(&v25.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v25.fields.current->klass->_2.typeHierarchy[v21 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v25.fields.current;
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
      v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v23 )
      {
        if ( !current )
          sub_B5D69C(v23, v24);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_B5D560(&this->fields.basePartyItem);
  this->fields.partyItem = 0LL;
  sub_B5D560(&this->fields.partyItem);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5828 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5828 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E582A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E582A = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantEquipStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E5826 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E5826 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E5827 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, questId, method);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42E5827 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v15, v16);
    CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560(&this->fields.callbackFunc);
  if ( callbackFunc )
    PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 3, 0, 0LL);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E581C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v6, v7, v8);
    byte_42E581C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationListViewItem_TypeInfo )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v12; // x8
  UnityEngine_Object_o *v13; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E582C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___,
      (_DWORD)info,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v5, v6, v7);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E582C = 1;
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
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v12 = info->fields.dropSurfaceObject;
  if ( !v12 )
    goto LABEL_22;
  v13 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v13 )
LABEL_22:
    sub_B5D69C(this, info);
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v13, 0LL) != 0;
}


bool __fastcall PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v12; // x8
  UnityEngine_Object_o *v13; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E582B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___,
      (_DWORD)info,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v5, v6, v7);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E582B = 1;
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
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v12 = info->fields.dropSurfaceObject;
  if ( !v12 )
    goto LABEL_22;
  v13 = (UnityEngine_Object_o *)this;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v13 )
LABEL_22:
    sub_B5D69C(this, info);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v13, (const MethodInfo *)info) != 0;
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
    sub_B5D69C(basePartyItem, method);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_19475892(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_19476320(this, 10, v5);
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
    sub_B5D560(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B5D69C(v5, v6);
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
  __int64 v3; // x3
  PartyOrganizationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v22; // x10
  CommonUI_o *v23; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x23
  int32_t v31; // w1

  v5 = this;
  if ( (byte_42E5829 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndShowEquip__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    byte_42E5829 = 1;
  }
  if ( v5->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = obj->fields.linkItem;
      if ( !linkItem )
        goto LABEL_8;
      v22 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v22 - 1] != PartyOrganizationListViewItem_TypeInfo )
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL) < 1 )
            goto LABEL_8;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v5->fields.initMode = 7;
          this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                         (PartyOrganizationListViewItem_o *)linkItem,
                                                         0LL);
          if ( this )
          {
            IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                             (PartyOrganizationListViewItem_o *)linkItem,
                             0LL);
            v30 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v30,
              (Il2CppObject *)v5,
              Method_PartyOrganizationListViewManager_EndShowEquip__,
              0LL);
            if ( Instance )
            {
              if ( IsNpc )
                v31 = 19;
              else
                v31 = 14;
              CommonUI__OpenServantEquipStatusDialog_18217320(Instance, v31, EquipTarget1, v30, 0LL, 0LL);
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
        v5->fields.initMode = 7;
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL);
        v25 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v25,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewManager_EndShowEquip__,
          0LL);
        if ( v23 )
        {
          CommonUI__OpenServantEquipStatusDialog(v23, 11, EquipUserSvtId, 1, v25, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, obj);
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
    sub_B5D560(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B5D69C(v5, v6);
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
  __int64 v3; // x3
  PartyOrganizationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 v28; // x10
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CommonUI_o *v31; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v33; // x22
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  PartyListViewItem_o *v37; // x21
  int32_t index; // w20
  bool v39; // zf
  CommonUI_o *v40; // x22
  ServantStatusDialog_FormationEndDelegate_o *v41; // x23
  ServantStatusDialog_EndDelegate_o *v42; // x23

  v5 = this;
  if ( (byte_42E5825 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v15, v16, v17);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_EndShowServant__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    byte_42E5825 = 1;
  }
  if ( v5->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (v28 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v28)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v28 - 1] != PartyOrganizationListViewItem_TypeInfo )
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
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        partyItem = v5->fields.partyItem;
        v5->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v37 = v5->fields.partyItem;
          index = linkItem->fields.index;
          v39 = menuKind == 8;
          v40 = (CommonUI_o *)Instance;
          if ( v39 )
          {
            v41 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B5D694(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v41,
              (Il2CppObject *)v5,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v40 )
            {
              CommonUI__OpenServantStatusDialog_18211360(v40, 1, v37, index, v41, 0, 0LL);
              return;
            }
          }
          else
          {
            v42 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v42,
              (Il2CppObject *)v5,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v40 )
            {
              CommonUI__OpenServantStatusDialog(v40, 1, v37, index, v42, 0, 0LL);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL) < 1 )
          goto LABEL_8;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v5->fields.initMode = 6;
        v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v33 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v31 )
        {
          CommonUI__OpenServantStatusDialog_18214956(v31, 5, ServantLeader, v33, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E5824 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5824 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560(&this->fields.callbackFunc2);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v31; // x9
  System_Action_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E5821 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v26, v27, v28);
    byte_42E5821 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      dropObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v36.fields.current;
      if ( v36.fields.current )
      {
        v31 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v36.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
          || (PartyOrganizationListViewDropObject_c *)v36.fields.current->klass->_2.typeHierarchy[v31 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v33 = sub_B5D990(v36.fields.current);
LABEL_18:
          sub_B5D69C(v33, v34);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v32, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_29752880(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v32,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestDropObject_19476320(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v29; // x9
  System_Action_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E5822 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v24, v25, v26);
    byte_42E5822 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      dropObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v34.fields.current;
      if ( v34.fields.current )
      {
        v29 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v29
          || (PartyOrganizationListViewDropObject_c *)v34.fields.current->klass->_2.typeHierarchy[v29 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v31 = sub_B5D990(v34.fields.current);
LABEL_18:
          sub_B5D69C(v31, v32);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v30, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_29752988(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v30,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  PartyOrganizationListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E5823 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42E5823 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  v20 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v20->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v24, 4, v25, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v26);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v20->fields._size;
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v27; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E581F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v23, v24, v25);
    byte_42E581F = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v27);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v31, v32);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v30,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v33);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_19475892(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v25; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E5820 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v21, v22, v23);
    byte_42E5820 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v25);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v32.fields.current;
      v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v29, v30);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v28,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v31);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v13; // x21
  bool v14; // w20
  ListViewDropObject_o *v15; // x8
  __int64 v16; // x11
  __int64 v17; // x11
  PartyOrganizationListViewDropObject_o *v18; // x0

  v5 = this;
  if ( (byte_42E582D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v6, v7, v8);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v9, v10, v11);
    byte_42E582D = 1;
  }
  dropObjectList = v5->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_17:
    sub_B5D69C(this, isDisp);
  v13 = 0LL;
  v14 = isDisp;
  while ( (__int64)v13 < dropObjectList->fields._size )
  {
    if ( v13 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = dropObjectList->fields._items->m_Items[v13];
    if ( v15 )
    {
      v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (PartyOrganizationListViewDropObject_c *)v15->klass->_2.typeHierarchy[v16 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        v17 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
          v18 = (PartyOrganizationListViewDropObject_c *)v15->klass->_2.typeHierarchy[v17 - 1] == PartyOrganizationListViewDropObject_TypeInfo
              ? (PartyOrganizationListViewDropObject_o *)dropObjectList->fields._items->m_Items[v13]
              : 0LL;
        else
          v18 = 0LL;
        PartyOrganizationListViewDropObject__SetDispSwapGuide(v18, v14, 0LL);
        dropObjectList = v5->fields.dropObjectList;
        ++v13;
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
  sub_B5D560(&this->fields.callbackFunc);
  PartyOrganizationListViewManager__SetMode_19479264(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_19479264(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  int32_t v28; // w1
  int v29; // w8
  PartyOrganizationListViewManager_o *v30; // x20
  int v31; // w8
  __int64 v32; // x23
  PartyOrganizationListViewObject_o *v33; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v36; // x20
  unsigned __int64 v37; // x21
  ListViewDropObject_o *v38; // x25
  System_Action_o *v39; // x20
  __int64 v40; // x10
  __int64 v41; // x10
  PartyOrganizationListViewDropObject_o *v42; // x0
  int v43; // w8
  PartyOrganizationListViewManager_o *v44; // x20
  int v45; // w8
  __int64 v46; // x23
  PartyOrganizationListViewObject_o *v47; // x21
  System_Action_o *v48; // x22
  const MethodInfo *v49; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v50; // x20
  unsigned __int64 v51; // x21
  ListViewDropObject_o *v52; // x25
  System_Action_o *v53; // x20
  __int64 v54; // x10
  __int64 v55; // x10
  PartyOrganizationListViewDropObject_o *v56; // x0
  int v57; // w8
  PartyOrganizationListViewManager_o *v58; // x20
  int v59; // w8
  __int64 v60; // x23
  PartyOrganizationListViewObject_o *v61; // x21
  System_Action_o *v62; // x22
  const MethodInfo *v63; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v64; // x20
  unsigned __int64 v65; // x21
  ListViewDropObject_o *v66; // x25
  System_Action_o *v67; // x20
  __int64 v68; // x10
  __int64 v69; // x10
  PartyOrganizationListViewDropObject_o *v70; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v5 = this;
  if ( (byte_42E581E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v15, v16, v17);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v18, v19, v20);
    this = (PartyOrganizationListViewManager_o *)sub_B5D5C4(
                                                   &Method_PartyOrganizationListViewManager_OnMoveEnd__,
                                                   v21,
                                                   v22,
                                                   v23);
    byte_42E581E = 1;
  }
  if ( mode == 9 )
  {
    PartyOrganizationListViewManager__ModifyItem(v5, *(const MethodInfo **)&mode);
  }
  else
  {
    dropObjectList = v5->fields.dropObjectList;
    v5->fields.initMode = mode;
    if ( !dropObjectList )
      goto LABEL_78;
    v5->fields.callbackCount = dropObjectList->fields._size;
    ListViewManager__set_IsInput((ListViewManager_o *)v5, mode == 2, 0LL);
    switch ( mode )
    {
      case 1:
        PartyOrganizationListViewManager__RequestListObject_19475892(v5, 2, v26);
        v28 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_19475892(v5, 3, v26);
        v28 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_19476320(v5, v28, v27);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v5, v25);
        if ( !this )
          goto LABEL_78;
        v29 = (int)this->fields.dropObjectList;
        v30 = this;
        if ( v29 < 1 )
          goto LABEL_18;
        v5->fields.callbackCount += v29;
        v31 = (int)this->fields.dropObjectList;
        if ( v31 < 1 )
          goto LABEL_18;
        v32 = 0LL;
        do
        {
          if ( v31 <= (unsigned int)v32 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v33 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v30->fields.m_CachedPtr + 8 * v32 + 32);
          v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v34, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v33 )
            goto LABEL_78;
          zero = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v33, 4, v34, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v35);
          v31 = (int)v30->fields.dropObjectList;
          ++v32;
        }
        while ( (int)v32 < v31 );
LABEL_18:
        v36 = v5->fields.dropObjectList;
        if ( !v36 )
          goto LABEL_78;
        v37 = 0LL;
        while ( (__int64)v37 < v36->fields._size )
        {
          if ( v37 >= (unsigned int)v36->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v38 = v36->fields._items->m_Items[v37];
          v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v39, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v38 )
          {
            v40 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v40
              && (PartyOrganizationListViewDropObject_c *)v38->klass->_2.typeHierarchy[v40 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v41 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v41 )
                v42 = (PartyOrganizationListViewDropObject_c *)v38->klass->_2.typeHierarchy[v41 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v38
                    : 0LL;
              else
                v42 = 0LL;
              PartyOrganizationListViewDropObject__Init_29752880(v42, 2, v39, 0.1, 0LL);
              v36 = v5->fields.dropObjectList;
              ++v37;
              if ( v36 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 4:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v5, v25);
        if ( !this )
          goto LABEL_78;
        v43 = (int)this->fields.dropObjectList;
        v44 = this;
        if ( v43 < 1 )
          goto LABEL_41;
        v5->fields.callbackCount += v43;
        v45 = (int)this->fields.dropObjectList;
        if ( v45 < 1 )
          goto LABEL_41;
        v46 = 0LL;
        do
        {
          if ( v45 <= (unsigned int)v46 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v47 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v44->fields.m_CachedPtr + 8 * v46 + 32);
          v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v48, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v47 )
            goto LABEL_78;
          v72 = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v47, 5, v48, 0.1, *(UnityEngine_Vector3_o *)&v72.fields.y, v49);
          v45 = (int)v44->fields.dropObjectList;
          ++v46;
        }
        while ( (int)v46 < v45 );
LABEL_41:
        v50 = v5->fields.dropObjectList;
        if ( !v50 )
          goto LABEL_78;
        v51 = 0LL;
        while ( (__int64)v51 < v50->fields._size )
        {
          if ( v51 >= (unsigned int)v50->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v52 = v50->fields._items->m_Items[v51];
          v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v53, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v52 )
          {
            v54 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v52->klass->_2.bitflags2 + 1) >= (unsigned int)v54
              && (PartyOrganizationListViewDropObject_c *)v52->klass->_2.typeHierarchy[v54 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v55 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v52->klass->_2.bitflags2 + 1) >= (unsigned int)v55 )
                v56 = (PartyOrganizationListViewDropObject_c *)v52->klass->_2.typeHierarchy[v55 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v52
                    : 0LL;
              else
                v56 = 0LL;
              PartyOrganizationListViewDropObject__Init_29752880(v56, 2, v53, 0.1, 0LL);
              v50 = v5->fields.dropObjectList;
              ++v51;
              if ( v50 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 5:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v5, v25);
        if ( !this )
          goto LABEL_78;
        v57 = (int)this->fields.dropObjectList;
        v58 = this;
        if ( v57 < 1 )
          goto LABEL_64;
        v5->fields.callbackCount += v57;
        v59 = (int)this->fields.dropObjectList;
        if ( v59 < 1 )
          goto LABEL_64;
        v60 = 0LL;
        break;
      default:
        return;
    }
    do
    {
      if ( v59 <= (unsigned int)v60 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v61 = *(PartyOrganizationListViewObject_o **)(*(_QWORD *)&v58->fields.m_CachedPtr + 8 * v60 + 32);
      v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v62, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v61 )
        goto LABEL_78;
      v73 = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v61, 6, v62, 0.1, *(UnityEngine_Vector3_o *)&v73.fields.y, v63);
      v59 = (int)v58->fields.dropObjectList;
      ++v60;
    }
    while ( (int)v60 < v59 );
LABEL_64:
    v64 = v5->fields.dropObjectList;
    if ( !v64 )
LABEL_78:
      sub_B5D69C(this, *(_QWORD *)&mode);
    v65 = 0LL;
    while ( (__int64)v65 < v64->fields._size )
    {
      if ( v65 >= (unsigned int)v64->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v66 = v64->fields._items->m_Items[v65];
      v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v67, (Il2CppObject *)v5, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v66 )
      {
        v68 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v66->klass->_2.bitflags2 + 1) >= (unsigned int)v68
          && (PartyOrganizationListViewDropObject_c *)v66->klass->_2.typeHierarchy[v68 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          v69 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v66->klass->_2.bitflags2 + 1) >= (unsigned int)v69 )
            v70 = (PartyOrganizationListViewDropObject_c *)v66->klass->_2.typeHierarchy[v69 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                ? (PartyOrganizationListViewDropObject_o *)v66
                : 0LL;
          else
            v70 = 0LL;
          PartyOrganizationListViewDropObject__Init_29752880(v70, 2, v67, 0.1, 0LL);
          v64 = v5->fields.dropObjectList;
          ++v65;
          if ( v64 )
            continue;
        }
      }
      goto LABEL_78;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_19480908(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B5D560(&this->fields.callbackFunc2);
  PartyOrganizationListViewManager__SetMode_19479264(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x10
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t initMode; // w19
  const MethodInfo *v13; // x3
  int v14; // s1
  int32_t v17; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_42E581D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, v6, v7, v8);
    byte_42E581D = 1;
  }
  if ( v4 )
  {
    v9 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (PartyOrganizationListViewObject_c *)v4->klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewObject_TypeInfo )
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
  v10 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !v4 )
      sub_B5D69C(v10, v11);
    initMode = this->fields.initMode;
    *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Vector3__get_zero(0LL);
    if ( initMode == 2 )
      v17 = 3;
    else
      v17 = 2;
    PartyOrganizationListViewObject__Init(
      (PartyOrganizationListViewObject_o *)v4,
      v17,
      0LL,
      0.0,
      *(UnityEngine_Vector3_o *)&v14,
      v13);
  }
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E5814 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5814 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v8->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_B5D990(v8);
  PartyOrganizationListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E5816 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5816 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_B5D990(v8);
  PartyOrganizationListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  PartyOrganizationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E5819 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E5819 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (PartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)current,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v29;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E5818 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E5818 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v29;
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E5815 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5815 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v8->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_B5D990(v8);
  PartyOrganizationListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E5817 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5817 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewManager_o *)sub_B5D990(v8);
  PartyOrganizationListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5A88 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5A88 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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