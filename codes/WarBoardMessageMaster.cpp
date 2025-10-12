void WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38B67 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
    byte_4C38B67 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    419,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8

  if ( !entity )
LABEL_24:
    sub_1C32E7C(this);
  this = (WarBoardMessageMaster_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)entity->fields.playCondValues,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  switch ( entity->fields.playCondType )
  {
    case 0:
      return 1;
    case 1:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_12;
    case 2:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_16;
    case 3:
      if ( isValueByPlayer )
        goto LABEL_21;
      return 0;
    case 4:
      if ( isValueByPlayer )
        return 0;
LABEL_12:
      playCondValues = entity->fields.playCondValues;
      if ( !playCondValues )
        goto LABEL_24;
      if ( !LODWORD(playCondValues->max_length) )
        goto LABEL_25;
      result = playCondValues->m_Items[0] == checkValue;
      break;
    case 5:
      if ( isValueByPlayer )
        return 0;
LABEL_16:
      v10 = entity->fields.playCondValues;
      if ( !v10 )
        goto LABEL_24;
      if ( !LODWORD(v10->max_length) )
        goto LABEL_25;
      result = v10->m_Items[0] >= checkValue;
      break;
    case 6:
      if ( isValueByPlayer )
        return 0;
LABEL_21:
      v11 = entity->fields.playCondValues;
      if ( !v11 )
        goto LABEL_24;
      if ( !LODWORD(v11->max_length) )
LABEL_25:
        sub_1C32E84(this);
      result = v11->m_Items[0] <= checkValue;
      break;
    default:
      return 0;
  }
  return result;
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  bool v14; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  const MethodInfo *v24; // x4
  Il2CppObject *v25; // x25
  _BOOL8 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x2
  WarBoardMessageEntity_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_object__o *v42; // x19

  if ( (byte_4C38B68 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
    byte_4C38B68 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v14 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardMessageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_17:
      v22 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (Il2CppObject *)v23;
    if ( !v23 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v23 + 16) == stageId && *(_DWORD *)(v23 + 20) == type )
    {
      v26 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v23,
              (WarBoardMessageEntity_o *)v23,
              checkValue,
              v14,
              v24);
      if ( v26 )
      {
        if ( !v11 )
          sub_1C32E7C(v26);
        items = v11->fields._items;
        v30 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C32E7C(v26);
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v25,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v25;
          sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v27, v28);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_32;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_32:
    v36 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  v37 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v37 )
  {
    v39 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v37,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v11,
            v38);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v39, v39, v40);
  }
  else
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    return (System_Collections_Generic_List_WarBoardTaskBase__o *)v42;
  }
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  struct System_Int64_array *scriptIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x26
  int64_t v9; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C38B6A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&WarBoardFaceMessagePerformance_TypeInfo);
    byte_4C38B6A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  max_length = scriptIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(v5);
      v9 = scriptIds->m_Items[v8];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v12 = (WarBoardFaceMessagePerformance_o *)sub_1C32E6C(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v12, stageId, sceneType, v9, 0);
      if ( !v4 )
        break;
      items = v4->fields._items;
      v16 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v12,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v12;
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
      }
      LODWORD(max_length) = scriptIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
    }
LABEL_15:
    sub_1C32E7C(v5);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
}


WarBoardMessageEntity_o *WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  WarBoardMessageMaster___c_c *v4; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Int32_array *v11; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_4C38B69 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_WarBoardMessageEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
    sub_1C32C20(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__);
    sub_1C32C20(&WarBoardMessageMaster___c_TypeInfo);
    byte_4C38B69 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0;
  v4 = WarBoardMessageMaster___c_TypeInfo;
  if ( !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v4 = WarBoardMessageMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v4->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardMessageMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v6, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0);
    static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v11 = System_Linq_Enumerable__ToArray_int_(
          v10,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v11, 0, 0);
  if ( !entities )
    sub_1C32E7C(RandomRangeIndex);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38B6B & 1) == 0 )
  {
    sub_1C32C20(&WarBoardMessageMaster___c_TypeInfo);
    byte_4C38B6B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardMessageMaster___c___ctor(WarBoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardMessageMaster___c___Lottery_b__4_0(
        WarBoardMessageMaster___c_o *this,
        WarBoardMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
  return ent->fields.playProbabirity;
}