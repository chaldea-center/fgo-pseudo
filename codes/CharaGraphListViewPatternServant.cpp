void CharaGraphListViewPatternServant___ctor(CharaGraphListViewPatternServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternServant__GenerateListViewItem(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  NetworkManager_c *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Master_object; // x21
  __int64 v13; // x21
  System_Func_T__TResult__o *v14; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C56074 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
    sub_1C3E564(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_1C3E564(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_1C3E564(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
    byte_4C56074 = 1;
  }
  equipIdList = 0;
  v3 = sub_1C3E7B0(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  v8 = ((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, const MethodInfo *))this->klass->vtable._15_GetServantArray.methodPtr)(
         this,
         this->klass->vtable._15_GetServantArray.method);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), v8, v10, v11);
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30ED1F0 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  if ( !Master_object
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)Master_object,
          (System_Int64_array **)(v3 + 32),
          &equipIdList,
          v4->static_fields->userIdNumber,
          0),
        (v13 = *v9) == 0) )
  {
LABEL_13:
    sub_1C3E7C0(v4, v5);
  }
  v14 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v13 + 24),
                                                                                   (System_Func_int__T__o *)v14,
                                                                                   (const MethodInfo_30E95E8 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
}


System_Int32_array *CharaGraphListViewPatternServant__GetBonusEventCampaignIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterEventCampaignIds;
  else
    return 0;
}


System_Int32_array *CharaGraphListViewPatternServant__GetBonusEventIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterEventIds;
  else
    return 0;
}


UserServantEntity_array *CharaGraphListViewPatternServant__GetServantArray(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4C56075 & 1) == 0 )
  {
    sub_1C3E564(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    byte_4C56075 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30ED1F0 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v3);
  return UserServantMaster__getKeepServantList((UserServantMaster_o *)Master_object, 0);
}


System_Int32_array *CharaGraphListViewPatternServant__GetServantFilterIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterIds;
  else
    return 0;
}


System_String_o *CharaGraphListViewPatternServant__get_EmptyMessageCode(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C56073 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/);
    byte_4C56073 = 1;
  }
  return (System_String_o *)StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/;
}


void CharaGraphListViewPatternServant___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternServant___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphPartyServantListViewItem_o *CharaGraphListViewPatternServant___c__DisplayClass2_0___GenerateListViewItem_b__0(
        CharaGraphListViewPatternServant___c__DisplayClass2_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServant___c__DisplayClass2_0_o *v4; // x20
  struct UserServantEntity_array *svtArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *partyUserServantList; // x20
  UserServantEntity_o *v8; // x22
  CharaGraphPartyServantListViewItem_o *v9; // x23
  const MethodInfo *v10; // x5

  v4 = this;
  if ( (byte_4C56076 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_1C3E564(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_4C56076 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1C3E7C0(this, *(_QWORD *)&i);
  if ( LODWORD(svtArray->max_length) <= i )
    sub_1C3E7C8(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserServantList = v4->fields.partyUserServantList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphPartyServantListViewItem_o *)sub_1C3E7B0(CharaGraphPartyServantListViewItem_TypeInfo);
  CharaGraphPartyServantListViewItem___ctor(v9, i, _4__this, v8, partyUserServantList, v10);
  return v9;
}