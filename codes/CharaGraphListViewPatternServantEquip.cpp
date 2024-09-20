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
  __int64 v3; // x19
  UserServantMaster_o *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x21
  __int64 v13; // x21
  System_Func_T__TResult__o *v14; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A54A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
    sub_1B885B0(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_1B885B0(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_1B885B0(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_1B885B0(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
    byte_4A5A54A = 1;
  }
  svtIdList = 0LL;
  v3 = sub_1B887FC(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2E73608 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0LL);
  *(_QWORD *)(v3 + 24) = ServantEquipList;
  v9 = (__int64 *)(v3 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)ServantEquipList, v10, v11);
  v12 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2E73608 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v12
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v12,
          &svtIdList,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object,
          0LL),
        (v13 = *v9) == 0) )
  {
LABEL_10:
    sub_1B8880C(Master_object, v5);
  }
  v14 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v13 + 24),
                                                                                   (System_Func_int__T__o *)v14,
                                                                                   (const MethodInfo_2E6FD2C *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  if ( (byte_4A5A549 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    byte_4A5A549 = 1;
  }
  return (System_String_o *)StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/;
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
  if ( (byte_4A5A54B & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_1B885B0(&CharaGraphEquipListViewItem_TypeInfo);
    byte_4A5A54B = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1B8880C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1B88814(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_1B887FC(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, v10);
  return v9;
}