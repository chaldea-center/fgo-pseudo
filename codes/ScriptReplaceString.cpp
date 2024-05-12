void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4390ED3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    byte_4390ED3 = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  static_fields = (BattleServantConfConponent_o *)ScriptReplaceString_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  ScriptReplaceString_c *v1; // x0

  if ( (byte_4390ED2 & 1) == 0 )
  {
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    byte_4390ED2 = 1;
  }
  v1 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v1 = ScriptReplaceString_TypeInfo;
  }
  return v1->static_fields->playerGenderIndex;
}


System_String_o *__fastcall ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x20

  if ( (byte_4390ED0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    byte_4390ED0 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v3->static_fields->replaceList;
  if ( !replaceList )
    sub_B7769C(v3, method);
  if ( replaceList->fields._size <= (unsigned int)num )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return replaceList->fields._items->m_Items[num];
}


void __fastcall ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *replaceList; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_4390ECD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    sub_B775C4(&StringLiteral_15929/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/);
    sub_B775C4(&StringLiteral_24335/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/);
    byte_4390ECD = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v2 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->replaceList;
  if ( !replaceList )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    replaceList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15929/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v4);
  ScriptReplaceString__SetString_35075984(5, (System_String_o *)StringLiteral_24335/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v5);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4390ED1 & 1) == 0 )
  {
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    byte_4390ED1 = 1;
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
  if ( (byte_4390ECE & 1) == 0 )
  {
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    byte_4390ECE = 1;
  }
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  }
  ScriptReplaceString__SetString_35075984(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_35075984(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *TagFairingString; // x20
  ScriptReplaceString_c *v7; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceList; // x0

  if ( (byte_4390ECF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    sub_B775C4(&ScriptReplaceString_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4390ECF = 1;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v7 = ScriptReplaceString_TypeInfo;
  if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v7 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v7->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_29;
  if ( replaceList->fields._size > num )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) == 0
      || v7->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v7),
          (replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        replaceList,
        num,
        (WarBoardManager_TaskList_o *)TagFairingString,
        (const MethodInfo_3052FF0 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_29:
    sub_B7769C(replaceList, v5);
  }
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v7->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
    if ( replaceList->fields._size >= num )
      break;
    if ( (WORD1(v7->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_29;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v7 = ScriptReplaceString_TypeInfo;
  }
  if ( (WORD1(v7->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    replaceList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_29;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)TagFairingString,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
}