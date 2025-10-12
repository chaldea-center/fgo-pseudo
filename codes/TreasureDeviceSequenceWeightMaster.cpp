void TreasureDeviceSequenceWeightMaster___ctor(TreasureDeviceSequenceWeightMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C386B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
    byte_4C386B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    460,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *TreasureDeviceSequenceWeightMaster__GetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C386B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
    byte_4C386B7 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_339B2F0 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
}


TreasureDeviceSequenceWeightEntity_o *TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeState,
        int32_t genderType,
        int32_t patternId,
        const MethodInfo *method)
{
  __int64 v13; // x25
  TreasureDeviceSequenceWeightEntity_o *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x23
  System_Func_object__bool__o *v16; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v21; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x23
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v29; // w9

  if ( (byte_4C386B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_1C32C20(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_1C32C20(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__);
    sub_1C32C20(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__);
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4C386B4 = 1;
  }
  v13 = sub_1C32E6C(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_23;
  *(_DWORD *)(v13 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_339A574 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
  v16 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v13,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          Entitys,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v18 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v19 = v17;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v18 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v18->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v21,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_1, (int32_t)_9__3_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v26 = System_Linq_Enumerable__ToArray_object_(
          v25,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v26, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v26 )
      goto LABEL_23;
    max_length = v26->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( max_length == v29 )
          sub_1C32E84(result);
        result = (TreasureDeviceSequenceWeightEntity_o *)v26->m_Items[v29];
        if ( !result )
          break;
        if ( (result->fields.limitCount == limitCount || result->fields.limitCount == -1)
          && (result->fields.npChargeStage == npChargeState || result->fields.npChargeStage == -1)
          && (result->fields.playerGenderType == genderType || result->fields.playerGenderType == -1)
          && (result->fields.patternId == patternId || result->fields.patternId == -1) )
        {
          return result;
        }
        if ( max_length == ++v29 )
          return 0;
      }
LABEL_23:
      sub_1C32E7C(result);
    }
    return 0;
  }
  return result;
}


TreasureDeviceSequenceWeightEntity_o *TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v10; // x5
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x5
  TreasureDeviceSequenceWeightEntity_o *v14; // [xsp+8h] [xbp-48h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v15; // [xsp+10h] [xbp-40h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v16; // [xsp+18h] [xbp-38h] BYREF
  TreasureDeviceSequenceWeightEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  v15 = 0;
  v16 = 0;
  v14 = 0;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &entity, treasureDeviceId, limitCount, npChargeStage, v5) )
    return entity;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v16, treasureDeviceId, limitCount, -1, v10) )
    return v16;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v15, treasureDeviceId, -1, npChargeStage, v12) )
    return v15;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v14, treasureDeviceId, -1, -1, v13) )
    return v14;
  return 0;
}


int32_t TreasureDeviceSequenceWeightMaster__GetMaxPatternId(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsNullOrEmpty; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v13; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x19
  Il2CppObject *v20; // x8

  if ( (byte_4C386B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_1C32C20(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_1C32C20(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__);
    sub_1C32C20(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__);
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4C386B5 = 1;
  }
  v5 = sub_1C32E6C(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_DWORD *)(v5 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_339A574 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         Entitys,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v10 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v11 = v9;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v10 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v10->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v13,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v18 )
    goto LABEL_16;
  if ( !LODWORD(v18->max_length) )
    sub_1C32E84(IsNullOrEmpty);
  v20 = v18->m_Items[0];
  if ( !v20 )
LABEL_16:
    sub_1C32E7C(IsNullOrEmpty);
  return HIDWORD(v20[3].monitor);
}


// local variable allocation has failed, the output may be wrong!
bool TreasureDeviceSequenceWeightMaster__TryGetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        TreasureDeviceSequenceWeightEntity_o **entity,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C386B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
    byte_4C386B8 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}


void TreasureDeviceSequenceWeightMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C386B9 & 1) == 0 )
  {
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4C386B9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TreasureDeviceSequenceWeightMaster___c___ctor(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TreasureDeviceSequenceWeightMaster___c___GetEntityByDescendingPriority_b__3_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.priority;
}


int32_t TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.patternId;
}


void TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___GetEntityByDescendingPriority_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}


void TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___GetMaxPatternId_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}