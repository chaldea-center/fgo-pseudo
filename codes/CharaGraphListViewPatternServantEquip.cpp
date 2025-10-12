void CharaGraphListViewPatternServantEquip___ctor(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternServantEquip__GenerateListViewItem(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UserServantMaster_o *Master_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  __int64 v12; // x21
  System_Func_T__TResult__o *v13; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36CE6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
    sub_1C32C20(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_1C32C20(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_1C32C20(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_1C32C20(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
    byte_4C36CE6 = 1;
  }
  svtIdList = 0;
  v3 = sub_1C32E6C(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30D0B70 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0);
  *(_QWORD *)(v3 + 24) = ServantEquipList;
  v8 = (__int64 *)(v3 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)ServantEquipList, v9, v10);
  v11 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30D0B70 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v11
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v11,
          &svtIdList,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0),
        (v12 = *v8) == 0) )
  {
LABEL_14:
    sub_1C32E7C(Master_object);
  }
  v13 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v12 + 24),
                                                                                   (System_Func_int__T__o *)v13,
                                                                                   (const MethodInfo_30CCF68 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
}


System_Int32_array *CharaGraphListViewPatternServantEquip__GetBonusEventCampaignIds(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantEquipFilterEventCampaignIds;
  else
    return 0;
}


System_Int32_array *CharaGraphListViewPatternServantEquip__GetBonusEventIds(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantEquipFilterEventIds;
  else
    return 0;
}


System_String_o *CharaGraphListViewPatternServantEquip__get_EmptyMessageCode(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C36CE5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    byte_4C36CE5 = 1;
  }
  return (System_String_o *)StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/;
}


void CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphEquipListViewItem_o *CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___GenerateListViewItem_b__0(
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
  if ( (byte_4C36CE7 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_1C32C20(&CharaGraphEquipListViewItem_TypeInfo);
    byte_4C36CE7 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1C32E7C(this);
  if ( LODWORD(svtArray->max_length) <= i )
    sub_1C32E84(this);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_1C32E6C(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, v10);
  return v9;
}