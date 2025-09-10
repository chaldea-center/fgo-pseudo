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
  const MethodInfo *v7; // x3
  UserCommandCodeEntity_array *List; // x0
  __int64 *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x21
  __int64 v13; // x21
  System_Func_T__TResult__o *v14; // x20

  if ( (byte_4C26611 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
    sub_1C2D490(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
    sub_1C2D490(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
    sub_1C2D490(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_1C2D490(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
    byte_4C26611 = 1;
  }
  v3 = sub_1C2D6DC(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  Master_object = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30C20D0 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_14;
  List = UserCommandCodeMaster__getList(Master_object, 0);
  *(_QWORD *)(v3 + 24) = List;
  v9 = (__int64 *)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)List, v10, v11);
  v12 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_30C20D0 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v12
    || (UserServantCommandCodeMaster__getAttachList(
          (UserServantCommandCodeMaster_o *)v12,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0),
        (v13 = *v9) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(Master_object, v5);
  }
  v14 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v13 + 24),
                                                                                   (System_Func_int__T__o *)v14,
                                                                                   (const MethodInfo_30BE4C8 *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C26610 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3640/*"COMMAND_CODE_EMPTY"*/);
    byte_4C26610 = 1;
  }
  return (System_String_o *)StringLiteral_3640/*"COMMAND_CODE_EMPTY"*/;
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
  if ( (byte_4C26612 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_1C2D490(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4C26612 = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_1C2D6EC(this, *(_QWORD *)&i);
  if ( LODWORD(commandCodeArray->max_length) <= i )
    sub_1C2D6F4(this, *(_QWORD *)&i, method);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_1C2D6DC(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, v10);
  return v9;
}