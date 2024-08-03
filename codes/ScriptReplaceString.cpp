void __fastcall ScriptReplaceString___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE033 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v4);
    byte_49FE033 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ScriptReplaceString_TypeInfo->static_fields, (int32_t)v5, v6, v7);
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

  if ( (byte_49FE032 & 1) == 0 )
  {
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v1);
    byte_49FE032 = 1;
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

  if ( (byte_49FE030 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, method);
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v3);
    byte_49FE030 = 1;
  }
  v4 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v4 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v4->static_fields->replaceList;
  if ( !replaceList )
    sub_1B64324(0LL);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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

  if ( (byte_49FE02D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v1);
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_15757/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, v3);
    sub_1B640C8(&StringLiteral_25221/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v4);
    byte_49FE02D = 1;
  }
  v5 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v5 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v5->static_fields->replaceList;
  if ( !replaceList )
    sub_1B64324(v5);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  v8 = replaceList->fields._version + 1;
  replaceList->fields._size = 0;
  replaceList->fields._version = v8;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0LL);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15757/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_41370524(5, (System_String_o *)StringLiteral_25221/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v9);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void __fastcall ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_49FE031 & 1) == 0 )
  {
    sub_1B640C8(&ScriptReplaceString_TypeInfo, method);
    byte_49FE031 = 1;
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
  if ( (byte_49FE02E & 1) == 0 )
  {
    sub_1B640C8(&ScriptReplaceString_TypeInfo, str);
    byte_49FE02E = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  ScriptReplaceString__SetString_41370524(index, str, method);
}


void __fastcall ScriptReplaceString__SetString_41370524(int32_t num, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *TagFairingString; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ScriptReplaceString_c *v13; // x8
  Il2CppObject *v14; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x8
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_49FE02F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__set_Item__, v6);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v7);
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FE02F = 1;
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
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0LL) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v14,
        (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1B64324(replaceList);
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
    v17 = (Il2CppObject *)StringLiteral_1/*""*/;
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
        v17,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + v20;
      replaceList->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v17, v11, v12);
    }
    v13 = ScriptReplaceString_TypeInfo;
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
      v14,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    replaceList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v14, v11, v12);
  }
}