void BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C4FE & 1) == 0 )
  {
    sub_1C94098(&BlankEarthSpotMaster_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D2C4FE = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BlankEarthSpotMaster_TypeInfo->static_fields,
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
  if ( (byte_4D2C4FD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
    byte_4D2C4FD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_345919C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4D2C4F5 & 1) == 0 )
  {
    sub_1C94098(&BlankEarthSpotMaster_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D2C4F5 = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_1C942F0(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2C4FA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
    byte_4D2C4FA = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *BlankEarthSpotMaster__GetAll(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v3; // x0

  if ( (byte_4D2C4F7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    byte_4D2C4F7 = 1;
  }
  v3 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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

  if ( (byte_4D2C4F8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
    sub_1C94098(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_1C94098(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__);
    sub_1C94098(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
    byte_4D2C4F8 = 1;
  }
  v5 = sub_1C942E4(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  v8 = BlankEarthSpotMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v10,
                                         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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

  if ( (byte_4D2C4F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
    sub_1C94098(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_1C94098(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__);
    sub_1C94098(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
    byte_4D2C4F9 = 1;
  }
  v5 = sub_1C942E4(BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  v8 = BlankEarthSpotMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByWarId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v10,
                                         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v15; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4D2C4FB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity____79084992);
    sub_1C94098(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_1C94098(&Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__);
    sub_1C94098(&BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo);
    byte_4D2C4FB = 1;
  }
  v5 = sub_1C942E4(BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = targetIds;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)targetIds, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 16) )
    return 0;
  v15 = BlankEarthSpotMaster__EnumerateOwns(this, v14);
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__52076056(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_31A9E18 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity____79084992);
}


bool BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C4FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4D2C4FC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v4);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_345B50C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
}


bool BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v7; // x0
  BlankEarthSpotMaster___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__int__o *_9__2_0; // x21
  Il2CppObject *v11; // x22
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2C4F6 & 1) == 0 )
  {
    sub_1C94098(&BlankEarthSpotMaster_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
    sub_1C94098(&System_Func_BlankEarthSpotEntity__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C94098(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__);
    sub_1C94098(&BlankEarthSpotMaster___c_TypeInfo);
    byte_4D2C4F6 = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_14;
  System_Collections_Generic_HashSet_int___Clear(
    targetMapIdHashSet,
    (const MethodInfo_3718A18 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v5 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v7 = BlankEarthSpotMaster__EnumerateOwns(this, v6);
  v8 = BlankEarthSpotMaster___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v8 = BlankEarthSpotMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v8->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BlankEarthSpotMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v11, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0);
    static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v13, v14, v15, v16, v17, v18);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v9,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v5 )
LABEL_14:
    sub_1C942F0(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_3719598 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C4FF & 1) == 0 )
  {
    sub_1C94098(&BlankEarthSpotMaster___c_TypeInfo);
    byte_4D2C4FF = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return x->fields.warId == this->fields.warId;
}


void BlankEarthSpotMaster___c__DisplayClass7_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotMaster___c__DisplayClass7_0___HasAnyIds_b__0(
        BlankEarthSpotMaster___c__DisplayClass7_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  BlankEarthSpotMaster___c__DisplayClass7_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2C500 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D2C500 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)v4->fields.targetIds) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}