void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1E4BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, v3);
    byte_4B1E4BC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)ScriptReplaceString_TypeInfo->static_fields, (int32_t)v4, v5, v6);
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

  if ( (byte_4B1E4BB & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, v1);
    byte_4B1E4BB = 1;
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

  if ( (byte_4B1E4B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, method);
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, v3);
    byte_4B1E4B9 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v4 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v4->static_fields->replaceList;
  if ( !replaceList )
    sub_1BCB254(0LL, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
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

  if ( (byte_4B1E4B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v1);
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_15683/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v3);
    sub_1BCAFF8(&StringLiteral_25217/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v4);
    byte_4B1E4B6 = 1;
  }
  v5 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v5 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v5->static_fields->replaceList;
  if ( !replaceList )
    sub_1BCB254(v5, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v8 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v8;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0LL);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15683/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_44000140(5, (System_String_o *)StringLiteral_25217/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v9);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4B1E4BA & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, method);
    byte_4B1E4BA = 1;
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
  if ( (byte_4B1E4B7 & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, str);
    byte_4B1E4B7 = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  ScriptReplaceString__SetString_44000140(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_44000140(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *TagFairingString; // x0
  Il2CppObject *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptReplaceString_c *v14; // x8
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x8
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4B1E4B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__set_Item__, v6);
    sub_1BCAFF8(&ScriptMessageLabel_TypeInfo, v7);
    sub_1BCAFF8(&ScriptReplaceString_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B1E4B8 = 1;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v14 = ScriptReplaceString_TypeInfo;
  v15 = (Il2CppObject *)TagFairingString;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v14 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v14->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_27;
  if ( replaceList->fields._size > num )
  {
    if ( v14->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v14),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v15,
        (const MethodInfo_36B9954 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1BCB254(replaceList, v11);
  }
  while ( 1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_object__o *)v14->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_27;
    size = replaceList->fields._size;
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_27;
    }
    if ( size >= num )
      break;
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
    items = replaceList->fields._items;
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++replaceList->fields._version;
    if ( !items )
      goto LABEL_27;
    v20 = replaceList->fields._size;
    if ( (unsigned int)v20 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        replaceList,
        v11,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + v20;
      replaceList->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v11;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v12, v13);
    }
    v14 = ScriptReplaceString_TypeInfo;
  }
  v22 = replaceList->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++replaceList->fields._version;
  if ( !v22 )
    goto LABEL_27;
  v24 = replaceList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replaceList,
      v15,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    replaceList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v12, v13);
  }
}