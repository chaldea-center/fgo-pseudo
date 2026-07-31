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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x26
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *explanationLabel; // x26
  int v32; // w8
  __int64 *v33; // x8
  __int64 v34; // x2
  struct ListViewIndicator_o *indicator; // x26
  ListViewIndicator_c *klass; // x8
  __int64 naturalAligment; // x10
  BalanceConfig_c *v38; // x0
  System_Int32_array *WaveBattleEnemyClassIds; // x3

  if ( (byte_5933E0C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    sub_21FFC50(&StringLiteral_10731/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10660/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10730/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10639/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/);
    byte_5933E0C = 1;
  }
  this->fields.menuKind = menuKind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !baseDeckItemList )
    goto LABEL_42;
  max_length = baseDeckItemList->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        sub_21FFED4(itemList);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v16 = (Il2CppObject *)baseDeckItemList->m_Items[v24];
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          v16,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
      }
      LODWORD(max_length) = baseDeckItemList->max_length;
      if ( (__int64)++v24 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_21FFECC(itemList, v16);
  }
LABEL_13:
  itemList = (System_Collections_Generic_List_object__o *)this->fields.explanationBase;
  if ( !itemList )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0);
  explanationLabel = this->fields.explanationLabel;
  v32 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  switch ( menuKind )
  {
    case 6:
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      v33 = &StringLiteral_10639/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/;
      break;
    case 3:
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      v33 = &StringLiteral_10730/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/;
      break;
    case 1:
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      v33 = &StringLiteral_10731/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/;
      break;
    default:
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      v33 = &StringLiteral_10660/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/;
      break;
  }
  itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get((System_String_o *)*v33, 0);
  if ( !explanationLabel )
    goto LABEL_42;
  UILabel__set_text(explanationLabel, (System_String_o *)itemList, 0);
  indicator = this->fields.indicator;
  if ( !indicator )
    goto LABEL_42;
  klass = indicator->klass;
  naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment;
  if ( indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyListViewIndicator_c *)klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    goto LABEL_42;
  }
  LODWORD(indicator[13].monitor) = menuKind;
  v38 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16, v34);
    v38 = BalanceConfig_TypeInfo;
    klass = indicator->klass;
  }
  ((void (__fastcall *)(struct ListViewIndicator_o *, _QWORD, const MethodInfo *))klass->vtable._4_SetIndexMax.methodPtr)(
    indicator,
    (unsigned int)v38->static_fields->DeckMax,
    klass->vtable._4_SetIndexMax.method);
  WaveBattleEnemyClassIds = 0;
  if ( menuKind == 9 && (partyNum & 0x80000000) == 0 )
  {
    if ( SLODWORD(baseDeckItemList->max_length) <= partyNum )
    {
      WaveBattleEnemyClassIds = 0;
    }
    else
    {
      itemList = (System_Collections_Generic_List_object__o *)baseDeckItemList->m_Items[partyNum];
      if ( !itemList )
        goto LABEL_42;
      WaveBattleEnemyClassIds = PartyListViewItem__GetWaveBattleEnemyClassIds((PartyListViewItem_o *)itemList, 1, 0);
    }
  }
  PartyListViewIndicator__SetEventId(
    (PartyListViewIndicator_o *)indicator,
    setupInfo,
    questRestrictionInfo,
    WaveBattleEnemyClassIds,
    0);
  PartyListViewIndicator__DispFriendPointUpBonus((PartyListViewIndicator_o *)indicator, friendBonusVal, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, partyNum, 0, -1, 0);
}


void PartyListViewManager__DestroyList(PartyListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *explanationBase; // x0

  explanationBase = this->fields.explanationBase;
  if ( !explanationBase )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(explanationBase, 0, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


void PartyListViewManager__ForceJumpItem(PartyListViewManager_o *this, int32_t targetIndex, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  UIScrollView_o *v10; // x19

  if ( (byte_5933E12 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933E12 = 1;
  }
  ListViewManager__JumpItem((ListViewManager_o *)this, targetIndex, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (v8 & 1) != 0 )
  {
    v10 = this->fields.scrollView;
    if ( !byte_5931940 )
    {
      v8 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v10 )
      sub_21FFECC(v8, v9);
    UIScrollView__set_currentMomentum(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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

  if ( (byte_5933E0D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&PartyListViewItem_TypeInfo);
    byte_5933E0D = 1;
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
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_5933E17 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    byte_5933E17 = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_21FFECC(Item, v7);
  }
  return PartyListViewIndicator__IsUseEventLimitEquipUserWill((PartyListViewIndicator_o *)indicator, Item, 0);
}


void PartyListViewManager__Modify(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5933E19 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&PartyListViewItem_TypeInfo);
    byte_5933E19 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !v9.fields._current )
        goto LABEL_13;
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_220024C(v9.fields._current, PartyListViewItem_TypeInfo, v5, v6);
LABEL_13:
        sub_21FFECC(current, v4);
      }
      PartyListViewItem__Modify((PartyListViewItem_o *)v9.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 naturalAligment; // x10
  unsigned int Index; // w0

  if ( (byte_5933E13 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewObject_TypeInfo);
    byte_5933E13 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
    sub_21FFECC(v11, v12);
  }
}


void PartyListViewManager__OnMoveEnd(PartyListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_5933E11 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933E11 = 1;
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
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_5933E14 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    byte_5933E14 = 1;
  }
  indicator = this->fields.indicator;
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  Item = PartyListViewManager__GetItem(this, CenterIndex, v5);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_21FFECC(Item, v7);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933E0F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__);
    sub_21FFC50(&Method_PartyListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933E0F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      PartyListViewObject__Init_40860340((PartyListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewManager__RequestListObject_40859336(
        PartyListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933E10 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__);
    sub_21FFC50(&Method_PartyListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933E10 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      PartyListViewObject__Init_40860424((PartyListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


void PartyListViewManager__SetActiveGrandEffect(PartyListViewManager_o *this, bool flag, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_5933E1A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_PartyListViewObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__ForEach__);
    sub_21FFC50(&Method_PartyListViewManager___c__DisplayClass50_0__SetActiveGrandEffect_b__0__);
    sub_21FFC50(&PartyListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_5933E1A = 1;
  }
  v5 = sub_21FFEBC(PartyListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = flag,
        ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(this, v7),
        v9 = (System_Action_object__o *)sub_21FFEBC(System_Action_PartyListViewObject__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_PartyListViewManager___c__DisplayClass50_0__SetActiveGrandEffect_b__0__,
          0),
        !ObjectList) )
  {
    sub_21FFECC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    ObjectList,
    (System_Action_T__o *)v9,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_PartyListViewObject__ForEach__);
}


void PartyListViewManager__SetEventLimitEquipSetting(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5933E16 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    byte_5933E16 = 1;
  }
  indicator = this->fields.indicator;
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_21FFECC(indicator, method);
  }
  PartyListViewIndicator__SetEventLimitEquipSetting((PartyListViewIndicator_o *)indicator, 0);
}


void PartyListViewManager__SetMode(
        PartyListViewManager_o *this,
        int32_t mode,
        PartyListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyListViewManager__SetMode_40859188(this, mode, v10);
}


void PartyListViewManager__SetMode_40859188(PartyListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    PartyListViewManager__RequestListObject_40859336(this, mode + 1, v5);
}


void PartyListViewManager__SetMode_40859284(
        PartyListViewManager_o *this,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyListViewManager__SetMode_40859188(this, mode, v10);
}


void PartyListViewManager__SetObjectItem(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5933E0E & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewObject_TypeInfo);
    byte_5933E0E = 1;
  }
  if ( obj
    && (naturalAligment = PartyListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  PartyListViewObject__Init_40859064((PartyListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewManager__SetScrollEnabled(PartyListViewManager_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5933E18 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    byte_5933E18 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0), (indicator = this->fields.indicator) == 0)
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_21FFECC(scrollView, enabled);
  }
  LOBYTE(indicator[15].fields.m_CancellationTokenSource) = enabled;
}


void PartyListViewManager__UpdateEventLimitEquip(PartyListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10

  if ( (byte_5933E15 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewIndicator_TypeInfo);
    byte_5933E15 = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (naturalAligment = PartyListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_21FFECC(Item, v7);
  }
  PartyListViewIndicator__DrawEventLimitEquip((PartyListViewIndicator_o *)indicator, Item, 1, 0);
}


void PartyListViewManager__add_callbackFunc(
        PartyListViewManager_o *this,
        PartyListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewManager_o *v11; // x0
  PartyListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933E06 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewManager_CallbackFunc_TypeInfo);
    byte_5933E06 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v6->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewManager_o *)sub_220024C(v6, PartyListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PartyListViewManager__remove_callbackFunc(v11, v12, v13);
}


void PartyListViewManager__add_callbackFunc2(
        PartyListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933E08 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933E08 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  PartyListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyListViewObject__o *PartyListViewManager__get_ClippingObjectList(
        PartyListViewManager_o *this,
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

  if ( (byte_5933E0B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PartyListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933E0B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)PartyListViewObject__GetItem((PartyListViewObject_o *)Component_object, v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PartyListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_PartyListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyListViewObject__o *PartyListViewManager__get_ObjectList(
        PartyListViewManager_o *this,
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

  if ( (byte_5933E0A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PartyListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933E0A = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PartyListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v3;
}


void PartyListViewManager__remove_callbackFunc(
        PartyListViewManager_o *this,
        PartyListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933E07 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewManager_CallbackFunc_TypeInfo);
    byte_5933E07 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v6->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewManager_o *)sub_220024C(v6, PartyListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PartyListViewManager__add_callbackFunc2(v11, v12, v13);
}


void PartyListViewManager__remove_callbackFunc2(
        PartyListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5933E09 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933E09 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  PartyListViewManager__get_ObjectList(v11, v12);
}


void PartyListViewManager_CallbackFunc___ctor(
        PartyListViewManager_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF1188;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF1128;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = kind;
  v13 = m;
  if ( (byte_5933E1B & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewManager_ResultKind_TypeInfo);
    byte_5933E1B = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(PartyListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_594C070, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_594C070, &v13);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void PartyListViewManager_CallbackFunc__EndInvoke(
        PartyListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
    sub_21FFECC(this, obj);
  PartyListViewItemDraw__SetActiveGrandEffect(obj->fields.itemDraw, this->fields.flag, method);
}