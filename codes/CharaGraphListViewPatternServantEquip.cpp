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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  UserServantMaster_o *Master_UserServantMaster; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **ServantEquipList; // x0
  __int64 *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UserDeckMaster_o *v43; // x21
  __int64 v44; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v45; // x20
  System_Int64_array *svtIdList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E96BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__CharaGraphEquipListViewItem___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__CharaGraphEquipListViewItem__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo, v23, v24, v25);
    byte_42E96BD = 1;
  }
  svtIdList = 0LL;
  v26 = sub_B5D694(CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_TypeInfo);
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_11;
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1ADCD50 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    goto LABEL_11;
  ServantEquipList = (System_Int32_array **)UserServantMaster__getServantEquipList(Master_UserServantMaster, 0LL);
  *(_QWORD *)(v26 + 24) = ServantEquipList;
  v36 = (__int64 *)(v26 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), ServantEquipList, v37, v38, v39, v40, v41, v42);
  v43 = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1ADCD50 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_UserServantMaster = (UserServantMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v43
    || (UserDeckMaster__getPartyList(
          v43,
          &svtIdList,
          (System_Int64_array **)(v26 + 32),
          (int64_t)Master_UserServantMaster,
          0LL),
        (v44 = *v36) == 0) )
  {
LABEL_11:
    sub_B5D69C(Master_UserServantMaster, v28);
  }
  v45 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__CharaGraphEquipListViewItem__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v45,
    (Il2CppObject *)v26,
    Method_CharaGraphListViewPatternServantEquip___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__CharaGraphEquipListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v44 + 24),
                                                                                   (System_Func_int__T__o *)v45,
                                                                                   (const MethodInfo_1AD9C14 *)Method_BasicHelper_ToIterator_CharaGraphEquipListViewItem___);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, (_DWORD)method, v2, v3);
    byte_42E96BC = 1;
  }
  return (System_String_o *)StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v3; // x3
  CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *v5; // x20
  struct UserServantEntity_array *svtArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *partyUserEquipList; // x20
  UserServantEntity_o *v9; // x22
  CharaGraphEquipListViewItem_o *v10; // x23
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42E5E5A & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServantEquip___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                                             &CharaGraphEquipListViewItem_TypeInfo,
                                                                             i,
                                                                             (_DWORD)method,
                                                                             v3);
    byte_42E5E5A = 1;
  }
  svtArray = v5->fields.svtArray;
  if ( !svtArray )
    sub_B5D69C(this, *(_QWORD *)&i);
  if ( svtArray->max_length <= i )
  {
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  _4__this = (CharaGraphListViewPatternBase_o *)v5->fields.__4__this;
  partyUserEquipList = v5->fields.partyUserEquipList;
  v9 = svtArray->m_Items[i];
  v10 = (CharaGraphEquipListViewItem_o *)sub_B5D694(CharaGraphEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v10, i, _4__this, v9, partyUserEquipList, 0LL);
  return v10;
}