void __fastcall BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__, method);
    byte_49FC0C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    505,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
}


int32_t __fastcall BattlePointPhaseMaster__GetEffectNum(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o *entity,
        int32_t changeValue,
        int32_t effectNumPerPhase,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  int v9; // w8
  BattlePointPhaseEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  entitya = 0LL;
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
    sub_1B64324(v8);
  v9 = (entitya->fields.value - entity->fields.value) / effectNumPerPhase;
  if ( v9 >= 1 )
    return changeValue / v9;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
BattlePointPhaseEntity_o *__fastcall BattlePointPhaseMaster__GetEntity(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC0C4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__,
      *(_QWORD *)&battlePointId);
    byte_49FC0C4 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
}


BattlePointPhaseEntity_o *__fastcall BattlePointPhaseMaster__GetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, value, &entity, v4);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattlePointPhaseEntity__o *__fastcall BattlePointPhaseMaster__GetEntityList(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_49FC0BF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___, v6);
    sub_1B640C8(&System_Func_BattlePointPhaseEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__, v8);
    sub_1B640C8(&BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_49FC0BF = 1;
  }
  v10 = sub_1B64314(BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&battlePointId, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_DWORD *)(v10 + 16) = battlePointId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattlePointPhaseEntity__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v16,
                                                                        (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattlePointPhaseMaster__GetMaxPhase(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  BattlePointPhaseMaster___c_c *v13; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v15; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FC0C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__, v6);
    sub_1B640C8(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, v7);
    sub_1B640C8(&BattlePointPhaseMaster___c_TypeInfo, v8);
    byte_49FC0C2 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1B64324(0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v13 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v13 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v13->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattlePointPhaseEntity__int__TypeInfo, v10, v11);
    System_Func_object__int____ctor(_9__4_0, v15, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v17, v18);
  }
  return System_Linq_Enumerable__Max_object_(
           v12,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattlePointPhaseMaster__GetMaxPhaseValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  BattlePointPhaseMaster___c_c *v13; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v15; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FC0C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__, v6);
    sub_1B640C8(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, v7);
    sub_1B640C8(&BattlePointPhaseMaster___c_TypeInfo, v8);
    byte_49FC0C1 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1B64324(0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v13 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v13 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v13->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattlePointPhaseEntity__int__TypeInfo, v10, v11);
    System_Func_object__int____ctor(_9__3_0, v15, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v17, v18);
  }
  return System_Linq_Enumerable__Max_object_(
           v12,
           (System_Func_TSource__int__o *)_9__3_0,
           (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


bool __fastcall BattlePointPhaseMaster__IsEffectIdChanged(
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

  entity = 0LL;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, oldValue, &entity, method);
  v8 = entity;
  entity = 0LL;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, newValue, &entity, v9);
  result = 0;
  if ( v8 && entity )
    return v8->fields.battlePointId == entity->fields.battlePointId && v8->fields.effectId != entity->fields.effectId;
  return result;
}


bool __fastcall BattlePointPhaseMaster__IsEffectIdChanged_38651312(
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


bool __fastcall BattlePointPhaseMaster__IsPhaseChanged(
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

  entity = 0LL;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, oldValue, &entity, method);
  v8 = entity;
  entity = 0LL;
  BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, newValue, &entity, v9);
  result = 0;
  if ( v8 && entity )
    return v8->fields.battlePointId == entity->fields.battlePointId && v8->fields.phase != entity->fields.phase;
  return result;
}


bool __fastcall BattlePointPhaseMaster__IsPhaseChanged_38651120(
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


bool __fastcall BattlePointPhaseMaster__TryGetEntity(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o **entity,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC0C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__, entity);
    byte_49FC0C5 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePointPhaseMaster__TryGetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BattlePointPhaseMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__int__o *_9__2_0; // x22
  Il2CppObject *v23; // x23
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x19
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v33; // x19
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  BattlePointPhaseEntity_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  bool v45; // w21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0

  if ( (byte_49FC0C0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___,
      *(_QWORD *)&battlePointId);
    sub_1B640C8(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, v14);
    sub_1B640C8(&BattlePointPhaseMaster___c_TypeInfo, v15);
    byte_49FC0C0 = 1;
  }
  *entity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)entity, 0, value, (int32_t)entity);
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, v16);
  v20 = BattlePointPhaseMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v20 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v20->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattlePointPhaseEntity__int__TypeInfo, v18, v19);
    System_Func_object__int____ctor(_9__2_0, v23, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v27 )
    sub_1B64324(0LL);
  klass = v27->klass;
  v29 = v27;
  v30 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(v27, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_21;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_21:
      v37 = sub_1BB60A8(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_28;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_28:
      v41 = sub_1BB60A8(v33, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0LL);
    }
    v42 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1B64324(0LL);
    if ( v42->fields.value <= value )
    {
      *entity = v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)entity, (int32_t)v42, v43, v44);
      v45 = 1;
      goto LABEL_34;
    }
  }
  v45 = 0;
LABEL_34:
  v46 = *(_QWORD *)v33;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_38;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_38:
    v49 = sub_1BB60A8(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v33, *(_QWORD *)(v49 + 8));
  return v45;
}


void __fastcall BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC0C6 & 1) == 0 )
  {
    sub_1B640C8(&BattlePointPhaseMaster___c_TypeInfo, v1);
    byte_49FC0C6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattlePointPhaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall BattlePointPhaseMaster___c___ctor(BattlePointPhaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattlePointPhaseMaster___c___GetMaxPhaseValue_b__3_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B64324(this);
  return e->fields.value;
}


int32_t __fastcall BattlePointPhaseMaster___c___GetMaxPhase_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B64324(this);
  return e->fields.phase;
}


int32_t __fastcall BattlePointPhaseMaster___c___TryGetEntityByValue_b__2_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B64324(this);
  return e->fields.value;
}


void __fastcall BattlePointPhaseMaster___c__DisplayClass1_0___ctor(
        BattlePointPhaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePointPhaseMaster___c__DisplayClass1_0___GetEntityList_b__0(
        BattlePointPhaseMaster___c__DisplayClass1_0_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B64324(this);
  return e->fields.battlePointId == this->fields.battlePointId;
}