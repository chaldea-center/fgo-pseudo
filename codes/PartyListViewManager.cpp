void PartyListViewManager___ctor(PartyListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PartyListViewManager__CreateList(
        PartyListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  Il2CppObject *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x26
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  UILabel_o *explanationLabel; // x26
  __int64 *v30; // x8
  struct ListViewIndicator_o *indicator; // x26
  __int64 naturalAligment; // x10
  BalanceConfig_c *v33; // x0
  bool v34; // zf
  PartyListViewIndicator_o *v35; // x25
  int32_t v36; // w8
  System_Int32_array *v37; // x3

  if ( (byte_4E72EE2 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10457/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/);
    sub_1D0F0B4(&StringLiteral_10386/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/);
    sub_1D0F0B4(&StringLiteral_10456/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/);
    sub_1D0F0B4(&StringLiteral_10365/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/);
    byte_4E72EE2 = 1;
  }
  this->fields.menuKind = menuKind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !baseDeckItemList )
    goto LABEL_49;
  max_length = baseDeckItemList->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < (unsigned int)max_length )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      v16 = (Il2CppObject *)baseDeckItemList->m_Items[v24];
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_49;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          v16,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
      }
      LODWORD(max_length) = baseDeckItemList->max_length;
      if ( (__int64)++v24 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_50:
    sub_1D0F314(itemList);
  }
LABEL_13:
  itemList = (System_Collections_Generic_List_object__o *)this->fields.explanationBase;
  if ( !itemList )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0);
  switch ( menuKind )
  {
    case 6:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_10365/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/;
      break;
    case 3:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_10456/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/;
      break;
    case 1:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_10457/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/;
      break;
    default:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_10386/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/;
      break;
  }
  itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get((System_String_o *)*v30, 0);
  if ( !explanationLabel )
    goto LABEL_49;
  UILabel__set_text(explanationLabel, (System_String_o *)itemList, 0);
  indicator = this->fields.indicator;
  if ( !indicator )
    goto LABEL_49;
  naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment;
  if ( indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    goto LABEL_49;
  }
  LODWORD(indicator[13].monitor) = menuKind;
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(struct ListViewIndicator_o *, _QWORD, const MethodInfo *))indicator->klass->vtable._4_SetIndexMax.methodPtr)(
                                                            indicator,
                                                            (unsigned int)v33->static_fields->DeckMax,
                                                            indicator->klass->vtable._4_SetIndexMax.method);
  v34 = menuKind == 9;
  if ( menuKind == 9 )
    v35 = (PartyListViewIndicator_o *)indicator;
  else
    v35 = 0;
  if ( !v34 )
  {
    v37 = 0;
    v35 = (PartyListViewIndicator_o *)indicator;
    goto LABEL_47;
  }
  if ( partyNum < 0 )
  {
    v37 = 0;
    v35 = (PartyListViewIndicator_o *)indicator;
    goto LABEL_47;
  }
  v36 = baseDeckItemList->max_length;
  if ( v36 <= partyNum )
  {
    v37 = 0;
    if ( v35 )
      goto LABEL_47;
LABEL_49:
    sub_1D0F30C(itemList, v16);
  }
  if ( v36 <= (unsigned int)partyNum )
    goto LABEL_50;
  itemList = (System_Collections_Generic_List_object__o *)baseDeckItemList->m_Items[partyNum];
  if ( !itemList )
    goto LABEL_49;
  itemList = (System_Collections_Generic_List_object__o *)PartyListViewItem__GetWaveBattleEnemyClassIds(
                                                            (PartyListViewItem_o *)itemList,
                                                            1,
                                                            0);
  v37 = (System_Int32_array *)itemList;
  if ( !v35 )
    goto LABEL_49;
LABEL_47:
  PartyListViewIndicator__SetEventId(v35, setupInfo, questRestrictionInfo, v37, 0);
  PartyListViewIndicator__DispFriendPointUpBonus(v35, friendBonusVal, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, partyNum, 0, -1, 0);
}


void PartyListViewManager__DestroyList(PartyListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *explanationBase; // x0

  explanationBase = this->fields.explanationBase;
  if ( !explanationBase )
    sub_1D0F30C(0, method);
  UnityEngine_GameObject__SetActive(explanationBase, 0, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


void PartyListViewManager__ForceJumpItem(PartyListViewManager_o *this, int32_t targetIndex, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  UIScrollView_o *v8; // x19

  if ( (byte_4E72EE8 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72EE8 = 1;
  }
  ListViewManager__JumpItem((ListViewManager_o *)this, targetIndex, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.scrollView;
    if ( !byte_4E70C99 )
    {
      v6 = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C99 = 1;
    }
    if ( !v8 )
      sub_1D0F30C(v6, v7);
    UIScrollView__set_currentMomentum(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


PartyListViewItem_o *PartyListViewManager__GetItem(
        PartyListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 naturalAligment; // x10

  if ( (byte_4E72EE3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1D0F0B4(&PartyListViewItem_TypeInfo);
    byte_4E72EE3 = 1;
  }
  result = 0;
  if ( (index & 0x80000000) == 0 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( itemList->fields._size <= index )
        return 0;
      result = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this->fields.itemList,
                                        index,
                                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !result )
        return result;
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewItem_TypeInfo )
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


bool PartyListViewManager__IsUseEventLimitEquipUserWill(
        PartyListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10

  if ( (byte_4E72EED & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    byte_4E72EED = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1D0F30C(Item, v7);
  }
  return PartyListViewIndicator__IsUseEventLimitEquipUserWill((PartyListViewIndicator_o *)indicator, Item, 0);
}


void PartyListViewManager__Modify(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4E72EEF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1D0F0B4(&PartyListViewItem_TypeInfo);
    byte_4E72EEF = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v7;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          PartyListViewItem__Modify((PartyListViewItem_o *)i.fields._current, 0, 0) )
    {
      current = i.fields._current;
      if ( !i.fields._current )
        goto LABEL_13;
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1D0F6A8(i.fields._current);
LABEL_13:
        sub_1D0F30C(current, v4);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void PartyListViewManager__MoveCenterItem(
        PartyListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  if ( this->fields.callbackCount <= 0 )
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 1, 0);
}


void PartyListViewManager__OnClickListViewChangeEquip1(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      0,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeEquip2(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      1,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeEquip3(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      2,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeEquip4(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      3,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeEquip5(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      4,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeEquip6(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      5,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeParty(
        PartyListViewManager_o *this,
        PartyListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      3,
      Index,
      0,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant1(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      0,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant2(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      1,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant3(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      2,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant4(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      3,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant5(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      4,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnClickListViewChangeServant6(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1D0F30C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      5,
      callbackFunc->fields.method);
  }
}


void PartyListViewManager__OnModifyListView(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 naturalAligment; // x10
  unsigned int Index; // w0

  if ( (byte_4E72EE9 & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewObject_TypeInfo);
    byte_4E72EE9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( obj )
    {
      naturalAligment = PartyListViewObject_TypeInfo->_2.naturalAligment;
      if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewObject_TypeInfo )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          4,
          Index,
          LODWORD(obj[1].fields.baseParent),
          callbackFunc->fields.method);
        return;
      }
      v11 = ListViewObject__get_Index(obj, 0);
    }
    sub_1D0F30C(v11, v12);
  }
}


void PartyListViewManager__OnMoveEnd(PartyListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4E72EE7 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72EE7 = 1;
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
          sub_1D0F30C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void PartyListViewManager__RefreshDrawPartyInfo(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  int32_t CenterIndex; // w0
  const MethodInfo *v5; // x2
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10

  if ( (byte_4E72EEA & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    byte_4E72EEA = 1;
  }
  indicator = this->fields.indicator;
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  Item = PartyListViewManager__GetItem(this, CenterIndex, v5);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1D0F30C(Item, v7);
  }
  PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)indicator, Item, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewManager__RequestListObject(
        PartyListViewManager_o *this,
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

  if ( (byte_4E72EE5 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__);
    sub_1D0F0B4(&Method_PartyListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E72EE5 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1D0F30C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1D0F30C(v12, v13);
      PartyListViewObject__Init_35349824((PartyListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewManager__RequestListObject_35348796(
        PartyListViewManager_o *this,
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

  if ( (byte_4E72EE6 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__);
    sub_1D0F0B4(&Method_PartyListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E72EE6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1D0F30C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1D0F30C(v10, v11);
      PartyListViewObject__Init_35349908((PartyListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


void PartyListViewManager__SetActiveGrandEffect(PartyListViewManager_o *this, bool flag, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4E72EF0 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_PartyListViewObject__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__ForEach__);
    sub_1D0F0B4(&Method_PartyListViewManager___c__DisplayClass50_0__SetActiveGrandEffect_b__0__);
    sub_1D0F0B4(&PartyListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4E72EF0 = 1;
  }
  v5 = sub_1D0F300(PartyListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = flag,
        ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(this, v7),
        v9 = (System_Action_object__o *)sub_1D0F300(System_Action_PartyListViewObject__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_PartyListViewManager___c__DisplayClass50_0__SetActiveGrandEffect_b__0__,
          0),
        !ObjectList) )
  {
    sub_1D0F30C(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    ObjectList,
    (System_Action_T__o *)v9,
    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_PartyListViewObject__ForEach__);
}


void PartyListViewManager__SetEventLimitEquipSetting(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4E72EEC & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    byte_4E72EEC = 1;
  }
  indicator = this->fields.indicator;
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1D0F30C(indicator, method);
  }
  PartyListViewIndicator__SetEventLimitEquipSetting((PartyListViewIndicator_o *)indicator, 0);
}


void PartyListViewManager__SetMode(
        PartyListViewManager_o *this,
        int32_t mode,
        PartyListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyListViewManager__SetMode_35348648(this, mode, v10);
}


void PartyListViewManager__SetMode_35348648(PartyListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    PartyListViewManager__RequestListObject_35348796(this, mode + 1, v5);
}


void PartyListViewManager__SetMode_35348744(
        PartyListViewManager_o *this,
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyListViewManager__SetMode_35348648(this, mode, v10);
}


void PartyListViewManager__SetObjectItem(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4E72EE4 & 1) == 0 )
  {
    this = (PartyListViewManager_o *)sub_1D0F0B4(&PartyListViewObject_TypeInfo);
    byte_4E72EE4 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewObject_TypeInfo )
  {
    sub_1D0F30C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyListViewObject__Init_35348524((PartyListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewManager__SetScrollEnabled(PartyListViewManager_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4E72EEE & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    byte_4E72EEE = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0), (indicator = this->fields.indicator) == 0)
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1D0F30C(scrollView, enabled);
  }
  LOBYTE(indicator[15].fields.m_CancellationTokenSource) = enabled;
}


void PartyListViewManager__UpdateEventLimitEquip(PartyListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10

  if ( (byte_4E72EEB & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewIndicator_TypeInfo);
    byte_4E72EEB = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1D0F30C(Item, v7);
  }
  PartyListViewIndicator__DrawEventLimitEquip((PartyListViewIndicator_o *)indicator, Item, 1, 0);
}


void PartyListViewManager__add_callbackFunc(
        PartyListViewManager_o *this,
        PartyListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListViewManager_o *v10; // x0
  PartyListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E72EDC & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewManager_CallbackFunc_TypeInfo);
    byte_4E72EDC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v7->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1D0F6A8(v7);
  PartyListViewManager__remove_callbackFunc(v10, v11, v12);
}


void PartyListViewManager__add_callbackFunc2(
        PartyListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E72EDE & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E72EDE = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1D0F6A8(v7);
  PartyListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyListViewObject__o *PartyListViewManager__get_ClippingObjectList(
        PartyListViewManager_o *this,
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

  if ( (byte_4E72EE1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_PartyListViewObject__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72EE1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1D0F30C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1D0F30C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1D0F30C(0, v10);
      Item = (ListViewItem_o *)PartyListViewObject__GetItem((PartyListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1D0F30C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_45173204((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1D0F30C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1D0F30C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1D0F30C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1D0F30C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyListViewObject__o *PartyListViewManager__get_ObjectList(
        PartyListViewManager_o *this,
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

  if ( (byte_4E72EE0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_PartyListViewObject__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72EE0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1D0F30C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1D0F30C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1D0F30C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1D0F30C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v3;
}


void PartyListViewManager__remove_callbackFunc(
        PartyListViewManager_o *this,
        PartyListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E72EDD & 1) == 0 )
  {
    sub_1D0F0B4(&PartyListViewManager_CallbackFunc_TypeInfo);
    byte_4E72EDD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v7->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1D0F6A8(v7);
  PartyListViewManager__add_callbackFunc2(v10, v11, v12);
}


void PartyListViewManager__remove_callbackFunc2(
        PartyListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4E72EDF & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E72EDF = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1D0F6A8(v7);
  PartyListViewManager__get_ObjectList(v10, v11);
}


void PartyListViewManager_CallbackFunc___ctor(
        PartyListViewManager_CallbackFunc_o *this,
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
  sub_1D0F058(
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
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B37548;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B374E8;
}


System_IAsyncResult_o *PartyListViewManager_CallbackFunc__BeginInvoke(
        PartyListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = kind;
  v13 = m;
  if ( (byte_4E72EF1 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&PartyListViewManager_ResultKind_TypeInfo);
    byte_4E72EF1 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(PartyListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v11, callback, object);
}


void PartyListViewManager_CallbackFunc__EndInvoke(
        PartyListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void PartyListViewManager_CallbackFunc__Invoke(
        PartyListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    n,
    m,
    this->fields.method);
}


void PartyListViewManager___c__DisplayClass50_0___ctor(
        PartyListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyListViewManager___c__DisplayClass50_0___SetActiveGrandEffect_b__0(
        PartyListViewManager___c__DisplayClass50_0_o *this,
        PartyListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj || !obj->fields.itemDraw )
    sub_1D0F30C(this, obj);
  PartyListViewItemDraw__SetActiveGrandEffect(obj->fields.itemDraw, this->fields.flag, method);
}