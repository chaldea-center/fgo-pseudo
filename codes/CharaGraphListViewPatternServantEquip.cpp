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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x21
  __int64 v27; // x21
  System_Func_T__TResult__o *v28; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFCAF5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___, method);
    sub_1C2E12C(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v3);
    sub_1C2E12C(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, v4);
    sub_1C2E12C(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__, v7);
    sub_1C2E12C(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, v8);
    byte_4BFCAF5 = 1;
  }
  svtIdList = 0LL;
  v9 = sub_1C2E378(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2FC52AC *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0LL);
  *(_QWORD *)(v9 + 24) = ServantEquipList;
  v19 = (__int64 *)(v9 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)ServantEquipList, v20, v21, v22, v23, v24, v25);
  v26 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2FC52AC *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    byte_4BF81D5 = 1;
  }
  Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v26
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v26,
          &svtIdList,
          (System_Int64_array **)(v9 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0LL),
        (v27 = *v19) == 0) )
  {
LABEL_14:
    sub_1C2E388(Master_object, v11);
  }
  v28 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v27 + 24),
                                                                                   (System_Func_int__T__o *)v28,
                                                                                   (const MethodInfo_2FC177C *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  if ( (byte_4BFCAF4 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/, method);
    byte_4BFCAF4 = 1;
  }
  return (System_String_o *)StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/;
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
  if ( (byte_4BFCAF6 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_1C2E12C(
                                                                             &CharaGraphEquipListViewItem_TypeInfo,
                                                                             *(_QWORD *)&i);
    byte_4BFCAF6 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1C2E388(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1C2E390(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_1C2E378(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, v10);
  return v9;
}