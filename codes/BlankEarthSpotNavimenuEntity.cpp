void BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56A0A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_int___ctor__);
    byte_4C56A0A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33B0A74 *)Method_DataEntityBase_int___ctor__);
}


int32_t BlankEarthSpotNavimenuEntity__CreatePrimaryKey(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  return this->fields.blankEarthSpotId;
}


BlankEarthSpotNavimenuEntity_MessageData_o *BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(
        BlankEarthSpotNavimenuEntity_o *this,
        int64_t nowTime,
        bool isInit,
        const MethodInfo *method)
{
  BlankEarthSpotNavimenuEntity_MessageData_o *result; // x0
  BlankEarthSpotNavimenuEntity_MessageData_o *v8; // x22
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v16; // x23
  int64_t Value_long; // x24
  int32_t v18; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v19; // x22
  const MethodInfo *v20; // x5
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  const MethodInfo_37B5190 *v29; // x2
  int32_t v30; // w22
  int32_t v31; // w21
  __int64 v32; // x23
  __int64 v33; // x8
  _BOOL4 v34; // w10
  _BOOL4 v35; // w11
  int64_t v36; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C56A09 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_long___);
    sub_1C3E564(&Method_BasicHelper_GetValue_string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
    sub_1C3E564(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    sub_1C3E564(&StringLiteral_22608/*"overwriteTime"*/);
    sub_1C3E564(&StringLiteral_24058/*"text"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_18070/*"color"*/);
    sub_1C3E564(&StringLiteral_18667/*"dispType"*/);
    byte_4C56A09 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( !result )
    return result;
  v8 = result;
  if ( !LODWORD(result->fields._Color_k__BackingField) )
    return 0;
  if ( isInit )
  {
    messageClosedAt = this->fields.messageClosedAt;
    if ( (messageClosedAt & 0x8000000000000000LL) == 0 )
    {
      result = 0;
      if ( messageClosedAt < nowTime || this->fields.messageOpenedAt > nowTime )
        return result;
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v36 = nowTime;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)v8,
                                                               (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v11,
                                                        (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    Item,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v38.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v38.fields._current,
                     (System_String_o *)StringLiteral_24058/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_string___);
    v16 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18070/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_22608/*"overwriteTime"*/,
                   0,
                   (const MethodInfo_30E72F8 *)Method_BasicHelper_GetValue_long___);
    v18 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18667/*"dispType"*/,
            0,
            (const MethodInfo_30E72F8 *)Method_BasicHelper_GetValue_long___);
    v19 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1C3E7B0(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v19,
      (System_String_o *)Value_object,
      (System_String_o *)v16,
      Value_long,
      v18,
      v20);
    if ( !v10 )
      sub_1C3E7C0(v21, v22);
    items = v10->fields._items;
    v26 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
    ++v10->fields._version;
    if ( !items )
      sub_1C3E7C0(v21, v22);
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v19,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v28[4] = (Il2CppClass *)v19;
      sub_1C3E508((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v19, v23, v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v10 )
    goto LABEL_33;
  v29 = (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
  if ( v10->fields._size >= 1 )
  {
    v30 = 0;
    v31 = 0;
    v32 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v10,
                                                            v30,
                                                            v29);
      if ( !Item )
        break;
      v29 = (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
      v33 = v36 - (unsigned __int64)Item->fields._syncRoot;
      v34 = v33 >= 0;
      v35 = v33 < v32;
      if ( v34 && v35 )
        v31 = v30;
      ++v30;
      if ( v34 && v35 )
        v32 = v36 - (unsigned __int64)Item->fields._syncRoot;
      if ( v30 >= v10->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v10,
                                                               v31,
                                                               v29);
    }
LABEL_33:
    sub_1C3E7C0(Item, v13);
  }
  v31 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(v10, v31, v29);
}


System_Collections_Generic_List_object__o *BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C56A08 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_List_object____);
    sub_1C3E564(&StringLiteral_12865/*"ShortCutMessageInfo"*/);
    byte_4C56A08 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12865/*"ShortCutMessageInfo"*/,
                                                        0,
                                                        (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_List_object____);
}


bool BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4C56A07 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C56A07 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


void BlankEarthSpotNavimenuEntity_MessageData___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._Text_k__BackingField = inputText;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->fields, (int32_t)inputText, v11, v12);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)v10, (int32_t)inputColor, v13, v14);
  v10->monitor = (void *)inputOverrideTime;
  LODWORD(v10->fields._Text_k__BackingField) = inputDispType;
}


System_String_o *BlankEarthSpotNavimenuEntity_MessageData__get_Color(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Color_k__BackingField;
}


int32_t BlankEarthSpotNavimenuEntity_MessageData__get_DispType(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispType_k__BackingField;
}


int64_t BlankEarthSpotNavimenuEntity_MessageData__get_OverrideTime(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._OverrideTime_k__BackingField;
}


System_String_o *BlankEarthSpotNavimenuEntity_MessageData__get_Text(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}