void __fastcall BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E169 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_int___ctor__, method);
    byte_4A4E169 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3211D9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotNavimenuEntity__CreatePrimaryKey(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.blankEarthSpotId;
}


BlankEarthSpotNavimenuEntity_MessageData_o *__fastcall BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(
        BlankEarthSpotNavimenuEntity_o *this,
        int64_t nowTime,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  BlankEarthSpotNavimenuEntity_MessageData_o *result; // x0
  BlankEarthSpotNavimenuEntity_MessageData_o *v27; // x22
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v35; // x23
  int64_t Value_long; // x24
  int32_t v37; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v38; // x22
  const MethodInfo *v39; // x5
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  const MethodInfo_35FC688 *v48; // x2
  int32_t v49; // w22
  int32_t v50; // w21
  __int64 v51; // x23
  __int64 v52; // x8
  _BOOL4 v53; // w10
  _BOOL4 v54; // w11
  int64_t v55; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4E168 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetValue_long___, nowTime);
    sub_1B863B8(&Method_BasicHelper_GetValue_string___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_object__get_Count__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__, v18);
    sub_1B863B8(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo, v19);
    sub_1B863B8(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo, v20);
    sub_1B863B8(&StringLiteral_22259/*"overwriteTime"*/, v21);
    sub_1B863B8(&StringLiteral_23735/*"text"*/, v22);
    sub_1B863B8(&StringLiteral_1/*""*/, v23);
    sub_1B863B8(&StringLiteral_17822/*"color"*/, v24);
    sub_1B863B8(&StringLiteral_18418/*"dispType"*/, v25);
    byte_4A4E168 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( !result )
    return result;
  v27 = result;
  if ( !LODWORD(result->fields._Color_k__BackingField) )
    return 0LL;
  if ( isInit )
  {
    messageClosedAt = this->fields.messageClosedAt;
    if ( (messageClosedAt & 0x8000000000000000LL) == 0 )
    {
      result = 0LL;
      if ( messageClosedAt < nowTime || this->fields.messageOpenedAt > nowTime )
        return result;
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  v55 = nowTime;
  v29 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)v27,
                                                               (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v30,
                                                        (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    Item,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v57.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v57.fields._current,
                     (System_String_o *)StringLiteral_23735/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2F5B964 *)Method_BasicHelper_GetValue_string___);
    v35 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_17822/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_2F5B964 *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_22259/*"overwriteTime"*/,
                   0LL,
                   (const MethodInfo_2F5B878 *)Method_BasicHelper_GetValue_long___);
    v37 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18418/*"dispType"*/,
            0LL,
            (const MethodInfo_2F5B878 *)Method_BasicHelper_GetValue_long___);
    v38 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1B86604(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v38,
      (System_String_o *)Value_object,
      (System_String_o *)v35,
      Value_long,
      v37,
      v39);
    if ( !v29 )
      sub_1B86614(v40, v41);
    items = v29->fields._items;
    v45 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
    ++v29->fields._version;
    if ( !items )
      sub_1B86614(v40, v41);
    size = v29->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        (Il2CppObject *)v38,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v47[4] = (Il2CppClass *)v38;
      sub_1B8635C((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v38, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v29 )
    goto LABEL_33;
  v48 = (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
  if ( v29->fields._size >= 1 )
  {
    v49 = 0;
    v50 = 0;
    v51 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v29,
                                                            v49,
                                                            v48);
      if ( !Item )
        break;
      v48 = (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
      v52 = v55 - (unsigned __int64)Item->fields._syncRoot;
      v53 = v52 >= 0;
      v54 = v52 < v51;
      if ( v53 && v54 )
        v50 = v49;
      ++v49;
      if ( v53 && v54 )
        v51 = v55 - (unsigned __int64)Item->fields._syncRoot;
      if ( v49 >= v29->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v29,
                                                               v50,
                                                               v48);
    }
LABEL_33:
    sub_1B86614(Item, v32);
  }
  v50 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(v29, v50, v48);
}


System_Collections_Generic_List_object__o *__fastcall BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4A4E167 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B863B8(&StringLiteral_12633/*"ShortCutMessageInfo"*/, v3);
    byte_4A4E167 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12633/*"ShortCutMessageInfo"*/,
                                                        0LL,
                                                        (const MethodInfo_2F5B964 *)Method_BasicHelper_GetValue_List_object____);
}


bool __fastcall BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4A4E166 & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, method);
    byte_4A4E166 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


void __fastcall BlankEarthSpotNavimenuEntity_MessageData___ctor(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        System_String_o *inputText,
        System_String_o *inputColor,
        int64_t inputOverrideTime,
        int32_t inputDispType,
        const MethodInfo *method)
{
  BlankEarthSpotNavimenuEntity_MessageData_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._Text_k__BackingField = inputText;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->fields, (int32_t)inputText, v11, v12);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)v10, (int32_t)inputColor, v13, v14);
  v10->monitor = (void *)inputOverrideTime;
  LODWORD(v10->fields._Text_k__BackingField) = inputDispType;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Color(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Color_k__BackingField;
}


int32_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_DispType(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispType_k__BackingField;
}


int64_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_OverrideTime(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._OverrideTime_k__BackingField;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Text(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}