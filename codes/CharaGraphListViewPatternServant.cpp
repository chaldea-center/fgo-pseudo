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
  __int64 v15; // x19
  int64_t UserId; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x0
  __int64 *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  Il2CppObject *Master_object; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x21
  System_Func_T__TResult__o *v37; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B155B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v5, v6);
    sub_1BCA7E0(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__, v11, v12);
    sub_1BCA7E0(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, v13, v14);
    byte_4B155B2 = 1;
  }
  equipIdList = 0LL;
  v15 = sub_1BCAA2C(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  v24 = ((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, void *))this->klass->vtable._14_GetServantArray.method)(
          this,
          this->klass[1]._1.image);
  *(_QWORD *)(v15 + 24) = v24;
  v25 = (__int64 *)(v15 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), v24, v26, v27, v28, v29, v30, v31);
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F0670C *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)Master_object,
          (System_Int64_array **)(v15 + 32),
          &equipIdList,
          UserId,
          0LL),
        (v36 = *v25) == 0) )
  {
LABEL_9:
    sub_1BCAA3C(UserId, v17);
  }
  v37 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo,
                                       v17,
                                       v34,
                                       v35);
  System_Func_int__object____ctor(
    v37,
    (Il2CppObject *)v15,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v36 + 24),
                                                                                   (System_Func_int__T__o *)v37,
                                                                                   (const MethodInfo_2F02E30 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
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
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4B155B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, method, v2);
    byte_4B155B3 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F0670C *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v2; // x2

  if ( (byte_4B155B1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, method, v2);
    byte_4B155B1 = 1;
  }
  return (System_String_o *)StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v3; // x3
  CharaGraphListViewPatternServant___c__DisplayClass2_0_o *v5; // x20
  struct UserServantEntity_array *svtArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *partyUserServantList; // x20
  UserServantEntity_o *v9; // x22
  CharaGraphPartyServantListViewItem_o *v10; // x23
  const MethodInfo *v11; // x5

  v5 = this;
  if ( (byte_4B155B4 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                                        &CharaGraphPartyServantListViewItem_TypeInfo,
                                                                        *(_QWORD *)&i,
                                                                        method);
    byte_4B155B4 = 1;
  }
  svtArray = v5->fields.svtArray;
  if ( !svtArray )
    sub_1BCAA3C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
    sub_1BCAA44(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v5->fields.__4__this;
  partyUserServantList = v5->fields.partyUserServantList;
  v9 = svtArray->m_Items[i];
  v10 = (CharaGraphPartyServantListViewItem_o *)sub_1BCAA2C(
                                                  CharaGraphPartyServantListViewItem_TypeInfo,
                                                  *(_QWORD *)&i,
                                                  method,
                                                  v3);
  CharaGraphPartyServantListViewItem___ctor(v10, i, _4__this, v9, partyUserServantList, v11);
  return v10;
}