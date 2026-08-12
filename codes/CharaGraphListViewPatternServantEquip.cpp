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
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UserServantEntity_array *ServantEquipList; // x0
  __int64 *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  __int64 v22; // x21
  System_Func_T__TResult__o *v23; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FAD5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
    sub_2213A60(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_2213A60(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_2213A60(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_2213A60(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
    byte_596FAD5 = 1;
  }
  svtIdList = 0;
  v3 = sub_2213CCC(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Master_object = (UserServantMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_381D508 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_object, 0);
  *(_QWORD *)(v3 + 24) = ServantEquipList;
  v13 = (__int64 *)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)ServantEquipList, v14, v15, v16, v17, v18, v19);
  v21 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_381D508 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v20);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v20);
    Master_object = (UserServantMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v21
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v21,
          &svtIdList,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0),
        (v22 = *v13) == 0) )
  {
LABEL_14:
    sub_2213CDC(Master_object, v5);
  }
  v23 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v23,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v22 + 24),
                                                                                   (System_Func_int__T__o *)v23,
                                                                                   (const MethodInfo_3816470 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  if ( (byte_596FAD4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    byte_596FAD4 = 1;
  }
  return (System_String_o *)StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/;
}


void CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_596FAD6 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_2213A60(&CharaGraphEquipListViewItem_TypeInfo);
    byte_596FAD6 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_2213CDC(this, *(_QWORD *)&i);
  if ( LODWORD(svtArray->max_length) <= i )
    sub_2213CE4(this);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_2213CCC(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, v10);
  return v9;
}