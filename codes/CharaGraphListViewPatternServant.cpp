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
  __int64 v3; // x19
  int64_t UserId; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x0
  __int64 *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserDeckMaster_o *Master_UserServantMaster; // x22
  __int64 v21; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v22; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4354A3E & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
    sub_B70694(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_B70694(&Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__);
    sub_B70694(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_B70694(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
    byte_4354A3E = 1;
  }
  equipIdList = 0LL;
  v3 = sub_B70764(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
  CharaGraphListViewPatternServant___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Int32_array **)((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, void *))this->klass->vtable._13_GetServantArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  v13 = (__int64 *)(v3 + 24);
  *(_QWORD *)(v3 + 24) = v12;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v12, v14, v15, v16, v17, v18, v19);
  Master_UserServantMaster = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1BE2AA4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_UserServantMaster
    || (UserDeckMaster__getPartyList(
          Master_UserServantMaster,
          (System_Int64_array **)(v3 + 32),
          &equipIdList,
          UserId,
          0LL),
        (v21 = *v13) == 0) )
  {
LABEL_10:
    sub_B7076C(UserId, v5);
  }
  v22 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_29A71E0 *)Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v21 + 24),
                                                                                   (System_Func_int__T__o *)v22,
                                                                                   (const MethodInfo_1BDF968 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
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
  __int64 v3; // x1

  if ( (byte_4354A3F & 1) == 0 )
  {
    sub_B70694(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    byte_4354A3F = 1;
  }
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1BE2AA4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    sub_B7076C(0LL, v3);
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
  if ( (byte_4354A3D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/);
    byte_4354A3D = 1;
  }
  return (System_String_o *)StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/;
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
  if ( (byte_434ED74 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_B70694(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_434ED74 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_B7076C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserServantList = v4->fields.partyUserServantList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphPartyServantListViewItem_o *)sub_B70764(CharaGraphPartyServantListViewItem_TypeInfo);
  CharaGraphPartyServantListViewItem___ctor(v9, i, _4__this, v8, partyUserServantList, 0LL);
  return v9;
}