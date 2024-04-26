void __fastcall CharaGraphListViewPatternCommandCode___ctor(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternCommandCode__GenerateListViewItem(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UserCommandCodeMaster_o *Master_UserServantMaster; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **List; // x0
  __int64 *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserServantCommandCodeMaster_o *v20; // x21
  __int64 v21; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v22; // x20

  if ( (byte_4354A3C & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
    sub_B70694(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
    sub_B70694(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
    sub_B70694(&Method_System_Func_int__CharaGraphCommandCodeListViewItem___ctor__);
    sub_B70694(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_B70694(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
    byte_4354A3C = 1;
  }
  v3 = sub_B70764(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  CharaGraphListViewPatternCommandCode___c__DisplayClass2_0___ctor(
    (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  Master_UserServantMaster = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1BE2AA4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_UserServantMaster )
    goto LABEL_11;
  List = (System_Int32_array **)UserCommandCodeMaster__getList(Master_UserServantMaster, 0LL);
  *(_QWORD *)(v3 + 24) = List;
  v13 = (__int64 *)(v3 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), List, v14, v15, v16, v17, v18, v19);
  v20 = (UserServantCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_UserServantMaster_((const MethodInfo_1BE2AA4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_UserServantMaster = (UserCommandCodeMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v20
    || (UserServantCommandCodeMaster__getAttachList(
          v20,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_UserServantMaster,
          0LL),
        (v21 = *v13) == 0) )
  {
LABEL_11:
    sub_B7076C(Master_UserServantMaster, v5);
  }
  v22 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    (const MethodInfo_29A71E0 *)Method_System_Func_int__CharaGraphCommandCodeListViewItem___ctor__);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_RestockServantLogic_(
                                                                                   *(_DWORD *)(v21 + 24),
                                                                                   (System_Func_int__T__o *)v22,
                                                                                   (const MethodInfo_1BDF968 *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *__fastcall CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_4354A3B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3301/*"COMMAND_CODE_EMPTY"*/);
    byte_4354A3B = 1;
  }
  return (System_String_o *)StringLiteral_3301/*"COMMAND_CODE_EMPTY"*/;
}


void __fastcall CharaGraphListViewPatternCommandCode___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphCommandCodeListViewItem_o *__fastcall CharaGraphListViewPatternCommandCode___c__DisplayClass2_0___GenerateListViewItem_b__0(
        CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *v4; // x20
  struct UserCommandCodeEntity_array *commandCodeArray; // x8
  CharaGraphListViewPatternBase_o *_4__this; // x21
  System_Int64_array *attachUserCommandCodeList; // x20
  UserCommandCodeEntity_o *v8; // x22
  CharaGraphCommandCodeListViewItem_o *v9; // x23
  __int64 v11; // x0

  v4 = this;
  if ( (byte_434ED73 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_B70694(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_434ED73 = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_B7076C(this, *(_QWORD *)&i);
  if ( commandCodeArray->max_length <= i )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_B70764(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, 0LL);
  return v9;
}