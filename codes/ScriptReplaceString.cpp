void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EE4A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v7, v8, v9);
    byte_42EE4A5 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)ScriptReplaceString_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ScriptReplaceString_c *v4; // x0

  if ( (byte_42EE4A4 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v1, v2, v3);
    byte_42EE4A4 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v4 = ScriptReplaceString_TypeInfo;
  }
  return v4->static_fields->playerGenderIndex;
}


System_String_o *__fastcall ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ScriptReplaceString_c *v8; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x20

  if ( (byte_42EE4A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v5, v6, v7);
    byte_42EE4A2 = 1;
  }
  v8 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v8 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v8->static_fields->replaceList;
  if ( !replaceList )
    sub_B5D69C(v8, method);
  if ( replaceList->fields._size <= (unsigned int)num )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return replaceList->fields._items->m_Items[num];
}


void __fastcall ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ScriptReplaceString_c *v13; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *replaceList; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EE49F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v1, v2, v3);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_15828/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_24156/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v10, v11, v12);
    byte_42EE49F = 1;
  }
  v13 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v13 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13->static_fields->replaceList;
  if ( !replaceList )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    replaceList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15828/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v15);
  ScriptReplaceString__SetString_34961992(5, (System_String_o *)StringLiteral_24156/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v16);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptReplaceString_c *v5; // x0

  if ( (byte_42EE4A3 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4A3 = 1;
  }
  v5 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v5 = ScriptReplaceString_TypeInfo;
  }
  v5->static_fields->playerGenderIndex = index;
}


void __fastcall ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE4A0 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42EE4A0 = 1;
  }
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  }
  ScriptReplaceString__SetString_34961992(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_34961992(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  System_String_o *TagFairingString; // x20
  ScriptReplaceString_c *v23; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceList; // x0

  if ( (byte_42EE4A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__set_Item__, v9, v10, v11);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42EE4A1 = 1;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v23 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v23 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_29;
  if ( replaceList->fields._size > num )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) == 0
      || v23->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v23),
          (replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        replaceList,
        num,
        (WarBoardManager_TaskList_o *)TagFairingString,
        (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_29:
    sub_B5D69C(replaceList, v21);
  }
  while ( 1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
    if ( replaceList->fields._size >= num )
      break;
    if ( (WORD1(v23->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_29;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v23 = ScriptReplaceString_TypeInfo;
  }
  if ( (WORD1(v23->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)TagFairingString,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}