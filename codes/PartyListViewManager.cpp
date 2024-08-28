void __fastcall PartyListViewManager___ctor(PartyListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__CreateList(
        PartyListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  Il2CppObject *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  unsigned __int64 v27; // x26
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  UILabel_o *explanationLabel; // x26
  __int64 *v33; // x8
  struct ListViewIndicator_o *indicator; // x26
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v36; // x0
  bool v37; // zf
  PartyListViewIndicator_o *v38; // x25
  il2cpp_array_size_t max_length; // w8
  PartyListViewItem_o *v40; // x8
  System_Int32_array *waveBattleEnemyClassIds; // x3

  if ( (byte_4A04AD7 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1B686D4(&LocalizationManager_TypeInfo, v16);
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, v17);
    sub_1B686D4(&StringLiteral_10301/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/, v18);
    sub_1B686D4(&StringLiteral_10235/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/, v19);
    sub_1B686D4(&StringLiteral_10300/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/, v20);
    sub_1B686D4(&StringLiteral_10220/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/, v21);
    byte_4A04AD7 = 1;
  }
  this->fields.menuKind = menuKind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !baseDeckItemList )
    goto LABEL_49;
  v26 = *(_QWORD *)&baseDeckItemList->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      v23 = (Il2CppObject *)baseDeckItemList->m_Items[v27];
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_49;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          v23,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v23, v24, v25);
      }
      LODWORD(v26) = baseDeckItemList->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_13;
    }
LABEL_50:
    sub_1B68938(itemList, v23);
  }
LABEL_13:
  itemList = (System_Collections_Generic_List_object__o *)this->fields.explanationBase;
  if ( !itemList )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
  switch ( menuKind )
  {
    case 6:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_10220/*"PARTY_ORGANIZATION_FIX_NPC_ONLY_EXPLANATION"*/;
      break;
    case 3:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_10300/*"PARTY_ORGANIZATION_SINGLE_MEMBER_EXPLANATION"*/;
      break;
    case 1:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_10301/*"PARTY_ORGANIZATION_SUPPORT_ONLY_EXPLANATION"*/;
      break;
    default:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_10235/*"PARTY_ORGANIZATION_PARTY_SELECT_EXPLANATION"*/;
      break;
  }
  itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
  if ( !explanationLabel )
    goto LABEL_49;
  UILabel__set_text(explanationLabel, (System_String_o *)itemList, 0LL);
  indicator = this->fields.indicator;
  if ( !indicator )
    goto LABEL_49;
  methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    goto LABEL_49;
  }
  indicator[12].fields.m_CachedPtr = menuKind;
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(struct ListViewIndicator_o *, _QWORD, Il2CppMethodPointer))indicator->klass->vtable._4_SetIndexMax.method)(
                                                            indicator,
                                                            (unsigned int)v36->static_fields->DeckMax,
                                                            indicator->klass->vtable._5_OnModifyCenterItem.methodPtr);
  v37 = menuKind == 9;
  if ( menuKind == 9 )
    v38 = (PartyListViewIndicator_o *)indicator;
  else
    v38 = 0LL;
  if ( !v37 )
  {
    waveBattleEnemyClassIds = 0LL;
    v38 = (PartyListViewIndicator_o *)indicator;
    goto LABEL_47;
  }
  if ( (partyNum & 0x80000000) != 0 )
  {
    waveBattleEnemyClassIds = 0LL;
    v38 = (PartyListViewIndicator_o *)indicator;
    goto LABEL_47;
  }
  max_length = baseDeckItemList->max_length;
  if ( (int)max_length <= partyNum )
  {
    waveBattleEnemyClassIds = 0LL;
    if ( v38 )
      goto LABEL_47;
LABEL_49:
    sub_1B68930(itemList, v23);
  }
  if ( max_length <= partyNum )
    goto LABEL_50;
  v40 = baseDeckItemList->m_Items[partyNum];
  if ( !v40 )
    goto LABEL_49;
  waveBattleEnemyClassIds = v40->fields.waveBattleEnemyClassIds;
  if ( !v38 )
    goto LABEL_49;
LABEL_47:
  PartyListViewIndicator__SetEventId(v38, setupInfo, questRestrictionInfo, waveBattleEnemyClassIds, 0LL);
  PartyListViewIndicator__DispFriendPointUpBonus(v38, friendBonusVal, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, partyNum, 0, -1, 0LL);
}


void __fastcall PartyListViewManager__DestroyList(PartyListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *explanationBase; // x0

  explanationBase = this->fields.explanationBase;
  if ( !explanationBase )
    sub_1B68930(0LL, method);
  UnityEngine_GameObject__SetActive(explanationBase, 0, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__ForceJumpItem(
        PartyListViewManager_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  UIScrollView_o *v8; // x19

  if ( (byte_4A04ADD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    byte_4A04ADD = 1;
  }
  ListViewManager__JumpItem((ListViewManager_o *)this, targetIndex, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.scrollView;
    if ( !byte_4A03901 )
    {
      v6 = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4A03901 = 1;
    }
    if ( !v8 )
      sub_1B68930(v6, v7);
    UIScrollView__set_currentMomentum(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
PartyListViewItem_o *__fastcall PartyListViewManager__GetItem(
        PartyListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 methodPtr_low; // x10

  if ( (byte_4A04AD8 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&PartyListViewItem_TypeInfo, v6);
    byte_4A04AD8 = 1;
  }
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( itemList->fields._size <= index )
        return 0LL;
      result = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this->fields.itemList,
                                        index,
                                        (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !result )
        return result;
      methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewItem_TypeInfo )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewManager__IsUseEventLimitEquipUserWill(
        PartyListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4A04AE2 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, *(_QWORD *)&index);
    byte_4A04AE2 = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1B68930(Item, v7);
  }
  return PartyListViewIndicator__IsUseEventLimitEquipUserWill((PartyListViewIndicator_o *)indicator, Item, 0LL);
}


void __fastcall PartyListViewManager__MoveCenterItem(
        PartyListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  if ( this->fields.callbackCount <= 0 )
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 0LL);
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip1(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip2(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip3(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      2LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip4(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      3LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip5(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      4LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeEquip6(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      5LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeParty(
        PartyListViewManager_o *this,
        PartyListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      Index,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant1(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant2(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant3(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      2LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant4(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      3LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant5(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      4LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnClickListViewChangeServant6(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      5LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListViewManager__OnModifyListView(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x10
  unsigned int Index; // w0

  if ( (byte_4A04ADE & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewObject_TypeInfo, obj);
    byte_4A04ADE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( obj )
    {
      methodPtr_low = LOBYTE(PartyListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (PartyListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewObject_TypeInfo )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          4LL,
          Index,
          LODWORD(obj[1].fields.baseParent),
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
      v7 = ListViewObject__get_Index(obj, 0LL);
    }
    sub_1B68930(v7, v8);
  }
}


void __fastcall PartyListViewManager__OnMoveEnd(PartyListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A04ADC & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04ADC = 1;
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
          sub_1B68930(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall PartyListViewManager__RefreshDrawPartyInfo(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  int32_t CenterIndex; // w0
  const MethodInfo *v5; // x2
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4A04ADF & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, method);
    byte_4A04ADF = 1;
  }
  indicator = this->fields.indicator;
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
  Item = PartyListViewManager__GetItem(this, CenterIndex, v5);
  if ( !indicator
    || (methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1B68930(Item, v7);
  }
  PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)indicator, Item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__RequestListObject(
        PartyListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A04ADA & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__, v11);
    sub_1B686D4(&Method_PartyListViewManager_OnMoveEnd__, v12);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v13);
    byte_4A04ADA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v19, v20);
      PartyListViewObject__Init_31724228((PartyListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__RequestListObject_31723200(
        PartyListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A04ADB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__get_Current__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__get_Count__, v9);
    sub_1B686D4(&Method_PartyListViewManager_OnMoveEnd__, v10);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v11);
    byte_4A04ADB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_PartyListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v17, v18);
      PartyListViewObject__Init_31724312((PartyListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_PartyListViewObject__Dispose__);
  }
}


void __fastcall PartyListViewManager__SetEventLimitEquipSetting(PartyListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A04AE1 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, method);
    byte_4A04AE1 = 1;
  }
  indicator = this->fields.indicator;
  if ( !indicator
    || (methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1B68930(indicator, method);
  }
  PartyListViewIndicator__SetEventLimitEquipSetting((PartyListViewIndicator_o *)indicator, 0LL);
}


void __fastcall PartyListViewManager__SetMode(
        PartyListViewManager_o *this,
        int32_t mode,
        PartyListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyListViewManager__SetMode_31723052(this, mode, v6);
}


void __fastcall PartyListViewManager__SetMode_31723052(
        PartyListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    PartyListViewManager__RequestListObject_31723200(this, mode + 1, v5);
}


void __fastcall PartyListViewManager__SetMode_31723148(
        PartyListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyListViewManager__SetMode_31723052(this, mode, v6);
}


void __fastcall PartyListViewManager__SetObjectItem(
        PartyListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A04AD9 & 1) == 0 )
  {
    this = (PartyListViewManager_o *)sub_1B686D4(&PartyListViewObject_TypeInfo, obj);
    byte_4A04AD9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyListViewObject__Init_31722928((PartyListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__SetScrollEnabled(
        PartyListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewIndicator_o *indicator; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A04AE3 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, enabled);
    byte_4A04AE3 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0LL), (indicator = this->fields.indicator) == 0LL)
    || (methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1B68930(scrollView, enabled);
  }
  LOBYTE(indicator[15].klass) = enabled;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager__UpdateEventLimitEquip(
        PartyListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x19
  PartyListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4A04AE0 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewIndicator_TypeInfo, *(_QWORD *)&index);
    byte_4A04AE0 = 1;
  }
  indicator = this->fields.indicator;
  Item = PartyListViewManager__GetItem(this, index, method);
  if ( !indicator
    || (methodPtr_low = LOBYTE(PartyListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewIndicator_TypeInfo )
  {
    sub_1B68930(Item, v7);
  }
  PartyListViewIndicator__DrawEventLimitEquip((PartyListViewIndicator_o *)indicator, Item, 1, 0LL);
}


void __fastcall PartyListViewManager__add_callbackFunc(
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

  if ( (byte_4A04AD1 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A04AD1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v7->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1B68BF0(v7);
  PartyListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PartyListViewManager__add_callbackFunc2(
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

  if ( (byte_4A04AD3 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A04AD3 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1B68BF0(v7);
  PartyListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyListViewObject__o *__fastcall PartyListViewManager__get_ClippingObjectList(
        PartyListViewManager_o *this,
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
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A04AD6 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_PartyListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A04AD6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B68930(0LL, v18);
      Item = (ListViewItem_o *)PartyListViewObject__GetItem((PartyListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B68930(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40459252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B68930(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B68930(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B68930(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B68930(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v11;
}


System_Collections_Generic_List_PartyListViewObject__o *__fastcall PartyListViewManager__get_ObjectList(
        PartyListViewManager_o *this,
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
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A04AD5 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_PartyListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A04AD5 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_PartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_PartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B68930(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B68930(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyListViewObject__o *)v11;
}


void __fastcall PartyListViewManager__remove_callbackFunc(
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

  if ( (byte_4A04AD2 & 1) == 0 )
  {
    sub_1B686D4(&PartyListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A04AD2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListViewManager_CallbackFunc_c *)v7->klass != PartyListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1B68BF0(v7);
  PartyListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyListViewManager__remove_callbackFunc2(
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

  if ( (byte_4A04AD4 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A04AD4 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListViewManager_o *)sub_1B68BF0(v7);
  PartyListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewManager_CallbackFunc___ctor(
        PartyListViewManager_CallbackFunc_o *this,
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AA9E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA980;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyListViewManager_CallbackFunc__BeginInvoke(
        PartyListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = kind;
  v20 = m;
  if ( (byte_4A04AE4 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&PartyListViewManager_ResultKind_TypeInfo, v10);
    byte_4A04AE4 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(PartyListViewManager_ResultKind_TypeInfo, &v22, *(_QWORD *)&n, *(_QWORD *)&m, callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1B68688(this, v18, callback, object);
}


void __fastcall PartyListViewManager_CallbackFunc__EndInvoke(
        PartyListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall PartyListViewManager_CallbackFunc__Invoke(
        PartyListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}