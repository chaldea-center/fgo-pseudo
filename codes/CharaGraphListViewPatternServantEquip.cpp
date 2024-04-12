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
  UserServantMaster_o *Master_UserServantMaster; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **ServantEquipList; // x0
  __int64 *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserDeckMaster_o *v20; // x21
  __int64 v21; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v22; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AFDB0 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
    sub_B52984(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
    sub_B52984(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_B52984(&Method_System_Func_int__CharaGraphEquipListViewItem___ctor__);
    sub_B52984(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_B52984(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
    byte_42AFDB0 = 1;
  }
  svtIdList = 0LL;
  v3 = sub_B52A54(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1A47C88 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    goto LABEL_11;
  ServantEquipList = (System_Int32_array **)UserServantMaster__getServantEquipList(Master_UserServantMaster, 0LL);
  *(_QWORD *)(v3 + 24) = ServantEquipList;
  v13 = (__int64 *)(v3 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), ServantEquipList, v14, v15, v16, v17, v18, v19);
  v20 = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1A47C88 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_UserServantMaster = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v20
    || (UserDeckMaster__getPartyList(
          v20,
          &svtIdList,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_UserServantMaster,
          0LL),
        (v21 = *v13) == 0) )
  {
LABEL_11:
    sub_B52A5C(Master_UserServantMaster, v5);
  }
  v22 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_2BC49BC *)Method_System_Func_int__CharaGraphEquipListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v21 + 24),
                                                                                   (System_Func_int__T__o *)v22,
                                                                                   (const MethodInfo_1A44B4C *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  if ( (byte_42AFDAF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    byte_42AFDAF = 1;
  }
  return (System_String_o *)StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/;
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
  if ( (byte_42AD6A3 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_B52984(&CharaGraphEquipListViewItem_TypeInfo);
    byte_42AD6A3 = 1;
  }
  svtArray = v4->fields.svtArray;
  if ( !svtArray )
    sub_B52A5C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
  {
    v11 = sub_B52A88(this);
    sub_B52A28(v11, 0LL);
  }
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  partyUserEquipList = v4->fields.partyUserEquipList;
  v8 = svtArray->m_Items[i];
  v9 = (CharaGraphEquipListViewItem_o *)sub_B52A54(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v9, i, _4__this, v8, partyUserEquipList, 0LL);
  return v9;
}