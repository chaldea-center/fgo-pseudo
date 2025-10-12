void BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3760D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
    byte_4C3760D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    512,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
}


int32_t BattlePointPhaseMaster__GetEffectNum(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o *entity,
        int32_t changeValue,
        int32_t effectNumPerPhase,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  int v9; // w8
  BattlePointPhaseEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  entitya = 0;
  if ( !entity )
    return 0;
  v8 = BattlePointPhaseMaster__TryGetEntity(
         this,
         &entitya,
         entity->fields.battlePointId,
         entity->fields.phase + 1,
         method);
  if ( !v8 )
    return 0;
  if ( !entitya )
    sub_1C32E7C(v8);
  v9 = (entitya->fields.value - entity->fields.value) / effectNumPerPhase;
  if ( v9 >= 1 )
    return changeValue / v9;
  else
    return 0;
}


BattlePointPhaseEntity_o *BattlePointPhaseMaster__GetEntity(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3760E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
    byte_4C3760E = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
}


BattlePointPhaseEntity_o *BattlePointPhaseMaster__GetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, value, &entity, v4);
  return entity;
}


System_Collections_Generic_List_BattlePointPhaseEntity__o *BattlePointPhaseMaster__GetEntityList(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C37609 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
    sub_1C32C20(&System_Func_BattlePointPhaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__);
    sub_1C32C20(&BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C37609 = 1;
  }
  v5 = sub_1C32E6C(BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = battlePointId;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattlePointPhaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         v7,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v9,
                                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
}


int32_t BattlePointPhaseMaster__GetMaxPhase(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  BattlePointPhaseMaster___c_c *v7; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3760C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1C32C20(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1C32C20(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__);
    sub_1C32C20(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4C3760C = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1C32E7C(0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v7 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v7 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v7->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, 0);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  return System_Linq_Enumerable__Max_object_(
           v6,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_310B720 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


int32_t BattlePointPhaseMaster__GetMaxPhaseValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  BattlePointPhaseMaster___c_c *v7; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v9; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3760B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1C32C20(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1C32C20(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__);
    sub_1C32C20(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4C3760B = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1C32E7C(0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v7 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v7 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v7->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v9, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, 0);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12);
  }
  return System_Linq_Enumerable__Max_object_(
           v6,
           (System_Func_TSource__int__o *)_9__3_0,
           (const MethodInfo_310B720 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


bool BattlePointPhaseMaster__IsEffectIdChanged(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t oldValue,
        int32_t newValue,
        const MethodInfo *method)
{
  BattlePointPhaseEntity_o *v8; // x22
  const MethodInfo *v9; // x4
  bool result; // w0
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, oldValue, &entity, method);
  v8 = entity;
  entity = 0;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, newValue, &entity, v9);
  result = 0;
  if ( v8 && entity )
    return *(_DWORD *)((char *)&word_10 + (_QWORD)v8) == *(_DWORD *)((char *)&word_10 + (_QWORD)entity)
        && *(_DWORD *)((char *)&qword_28 + (_QWORD)v8) != *(_DWORD *)((char *)&qword_28 + (_QWORD)entity);
  return result;
}


bool BattlePointPhaseMaster__IsEffectIdChanged_41704092(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o *oldEntity,
        BattlePointPhaseEntity_o *newEntity,
        const MethodInfo *method)
{
  bool result; // w0

  result = 0;
  if ( oldEntity && newEntity )
    return oldEntity->fields.battlePointId == newEntity->fields.battlePointId
        && oldEntity->fields.effectId != newEntity->fields.effectId;
  return result;
}


bool BattlePointPhaseMaster__IsPhaseChanged(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t oldValue,
        int32_t newValue,
        const MethodInfo *method)
{
  BattlePointPhaseEntity_o *v8; // x22
  const MethodInfo *v9; // x4
  bool result; // w0
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, oldValue, &entity, method);
  v8 = entity;
  entity = 0;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, newValue, &entity, v9);
  result = 0;
  if ( v8 && entity )
    return *(_DWORD *)((char *)&word_10 + (_QWORD)v8) == *(_DWORD *)((char *)&word_10 + (_QWORD)entity)
        && *(int *)((char *)&dword_14 + (_QWORD)v8) != *(int *)((char *)&dword_14 + (_QWORD)entity);
  return result;
}


bool BattlePointPhaseMaster__IsPhaseChanged_41703900(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o *oldEntity,
        BattlePointPhaseEntity_o *newEntity,
        const MethodInfo *method)
{
  bool result; // w0

  result = 0;
  if ( oldEntity && newEntity )
    return oldEntity->fields.battlePointId == newEntity->fields.battlePointId
        && oldEntity->fields.phase != newEntity->fields.phase;
  return result;
}


bool BattlePointPhaseMaster__TryGetEntity(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o **entity,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3760F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
    byte_4C3760F = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
}


bool BattlePointPhaseMaster__TryGetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  BattlePointPhaseMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__2_0; // x22
  Il2CppObject *v14; // x23
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattlePointPhaseEntity_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  bool v36; // w21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C3760A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
    sub_1C32C20(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__);
    sub_1C32C20(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4C3760A = 1;
  }
  *entity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)entity, 0, value, (const MethodInfo *)entity);
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, v9);
  v11 = BattlePointPhaseMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v11 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v11->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v14, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, 0);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v18 )
    sub_1C32E7C(0);
  klass = v18->klass;
  v20 = v18;
  v21 = *(unsigned __int16 *)&v18->klass->_2.rank;
  if ( *(_WORD *)&v18->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_1C83438(v18, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v24 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_21:
      v28 = sub_1C83438(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_1C83438(v24, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0);
    }
    v33 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    if ( !v33 )
      sub_1C32E7C(0);
    if ( v33->fields.value <= value )
    {
      *entity = v33;
      sub_1C32BC4((CGThumbnailListItem_o *)entity, (int32_t)v33, v34, v35);
      v36 = 1;
      goto LABEL_34;
    }
  }
  v36 = 0;
LABEL_34:
  v37 = *(_QWORD *)v24;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_38;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_38:
    v40 = sub_1C83438(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
  return v36;
}


void BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37610 & 1) == 0 )
  {
    sub_1C32C20(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4C37610 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattlePointPhaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattlePointPhaseMaster___c___ctor(BattlePointPhaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattlePointPhaseMaster___c___GetMaxPhaseValue_b__3_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.value;
}


int32_t BattlePointPhaseMaster___c___GetMaxPhase_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.phase;
}


int32_t BattlePointPhaseMaster___c___TryGetEntityByValue_b__2_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.value;
}


void BattlePointPhaseMaster___c__DisplayClass1_0___ctor(
        BattlePointPhaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePointPhaseMaster___c__DisplayClass1_0___GetEntityList_b__0(
        BattlePointPhaseMaster___c__DisplayClass1_0_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.battlePointId == this->fields.battlePointId;
}