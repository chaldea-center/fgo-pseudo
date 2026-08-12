void BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59704D4 & 1) == 0 )
  {
    sub_2213A60(&BlankEarthSpotMaster_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_59704D4 = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BlankEarthSpotMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59704D3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
    byte_59704D3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_59704CC & 1) == 0 )
  {
    sub_2213A60(&BlankEarthSpotMaster_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59704CC = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( !*(&BlankEarthSpotMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_2213CDC(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_59704D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
    byte_59704D1 = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *BlankEarthSpotMaster__GetAll(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v3; // x0

  if ( (byte_59704CE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    byte_59704CE = 1;
  }
  v3 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_59704CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
    sub_2213A60(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_2213A60(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__);
    sub_2213A60(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
    byte_59704CF = 1;
  }
  v5 = sub_2213CCC(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  v8 = BlankEarthSpotMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v10,
                                         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *BlankEarthSpotMaster__GetByWarId(
        BlankEarthSpotMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_59704D0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
    sub_2213A60(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_2213A60(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__);
    sub_2213A60(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
    byte_59704D0 = 1;
  }
  v5 = sub_2213CCC(BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  v8 = BlankEarthSpotMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v10,
                                         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59704D2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_59704D2 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
}


bool BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v7; // x0
  __int64 v8; // x1
  BlankEarthSpotMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__2_0; // x21
  Il2CppObject *v13; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59704CD & 1) == 0 )
  {
    sub_2213A60(&BlankEarthSpotMaster_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
    sub_2213A60(&System_Func_BlankEarthSpotEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__);
    sub_2213A60(&BlankEarthSpotMaster___c_TypeInfo);
    byte_59704CD = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( !*(&BlankEarthSpotMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_14;
  System_Collections_Generic_HashSet_int___Clear(
    targetMapIdHashSet,
    (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v5 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v7 = BlankEarthSpotMaster__EnumerateOwns(this, v6);
  v9 = BlankEarthSpotMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !*(&BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo, v8);
    v9 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v13, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0);
    v14 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v14->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__2_0, (int32_t)_9__2_0, v15, v16, v17, v18, v19, v20);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v10,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v5 )
LABEL_14:
    sub_2213CDC(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59704D5 & 1) == 0 )
  {
    sub_2213A60(&BlankEarthSpotMaster___c_TypeInfo);
    byte_59704D5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthSpotMaster___c___ctor(BlankEarthSpotMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthSpotMaster___c___preProcess_b__2_0(
        BlankEarthSpotMaster___c_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapId;
}


void BlankEarthSpotMaster___c__DisplayClass4_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotMaster___c__DisplayClass4_0___GetByMapId_b__0(
        BlankEarthSpotMaster___c__DisplayClass4_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void BlankEarthSpotMaster___c__DisplayClass5_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotMaster___c__DisplayClass5_0___GetByWarId_b__0(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.warId == this->fields.warId;
}