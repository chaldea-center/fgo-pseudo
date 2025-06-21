void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1D1BF & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__,
      method);
    byte_4B1D1BF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    460,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1D1C0 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__,
      *(_QWORD *)&treasureDeviceId);
    byte_4B1D1C0 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeState,
        int32_t genderType,
        int32_t patternId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x25
  TreasureDeviceSequenceWeightEntity_o *result; // x0
  _BOOL8 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x23
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x23
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v31; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x23
  __int64 v37; // x2
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v40; // w9
  int32_t v41; // w10

  if ( (byte_4B1D1BD & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__,
      *(_QWORD *)&treasureDeviceId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v15);
    sub_1BCAFF8(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v16);
    sub_1BCAFF8(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v17);
    sub_1BCAFF8(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__, v18);
    sub_1BCAFF8(
      &Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
      v19);
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo, v20);
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v21);
    byte_4B1D1BD = 1;
  }
  v22 = sub_1BCB244(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_23;
  *(_DWORD *)(v22 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_32CBB3C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
  v26 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          Entitys,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v29 = v27;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v28->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v31,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_1, (int32_t)_9__3_1, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          v35,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v36, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !v36 )
      goto LABEL_23;
    max_length = v36->max_length;
    if ( max_length >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( max_length == v40 )
          sub_1BCB25C(result, v24, v37);
        result = (TreasureDeviceSequenceWeightEntity_o *)v36->m_Items[v40];
        if ( !result )
          break;
        v41 = result->fields.limitCount;
        v24 = v41 != -1;
        if ( (v41 == limitCount || !v24)
          && (result->fields.npChargeStage == npChargeState || result->fields.npChargeStage == -1)
          && (result->fields.playerGenderType == genderType || result->fields.playerGenderType == -1)
          && (result->fields.patternId == patternId || result->fields.patternId == -1) )
        {
          return result;
        }
        if ( max_length == ++v40 )
          return 0LL;
      }
LABEL_23:
      sub_1BCB254(result, v24);
    }
    return 0LL;
  }
  return result;
}


TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
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

  v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &entity, treasureDeviceId, limitCount, npChargeStage, v5) )
    return entity;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v16, treasureDeviceId, limitCount, -1, v10) )
    return v16;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v15, treasureDeviceId, -1, npChargeStage, v12) )
    return v15;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v14, treasureDeviceId, -1, -1, v13) )
    return v14;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDeviceSequenceWeightMaster__GetMaxPatternId(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v23; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x19
  __int64 v29; // x2
  Il2CppObject *v31; // x8

  if ( (byte_4B1D1BE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__,
      *(_QWORD *)&treasureDeviceId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v7);
    sub_1BCAFF8(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v9);
    sub_1BCAFF8(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__, v10);
    sub_1BCAFF8(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__, v11);
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo, v12);
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v13);
    byte_4B1D1BE = 1;
  }
  v14 = sub_1BCB244(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_DWORD *)(v14 + 16) = treasureDeviceId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_32CBB3C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys__);
  v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          Entitys,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v21 = v19;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v20->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v23,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v28, 0LL);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v28 )
    goto LABEL_16;
  if ( !v28->max_length )
    sub_1BCB25C(IsNullOrEmpty, v16, v29);
  v31 = v28->m_Items[0];
  if ( !v31 )
LABEL_16:
    sub_1BCB254(IsNullOrEmpty, v16);
  return HIDWORD(v31[3].monitor);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDeviceSequenceWeightMaster__TryGetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        TreasureDeviceSequenceWeightEntity_o **entity,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1D1C1 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__,
      entity);
    byte_4B1D1C1 = 1;
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
           (const MethodInfo_32CC904 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}


void __fastcall TreasureDeviceSequenceWeightMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D1C2 & 1) == 0 )
  {
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v1);
    byte_4B1D1C2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall TreasureDeviceSequenceWeightMaster___c___ctor(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetEntityByDescendingPriority_b__3_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.priority;
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.patternId;
}


void __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___GetEntityByDescendingPriority_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}


void __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___GetMaxPatternId_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}