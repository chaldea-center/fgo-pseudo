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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UserCommandCodeEntity_array *List; // x0
  __int64 *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x21
  __int64 v27; // x21
  System_Func_T__TResult__o *v28; // x20

  if ( (byte_4BB3A8F & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___, method);
    sub_1C13D24(&Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___, v3);
    sub_1C13D24(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___, v4);
    sub_1C13D24(&System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__, v7);
    sub_1C13D24(&CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo, v8);
    byte_4BB3A8F = 1;
  }
  v9 = sub_1C13F70(CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  Master_object = (UserCommandCodeMaster_o *)CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F82EE8 *)Method_CharaGraphListViewPatternBase_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_14;
  List = UserCommandCodeMaster__getList(Master_object, 0LL);
  *(_QWORD *)(v9 + 24) = List;
  v19 = (__int64 *)(v9 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)List, v20, v21, v22, v23, v24, v25);
  v26 = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_2F82EE8 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    byte_4BAF1E5 = 1;
  }
  Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserCommandCodeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v26
    || (UserServantCommandCodeMaster__getAttachList(
          (UserServantCommandCodeMaster_o *)v26,
          (System_Int64_array **)(v9 + 32),
          (int64_t)Master_object[2].fields.list[1].monitor,
          0LL),
        (v27 = *v19) == 0) )
  {
LABEL_14:
    sub_1C13F80(Master_object, v11);
  }
  v28 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__CharaGraphCommandCodeListViewItem__TypeInfo);
  System_Func_int__object____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewPatternCommandCode___c__DisplayClass2_0__GenerateListViewItem_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)BasicHelper__ToIterator_object_(
                                                                                   *(_DWORD *)(v27 + 24),
                                                                                   (System_Func_int__T__o *)v28,
                                                                                   (const MethodInfo_2F7F60C *)Method_BasicHelper_ToIterator_CharaGraphCommandCodeListViewItem___);
}


System_String_o *__fastcall CharaGraphListViewPatternCommandCode__get_EmptyMessageCode(
        CharaGraphListViewPatternCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB3A8E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_3763/*"COMMAND_CARD_PRM_UP_MAX"*/, method);
    byte_4BB3A8E = 1;
  }
  return (System_String_o *)StringLiteral_3763/*"COMMAND_CARD_PRM_UP_MAX"*/;
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
  if ( (byte_4BB3A90 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternCommandCode___c__DisplayClass2_0_o *)sub_1C13D24(
                                                                            &CharaGraphCommandCodeListViewItem_TypeInfo,
                                                                            *(_QWORD *)&i);
    byte_4BB3A90 = 1;
  }
  commandCodeArray = v4->fields.commandCodeArray;
  if ( !commandCodeArray )
    sub_1C13F80(this, *(_QWORD *)&i);
  if ( commandCodeArray->max_length <= i )
    sub_1C13F88(this, *(_QWORD *)&i);
  _4__this = (CharaGraphListViewPatternBase_o *)v4->fields.__4__this;
  attachUserCommandCodeList = v4->fields.attachUserCommandCodeList;
  v8 = commandCodeArray->m_Items[i];
  v9 = (CharaGraphCommandCodeListViewItem_o *)sub_1C13F70(CharaGraphCommandCodeListViewItem_TypeInfo);
  CharaGraphCommandCodeListViewItem___ctor(v9, i, _4__this, v8, attachUserCommandCodeList, v10);
  return v9;
}