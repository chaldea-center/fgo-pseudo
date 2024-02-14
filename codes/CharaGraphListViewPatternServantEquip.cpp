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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  UserServantMaster_o *Master_UserServantMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **ServantEquipList; // x0
  __int64 *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UserDeckMaster_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v31; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214207 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___, method);
    sub_B0D8A4(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v4);
    sub_B0D8A4(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, v5);
    sub_B0D8A4(&Method_System_Func_int__CharaGraphEquipListViewItem___ctor__, v6);
    sub_B0D8A4(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__, v9);
    sub_B0D8A4(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, v10);
    byte_4214207 = 1;
  }
  svtIdList = 0LL;
  v11 = sub_B0D974(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, method, v2);
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_170D154 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    goto LABEL_11;
  ServantEquipList = (System_Int32_array **)UserServantMaster__getServantEquipList(Master_UserServantMaster, 0LL);
  *(_QWORD *)(v11 + 24) = ServantEquipList;
  v20 = (__int64 *)(v11 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), ServantEquipList, v21, v22, v23, v24, v25, v26);
  v27 = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_170D154 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_UserServantMaster = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v27
    || (UserDeckMaster__getPartyList(
          v27,
          &svtIdList,
          (System_Int64_array **)(v11 + 32),
          (int64_t)Master_UserServantMaster,
          0LL),
        (v30 = *v20) == 0) )
  {
LABEL_11:
    sub_B0D97C(Master_UserServantMaster);
  }
  v31 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                 System_Func_int__CharaGraphEquipListViewItem__TypeInfo,
                                                                 v28,
                                                                 v29);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v31,
    (Il2CppObject *)v11,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_26145DC *)Method_System_Func_int__CharaGraphEquipListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v30 + 24),
                                                                                   (System_Func_int__T__o *)v31,
                                                                                   (const MethodInfo_170A018 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
}


System_Int32_array *__fastcall CharaGraphListViewPatternServantEquip__GetBonusEventIds(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x8

  EventValSetupInfo_k__BackingField = this->fields._EventValSetupInfo_k__BackingField;
  if ( EventValSetupInfo_k__BackingField )
    return EventValSetupInfo_k__BackingField->fields.servantEquipFilterEventIdList;
  else
    return 0LL;
}


System_String_o *__fastcall CharaGraphListViewPatternServantEquip__get_EmptyMessageCode(
        CharaGraphListViewPatternServantEquip_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214206 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, method);
    byte_4214206 = 1;
  }
  return (System_String_o *)StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4211E01 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_B0D8A4(
                                                                             &CharaGraphEquipListViewItem_TypeInfo,
                                                                             *(_QWORD *)&i);
    byte_4211E01 = 1;
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
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_B0D974(CharaGraphEquipListViewItem_TypeInfo, *(_QWORD *)&i, method);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, 0LL);
  return v9;
}