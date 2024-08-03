void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD3AD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method);
    byte_49FD3AD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    413,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool __fastcall WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  __int64 v8; // x1
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v11; // x8
  struct System_Int64_array *v12; // x8

  if ( !entity )
LABEL_24:
    sub_1B64324(this);
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
      v11 = entity->fields.playCondValues;
      if ( !v11 )
        goto LABEL_24;
      if ( !v11->max_length )
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
      if ( !v12->max_length )
LABEL_25:
        sub_1B6432C(this, v8);
      result = v12->m_Items[0] <= checkValue;
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
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  bool v24; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  const MethodInfo *v34; // x4
  Il2CppObject *v35; // x25
  __int64 methodPtr_low; // x9
  _BOOL8 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  _BOOL8 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  WarBoardMessageEntity_o *v51; // x0
  const MethodInfo *v52; // x2
  System_Collections_Generic_List_object__o *v54; // x19

  if ( (byte_49FD3AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&stageId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v19);
    sub_1B640C8(&WarBoardMessageEntity_TypeInfo, v20);
    byte_49FD3AE = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       *(_QWORD *)&type);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  v24 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v35 = (Il2CppObject *)v33;
    if ( !v33 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(WarBoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != WarBoardMessageEntity_TypeInfo )
    {
      sub_1B645E4(v33);
LABEL_40:
      sub_1B64324(v33);
    }
    if ( *(_DWORD *)(v33 + 16) == stageId && *(_DWORD *)(v33 + 20) == type )
    {
      v37 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v33,
              (WarBoardMessageEntity_o *)v33,
              checkValue,
              v24,
              v34);
      if ( v37 )
      {
        if ( !v21 )
          sub_1B64324(v37);
        items = v21->fields._items;
        v41 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1B64324(v37);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v35,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v35;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v35, v38, v39);
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_34;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_34:
    v47 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  v48 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v48 )
  {
    v51 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v48,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v21,
            v50);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v51, v51, v52);
  }
  else
  {
    v54 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v49,
                                                         v50);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    return (System_Collections_Generic_List_WarBoardTaskBase__o *)v54;
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
  __int64 v10; // x2
  struct System_Int64_array *scriptIds; // x25
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  int64_t v14; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FD3B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v5);
    sub_1B640C8(&WarBoardFaceMessagePerformance_TypeInfo, v6);
    byte_49FD3B0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                      result,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  v12 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B6432C(v8, v9);
      v14 = scriptIds->m_Items[v13];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v17 = (WarBoardFaceMessagePerformance_o *)sub_1B64314(WarBoardFaceMessagePerformance_TypeInfo, v9, v10);
      WarBoardFaceMessagePerformance___ctor(v17, stageId, sceneType, v14, 0LL);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v17,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
      }
      LODWORD(v12) = scriptIds->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
    }
LABEL_15:
    sub_1B64324(v8);
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
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardMessageMaster___c_c *v12; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_49FD3AF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&System_Func_WarBoardMessageEntity__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v7);
    sub_1B640C8(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v8);
    sub_1B640C8(&WarBoardMessageMaster___c_TypeInfo, v9);
    byte_49FD3AF = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v12 = WarBoardMessageMaster___c_TypeInfo;
  if ( !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v12 = WarBoardMessageMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v12->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardMessageMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardMessageEntity__int__TypeInfo, v10, v11);
    System_Func_object__int____ctor(_9__4_0, v14, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0LL);
    static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v19, 0, 0LL);
  if ( !entities )
    sub_1B64324(RandomRangeIndex);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD3B1 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMessageMaster___c_TypeInfo, v1);
    byte_49FD3B1 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return ent->fields.playProbabirity;
}