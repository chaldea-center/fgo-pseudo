void __fastcall BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC1CF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
    byte_4BDC1CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    509,
    (const MethodInfo_325E55C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
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
    sub_1C22094(v8, v9);
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

  if ( (byte_4BDC1D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
    byte_4BDC1D0 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
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

  if ( (byte_4BDC1CB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
    sub_1C21E38(&System_Func_BattlePointPhaseEntity__bool__TypeInfo);
    sub_1C21E38(&Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__);
    sub_1C21E38(&BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4BDC1CB = 1;
  }
  v5 = sub_1C22084(BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = battlePointId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattlePointPhaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v10,
                                                                        (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDC1CE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1C21E38(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1C21E38(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__);
    sub_1C21E38(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4BDC1CE = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1C22094(0LL, v6);
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
    _9__4_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v10, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v12, v13, v14, v15, v16, v17);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_2FD7B90 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDC1CD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_1C21E38(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_1C21E38(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__);
    sub_1C21E38(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4BDC1CD = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1C22094(0LL, v6);
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
    _9__3_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v10, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v12, v13, v14, v15, v16, v17);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__3_0,
           (const MethodInfo_2FD7B90 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
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


bool __fastcall BattlePointPhaseMaster__IsEffectIdChanged_40224360(
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


bool __fastcall BattlePointPhaseMaster__IsPhaseChanged_40224168(
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

  if ( (byte_4BDC1D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
    byte_4BDC1D1 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePointPhaseMaster__TryGetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  BattlePointPhaseMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__2_0; // x22
  Il2CppObject *v17; // x23
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x19
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
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
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool v50; // w21
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0

  if ( (byte_4BDC1CC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
    sub_1C21E38(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__);
    sub_1C21E38(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4BDC1CC = 1;
  }
  *entity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)entity,
    0LL,
    *(int64_t *)&value,
    (int32_t)entity,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, v12);
  v14 = BattlePointPhaseMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo);
    v14 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v14->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v17, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__2_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v25 )
    sub_1C22094(0LL, v26);
  klass = v25->klass;
  v28 = v25;
  v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C73E18(v25, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_1C22094(0LL, v32);
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
      v37 = sub_1C73E18(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v41 = sub_1C73E18(v33, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0LL);
    }
    v42 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1C22094(0LL, v43);
    if ( v42->fields.value <= value )
    {
      *entity = v42;
      sub_1C21DDC((PartyOrganizationUtility_o *)entity, (int64_t)v42, v44, v45, v46, v47, v48, v49);
      v50 = 1;
      goto LABEL_34;
    }
  }
  v50 = 0;
LABEL_34:
  v51 = *(_QWORD *)v33;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_38;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_38:
    v54 = sub_1C73E18(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v33, *(_QWORD *)(v54 + 8));
  return v50;
}


void __fastcall BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC1D2 & 1) == 0 )
  {
    sub_1C21E38(&BattlePointPhaseMaster___c_TypeInfo);
    byte_4BDC1D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattlePointPhaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return e->fields.value;
}


int32_t __fastcall BattlePointPhaseMaster___c___GetMaxPhase_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.phase;
}


int32_t __fastcall BattlePointPhaseMaster___c___TryGetEntityByValue_b__2_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return e->fields.battlePointId == this->fields.battlePointId;
}