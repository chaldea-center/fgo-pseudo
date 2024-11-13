void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B17E89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v6, v7);
    byte_4B17E89 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScriptReplaceString_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4B17E88 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v1, v2);
    byte_4B17E88 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v1);
    v3 = ScriptReplaceString_TypeInfo;
  }
  return v3->static_fields->playerGenderIndex;
}


System_String_o *__fastcall ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ScriptReplaceString_c *v6; // x0
  System_Collections_Generic_List_object__o *replaceList; // x0

  if ( (byte_4B17E86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, method, v2);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v4, v5);
    byte_4B17E86 = 1;
  }
  v6 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, method);
    v6 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v6->static_fields->replaceList;
  if ( !replaceList )
    sub_1BCAA3C(0LL, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}


void __fastcall ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ScriptReplaceString_c *v9; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x8
  const MethodInfo *size; // x2
  int v12; // w9
  const MethodInfo *v13; // x2

  if ( (byte_4B17E83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v1, v2);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_15991/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25578/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v7, v8);
    byte_4B17E83 = 1;
  }
  v9 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v1);
    v9 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v9->static_fields->replaceList;
  if ( !replaceList )
    sub_1BCAA3C(v9, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v12 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0LL);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15991/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_42454956(5, (System_String_o *)StringLiteral_25578/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v13);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptReplaceString_c *v4; // x0

  if ( (byte_4B17E87 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, method, v2);
    byte_4B17E87 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, method);
    v4 = ScriptReplaceString_TypeInfo;
  }
  v4->static_fields->playerGenderIndex = index;
}


void __fastcall ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4B17E84 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, str, method);
    byte_4B17E84 = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, str);
  ScriptReplaceString__SetString_42454956(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_42454956(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *TagFairingString; // x0
  Il2CppObject *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ScriptReplaceString_c *v23; // x8
  Il2CppObject *v24; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8

  if ( (byte_4B17E85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, str, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v7, v8);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B17E85 = 1;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, str);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v23 = ScriptReplaceString_TypeInfo;
  v24 = (Il2CppObject *)TagFairingString;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v16);
    v23 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v23->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_27;
  if ( replaceList->fields._size > num )
  {
    if ( v23->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v23, v16),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v24,
        (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1BCAA3C(replaceList, v16);
  }
  while ( 1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v16);
      v23 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_object__o *)v23->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_27;
    size = replaceList->fields._size;
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v16);
      replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_27;
    }
    if ( size >= num )
      break;
    v16 = (Il2CppObject *)StringLiteral_1/*""*/;
    items = replaceList->fields._items;
    v28 = Method_System_Collections_Generic_List_string__Add__;
    ++replaceList->fields._version;
    if ( !items )
      goto LABEL_27;
    v29 = replaceList->fields._size;
    if ( (unsigned int)v29 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        replaceList,
        v16,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + v29;
      replaceList->fields._size = v29 + 1;
      v30[4] = (Il2CppClass *)v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
    }
    v23 = ScriptReplaceString_TypeInfo;
  }
  v31 = replaceList->fields._items;
  v32 = Method_System_Collections_Generic_List_string__Add__;
  ++replaceList->fields._version;
  if ( !v31 )
    goto LABEL_27;
  v33 = replaceList->fields._size;
  if ( (unsigned int)v33 >= v31->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replaceList,
      v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v31->obj.klass + v33;
    replaceList->fields._size = v33 + 1;
    v34[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v17, v18, v19, v20, v21, v22);
  }
}