void TreasureDeviceSequenceWeightMaster___ctor(TreasureDeviceSequenceWeightMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
    byte_59393F9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    462,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
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

  if ( (byte_59393FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
    byte_59393FA = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
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
  __int64 v15; // x1
  const MethodInfo_3EE13C0 *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x23
  System_Func_object__bool__o *v18; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  TreasureDeviceSequenceWeightMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v25; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x23
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v37; // w10
  int32_t v38; // w11
  int32_t npChargeStage; // w12
  int32_t playerGenderType; // w13
  int32_t v41; // w14
  bool v43; // w11
  _BOOL4 v45; // w12
  _BOOL4 v47; // w13
  bool v50; // zf

  if ( (byte_59393F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_21FFC50(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_21FFC50(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__);
    sub_21FFC50(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__);
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_59393F7 = 1;
  }
  v13 = sub_21FFEBC(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_48;
  v16 = (const MethodInfo_3EE13C0 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__;
  *(_DWORD *)(v13 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   v16);
  v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          Entitys,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v21 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v22 = v19;
  if ( !*(&TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo, v20);
    v21 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__3_1 = (System_Func_object__int__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v25,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0);
    v26 = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    v26->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__3_1, (int32_t)_9__3_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v34 = System_Linq_Enumerable__ToArray_object_(
          v33,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v34 )
      goto LABEL_48;
    max_length = v34->max_length;
    if ( max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( max_length == v37 )
          sub_21FFED4(result);
        result = (TreasureDeviceSequenceWeightEntity_o *)v34->m_Items[v37];
        if ( !result )
          break;
        v38 = result->fields.limitCount;
        npChargeStage = result->fields.npChargeStage;
        playerGenderType = result->fields.playerGenderType;
        v41 = result->fields.patternId;
        v43 = v38 == limitCount || v38 == -1;
        v45 = npChargeStage == npChargeState || npChargeStage == -1;
        v47 = playerGenderType == genderType || playerGenderType == -1;
        v50 = v41 != -1 && v41 != patternId || !v47 || !v45;
        if ( !v50 && v43 )
          return result;
        if ( (max_length & ~(max_length >> 31)) == ++v37 )
          return 0;
      }
LABEL_48:
      sub_21FFECC(result, v15);
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
  __int64 v7; // x1
  const MethodInfo_3EE13C0 *v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  TreasureDeviceSequenceWeightMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v17; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x19
  Il2CppObject *v28; // x8

  if ( (byte_59393F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_21FFC50(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_21FFC50(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__);
    sub_21FFC50(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__);
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_59393F8 = 1;
  }
  v5 = sub_21FFEBC(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v8 = (const MethodInfo_3EE13C0 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__;
  *(_DWORD *)(v5 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   v8);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          Entitys,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v13 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v14 = v11;
  if ( !*(&TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo, v12);
    v13 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__4_1 = (System_Func_object__int__o *)static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v17,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0);
    v18 = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    v18->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__4_1, (int32_t)_9__4_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v26 = System_Linq_Enumerable__ToArray_object_(
          v25,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v26, 0);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v26 )
    goto LABEL_16;
  if ( !LODWORD(v26->max_length) )
    sub_21FFED4(IsNullOrEmpty);
  v28 = v26->m_Items[0];
  if ( !v28 )
LABEL_16:
    sub_21FFECC(IsNullOrEmpty, v7);
  return HIDWORD(v28[3].monitor);
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

  if ( (byte_59393FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
    byte_59393FB = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}


void TreasureDeviceSequenceWeightMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59393FC & 1) == 0 )
  {
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_59393FC = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return e->fields.priority;
}


int32_t TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}