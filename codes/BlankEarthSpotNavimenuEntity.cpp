void BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59704D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59704D9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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
  System_Collections_IEnumerable_o *v8; // x22
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v13; // x1
  __int128 v14; // q0
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v17; // x23
  int64_t Value_long; // x24
  int32_t v19; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v20; // x22
  const MethodInfo *v21; // x5
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w22
  int32_t v35; // w21
  __int64 v36; // x23
  int64_t v37; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59704D8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_long___);
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
    sub_2213A60(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    sub_2213A60(&StringLiteral_23742/*"overwriteTime"*/);
    sub_2213A60(&StringLiteral_25321/*"text"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_18849/*"color"*/);
    sub_2213A60(&StringLiteral_19497/*"dispType"*/);
    byte_59704D8 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( !result )
    return result;
  v8 = (System_Collections_IEnumerable_o *)result;
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
  v37 = nowTime;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v8,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v11,
                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    Item,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v14 = *(_OWORD *)&v38.fields._list;
  v39.fields._current = v38.fields._current;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  *(_OWORD *)&v39.fields._list = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v39.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v39.fields._current,
                     (System_String_o *)StringLiteral_25321/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
    v17 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18849/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_23742/*"overwriteTime"*/,
                   0,
                   (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___);
    v19 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_19497/*"dispType"*/,
            0,
            (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___);
    v20 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_2213CCC(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v20,
      (System_String_o *)Value_object,
      (System_String_o *)v17,
      Value_long,
      v19,
      v21);
    if ( !v10
      || (items = v10->fields._items,
          v31 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__,
          ++v10->fields._version,
          !items) )
    {
      sub_2213CDC(v22, v23);
    }
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v20,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v20, v24, v25, v26, v27, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v10 )
    goto LABEL_32;
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
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
      if ( !Item )
        break;
      if ( (signed __int64)(v37 - (unsigned __int64)Item->fields._syncRoot) >= 0
        && (signed __int64)(v37 - (unsigned __int64)Item->fields._syncRoot) < v36 )
      {
        v35 = v34;
      }
      ++v34;
      if ( (signed __int64)(v37 - (unsigned __int64)Item->fields._syncRoot) >= 0
        && (signed __int64)(v37 - (unsigned __int64)Item->fields._syncRoot) < v36 )
      {
        v36 = v37 - (unsigned __int64)Item->fields._syncRoot;
      }
      if ( v34 >= v10->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v10,
                                                               v35,
                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    }
LABEL_32:
    sub_2213CDC(Item, v13);
  }
  v35 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                         v10,
                                                         v35,
                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
}


System_Collections_Generic_List_object__o *BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59704D7 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_List_object____);
    sub_2213A60(&StringLiteral_13400/*"ShortCutMessageInfo"*/);
    byte_59704D7 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_13400/*"ShortCutMessageInfo"*/,
                                                        0,
                                                        (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_List_object____);
}


bool BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_59704D6 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59704D6 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._Text_k__BackingField = inputText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)inputText, v11, v12, v13, v14, v15, v16);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)inputColor, v17, v18, v19, v20, v21, v22);
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