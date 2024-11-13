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
  __int64 v17; // x19
  UserServantMaster_o *Master_object; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  Il2CppObject *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x21
  System_Func_T__TResult__o *v39; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B155B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v5, v6);
    sub_1BCA7E0(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
      v13,
      v14);
    sub_1BCA7E0(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, v15, v16);
    byte_4B155B6 = 1;
  }
  svtIdList = 0LL;
  v17 = sub_1BCAA2C(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F0670C *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0LL);
  *(_QWORD *)(v17 + 24) = ServantEquipList;
  v27 = (__int64 *)(v17 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)ServantEquipList, v28, v29, v30, v31, v32, v33);
  v35 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F0670C *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
  Master_object = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v35
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v35,
          &svtIdList,
          (System_Int64_array **)(v17 + 32),
          (int64_t)Master_object,
          0LL),
        (v38 = *v27) == 0) )
  {
LABEL_10:
    sub_1BCAA3C(Master_object, v19);
  }
  v39 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v19, v36, v37);
  System_Func_int__object____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v38 + 24),
                                                                                   (System_Func_int__T__o *)v39,
                                                                                   (const MethodInfo_2F02E30 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  __int64 v2; // x2

  if ( (byte_4B155B5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, method, v2);
    byte_4B155B5 = 1;
  }
  return (System_String_o *)StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v3; // x3
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *v5; // x20
  struct UserServantEntity_array *svtArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *partyUserEquipList; // x20
  UserServantEntity_o *v9; // x22
  CharaGraphEquipListViewItem_o *v10; // x23
  const MethodInfo *v11; // x5

  v5 = this;
  if ( (byte_4B155B7 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                                             &CharaGraphEquipListViewItem_TypeInfo,
                                                                             *(_QWORD *)&i,
                                                                             method);
    byte_4B155B7 = 1;
  }
  svtArray = v5->fields.svtArray;
  if ( !svtArray )
    sub_1BCAA3C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1BCAA44(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v5->fields.__4__this;
  partyUserEquipList = v5->fields.partyUserEquipList;
  v9 = svtArray->m_Items[i];
  v10 = (CharaGraphEquipListViewItem_o *)sub_1BCAA2C(CharaGraphEquipListViewItem_TypeInfo, *(_QWORD *)&i, method, v3);
  CharaGraphEquipListViewItem___ctor(v10, i, _4__this, v9, partyUserEquipList, v11);
  return v10;
}