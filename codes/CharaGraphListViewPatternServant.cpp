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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  int64_t UserId; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x0
  __int64 *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserDeckMaster_o *Master_UserServantMaster; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v30; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214204 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___, method);
    sub_B0D8A4(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v4);
    sub_B0D8A4(&Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__, v5);
    sub_B0D8A4(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__, v8);
    sub_B0D8A4(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, v9);
    byte_4214204 = 1;
  }
  equipIdList = 0LL;
  v10 = sub_B0D974(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, method, v2);
  CharaGraphListViewPatternServant___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, void *))this->klass->vtable._13_GetServantArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  v19 = (__int64 *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v18;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), v18, v20, v21, v22, v23, v24, v25);
  Master_UserServantMaster = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_170D154 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_UserServantMaster
    || (UserDeckMaster__getPartyList(
          Master_UserServantMaster,
          (System_Int64_array **)(v10 + 32),
          &equipIdList,
          UserId,
          0LL),
        (v29 = *v19) == 0) )
  {
LABEL_10:
    sub_B0D97C(UserId);
  }
  v30 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                 System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo,
                                                                 v27,
                                                                 v28);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v30,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_26145DC *)Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v29 + 24),
                                                                                   (System_Func_int__T__o *)v30,
                                                                                   (const MethodInfo_170A018 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServant__GetBonusEventIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterEventIdList;
  else
    return 0LL;
}


UserServantEntity_array *__fastcall CharaGraphListViewPatternServant__GetServantArray(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  UserServantMaster_o *Master_UserServantMaster; // x0

  if ( (byte_4214205 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, method);
    byte_4214205 = 1;
  }
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_170D154 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    sub_B0D97C(0LL);
  return UserServantMaster__getKeepServantList(Master_UserServantMaster, 0LL);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServant__GetServantFilterIds(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantFilterIdList;
  else
    return 0LL;
}


System_String_o *__fastcall CharaGraphListViewPatternServant__get_EmptyMessageCode(
        CharaGraphListViewPatternServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214203 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, method);
    byte_4214203 = 1;
  }
  return (System_String_o *)StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4211E00 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_B0D8A4(
                                                                        &CharaGraphPartyServantListViewItem_TypeInfo,
                                                                        *(_QWORD *)&i);
    byte_4211E00 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_B0D97C(this);
  if ( svtArray->max_length <= i )
  {
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserServantList = v4->fields.partyUserServantList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphPartyServantListViewItem_o *)sub_B0D974(
                                                 CharaGraphPartyServantListViewItem_TypeInfo,
                                                 *(_QWORD *)&i,
                                                 method);
  CharaGraphPartyServantListViewItem___ctor(v9, i, _4__this, v8, partyUserServantList, 0LL);
  return v9;
}