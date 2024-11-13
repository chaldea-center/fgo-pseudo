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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct PartyListViewItem_o **p_partyItem; // x21
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v34; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v37; // x23
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v40; // x1
  struct UILabel_o *explanationLabel; // x21
  __int64 *v42; // x8
  System_String_o *v43; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_String_array *v48; // x22
  System_Text_StringBuilder_o *v49; // x21
  __int64 v50; // x8
  unsigned __int64 i; // x23
  struct UILabel_o *v52; // x22
  System_String_o *v53; // x23
  Il2CppObject *v54; // x0
  System_String_o *v55; // x1
  UILabel_o *v56; // x0
  __int64 v57; // x1
  int32_t v58; // w1
  __int64 v59; // x1
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v61; // x0
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B12073 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, *(_QWORD *)&menuKind, partyItem);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_10414/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10475/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10477/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10474/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10476/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v29, v30);
    byte_4B12073 = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_1BCA784(&this->fields.basePartyItem, basePartyItem);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_1BCA784(&this->fields.partyItem, partyItem);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_15;
  v34 = 0;
  while ( v34 < dropObjectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             dropObjectList,
             v34,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v37 = Item;
      else
        v37 = 0LL;
    }
    else
    {
      v37 = 0LL;
    }
    dropObjectList = (System_Collections_Generic_List_object__o *)*p_partyItem;
    if ( *p_partyItem )
    {
      dropObjectList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetMember(
                                                                      (PartyListViewItem_o *)dropObjectList,
                                                                      v34,
                                                                      0LL);
      if ( v37 )
      {
        ((void (__fastcall *)(Il2CppObject *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))v37->klass->vtable[5].method)(
          v37,
          dropObjectList,
          v37->klass->vtable[6].methodPtr);
        v37[2].monitor = this;
        sub_1BCA784(&v37[2].monitor, this);
        dropDragPrefab = this->fields.dropDragPrefab;
        v37[3].klass = (Il2CppClass *)dropDragPrefab;
        sub_1BCA784(&v37[3], dropDragPrefab);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v34;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v42 = &StringLiteral_10477/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
LABEL_23:
    v43 = (System_String_o *)*v42;
LABEL_45:
    dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(v43, 0LL);
    if ( !explanationLabel )
      goto LABEL_15;
    v55 = (System_String_o *)dropObjectList;
    v56 = explanationLabel;
    goto LABEL_47;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0LL) )
  {
LABEL_42:
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v43 = (System_String_o *)StringLiteral_10474/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION"*/;
    goto LABEL_45;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0LL);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    v42 = &StringLiteral_10475/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
    goto LABEL_23;
  }
  v48 = PartyOrganizationServantSwapExplanationFixedServantText;
  v49 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v45, v46, v47);
  System_Text_StringBuilder___ctor(v49, 0LL);
  v50 = *(_QWORD *)&v48->max_length;
  if ( (int)v50 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v50; ++i )
    {
      if ( i )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
        dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                                        0LL);
        if ( !v49 )
          goto LABEL_15;
        dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_61563116(
                                                                        v49,
                                                                        (System_String_o *)dropObjectList,
                                                                        0LL);
        if ( i >= v48->max_length )
          goto LABEL_65;
      }
      else
      {
        if ( !(_DWORD)v50 )
LABEL_65:
          sub_1BCAA44(dropObjectList, v32);
        if ( !v49 )
          goto LABEL_15;
      }
      dropObjectList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_61563116(
                                                                      v49,
                                                                      v48->m_Items[i],
                                                                      0LL);
      LODWORD(v50) = v48->max_length;
    }
  }
  v52 = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  dropObjectList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10476/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/,
                                                                  0LL);
  if ( !v49 )
    goto LABEL_15;
  v53 = (System_String_o *)dropObjectList;
  v54 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                          v49,
                          v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Format(v53, v54, 0LL);
  if ( !v52 )
    goto LABEL_15;
  v55 = (System_String_o *)dropObjectList;
  v56 = v52;
LABEL_47:
  UILabel__set_text(v56, v55, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v57);
  dropObjectList = (System_Collections_Generic_List_object__o *)FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_15;
  v58 = ((unsigned __int8)dropObjectList & 1) != 0 ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v58, 0LL);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
      dropObjectList = (System_Collections_Generic_List_object__o *)System_String__Concat_62401220(v61, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)dropObjectList, 0LL, 1, 0, 0LL);
        goto LABEL_61;
      }
    }
LABEL_15:
    sub_1BCAA3C(dropObjectList, v32);
  }
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12074 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v12, v13);
    byte_4B12074 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      dropObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v21.fields._current
        && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v21.fields._current;
        else
          current = 0LL;
      }
      else
      {
        current = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v18 )
      {
        if ( !current )
          sub_1BCAA3C(v18, v19);
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_1BCA784(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_1BCA784(&this->fields.partyItem, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12081 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12081 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B12083 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B12083 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B1207F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1207F = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B12080 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B12080 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v16, v17);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BCA784(&this->fields.callbackFunc, 0LL);
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
  __int64 v6; // x2
  PartyOrganizationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B12075 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v5, v6);
    byte_4B12075 = 1;
  }
  result = (PartyOrganizationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v9; // x8
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1

  if ( (byte_4B12085 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___, info, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4, v5);
    this = (PartyOrganizationListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12085 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v9 = info->fields.dropSurfaceObject;
  if ( !v9 )
    goto LABEL_19;
  v10 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v10 )
LABEL_19:
    sub_1BCAA3C(this, info);
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v10, 0LL) != 0;
}


bool __fastcall PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v9; // x8
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1

  if ( (byte_4B12084 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___, info, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4, v5);
    this = (PartyOrganizationListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12084 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  this = (PartyOrganizationListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !this )
    goto LABEL_19;
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v9 = info->fields.dropSurfaceObject;
  if ( !v9 )
    goto LABEL_19;
  v10 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (PartyOrganizationListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v10 )
LABEL_19:
    sub_1BCAA3C(this, info);
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v10, (const MethodInfo *)info) != 0;
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
    sub_1BCAA3C(basePartyItem, method);
  }
  PartyListViewItem__CheckRestriction(basePartyItem, 0LL);
  PartyOrganizationListViewManager__RequestListObject_32772304(this, 9, v4);
  PartyOrganizationListViewManager__RequestDropObject_32772756(this, 10, v5);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ServantStatusDialog_EndDelegate_o *v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  bool IsNpc; // w22
  Il2CppObject *v31; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ServantStatusDialog_EndDelegate_o *v36; // x23
  int32_t v37; // w1

  v4 = this;
  if ( (byte_4B12082 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndShowEquip__, v9, v10);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__, v11, v12);
    this = (PartyOrganizationListViewManager_o *)sub_1BCA7E0(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v13,
                                                   v14);
    byte_4B12082 = 1;
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
      v17 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
      return;
    }
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL) >= 1 )
    {
      v19 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      v4->fields.initMode = 7;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                         (PartyOrganizationListViewItem_o *)linkItem,
                         0LL);
      v26 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v23, v24, v25);
      ServantStatusDialog_EndDelegate___ctor(
        v26,
        (Il2CppObject *)v4,
        Method_PartyOrganizationListViewManager_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v26, 0LL, 0LL);
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
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&EquipSvtId.fields.fakeValue);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL) < 1 )
      goto LABEL_8;
    v28 = Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropEquipDetail__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    v4->fields.initMode = 7;
    this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                   (PartyOrganizationListViewItem_o *)linkItem,
                                                   0LL);
    if ( !this
      || (IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL),
          v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL),
          v36 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35),
          ServantStatusDialog_EndDelegate___ctor(
            v36,
            (Il2CppObject *)v4,
            Method_PartyOrganizationListViewManager_EndShowEquip__,
            0LL),
          !v31) )
    {
LABEL_31:
      sub_1BCAA3C(this, obj);
    }
    if ( IsNpc )
      v37 = 19;
    else
      v37 = 14;
    CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)v31, v37, EquipTarget1, v36, 0LL, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *v27; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ServantStatusDialog_EndDelegate_o *v32; // x22
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  PartyListViewItem_o *v41; // x21
  int32_t index; // w20
  bool v43; // zf
  CommonUI_o *v44; // x22
  ServantStatusDialog_FormationEndDelegate_o *v45; // x23
  ServantStatusDialog_EndDelegate_o *v46; // x23

  v4 = this;
  if ( (byte_4B1207E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v11, v12);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_EndShowServant__, v13, v14);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__, v15, v16);
    this = (PartyOrganizationListViewManager_o *)sub_1BCA7E0(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v17,
                                                   v18);
    byte_4B1207E = 1;
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
        v21 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
        return;
      }
      if ( linkItem->fields.userServantEntity && !linkItem->fields._IsDisappearSvt_k__BackingField )
      {
        v33 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
        partyItem = v4->fields.partyItem;
        v4->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v41 = v4->fields.partyItem;
          index = linkItem->fields.index;
          v43 = menuKind == 8;
          v44 = (CommonUI_o *)Instance;
          if ( v43 )
          {
            v45 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BCAA2C(
                                                                  ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                  v38,
                                                                  v39,
                                                                  v40);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v45,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v44 )
            {
              CommonUI__OpenServantStatusDialog_30775384(v44, 1, v41, index, v45, 0, 0LL);
              return;
            }
          }
          else
          {
            v46 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v38,
                                                         v39,
                                                         v40);
            ServantStatusDialog_EndDelegate___ctor(
              v46,
              (Il2CppObject *)v4,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v44 )
            {
              CommonUI__OpenServantStatusDialog(v44, 1, v41, index, v46, 0, 0LL);
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
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&SvtId.fields.fakeValue);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL) < 1 )
          goto LABEL_8;
        v25 = Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationListViewManager_OnClickListDropServantDetail__);
        v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
        v4->fields.initMode = 6;
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v32 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30, v31);
        ServantStatusDialog_EndDelegate___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v27 )
        {
          CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)v27, 5, ServantLeader, v32, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(this, obj);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B1207D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1207D = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784(&this->fields.callbackFunc2, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  PartyOrganizationListViewDropObject_c *v22; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1207A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v19, v20);
    byte_4B1207A = 1;
  }
  memset(&v32, 0, sizeof(v32));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      dropObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v32.fields._current;
      if ( v32.fields._current )
      {
        v22 = PartyOrganizationListViewDropObject_TypeInfo;
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v29 = sub_1BCACFC(v32.fields._current);
LABEL_17:
          sub_1BCAA3C(v29, v30);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_32602064(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v28,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject_32772756(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  PartyOrganizationListViewDropObject_c *v20; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1207B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v17, v18);
    byte_4B1207B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      dropObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v30 = v29;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v30.fields._current;
      if ( v30.fields._current )
      {
        v20 = PartyOrganizationListViewDropObject_TypeInfo;
        methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (PartyOrganizationListViewDropObject_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          v27 = sub_1BCACFC(v30.fields._current);
LABEL_17:
          sub_1BCAA3C(v27, v28);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
        System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_17;
        PartyOrganizationListViewDropObject__Init_32602192(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v26,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w24
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B1207C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B1207C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  v18 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      PartyOrganizationListViewObject__Init_32777168((PartyOrganizationListViewObject_o *)Item, 4, v23, 0.1, v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v18;
  }
  while ( v18 < v16->fields._size );
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12078 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v17, v18);
    byte_4B12078 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      PartyOrganizationListViewObject__Init_32777168(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v26,
        delay,
        v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_32772304(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v18; // x1
  int32_t size; // w8
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *current; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12079 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v15, v16);
    byte_4B12079 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v18);
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v28.fields._current;
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v25, v26);
      PartyOrganizationListViewObject__Init_32777740((PartyOrganizationListViewObject_o *)current, mode, v24, v27);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v10; // w20
  bool v11; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4B12086 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v5, v6);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v7, v8);
    byte_4B12086 = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_10:
    sub_1BCAA3C(dropObjectList, isDisp);
  v10 = 0;
  v11 = isDisp;
  while ( v10 < dropObjectList->fields._size )
  {
    dropObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    dropObjectList,
                                                                    v10,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (PartyOrganizationListViewDropObject_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        PartyOrganizationListViewDropObject__SetDispSwapGuide(
          (PartyOrganizationListViewDropObject_o *)dropObjectList,
          v11,
          0LL);
        dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        ++v10;
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
  sub_1BCA784(&this->fields.callbackFunc, callback);
  PartyOrganizationListViewManager__SetMode_32775620(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_32775620(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  PartyOrganizationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  int m_CancellationTokenSource; // w8
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  Il2CppObject *Item; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x3
  int32_t v31; // w20
  Il2CppObject *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x22
  __int64 methodPtr_low; // x10
  int v38; // w8
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w21
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x23
  const MethodInfo *v46; // x3
  int32_t v47; // w20
  Il2CppObject *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x22
  __int64 v53; // x10
  int v54; // w8
  System_Collections_Generic_List_object__o *v55; // x20
  int32_t v56; // w21
  Il2CppObject *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x23
  const MethodInfo *v62; // x3
  int32_t v63; // w20
  Il2CppObject *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x22
  __int64 v69; // x10

  v4 = this;
  if ( (byte_4B12077 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v13, v14);
    this = (PartyOrganizationListViewManager_o *)sub_1BCA7E0(
                                                   &Method_PartyOrganizationListViewManager_OnMoveEnd__,
                                                   v15,
                                                   v16);
    byte_4B12077 = 1;
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
        PartyOrganizationListViewManager__RequestListObject_32772304(v4, 2, v19);
        v21 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_32772304(v4, 3, v19);
        v21 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_32772756(v4, v21, v20);
        return;
      case 3:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v18);
        if ( !this )
          goto LABEL_48;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        v23 = (System_Collections_Generic_List_object__o *)this;
        if ( m_CancellationTokenSource < 1 )
          goto LABEL_15;
        v4->fields.callbackCount += m_CancellationTokenSource;
        v24 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v23,
                   v24,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
          v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
          System_Action___ctor(v29, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            goto LABEL_48;
          PartyOrganizationListViewObject__Init_32777168((PartyOrganizationListViewObject_o *)Item, 4, v29, 0.1, v30);
          ++v24;
        }
        while ( v24 < v23->fields._size );
LABEL_15:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_48;
        v31 = 0;
        while ( v31 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v32 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v31,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
          System_Action___ctor(v36, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v32 )
          {
            methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v32->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (PartyOrganizationListViewDropObject_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_32602064(
                (PartyOrganizationListViewDropObject_o *)v32,
                2,
                v36,
                0.1,
                0LL);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v31;
              if ( this )
                continue;
            }
          }
          goto LABEL_48;
        }
        return;
      case 4:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v18);
        if ( !this )
          goto LABEL_48;
        v38 = (int)this->fields.m_CancellationTokenSource;
        v39 = (System_Collections_Generic_List_object__o *)this;
        if ( v38 < 1 )
          goto LABEL_28;
        v4->fields.callbackCount += v38;
        v40 = 0;
        do
        {
          v41 = System_Collections_Generic_List_object___get_Item(
                  v39,
                  v40,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
          v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
          System_Action___ctor(v45, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v41 )
            goto LABEL_48;
          PartyOrganizationListViewObject__Init_32777168((PartyOrganizationListViewObject_o *)v41, 5, v45, 0.1, v46);
          ++v40;
        }
        while ( v40 < v39->fields._size );
LABEL_28:
        this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
        if ( !this )
          goto LABEL_48;
        v47 = 0;
        while ( v47 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v48 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v47,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
          v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
          System_Action___ctor(v52, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v48 )
          {
            v53 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v48->klass->vtable[0].methodPtr) >= (unsigned int)v53
              && (PartyOrganizationListViewDropObject_c *)v48->klass->_2.typeHierarchy[v53 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              PartyOrganizationListViewDropObject__Init_32602064(
                (PartyOrganizationListViewDropObject_o *)v48,
                2,
                v52,
                0.1,
                0LL);
              this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
              ++v47;
              if ( this )
                continue;
            }
          }
          goto LABEL_48;
        }
        return;
      case 5:
        this = (PartyOrganizationListViewManager_o *)PartyOrganizationListViewManager__get_ClippingObjectList(v4, v18);
        if ( !this )
          goto LABEL_48;
        v54 = (int)this->fields.m_CancellationTokenSource;
        v55 = (System_Collections_Generic_List_object__o *)this;
        if ( v54 < 1 )
          goto LABEL_41;
        v4->fields.callbackCount += v54;
        v56 = 0;
        break;
      default:
        return;
    }
    do
    {
      v57 = System_Collections_Generic_List_object___get_Item(
              v55,
              v56,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__);
      v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
      System_Action___ctor(v61, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v57 )
        goto LABEL_48;
      PartyOrganizationListViewObject__Init_32777168((PartyOrganizationListViewObject_o *)v57, 6, v61, 0.1, v62);
      ++v56;
    }
    while ( v56 < v55->fields._size );
LABEL_41:
    this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
    if ( !this )
LABEL_48:
      sub_1BCAA3C(this, *(_QWORD *)&mode);
    v63 = 0;
    while ( v63 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v64 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v63,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
      System_Action___ctor(v68, (Il2CppObject *)v4, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v64 )
      {
        v69 = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v64->klass->vtable[0].methodPtr) >= (unsigned int)v69
          && (PartyOrganizationListViewDropObject_c *)v64->klass->_2.typeHierarchy[v69 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          PartyOrganizationListViewDropObject__Init_32602064(
            (PartyOrganizationListViewDropObject_o *)v64,
            2,
            v68,
            0.1,
            0LL);
          this = (PartyOrganizationListViewManager_o *)v4->fields.dropObjectList;
          ++v63;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_32777116(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  PartyOrganizationListViewManager__SetMode_32775620(this, mode, v6);
}


void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 methodPtr_low; // x11
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B12076 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, item);
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, v6, v7);
    byte_4B12076 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v9 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v4 )
      sub_1BCAA3C(v9, v10);
    if ( this->fields.initMode == 2 )
      v12 = 3;
    else
      v12 = 2;
    PartyOrganizationListViewObject__Init_32775492((PartyOrganizationListViewObject_o *)v4, v12, v11);
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

  if ( (byte_4B1206D & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1206D = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B1206F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1206F = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BCACFC(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12072 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12072 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(
                                 (PartyOrganizationListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v21;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12071 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12071 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v21;
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

  if ( (byte_4B1206E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1206E = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B12070 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12070 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07518;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A074C0;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B12087 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B12087 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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