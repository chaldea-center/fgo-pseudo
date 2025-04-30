void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F590 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method);
    byte_4A4F590 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    419,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool __fastcall WarBoardMessageMaster__CheckCondition(
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
    sub_1B86614(this, entity);
  this = (WarBoardMessageMaster_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)entity->fields.playCondValues,
                                      0LL);
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
      if ( !playCondValues->max_length )
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
      if ( !v10->max_length )
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
      if ( !v11->max_length )
LABEL_25:
        sub_1B8661C(this, entity);
      result = v11->m_Items[0] <= checkValue;
      break;
    default:
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  bool v25; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x4
  Il2CppObject *v37; // x25
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x2
  WarBoardMessageEntity_o *v52; // x0
  const MethodInfo *v53; // x2
  System_Collections_Generic_List_object__o *v55; // x19

  if ( (byte_4A4F591 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__,
      *(_QWORD *)&stageId);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11);
    sub_1B863B8(&System_IDisposable_TypeInfo, v12);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo, v13);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v17);
    sub_1B863B8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18);
    sub_1B863B8(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v19);
    byte_4A4F591 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v23);
  v25 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardMessageEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_17;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_17:
      v33 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v37 = (Il2CppObject *)v34;
    if ( !v34 )
      sub_1B86614(0LL, v35);
    if ( *(_DWORD *)(v34 + 16) == stageId && *(_DWORD *)(v34 + 20) == type )
    {
      v38 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v34,
              (WarBoardMessageEntity_o *)v34,
              checkValue,
              v25,
              v36);
      if ( v38 )
      {
        if ( !v20 )
          sub_1B86614(v38, v39);
        items = v20->fields._items;
        v43 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1B86614(v38, v39);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v37,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v37;
          sub_1B8635C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v37, v40, v41);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_32;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_32:
    v49 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  v50 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v50 )
  {
    v52 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v50,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v20,
            v51);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v52, v52, v53);
  }
  else
  {
    v55 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    return (System_Collections_Generic_List_WarBoardTaskBase__o *)v55;
  }
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Int64_array *scriptIds; // x25
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  int64_t v13; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A4F593 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v5);
    sub_1B863B8(&WarBoardFaceMessagePerformance_TypeInfo, v6);
    byte_4A4F593 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  v11 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B8661C(v8, v9);
      v13 = scriptIds->m_Items[v12];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v16 = (WarBoardFaceMessagePerformance_o *)sub_1B86604(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v16, stageId, sceneType, v13, 0LL);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v16,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v16;
        sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
      }
      LODWORD(v11) = scriptIds->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
    }
LABEL_15:
    sub_1B86614(v8, v9);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
}


WarBoardMessageEntity_o *__fastcall WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardMessageMaster___c_c *v10; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v19; // x1

  if ( (byte_4A4F592 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B863B8(&System_Func_WarBoardMessageEntity__int__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v7);
    sub_1B863B8(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v8);
    sub_1B863B8(&WarBoardMessageMaster___c_TypeInfo, v9);
    byte_4A4F592 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v10 = WarBoardMessageMaster___c_TypeInfo;
  if ( !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v10 = WarBoardMessageMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v10->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = WarBoardMessageMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B86604(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v12, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0LL);
    static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v17, 0, 0LL);
  if ( !entities )
    sub_1B86614(RandomRangeIndex, v19);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F594 & 1) == 0 )
  {
    sub_1B863B8(&WarBoardMessageMaster___c_TypeInfo, v1);
    byte_4A4F594 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)WarBoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardMessageMaster___c___ctor(WarBoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardMessageMaster___c___Lottery_b__4_0(
        WarBoardMessageMaster___c_o *this,
        WarBoardMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B86614(this, 0LL);
  return ent->fields.playProbabirity;
}