void WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28463 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
    byte_4C28463 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    419,
    (const MethodInfo_338A52C *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  __int64 v8; // x2
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v11; // x8
  struct System_Int64_array *v12; // x8

  if ( !entity )
LABEL_24:
    sub_1C2D6EC(this, entity);
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
      v11 = entity->fields.playCondValues;
      if ( !v11 )
        goto LABEL_24;
      if ( !LODWORD(v11->max_length) )
        goto LABEL_25;
      result = v11->m_Items[0] >= checkValue;
      break;
    case 6:
      if ( isValueByPlayer )
        return 0;
LABEL_21:
      v12 = entity->fields.playCondValues;
      if ( !v12 )
        goto LABEL_24;
      if ( !LODWORD(v12->max_length) )
LABEL_25:
        sub_1C2D6F4(this, entity, v8);
      result = v12->m_Items[0] <= checkValue;
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  bool v16; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  Il2CppObject *v28; // x25
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x2
  WarBoardMessageEntity_o *v43; // x0
  const MethodInfo *v44; // x2
  System_Collections_Generic_List_object__o *v46; // x19

  if ( (byte_4C28464 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
    byte_4C28464 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v14);
  v16 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardMessageEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_17:
      v24 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = (Il2CppObject *)v25;
    if ( !v25 )
      sub_1C2D6EC(0, v26);
    if ( *(_DWORD *)(v25 + 16) == stageId && *(_DWORD *)(v25 + 20) == type )
    {
      v29 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v25,
              (WarBoardMessageEntity_o *)v25,
              checkValue,
              v16,
              v27);
      if ( v29 )
      {
        if ( !v11 )
          sub_1C2D6EC(v29, v30);
        items = v11->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C2D6EC(v29, v30);
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v28,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v28;
          sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v28, v31, v32);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_32:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  v41 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v41 )
  {
    v43 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v41,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v11,
            v42);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v43, v43, v44);
  }
  else
  {
    v46 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v46,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    return (System_Collections_Generic_List_WarBoardTaskBase__o *)v46;
  }
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int64_array *scriptIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x26
  int64_t v11; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C28466 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&WarBoardFaceMessagePerformance_TypeInfo);
    byte_4C28466 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  max_length = scriptIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C2D6F4(v5, v6, v7);
      v11 = scriptIds->m_Items[v10];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v14 = (WarBoardFaceMessagePerformance_o *)sub_1C2D6DC(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v14, stageId, sceneType, v11, 0);
      if ( !v4 )
        break;
      items = v4->fields._items;
      v18 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v14,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
      }
      LODWORD(max_length) = scriptIds->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
    }
LABEL_15:
    sub_1C2D6EC(v5, v6);
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
  __int64 v13; // x1

  if ( (byte_4C28465 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_WarBoardMessageEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
    sub_1C2D490(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__);
    sub_1C2D490(&WarBoardMessageMaster___c_TypeInfo);
    byte_4C28465 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
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
    _9__4_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v6, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0);
    static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v11 = System_Linq_Enumerable__ToArray_int_(
          v10,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v11, 0, 0);
  if ( !entities )
    sub_1C2D6EC(RandomRangeIndex, v13);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C28467 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardMessageMaster___c_TypeInfo);
    byte_4C28467 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return ent->fields.playProbabirity;
}