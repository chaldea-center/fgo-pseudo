void __fastcall BattlePointPhaseMaster___ctor(BattlePointPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__, method, v2);
    byte_4B15E93 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    505,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string___ctor__);
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
    sub_1BCAA3C(v8, v9);
  v10 = (entitya->fields.value - entity->fields.value) / effectNumPerPhase;
  if ( v10 >= 1 )
    return changeValue / v10;
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

  if ( (byte_4B15E94 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__,
      *(_QWORD *)&battlePointId,
      *(_QWORD *)&phase);
    byte_4B15E94 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return (BattlePointPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__GetEntity__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B15E8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_BattlePointPhaseEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__, v12, v13);
    sub_1BCA7E0(&BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo, v14, v15);
    byte_4B15E8F = 1;
  }
  v16 = sub_1BCAA2C(BattlePointPhaseMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&battlePointId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 16) = battlePointId;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_BattlePointPhaseEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattlePointPhaseEntity__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_BattlePointPhaseMaster___c__DisplayClass1_0__GetEntityList_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattlePointPhaseEntity___);
  return (System_Collections_Generic_List_BattlePointPhaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v24,
                                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattlePointPhaseEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattlePointPhaseMaster__GetMaxPhase(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  BattlePointPhaseMaster___c_c *v18; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v20; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B15E92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, v9, v10);
    sub_1BCA7E0(&BattlePointPhaseMaster___c_TypeInfo, v11, v12);
    byte_4B15E92 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v14);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v18 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v14);
    v18 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v18->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v14);
      v18 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BattlePointPhaseEntity__int__TypeInfo,
                                              v14,
                                              v15,
                                              v16);
    System_Func_object__int____ctor(_9__4_0, v20, Method_BattlePointPhaseMaster___c__GetMaxPhase_b__4_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v22, v23, v24, v25, v26, v27);
  }
  return System_Linq_Enumerable__Max_object_(
           v17,
           (System_Func_TSource__int__o *)_9__4_0,
           (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattlePointPhaseMaster__GetMaxPhaseValue(
        BattlePointPhaseMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  BattlePointPhaseMaster___c_c *v18; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v20; // x21
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B15E91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePointPhaseEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, v9, v10);
    sub_1BCA7E0(&BattlePointPhaseMaster___c_TypeInfo, v11, v12);
    byte_4B15E91 = 1;
  }
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, method);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v14);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( EntityList->fields._size < 1 )
    return 0x7FFFFFFF;
  v18 = BattlePointPhaseMaster___c_TypeInfo;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v14);
    v18 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v18->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v14);
      v18 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BattlePointPhaseEntity__int__TypeInfo,
                                              v14,
                                              v15,
                                              v16);
    System_Func_object__int____ctor(_9__3_0, v20, Method_BattlePointPhaseMaster___c__GetMaxPhaseValue_b__3_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v22, v23, v24, v25, v26, v27);
  }
  return System_Linq_Enumerable__Max_object_(
           v17,
           (System_Func_TSource__int__o *)_9__3_0,
           (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_BattlePointPhaseEntity___);
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


bool __fastcall BattlePointPhaseMaster__IsEffectIdChanged_39688904(
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


bool __fastcall BattlePointPhaseMaster__IsPhaseChanged_39688712(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePointPhaseMaster__TryGetEntity(
        BattlePointPhaseMaster_o *this,
        BattlePointPhaseEntity_o **entity,
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E95 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&battlePointId);
    byte_4B15E95 = 1;
  }
  PK = (Il2CppObject *)BattlePointPhaseEntity__CreatePK(battlePointId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BattlePointPhaseMaster__BattlePointPhaseEntity__string__TryGetEntity__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_BattlePointPhaseEntity__o *EntityList; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BattlePointPhaseMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_object__int__o *_9__2_0; // x22
  Il2CppObject *v34; // x23
  struct BattlePointPhaseMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x19
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x19
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  BattlePointPhaseEntity_o *v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  bool v67; // w21
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4B15E90 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___,
      *(_QWORD *)&battlePointId,
      *(_QWORD *)&value);
    sub_1BCA7E0(&System_Func_BattlePointPhaseEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, v22, v23);
    sub_1BCA7E0(&BattlePointPhaseMaster___c_TypeInfo, v24, v25);
    byte_4B15E90 = 1;
  }
  *entity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)entity,
    0LL,
    *(int64_t *)&value,
    (int32_t)entity,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  EntityList = BattlePointPhaseMaster__GetEntityList(this, battlePointId, v26);
  v31 = BattlePointPhaseMaster___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !BattlePointPhaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointPhaseMaster___c_TypeInfo, v28);
    v31 = BattlePointPhaseMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v31->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v28);
      v31 = BattlePointPhaseMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BattlePointPhaseEntity__int__TypeInfo,
                                              v28,
                                              v29,
                                              v30);
    System_Func_object__int____ctor(_9__2_0, v34, Method_BattlePointPhaseMaster___c__TryGetEntityByValue_b__2_0__, 0LL);
    static_fields = BattlePointPhaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattlePointPhaseEntity__int__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v32,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattlePointPhaseEntity__int___);
  if ( !v42 )
    sub_1BCAA3C(0LL, v43);
  klass = v42->klass;
  v45 = v42;
  v46 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo )
    {
      --v46;
      p_offset += 4;
      if ( !v46 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v42, System_Collections_Generic_IEnumerable_BattlePointPhaseEntity__TypeInfo, 0LL);
  }
  v50 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v45,
          *(_QWORD *)(p_method + 8));
  if ( !v50 )
    sub_1BCAA3C(0LL, v49);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_21;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_21:
      v54 = sub_1C1C7C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v50;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__c **)v57 - 1) != System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_28;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_28:
      v58 = sub_1C1C7C0(v50, System_Collections_Generic_IEnumerator_BattlePointPhaseEntity__TypeInfo, 0LL);
    }
    v59 = (BattlePointPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
    if ( !v59 )
      sub_1BCAA3C(0LL, v60);
    if ( v59->fields.value <= value )
    {
      *entity = v59;
      sub_1BCA784((PartyOrganizationUtility_o *)entity, (int64_t)v59, v61, v62, v63, v64, v65, v66);
      v67 = 1;
      goto LABEL_34;
    }
  }
  v67 = 0;
LABEL_34:
  v68 = *(_QWORD *)v50;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_38;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_38:
    v71 = sub_1C1C7C0(v50, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v50, *(_QWORD *)(v71 + 8));
  return v67;
}


void __fastcall BattlePointPhaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E96 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePointPhaseMaster___c_TypeInfo, v1, v2);
    byte_4B15E96 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattlePointPhaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattlePointPhaseMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointPhaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePointPhaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return e->fields.value;
}


int32_t __fastcall BattlePointPhaseMaster___c___GetMaxPhase_b__4_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.phase;
}


int32_t __fastcall BattlePointPhaseMaster___c___TryGetEntityByValue_b__2_0(
        BattlePointPhaseMaster___c_o *this,
        BattlePointPhaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return e->fields.battlePointId == this->fields.battlePointId;
}