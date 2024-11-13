void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_HashSet_int__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15ECE & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v6, v7);
    byte_4B15ECE = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BlankEarthSpotMaster_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15ECD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method, v2);
    byte_4B15ECD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BlankEarthSpotMaster_c *v6; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4B15EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotMaster_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v4, v5);
    byte_4B15EC6 = 1;
  }
  v6 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method);
    v6 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v6->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15ECA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method, v2);
    byte_4B15ECA = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v4; // x0

  if ( (byte_4B15EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method, v2);
    byte_4B15EC8 = 1;
  }
  v4 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
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
  __int64 v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4B15EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__, v10, v11);
    sub_1BCA7E0(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, v12, v13);
    byte_4B15EC9 = 1;
  }
  v14 = sub_1BCAA2C(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&mapId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = mapId;
  v17 = BlankEarthSpotMaster__EnumerateOwns(this, v16);
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BlankEarthSpotEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v22,
                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4B15ECB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds, method);
    sub_1BCA7E0(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__, v8, v9);
    sub_1BCA7E0(&BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, v10, v11);
    byte_4B15ECB = 1;
  }
  v12 = sub_1BCAA2C(BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, targetIds, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = targetIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)targetIds, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v12 + 16) )
    return 0;
  v22 = BlankEarthSpotMaster__EnumerateOwns(this, v21);
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BlankEarthSpotEntity__bool__TypeInfo, v23, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49415960(
           (System_Collections_Generic_IEnumerable_TSource__o *)v22,
           (System_Func_TSource__bool__o *)v26,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15ECC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6, v7);
    byte_4B15ECC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
}


bool __fastcall BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  BlankEarthSpotMaster_c *v16; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v18; // x19
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  BlankEarthSpotMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__int__o *_9__2_0; // x21
  Il2CppObject *v27; // x22
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B15EC7 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotMaster_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v4, v5);
    sub_1BCA7E0(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v10, v11);
    sub_1BCA7E0(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, v12, v13);
    sub_1BCA7E0(&BlankEarthSpotMaster___c_TypeInfo, v14, v15);
    byte_4B15EC7 = 1;
  }
  v16 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method);
    v16 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v16->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_14;
  System_Collections_Generic_HashSet_int___Clear(
    targetMapIdHashSet,
    (const MethodInfo_3455238 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v18 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v20 = BlankEarthSpotMaster__EnumerateOwns(this, v19);
  v24 = BlankEarthSpotMaster___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo, v21);
    v24 = BlankEarthSpotMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v24->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = BlankEarthSpotMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BlankEarthSpotEntity__int__TypeInfo, v21, v22, v23);
    System_Func_object__int____ctor(_9__2_0, v27, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0LL);
    static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v29, v30, v31, v32, v33, v34);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v25,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v18 )
LABEL_14:
    sub_1BCAA3C(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15ECF & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotMaster___c_TypeInfo, v1, v2);
    byte_4B15ECF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BlankEarthSpotMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B15ED0 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)sub_1BCA7E0(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x,
                                                            method);
    byte_4B15ED0 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)v4->fields.targetIds) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}