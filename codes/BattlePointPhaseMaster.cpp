void __fastcall BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE07 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
    byte_4A5AE07 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    505,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
}


int32_t __fastcall BattlePointPhaseMaster__GetEffectNum(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o *entity,
        int32_t changeValue,
        int32_t effectNumPerPhase,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int v10; // w8
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
    sub_1B8880C(v8, v9);
  v10 = (entitya->fields.value - entity->fields.value) / effectNumPerPhase;
  if ( v10 >= 1 )
    return changeValue / v10;
  else
    return 0;
}


BattlePointPhaseEntity_o *__fastcall BattlePointPhaseMaster__GetEntity(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AE08 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
    byte_4A5AE08 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
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


System_Collections_Generic_List_BattlePointPhaseEntity__o *__fastcall BattlePointPhaseMaster__GetEntityList(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5AE03 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
    sub_1B885B0(&System_Func_BattlePointPhaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__);
    sub_1B885B0(&BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5AE03 = 1;
  }
  v5 = sub_1B887FC(BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = battlePointId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePointPhaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v10,
                                                                        (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
}


int32_t __fastcall BattlePointPhaseMaster__GetMaxPhase(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  BattlePointPhaseMaster___c_c *v8; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v10; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5AE06 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1B885B0(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1B885B0(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__);
    sub_1B885B0(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4A5AE06 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1B8880C(0LL, v6);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v8 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v8 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v8->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v10, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v12, v13);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_2EA8AE0 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


int32_t __fastcall BattlePointPhaseMaster__GetMaxPhaseValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  BattlePointPhaseMaster___c_c *v8; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5AE05 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1B885B0(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1B885B0(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__);
    sub_1B885B0(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4A5AE05 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1B8880C(0LL, v6);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v8 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v8 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v8->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v10, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__3_0,
           (const MethodInfo_2EA8AE0 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
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


bool __fastcall BattlePointPhaseMaster__IsEffectIdChanged_38969004(
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


bool __fastcall BattlePointPhaseMaster__IsPhaseChanged_38968812(
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

  if ( (byte_4A5AE09 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
    byte_4A5AE09 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
}


bool __fastcall BattlePointPhaseMaster__TryGetEntityByValue(
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
  int32_t v17; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x19
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  BattlePointPhaseEntity_o *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  bool v39; // w21
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4A5AE04 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
    sub_1B885B0(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__);
    sub_1B885B0(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4A5AE04 = 1;
  }
  *entity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entity, 0, value, (int32_t)entity);
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
    _9__2_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v14, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v18 )
    sub_1B8880C(0LL, v19);
  klass = v18->klass;
  v21 = v18;
  v22 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v18, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_1B8880C(0LL, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_21;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_21:
      v30 = sub_1BDA590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_28:
      v34 = sub_1BDA590(v26, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0LL);
    }
    v35 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_1B8880C(0LL, v36);
    if ( v35->fields.value <= value )
    {
      *entity = v35;
      sub_1B88554((ServantStatusBattleListViewItem_o *)entity, (int32_t)v35, v37, v38);
      v39 = 1;
      goto LABEL_34;
    }
  }
  v39 = 0;
LABEL_34:
  v40 = *(_QWORD *)v26;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_38;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_38:
    v43 = sub_1BDA590(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
  return v39;
}


void __fastcall BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AE0A & 1) == 0 )
  {
    sub_1B885B0(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4A5AE0A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattlePointPhaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return e->fields.value;
}


int32_t __fastcall BattlePointPhaseMaster___c___GetMaxPhase_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.phase;
}


int32_t __fastcall BattlePointPhaseMaster___c___TryGetEntityByValue_b__2_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return e->fields.battlePointId == this->fields.battlePointId;
}