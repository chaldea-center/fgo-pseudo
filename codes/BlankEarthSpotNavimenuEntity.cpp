void BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3766E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C3766E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
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
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v15; // x23
  int64_t Value_long; // x24
  int32_t v17; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v18; // x22
  const MethodInfo *v19; // x5
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo_37984EC *v27; // x2
  int32_t v28; // w22
  int32_t v29; // w21
  __int64 v30; // x23
  __int64 v31; // x8
  _BOOL4 v32; // w10
  _BOOL4 v33; // w11
  int64_t v34; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3766D & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_long___);
    sub_1C32C20(&Method_BasicHelper_GetValue_string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
    sub_1C32C20(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    sub_1C32C20(&StringLiteral_22586/*"overwriteTime"*/);
    sub_1C32C20(&StringLiteral_24034/*"text"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_18051/*"color"*/);
    sub_1C32C20(&StringLiteral_18646/*"dispType"*/);
    byte_4C3766D = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
  v34 = nowTime;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)v8,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v11,
                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    Item,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v36.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v36.fields._current,
                     (System_String_o *)StringLiteral_24034/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
    v15 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18051/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_22586/*"overwriteTime"*/,
                   0,
                   (const MethodInfo_30CAC78 *)Method_BasicHelper_GetValue_long___);
    v17 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18646/*"dispType"*/,
            0,
            (const MethodInfo_30CAC78 *)Method_BasicHelper_GetValue_long___);
    v18 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1C32E6C(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v18,
      (System_String_o *)Value_object,
      (System_String_o *)v15,
      Value_long,
      v17,
      v19);
    if ( !v10 )
      sub_1C32E7C(v20);
    items = v10->fields._items;
    v24 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
    ++v10->fields._version;
    if ( !items )
      sub_1C32E7C(v20);
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v18,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v10 )
    goto LABEL_33;
  v27 = (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
  if ( v10->fields._size >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v10,
                                                            v28,
                                                            v27);
      if ( !Item )
        break;
      v27 = (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
      v31 = v34 - (unsigned __int64)Item->fields._syncRoot;
      v32 = v31 >= 0;
      v33 = v31 < v30;
      if ( v32 && v33 )
        v29 = v28;
      ++v28;
      if ( v32 && v33 )
        v30 = v34 - (unsigned __int64)Item->fields._syncRoot;
      if ( v28 >= v10->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v10,
                                                               v29,
                                                               v27);
    }
LABEL_33:
    sub_1C32E7C(Item);
  }
  v29 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(v10, v29, v27);
}


System_Collections_Generic_List_object__o *BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3766C & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_List_object____);
    sub_1C32C20(&StringLiteral_12856/*"ShortCutMessageInfo"*/);
    byte_4C3766C = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12856/*"ShortCutMessageInfo"*/,
                                                        0,
                                                        (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_List_object____);
}


bool BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4C3766B & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3766B = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields, (int32_t)inputText, v11, v12);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v10, (int32_t)inputColor, v13, v14);
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