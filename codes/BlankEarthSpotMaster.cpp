void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FC0F4 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_49FC0F4 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BlankEarthSpotMaster_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_49FC0F3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_49FC0EC & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_49FC0EC = 1;
  }
  v4 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v4 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v4->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC0F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_49FC0F0 = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v3; // x0

  if ( (byte_49FC0EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_49FC0EE = 1;
  }
  v3 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_49FC0EF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_1B640C8(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_1B640C8(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__, v7);
    sub_1B640C8(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, v8);
    byte_49FC0EF = 1;
  }
  v9 = sub_1B64314(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&mapId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_DWORD *)(v9 + 16) = mapId;
  v12 = BlankEarthSpotMaster__EnumerateOwns(this, v11);
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BlankEarthSpotEntity__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v16,
                                         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x20

  if ( (byte_49FC0F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds);
    sub_1B640C8(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__, v6);
    sub_1B640C8(&BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, v7);
    byte_49FC0F1 = 1;
  }
  v8 = sub_1B64314(BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, targetIds, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = targetIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)targetIds, v10, v11);
  if ( !*(_QWORD *)(v8 + 16) )
    return 0;
  v13 = BlankEarthSpotMaster__EnumerateOwns(this, v12);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BlankEarthSpotEntity__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48531816(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC0F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    byte_49FC0F2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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
  __int64 v14; // x1
  __int64 v15; // x2
  BlankEarthSpotMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__int__o *_9__2_0; // x21
  Il2CppObject *v19; // x22
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FC0ED & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_1B640C8(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_1B640C8(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, v7);
    sub_1B640C8(&BlankEarthSpotMaster___c_TypeInfo, v8);
    byte_49FC0ED = 1;
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
    (const MethodInfo_3364040 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v11 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v13 = BlankEarthSpotMaster__EnumerateOwns(this, v12);
  v16 = BlankEarthSpotMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v16 = BlankEarthSpotMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v16->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BlankEarthSpotMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BlankEarthSpotEntity__int__TypeInfo, v14, v15);
    System_Func_object__int____ctor(_9__2_0, v19, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0LL);
    static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v21, v22);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v17,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v11 )
LABEL_14:
    sub_1B64324(targetMapIdHashSet);
  System_Collections_Generic_HashSet_int___UnionWith(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC0F5 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_49FC0F5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BlankEarthSpotMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall BlankEarthSpotMaster___c__DisplayClass6_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotMaster___c__DisplayClass6_0___HasAnyIds_b__0(
        BlankEarthSpotMaster___c__DisplayClass6_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  BlankEarthSpotMaster___c__DisplayClass6_0_o *v4; // x20

  v4 = this;
  if ( (byte_49FC0F6 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)sub_1B640C8(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_49FC0F6 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)v4->fields.targetIds) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}