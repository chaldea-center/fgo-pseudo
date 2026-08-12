void BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970475 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
    byte_5970475 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
}


int32_t BattlePointPhaseMaster__GetContextValue(
        BattlePointPhaseMaster_o *this,
        int32_t currentValue,
        int32_t effectiveMax,
        bool isAsPercentage,
        const MethodInfo *method)
{
  int32_t result; // w0
  float v6; // s0

  result = currentValue;
  if ( effectiveMax >= 1 && isAsPercentage )
  {
    v6 = (float)((float)currentValue / (float)effectiveMax) * 1000.0;
    if ( v6 == INFINITY )
      return 0x80000000;
    else
      return (int)v6;
  }
  return result;
}


int32_t BattlePointPhaseMaster__GetEffectNum(
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
    sub_2213CDC(v8, v9);
  v10 = (entitya->fields.value - entity->fields.value) / effectNumPerPhase;
  if ( v10 >= 1 )
    return changeValue / v10;
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

  if ( (byte_5970476 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
    byte_5970476 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
}


BattlePointPhaseEntity_o *BattlePointPhaseMaster__GetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

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
  __int64 v7; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_388851C *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_5970471 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
    sub_2213A60(&System_Func_BattlePointPhaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_BattlePointPhaseMaster___c__DisplayClass2_0__GetEntityList_b__0__);
    sub_2213A60(&BattlePointPhaseMaster___c__DisplayClass2_0_TypeInfo);
    byte_5970471 = 1;
  }
  v5 = sub_2213CCC(BattlePointPhaseMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v9 = (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___;
  *(_DWORD *)(v5 + 16) = battlePointId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(list, v9);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattlePointPhaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattlePointPhaseMaster___c__DisplayClass2_0__GetEntityList_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v12,
                                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
}


int32_t BattlePointPhaseMaster__GetMaxPhase(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  BattlePointPhaseMaster___c_c *v8; // x0
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v11; // x21
  struct BattlePointPhaseMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5970474 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_2213A60(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_2213A60(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__5_0__);
    sub_2213A60(&BattlePointPhaseMaster___c_TypeInfo);
    byte_5970474 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_2213CDC(0, v6);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v8 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !*(&BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v6);
    v8 = BattlePointPhaseMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__5_0 = (System_Func_object__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6);
      static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__5_0, v11, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__5_0__, 0);
    v12 = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    v12->__9__5_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__5_0, (int32_t)_9__5_0, v13, v14, v15, v16, v17, v18);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__5_0,
           (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


int32_t BattlePointPhaseMaster__GetMaxPhaseValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  BattlePointPhaseMaster___c_c *v8; // x0
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct BattlePointPhaseMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5970473 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
    sub_2213A60(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__);
    sub_2213A60(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__4_0__);
    sub_2213A60(&BattlePointPhaseMaster___c_TypeInfo);
    byte_5970473 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_2213CDC(0, v6);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v8 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !*(&BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v6);
    v8 = BattlePointPhaseMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6);
      static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v11, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__4_0__, 0);
    v12 = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__4_0, (int32_t)_9__4_0, v13, v14, v15, v16, v17, v18);
  }
  return System_Linq_Enumerable__Max_object_(
           v7,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
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


bool BattlePointPhaseMaster__IsEffectIdChanged_48808148(
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


bool BattlePointPhaseMaster__TryGetEntity(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o **entity,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970477 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
    byte_5970477 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointPhaseMaster__TryGetEntityByContext(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t currentValue,
        int32_t effectiveMax,
        bool isAsPercentage,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  bool v7; // w7
  int v13; // w22
  const MethodInfo *v14; // x4
  float v15; // s0

  v13 = currentValue;
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    *(System_String_o **)&currentValue,
    *(System_String_o **)&effectiveMax,
    isAsPercentage,
    (int32_t)entity,
    (bool)method,
    v7);
  if ( effectiveMax < 1 )
    return 0;
  if ( isAsPercentage )
  {
    v15 = (float)((float)v13 / (float)effectiveMax) * 1000.0;
    if ( v15 == INFINITY )
      v13 = 0x80000000;
    else
      v13 = (int)v15;
  }
  return BattlePointPhaseMaster__TryGetEntityByValue(this, battlePointId, v13, entity, v14);
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointPhaseMaster__TryGetEntityByValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        int32_t value,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v14; // x1
  BattlePointPhaseMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__3_0; // x22
  Il2CppObject *v19; // x23
  struct BattlePointPhaseMaster___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x21
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  BattlePointPhaseEntity_o *v34; // x0
  BattlePointPhaseEntity_o *v35; // x1
  BattlePointPhaseEntity_c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  BattlePointPhaseEntity_c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  bool v50; // w20
  BattlePointPhaseEntity_c *v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  BattlePointPhaseEntity_o *v56; // [xsp+18h] [xbp-48h]

  if ( (byte_5970472 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
    sub_2213A60(&System_Func_BattlePointPhaseEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__3_0__);
    sub_2213A60(&BattlePointPhaseMaster___c_TypeInfo);
    byte_5970472 = 1;
  }
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    *(System_String_o **)&value,
    (System_String_o *)entity,
    (int32_t)method,
    v5,
    v6,
    v7);
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, v12);
  v15 = BattlePointPhaseMaster___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !*(&BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v14);
    v15 = BattlePointPhaseMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattlePointPhaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v19, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__3_0__, 0);
    v20 = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    v20->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__3_0, (int32_t)_9__3_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v16,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v27 )
    sub_2213CDC(0, v28);
  klass = v27->klass;
  v30 = v27;
  v31 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_14;
    }
    v33 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v33 = sub_224BC3C(v27, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0);
  }
  v34 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v33)(
                                      v30,
                                      *(_QWORD *)(v33 + 8));
  v56 = v34;
  while ( 1 )
  {
    if ( !v56 )
      sub_2213CDC(v34, v35);
    v36 = v56->klass;
    v37 = *(unsigned __int16 *)&v56->klass->_2.rank;
    if ( *(_WORD *)&v56->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_22;
      }
      v39 = (__int64)&v36->vtable + 16 * *v38;
    }
    else
    {
LABEL_22:
      v39 = sub_224BC3C(v56, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(BattlePointPhaseEntity_o *, _QWORD))v39)(v56, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = v56->klass;
    v41 = *(unsigned __int16 *)&v56->klass->_2.rank;
    if ( *(_WORD *)&v56->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_29;
      }
      v43 = (__int64)&v40->vtable + 16 * *v42;
    }
    else
    {
LABEL_29:
      v43 = sub_224BC3C(v56, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0);
    }
    v34 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(BattlePointPhaseEntity_o *, _QWORD))v43)(
                                        v56,
                                        *(_QWORD *)(v43 + 8));
    v35 = v34;
    if ( !v34 )
      sub_2213CDC(0, 0);
    if ( v34->fields.value <= value )
    {
      *entity = v34;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v34, v44, v45, v46, v47, v48, v49);
      v50 = 1;
      goto LABEL_35;
    }
  }
  v50 = 0;
LABEL_35:
  v51 = v56->klass;
  v52 = *(unsigned __int16 *)&v56->klass->_2.rank;
  if ( *(_WORD *)&v56->klass->_2.rank )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_39;
    }
    v54 = (__int64)&v51->vtable + 16 * *v53;
  }
  else
  {
LABEL_39:
    v54 = sub_224BC3C(v56, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(BattlePointPhaseEntity_o *, _QWORD))v54)(v56, *(_QWORD *)(v54 + 8));
  return v50;
}


void BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970478 & 1) == 0 )
  {
    sub_2213A60(&BattlePointPhaseMaster___c_TypeInfo);
    byte_5970478 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattlePointPhaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePointPhaseMaster___c___ctor(BattlePointPhaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattlePointPhaseMaster___c___GetMaxPhaseValue_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.value;
}


int32_t BattlePointPhaseMaster___c___GetMaxPhase_b__5_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.phase;
}


int32_t BattlePointPhaseMaster___c___TryGetEntityByValue_b__3_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.value;
}


void BattlePointPhaseMaster___c__DisplayClass2_0___ctor(
        BattlePointPhaseMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePointPhaseMaster___c__DisplayClass2_0___GetEntityList_b__0(
        BattlePointPhaseMaster___c__DisplayClass2_0_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.battlePointId == this->fields.battlePointId;
}