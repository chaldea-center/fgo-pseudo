void CharaGraphListViewPatternCommandCode___ctor(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternCommandCode__GenerateListViewItem(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UserCommandCodeMaster_o *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UserCommandCodeEntity_array *List; // x0
  __int64 *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x21
  __int64 v21; // x21
  System_Func_T__TResult__o *v22; // x20

  if ( (byte_4D2FD15 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
    sub_1C93AD4(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
    sub_1C93AD4(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_1C93AD4(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
    byte_4D2FD15 = 1;
  }
  v3 = sub_1C93D20(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Master_object = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_31980B4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_14;
  List = UserCommandCodeMaster__getList(Master_object, 0);
  *(_QWORD *)(v3 + 24) = List;
  v13 = (__int64 *)(v3 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)List, v14, v15, v16, v17, v18, v19);
  v20 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_31980B4 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v20
    || (UserServantCommandCodeMaster__getAttachList(
          (UserServantCommandCodeMaster_o *)v20,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0),
        (v21 = *v13) == 0) )
  {
LABEL_14:
    sub_1C93D2C(Master_object, v5);
  }
  v22 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v21 + 24),
                                                                                   (System_Func_int__T__o *)v22,
                                                                                   (const MethodInfo_3194520 *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2FD14 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3668/*"COMMAND_CODE_EMPTY"*/);
    byte_4D2FD14 = 1;
  }
  return (System_String_o *)StringLiteral_3668/*"COMMAND_CODE_EMPTY"*/;
}


void CharaGraphListViewPatternCommandCode___c__DisplayClass2_0___ctor(
        CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphCommandCodeListViewItem_o *CharaGraphListViewPatternCommandCode___c__DisplayClass2_0___GenerateListViewItem_b__0(
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
  if ( (byte_4D2FD16 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_1C93AD4(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4D2FD16 = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_1C93D2C(this, *(_QWORD *)&i);
  if ( LODWORD(commandCodeArray->max_length) <= i )
    sub_1C93D34(this);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_1C93D20(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, v10);
  return v9;
}