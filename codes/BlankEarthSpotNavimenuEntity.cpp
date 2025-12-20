void BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C504 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C504 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  const MethodInfo_386AB64 *v33; // x2
  int32_t v34; // w22
  int32_t v35; // w21
  __int64 v36; // x23
  __int64 v37; // x8
  _BOOL4 v38; // w10
  _BOOL4 v39; // w11
  int64_t v40; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2C503 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_long___);
    sub_1C94098(&Method_BasicHelper_GetValue_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
    sub_1C94098(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    sub_1C94098(&StringLiteral_22806/*"overwriteTime"*/);
    sub_1C94098(&StringLiteral_24277/*"text"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_18143/*"color"*/);
    sub_1C94098(&StringLiteral_18760/*"dispType"*/);
    byte_4D2C503 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
  v40 = nowTime;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)v8,
                                                               (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v11,
                                                        (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    Item,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v42.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v42.fields._current,
                     (System_String_o *)StringLiteral_24277/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_string___);
    v16 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18143/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_22806/*"overwriteTime"*/,
                   0,
                   (const MethodInfo_3189950 *)Method_BasicHelper_GetValue_long___);
    v18 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18760/*"dispType"*/,
            0,
            (const MethodInfo_3189950 *)Method_BasicHelper_GetValue_long___);
    v19 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1C942E4(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v19,
      (System_String_o *)Value_object,
      (System_String_o *)v16,
      Value_long,
      v18,
      v20);
    if ( !v10 )
      sub_1C942F0(v21, v22);
    items = v10->fields._items;
    v30 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
    ++v10->fields._version;
    if ( !items )
      sub_1C942F0(v21, v22);
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v19,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v19;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v19, v23, v24, v25, v26, v27, v28);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v10 )
    goto LABEL_33;
  v33 = (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
  if ( v10->fields._size >= 1 )
  {
    v34 = 0;
    v35 = 0;
    v36 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v10,
                                                            v34,
                                                            v33);
      if ( !Item )
        break;
      v33 = (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
      v37 = v40 - (unsigned __int64)Item->fields._syncRoot;
      v38 = v37 >= 0;
      v39 = v37 < v36;
      if ( v38 && v39 )
        v35 = v34;
      ++v34;
      if ( v38 && v39 )
        v36 = v40 - (unsigned __int64)Item->fields._syncRoot;
      if ( v34 >= v10->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v10,
                                                               v35,
                                                               v33);
    }
LABEL_33:
    sub_1C942F0(Item, v13);
  }
  v35 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(v10, v35, v33);
}


System_Collections_Generic_List_object__o *BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2C502 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_List_object____);
    sub_1C94098(&StringLiteral_12911/*"ShortCutMessageInfo"*/);
    byte_4D2C502 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12911/*"ShortCutMessageInfo"*/,
                                                        0,
                                                        (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_List_object____);
}


bool BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D2C501 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2C501 = 1;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._Text_k__BackingField = inputText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields, (int32_t)inputText, v11, v12, v13, v14, v15, v16);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v10, (int32_t)inputColor, v17, v18, v19, v20, v21, v22);
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