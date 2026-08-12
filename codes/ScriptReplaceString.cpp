void ScriptReplaceString___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59728F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59728F6 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ScriptReplaceString_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0

  if ( (byte_59728F5 & 1) == 0 )
  {
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59728F5 = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v1);
    v2 = ScriptReplaceString_TypeInfo;
  }
  return v2->static_fields->playerGenderIndex;
}


System_String_o *ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0
  System_Collections_Generic_List_object__o *replaceList; // x0

  if ( (byte_59728F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59728F3 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, method);
    v3 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v3->static_fields->replaceList;
  if ( !replaceList )
    sub_2213CDC(0, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
}


void ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x8
  const MethodInfo *size; // x2
  int v5; // w9
  const MethodInfo *v6; // x2

  if ( (byte_59728F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    sub_2213A60(&StringLiteral_16441/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/);
    sub_2213A60(&StringLiteral_26838/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/);
    byte_59728F0 = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v1);
    v2 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v2->static_fields->replaceList;
  if ( !replaceList )
    sub_2213CDC(v2, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v5 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v5;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_16441/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_51900496(5, (System_String_o *)StringLiteral_26838/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v6);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_59728F4 & 1) == 0 )
  {
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59728F4 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, method);
    v3 = ScriptReplaceString_TypeInfo;
  }
  v3->static_fields->playerGenderIndex = index;
}


void ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  if ( (byte_59728F1 & 1) == 0 )
  {
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59728F1 = 1;
  }
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, str);
  ScriptReplaceString__SetString_51900496(index, str, method);
}


void ScriptReplaceString__SetString_51900496(int32_t num, System_String_o *str, const MethodInfo *method)
{
  System_String_o *TagFairingString; // x0
  Il2CppObject *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ScriptReplaceString_c *v13; // x9
  Il2CppObject *v14; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  System_Collections_Generic_List_object__o *v16; // x8
  int v17; // w10
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x9
  _QWORD *v23; // x10
  __int64 v24; // x11
  Il2CppClass **v25; // x0

  if ( (byte_59728F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59728F2 = 1;
  }
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, str);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v13 = ScriptReplaceString_TypeInfo;
  v14 = (Il2CppObject *)TagFairingString;
  if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v6);
    v13 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v13->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_29;
  if ( replaceList->fields._size > num )
  {
    if ( *(&v13->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v13, v6),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v14,
        (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_29:
    sub_2213CDC(replaceList, v6);
  }
  while ( 1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v6);
      v13 = ScriptReplaceString_TypeInfo;
    }
    v16 = (System_Collections_Generic_List_object__o *)v13->static_fields->replaceList;
    if ( !v16 )
      goto LABEL_29;
    v17 = *(&v13->_2.cctor_finished + 1);
    if ( v16->fields._size >= num )
      break;
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(v13, v6);
      v16 = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !v16 )
        goto LABEL_29;
    }
    items = v16->fields._items;
    v6 = (Il2CppObject *)StringLiteral_1/*""*/;
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v16->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v6,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v6, v7, v8, v9, v10, v11, v12);
    }
    v13 = ScriptReplaceString_TypeInfo;
  }
  if ( !v17 )
  {
    j_il2cpp_runtime_class_init_0(v13, v6);
    v16 = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
    if ( !v16 )
      goto LABEL_29;
  }
  v22 = v16->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++v16->fields._version;
  if ( !v22 )
    goto LABEL_29;
  v24 = v16->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      v14,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v16->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v7, v8, v9, v10, v11, v12);
  }
}