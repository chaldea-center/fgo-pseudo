void ScriptReplaceString___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C292D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    byte_4C292D3 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  ScriptReplaceString_TypeInfo->static_fields->replaceList = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ScriptReplaceString_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void ScriptReplaceString___ctor(ScriptReplaceString_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ScriptReplaceString__GetPlayerGenderIndex(const MethodInfo *method)
{
  ScriptReplaceString_c *v1; // x0

  if ( (byte_4C292D2 & 1) == 0 )
  {
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    byte_4C292D2 = 1;
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

  if ( (byte_4C292D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    byte_4C292D0 = 1;
  }
  v3 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v3 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v3->static_fields->replaceList;
  if ( !replaceList )
    sub_1C2D6EC(0, method);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              replaceList,
                              num,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
}


void ScriptReplaceString__Init(const MethodInfo *method)
{
  __int64 v1; // x1
  ScriptReplaceString_c *v2; // x0
  struct System_Collections_Generic_List_string__o *replaceList; // x8
  const MethodInfo *size; // x2
  int32_t version; // w9
  const MethodInfo *v6; // x2

  if ( (byte_4C292CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    sub_1C2D490(&StringLiteral_15814/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/);
    sub_1C2D490(&StringLiteral_25415/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/);
    byte_4C292CD = 1;
  }
  v2 = ScriptReplaceString_TypeInfo;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v2 = ScriptReplaceString_TypeInfo;
  }
  replaceList = v2->static_fields->replaceList;
  if ( !replaceList )
    sub_1C2D6EC(v2, v1);
  size = (const MethodInfo *)(unsigned int)replaceList->fields._size;
  version = replaceList->fields._version;
  replaceList->fields._size = 0;
  replaceList->fields._version = version + 1;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)replaceList->fields._items, 0, (int32_t)size, 0);
  ScriptReplaceString__SetString(1, (System_String_o *)StringLiteral_15814/*"[#[FF0000]主[-]人公:しゅじんこう]はぐだぐだな主人公"*/, size);
  ScriptReplaceString__SetString_44638404(5, (System_String_o *)StringLiteral_25415/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v6);
  ScriptReplaceString_TypeInfo->static_fields->playerGenderIndex = 1;
}


void ScriptReplaceString__SetPlayerGenderIndex(int32_t index, const MethodInfo *method)
{
  ScriptReplaceString_c *v3; // x0

  if ( (byte_4C292D1 & 1) == 0 )
  {
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    byte_4C292D1 = 1;
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
  if ( (byte_4C292CE & 1) == 0 )
  {
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    byte_4C292CE = 1;
  }
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
  ScriptReplaceString__SetString_44638404(index, str, method);
}


void ScriptReplaceString__SetString_44638404(int32_t num, System_String_o *str, const MethodInfo *method)
{
  System_String_o *TagFairingString; // x0
  Il2CppObject *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ScriptReplaceString_c *v9; // x8
  Il2CppObject *v10; // x20
  System_Collections_Generic_List_object__o *replaceList; // x0
  int32_t size; // w24
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x8
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4C292CF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C2D490(&ScriptMessageLabel_TypeInfo);
    sub_1C2D490(&ScriptReplaceString_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C292CF = 1;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  TagFairingString = ScriptMessageLabel__GetTagFairingString(str, (const MethodInfo *)str);
  v9 = ScriptReplaceString_TypeInfo;
  v10 = (Il2CppObject *)TagFairingString;
  if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
    v9 = ScriptReplaceString_TypeInfo;
  }
  replaceList = (System_Collections_Generic_List_object__o *)v9->static_fields->replaceList;
  if ( !replaceList )
    goto LABEL_27;
  if ( replaceList->fields._size > num )
  {
    if ( v9->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v9),
          (replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList) != 0) )
    {
      System_Collections_Generic_List_object___set_Item(
        replaceList,
        num,
        v10,
        (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_string__set_Item__);
      return;
    }
LABEL_27:
    sub_1C2D6EC(replaceList, v6);
  }
  while ( 1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ScriptReplaceString_TypeInfo;
    }
    replaceList = (System_Collections_Generic_List_object__o *)v9->static_fields->replaceList;
    if ( !replaceList )
      goto LABEL_27;
    size = replaceList->fields._size;
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      replaceList = (System_Collections_Generic_List_object__o *)ScriptReplaceString_TypeInfo->static_fields->replaceList;
      if ( !replaceList )
        goto LABEL_27;
    }
    if ( size >= num )
      break;
    v6 = (Il2CppObject *)StringLiteral_1/*""*/;
    items = replaceList->fields._items;
    v14 = Method_System_Collections_Generic_List_string__Add__;
    ++replaceList->fields._version;
    if ( !items )
      goto LABEL_27;
    v15 = replaceList->fields._size;
    if ( (unsigned int)v15 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        replaceList,
        v6,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + v15;
      replaceList->fields._size = v15 + 1;
      v16[4] = (Il2CppClass *)v6;
      sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v7, v8);
    }
    v9 = ScriptReplaceString_TypeInfo;
  }
  v17 = replaceList->fields._items;
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++replaceList->fields._version;
  if ( !v17 )
    goto LABEL_27;
  v19 = replaceList->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replaceList,
      v10,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    replaceList->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)v10;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v10, v7, v8);
  }
}