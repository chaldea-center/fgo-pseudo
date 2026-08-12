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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UserCommandCodeEntity_array *List; // x0
  __int64 *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  __int64 v22; // x21
  System_Func_T__TResult__o *v23; // x20

  if ( (byte_596FAD8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
    sub_2213A60(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
    sub_2213A60(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
    sub_2213A60(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__);
    sub_2213A60(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
    byte_596FAD8 = 1;
  }
  v3 = sub_2213CCC(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Master_object = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_381D508 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_14;
  List = UserCommandCodeMaster__getList(Master_object, 0);
  *(_QWORD *)(v3 + 24) = List;
  v13 = (__int64 *)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)List, v14, v15, v16, v17, v18, v19);
  v21 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_381D508 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v20);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v20);
    Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v21
    || (UserServantCommandCodeMaster__getAttachList(
          (UserServantCommandCodeMaster_o *)v21,
          (System_Int64_array **)(v3 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0),
        (v22 = *v13) == 0) )
  {
LABEL_14:
    sub_2213CDC(Master_object, v5);
  }
  v23 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v23,
    (Il2CppObject *)v3,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v22 + 24),
                                                                                   (System_Func_int__T__o *)v23,
                                                                                   (const MethodInfo_3816470 *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_596FAD7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3789/*"COMMAND_CODE_EMPTY"*/);
    byte_596FAD7 = 1;
  }
  return (System_String_o *)StringLiteral_3789/*"COMMAND_CODE_EMPTY"*/;
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
  if ( (byte_596FAD9 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_2213A60(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_596FAD9 = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_2213CDC(this, *(_QWORD *)&i);
  if ( LODWORD(commandCodeArray->max_length) <= i )
    sub_2213CE4(this);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_2213CCC(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, v10);
  return v9;
}