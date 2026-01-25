void ScriptReplaceString___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0663 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF0663 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ScriptReplaceString_TypeInfo->static_fields,
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
  ScriptReplaceString_c *v1; // x0

  if ( (byte_4CF0662 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF0662 = 1;
  }
  v1 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v1 = ScriptReplaceString_TypeInfo;
  }
  return v1->static_fields->playerGenderIndex;
}


System_String_o *ScriptReplaceString__GetString(int32_t num, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0
  System_Collections_Generic_List_object__o *replaceList; // x0

  if ( (byte_4CF0660 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF0660 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v3->static_fields->replaceList;
  if ( !replaceList )
    sub_1C7BD40(0, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
}


void ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x8
  const MethodInfo *size; // x2
  int v5; // w9
  const MethodInfo *v6; // x2

  if ( (byte_4CF065D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15875/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/);
    sub_1C7BAE8(&StringLiteral_25693/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/);
    byte_4CF065D = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v2 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v2->static_fields->replaceList;
  if ( !replaceList )
    sub_1C7BD40(v2, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v5 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v5;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15875/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_45411924(5, (System_String_o *)StringLiteral_25693/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v6);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4CF0661 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF0661 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  v3->static_fields->playerGenderIndex = index;
}


void ScriptReplaceString__SetString(int32_t index, System_String_o *str, const MethodInfo *method)
{
  if ( (byte_4CF065E & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF065E = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  ScriptReplaceString__SetString_45411924(index, str, method);
}


void ScriptReplaceString__SetString_45411924(int32_t num, System_String_o *str, const MethodInfo *method)
{
  System_String_o *TagFairingString; // x0
  Il2CppObject *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ScriptReplaceString_c *v13; // x8
  Il2CppObject *v14; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x8
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4CF065F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF065F = 1;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v13 = ScriptReplaceString_TypeInfo;
  v14 = (Il2CppObject *)TagFairingString;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v13 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v13->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_27;
  if ( replaceList->fields._size > num )
  {
    if ( v13->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v13),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v14,
        (const MethodInfo_383EB80 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1C7BD40(replaceList, v6);
  }
  while ( 1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_object__o *)v13->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_27;
    size = replaceList->fields._size;
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_27;
    }
    if ( size >= num )
      break;
    v6 = (Il2CppObject *)StringLiteral_1/*""*/;
    items = replaceList->fields._items;
    v18 = Method_System_Collections_Generic_List_string__Add__;
    ++replaceList->fields._version;
    if ( !items )
      goto LABEL_27;
    v19 = replaceList->fields._size;
    if ( (unsigned int)v19 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        replaceList,
        v6,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + v19;
      replaceList->fields._size = v19 + 1;
      v20[4] = (Il2CppClass *)v6;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v7, v8, v9, v10, v11, v12);
    }
    v13 = ScriptReplaceString_TypeInfo;
  }
  v21 = replaceList->fields._items;
  v22 = Method_System_Collections_Generic_List_string__Add__;
  ++replaceList->fields._version;
  if ( !v21 )
    goto LABEL_27;
  v23 = replaceList->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replaceList,
      v14,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    replaceList->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v7, v8, v9, v10, v11, v12);
  }
}