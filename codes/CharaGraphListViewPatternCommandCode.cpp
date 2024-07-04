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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UserCommandCodeMaster_o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UserCommandCodeEntity_array *List; // x0
  __int64 *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x21
  __int64 v19; // x21
  System_Func_T__TResult__o *v20; // x20

  if ( (byte_48E1C4A & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___, method);
    sub_1B00CCC(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___, v3);
    sub_1B00CCC(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___, v4);
    sub_1B00CCC(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__, v7);
    sub_1B00CCC(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo, v8);
    byte_48E1C4A = 1;
  }
  v9 = sub_1B00F18(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  Master_object = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2D56910 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_10;
  List = UserCommandCodeMaster__getList(Master_object, 0LL);
  *(_QWORD *)(v9 + 24) = List;
  v15 = (__int64 *)(v9 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)List, v16, v17);
  v18 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2D56910 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (UserCommandCodeMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v18
    || (UserServantCommandCodeMaster__getAttachList(
          (UserServantCommandCodeMaster_o *)v18,
          (System_Int64_array **)(v9 + 32),
          (int64_t)Master_object,
          0LL),
        (v19 = *v15) == 0) )
  {
LABEL_10:
    sub_1B00F28(Master_object, v11);
  }
  v20 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v19 + 24),
                                                                                   (System_Func_int__T__o *)v20,
                                                                                   (const MethodInfo_2D53034 *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *__fastcall CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E1C49 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3680/*"COMMAND_CODE_EMPTY"*/, method);
    byte_48E1C49 = 1;
  }
  return (System_String_o *)StringLiteral_3680/*"COMMAND_CODE_EMPTY"*/;
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
  const MethodInfo *v10; // x5

  v4 = this;
  if ( (byte_48E1C4B & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_1B00CCC(
                                                                            &CharaGraphCommandCodeListViewItem_TypeInfo,
                                                                            *(_QWORD *)&i);
    byte_48E1C4B = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_1B00F28(this, *(_QWORD *)&i);
  if ( commandCodeArray->max_length <= i )
    sub_1B00F30(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_1B00F18(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, v10);
  return v9;
}