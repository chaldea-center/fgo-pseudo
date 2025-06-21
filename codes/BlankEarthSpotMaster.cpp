void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1C1D0 & 1) == 0 )
  {
    sub_1BCAFF8(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B1C1D0 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)BlankEarthSpotMaster_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C1CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_4B1C1CF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4B1C1C7 & 1) == 0 )
  {
    sub_1BCAFF8(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_4B1C1C7 = 1;
  }
  v4 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v4 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v4->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_1BCB254(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C1CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_4B1C1CC = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v3; // x0

  if ( (byte_4B1C1C9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_4B1C1C9 = 1;
  }
  v3 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                         (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v12; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B1C1CA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_1BCAFF8(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__, v7);
    sub_1BCAFF8(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, v8);
    byte_4B1C1CA = 1;
  }
  v9 = sub_1BCB244(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_DWORD *)(v9 + 16) = mapId;
  v12 = BlankEarthSpotMaster__EnumerateOwns(this, v11);
  v13 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v14,
                                         (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByWarId(
        BlankEarthSpotMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v12; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B1C1CB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_1BCAFF8(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__, v7);
    sub_1BCAFF8(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo, v8);
    byte_4B1C1CB = 1;
  }
  v9 = sub_1BCB244(BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_DWORD *)(v9 + 16) = warId;
  v12 = BlankEarthSpotMaster__EnumerateOwns(this, v11);
  v13 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v14,
                                         (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v14; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4B1C1CD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity____76954600, targetIds);
    sub_1BCAFF8(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__, v6);
    sub_1BCAFF8(&BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, v7);
    byte_4B1C1CD = 1;
  }
  v8 = sub_1BCB244(BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = targetIds;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)targetIds, v11, v12);
  if ( !*(_QWORD *)(v8 + 16) )
    return 0;
  v14 = BlankEarthSpotMaster__EnumerateOwns(this, v13);
  v15 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50496752(
           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_30284F0 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity____76954600);
}


bool __fastcall BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C1CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    byte_4B1C1CE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v6);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_32C7E4C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
}


bool __fastcall BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BlankEarthSpotMaster_c *v9; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v11; // x19
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v13; // x0
  BlankEarthSpotMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__int__o *_9__2_0; // x21
  Il2CppObject *v17; // x22
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B1C1C8 & 1) == 0 )
  {
    sub_1BCAFF8(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_1BCAFF8(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_1BCAFF8(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, v7);
    sub_1BCAFF8(&BlankEarthSpotMaster___c_TypeInfo, v8);
    byte_4B1C1C8 = 1;
  }
  v9 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v9 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v9->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_14;
  System_Collections_Generic_HashSet_int___Clear(
    targetMapIdHashSet,
    (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v11 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v13 = BlankEarthSpotMaster__EnumerateOwns(this, v12);
  v14 = BlankEarthSpotMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v14 = BlankEarthSpotMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v14->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BlankEarthSpotMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v17, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0LL);
    static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v19, v20);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v15,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v11 )
LABEL_14:
    sub_1BCB254(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_3571E2C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C1D1 & 1) == 0 )
  {
    sub_1BCAFF8(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_4B1C1D1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BlankEarthSpotMaster___c___ctor(BlankEarthSpotMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotMaster___c___preProcess_b__2_0(
        BlankEarthSpotMaster___c_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.mapId;
}


void __fastcall BlankEarthSpotMaster___c__DisplayClass4_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotMaster___c__DisplayClass4_0___GetByMapId_b__0(
        BlankEarthSpotMaster___c__DisplayClass4_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall BlankEarthSpotMaster___c__DisplayClass5_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotMaster___c__DisplayClass5_0___GetByWarId_b__0(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall BlankEarthSpotMaster___c__DisplayClass7_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotMaster___c__DisplayClass7_0___HasAnyIds_b__0(
        BlankEarthSpotMaster___c__DisplayClass7_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  BlankEarthSpotMaster___c__DisplayClass7_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1C1D2 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4B1C1D2 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)v4->fields.targetIds) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}