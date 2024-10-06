void __fastcall CharaGraphListViewPatternServantEquip___ctor(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternServantEquip__GenerateListViewItem(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UserServantMaster_o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x21
  __int64 v19; // x21
  System_Func_T__TResult__o *v20; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6F252 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___, method);
    sub_1B90010(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v3);
    sub_1B90010(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, v4);
    sub_1B90010(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__, v7);
    sub_1B90010(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, v8);
    byte_4A6F252 = 1;
  }
  svtIdList = 0LL;
  v9 = sub_1B9025C(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2E81F1C *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0LL);
  *(_QWORD *)(v9 + 24) = ServantEquipList;
  v15 = (__int64 *)(v9 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)ServantEquipList, v16, v17);
  v18 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2E81F1C *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v18
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v18,
          &svtIdList,
          (System_Int64_array **)(v9 + 32),
          (int64_t)Master_object,
          0LL),
        (v19 = *v15) == 0) )
  {
LABEL_10:
    sub_1B9026C(Master_object, v11);
  }
  v20 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v19 + 24),
                                                                                   (System_Func_int__T__o *)v20,
                                                                                   (const MethodInfo_2E7E640 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServantEquip__GetBonusEventCampaignIds(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantEquipFilterEventCampaignIds;
  else
    return 0LL;
}


System_Int32_array *__fastcall CharaGraphListViewPatternServantEquip__GetBonusEventIds(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantEquipFilterEventIds;
  else
    return 0LL;
}


System_String_o *__fastcall CharaGraphListViewPatternServantEquip__get_EmptyMessageCode(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6F251 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_11582/*"SERVANT_EQUIP_EMPTY"*/, method);
    byte_4A6F251 = 1;
  }
  return (System_String_o *)StringLiteral_11582/*"SERVANT_EQUIP_EMPTY"*/;
}


void __fastcall CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphEquipListViewItem_o *__fastcall CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___GenerateListViewItem_b__0(
        CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *v4; // x20
  struct UserServantEntity_array *svtArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *partyUserEquipList; // x20
  UserServantEntity_o *v8; // x22
  CharaGraphEquipListViewItem_o *v9; // x23
  const MethodInfo *v10; // x5

  v4 = this;
  if ( (byte_4A6F253 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_1B90010(
                                                                             &CharaGraphEquipListViewItem_TypeInfo,
                                                                             *(_QWORD *)&i);
    byte_4A6F253 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1B9026C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1B90274(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_1B9025C(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, v10);
  return v9;
}