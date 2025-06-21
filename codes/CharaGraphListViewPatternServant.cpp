void __fastcall CharaGraphListViewPatternServant___ctor(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternServant__GenerateListViewItem(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  NetworkManager_c *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x21
  __int64 v18; // x21
  System_Func_T__TResult__o *v19; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B868 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___, method);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v3);
    sub_1BCAFF8(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__, v6);
    sub_1BCAFF8(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, v7);
    byte_4B1B868 = 1;
  }
  equipIdList = 0LL;
  v8 = sub_1BCB244(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  v13 = ((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, void *))this->klass->vtable._15_GetServantArray.method)(
          this,
          this->klass[1]._1.image);
  *(_QWORD *)(v8 + 24) = v13;
  v14 = (__int64 *)(v8 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), v13, v15, v16);
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_300E224 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !Master_object
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)Master_object,
          (System_Int64_array **)(v8 + 32),
          &equipIdList,
          v9->static_fields->userIdNumber,
          0LL),
        (v18 = *v14) == 0) )
  {
LABEL_13:
    sub_1BCB254(v9, v10);
  }
  v19 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v18 + 24),
                                                                                   (System_Func_int__T__o *)v19,
                                                                                   (const MethodInfo_300A6F4 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServant__GetBonusEventCampaignIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterEventCampaignIds;
  else
    return 0LL;
}


System_Int32_array *__fastcall CharaGraphListViewPatternServant__GetBonusEventIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterEventIds;
  else
    return 0LL;
}


UserServantEntity_array *__fastcall CharaGraphListViewPatternServant__GetServantArray(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4B1B869 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, method);
    byte_4B1B869 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_300E224 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v3);
  return UserServantMaster__getKeepServantList((UserServantMaster_o *)Master_object, 0LL);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServant__GetServantFilterIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterIds;
  else
    return 0LL;
}


System_String_o *__fastcall CharaGraphListViewPatternServant__get_EmptyMessageCode(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1B867 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11503/*"SERVANT_EQUIP_EMPTY"*/, method);
    byte_4B1B867 = 1;
  }
  return (System_String_o *)StringLiteral_11503/*"SERVANT_EQUIP_EMPTY"*/;
}


void __fastcall CharaGraphListViewPatternServant___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternServant___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphPartyServantListViewItem_o *__fastcall CharaGraphListViewPatternServant___c__DisplayClass2_0___GenerateListViewItem_b__0(
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
  if ( (byte_4B1B86A & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_1BCAFF8(
                                                                        &CharaGraphPartyServantListViewItem_TypeInfo,
                                                                        *(_QWORD *)&i);
    byte_4B1B86A = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_1BCB254(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1BCB25C(this, *(_QWORD *)&i, method);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserServantList = v4->fields.partyUserServantList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphPartyServantListViewItem_o *)sub_1BCB244(CharaGraphPartyServantListViewItem_TypeInfo);
  CharaGraphPartyServantListViewItem___ctor(v9, i, _4__this, v8, partyUserServantList, v10);
  return v9;
}