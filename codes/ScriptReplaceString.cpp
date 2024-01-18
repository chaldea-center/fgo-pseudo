void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418D3A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v1);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v3);
    byte_418D3A4 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  static_fields = (BattleServantConfConponent_o *)ScriptReplaceString_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0

  if ( (byte_418D3A3 & 1) == 0 )
  {
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v1);
    byte_418D3A3 = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v2 = ScriptReplaceString_TypeInfo;
  }
  return v2->static_fields->playerGenderIndex;
}


System_String_o *__fastcall ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptReplaceString_c *v4; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x20

  if ( (byte_418D3A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, method);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v3);
    byte_418D3A1 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v4 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v4->static_fields->replaceList;
  if ( !replaceList )
    sub_B2C434(v4, method);
  if ( replaceList->fields._size <= (unsigned int)num )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return replaceList->fields._items->m_Items[num];
}


void __fastcall ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ScriptReplaceString_c *v5; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *replaceList; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_418D39E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v1);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_15638/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v3);
    sub_B2C35C(&StringLiteral_23839/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v4);
    byte_418D39E = 1;
  }
  v5 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v5 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5->static_fields->replaceList;
  if ( !replaceList )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    replaceList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15638/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v7);
  ScriptReplaceString__SetString_34473448(5, (System_String_o *)StringLiteral_23839/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v8);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_418D3A2 & 1) == 0 )
  {
    sub_B2C35C(&ScriptReplaceString_TypeInfo, method);
    byte_418D3A2 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  v3->static_fields->playerGenderIndex = index;
}


void __fastcall ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  if ( (byte_418D39F & 1) == 0 )
  {
    sub_B2C35C(&ScriptReplaceString_TypeInfo, str);
    byte_418D39F = 1;
  }
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  }
  ScriptReplaceString__SetString_34473448(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_34473448(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *TagFairingString; // x20
  ScriptReplaceString_c *v12; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceList; // x0

  if ( (byte_418D3A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__set_Item__, v6);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v7);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418D3A0 = 1;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v12 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v12 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_29;
  if ( replaceList->fields._size > num )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) == 0
      || v12->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v12),
          (replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        replaceList,
        num,
        (WarBoardManager_TaskList_o *)TagFairingString,
        (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_29:
    sub_B2C434(replaceList, v10);
  }
  while ( 1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
    if ( replaceList->fields._size >= num )
      break;
    if ( (WORD1(v12->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_29;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v12 = ScriptReplaceString_TypeInfo;
  }
  if ( (WORD1(v12->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)TagFairingString,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
}