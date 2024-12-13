void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B38E59 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_1BD3458(&ScriptReplaceString_TypeInfo, v3);
    byte_4B38E59 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ScriptReplaceString_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B38E58 & 1) == 0 )
  {
    sub_1BD3458(&ScriptReplaceString_TypeInfo, v1);
    byte_4B38E58 = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *replaceList; // x0

  if ( (byte_4B38E56 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__get_Item__, method);
    sub_1BD3458(&ScriptReplaceString_TypeInfo, v3);
    byte_4B38E56 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v4 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v4->static_fields->replaceList;
  if ( !replaceList )
    sub_1BD36B4(0LL, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_string__get_Item__);
}


void __fastcall ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ScriptReplaceString_c *v5; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x8
  const MethodInfo *size; // x2
  int v8; // w9
  const MethodInfo *v9; // x2

  if ( (byte_4B38E53 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Clear__, v1);
    sub_1BD3458(&ScriptReplaceString_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_16010/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v3);
    sub_1BD3458(&StringLiteral_25616/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v4);
    byte_4B38E53 = 1;
  }
  v5 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v5 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v5->static_fields->replaceList;
  if ( !replaceList )
    sub_1BD36B4(v5, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v8 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v8;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0LL);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_16010/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_42558800(5, (System_String_o *)StringLiteral_25616/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v9);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4B38E57 & 1) == 0 )
  {
    sub_1BD3458(&ScriptReplaceString_TypeInfo, method);
    byte_4B38E57 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  v3->static_fields->playerGenderIndex = index;
}


void __fastcall ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4B38E54 & 1) == 0 )
  {
    sub_1BD3458(&ScriptReplaceString_TypeInfo, str);
    byte_4B38E54 = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  ScriptReplaceString__SetString_42558800(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_42558800(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *TagFairingString; // x0
  Il2CppObject *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ScriptReplaceString_c *v18; // x8
  Il2CppObject *v19; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4B38E55 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__set_Item__, v6);
    sub_1BD3458(&ScriptMessageLabel_TypeInfo, v7);
    sub_1BD3458(&ScriptReplaceString_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B38E55 = 1;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v18 = ScriptReplaceString_TypeInfo;
  v19 = (Il2CppObject *)TagFairingString;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v18 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v18->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_27;
  if ( replaceList->fields._size > num )
  {
    if ( v18->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v18),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v19,
        (const MethodInfo_35C0B14 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1BD36B4(replaceList, v11);
  }
  while ( 1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_object__o *)v18->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_27;
    size = replaceList->fields._size;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_27;
    }
    if ( size >= num )
      break;
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
    items = replaceList->fields._items;
    v23 = Method_System_Collections_Generic_List_string__Add__;
    ++replaceList->fields._version;
    if ( !items )
      goto LABEL_27;
    v24 = replaceList->fields._size;
    if ( (unsigned int)v24 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        replaceList,
        v11,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + v24;
      replaceList->fields._size = v24 + 1;
      v25[4] = (Il2CppClass *)v11;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v11, v12, v13, v14, v15, v16, v17);
    }
    v18 = ScriptReplaceString_TypeInfo;
  }
  v26 = replaceList->fields._items;
  v27 = Method_System_Collections_Generic_List_string__Add__;
  ++replaceList->fields._version;
  if ( !v26 )
    goto LABEL_27;
  v28 = replaceList->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replaceList,
      v19,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    replaceList->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v12, v13, v14, v15, v16, v17);
  }
}