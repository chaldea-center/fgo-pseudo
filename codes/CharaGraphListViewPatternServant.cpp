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
  __int64 v23; // x19
  int64_t UserId; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  __int64 *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserDeckMaster_o *Master_UserServantMaster; // x22
  __int64 v41; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v42; // x20
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E96BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo, v20, v21, v22);
    byte_42E96BA = 1;
  }
  equipIdList = 0LL;
  v23 = sub_B5D694(CharaGraphListViewPatternServant___c__DisplayClass2_0_TypeInfo);
  CharaGraphListViewPatternServant___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_10;
  *(_QWORD *)(v23 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  v32 = (System_Int32_array **)((__int64 (__fastcall *)(CharaGraphListViewPatternServant_o *, void *))this->klass->vtable._13_GetServantArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  v33 = (__int64 *)(v23 + 24);
  *(_QWORD *)(v23 + 24) = v32;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), v32, v34, v35, v36, v37, v38, v39);
  Master_UserServantMaster = (UserDeckMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1ADCD50 *)Method_CharaGraphListViewPatternBase_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_UserServantMaster
    || (UserDeckMaster__getPartyList(
          Master_UserServantMaster,
          (System_Int64_array **)(v23 + 32),
          &equipIdList,
          UserId,
          0LL),
        (v41 = *v33) == 0) )
  {
LABEL_10:
    sub_B5D69C(UserId, v25);
  }
  v42 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__CharaGraphPartyServantListViewItem__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v42,
    (Il2CppObject *)v23,
    Method_CharaGraphListViewPatternServant___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__CharaGraphPartyServantListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v41 + 24),
                                                                                   (System_Func_int__T__o *)v42,
                                                                                   (const MethodInfo_1AD9C14 *)Method_BasicHelper_ToIterator_CharaGraphPartyServantListViewItem___);
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
  int v2; // w2
  __int64 v3; // x3
  UserServantMaster_o *Master_UserServantMaster; // x0
  __int64 v5; // x1

  if ( (byte_42E96BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    byte_42E96BB = 1;
  }
  Master_UserServantMaster = CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1ADCD50 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_UserServantMaster )
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96B9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, (_DWORD)method, v2, v3);
    byte_42E96B9 = 1;
  }
  return (System_String_o *)StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
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
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42E5E59 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternServant___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                                        &CharaGraphPartyServantListViewItem_TypeInfo,
                                                                        i,
                                                                        (_DWORD)method,
                                                                        v3);
    byte_42E5E59 = 1;
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
  partyUserServantList = v5->fields.partyUserServantList;
  v9 = svtArray->m_Items[i];
  v10 = (CharaGraphPartyServantListViewItem_o *)sub_B5D694(CharaGraphPartyServantListViewItem_TypeInfo);
  CharaGraphPartyServantListViewItem___ctor(v10, i, _4__this, v9, partyUserServantList, 0LL);
  return v10;
}