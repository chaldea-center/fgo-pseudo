void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC7773 & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4BC7773 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet = v4;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BlankEarthSpotMaster_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7772 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_4BC7772 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    18,
    (const MethodInfo_3246354 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4BC776B & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_4BC776B = 1;
  }
  v4 = BlankEarthSpotMaster_TypeInfo;
  if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v4 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v4->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_1C1AE30(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_34F01E8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC776F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_4BC776F = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_2FC80C8 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v3; // x0

  if ( (byte_4BC776D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_4BC776D = 1;
  }
  v3 = BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                         (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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

  if ( (byte_4BC776E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_1C1ABD4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__, v7);
    sub_1C1ABD4(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, v8);
    byte_4BC776E = 1;
  }
  v9 = sub_1C1AE20(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C1AE30(v10, v11);
  *(_DWORD *)(v9 + 16) = mapId;
  v12 = BlankEarthSpotMaster__EnumerateOwns(this, v11);
  v13 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         v14,
                                         (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *v18; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4BC7770 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds);
    sub_1C1ABD4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__, v6);
    sub_1C1ABD4(&BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, v7);
    byte_4BC7770 = 1;
  }
  v8 = sub_1C1AE20(BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_QWORD *)(v8 + 16) = targetIds;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)targetIds, v11, v12, v13, v14, v15, v16);
  if ( !*(_QWORD *)(v8 + 16) )
    return 0;
  v18 = BlankEarthSpotMaster__EnumerateOwns(this, v17);
  v19 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49989636(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_2FAC804 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__IsBlankEarthSpot(int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7771 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    byte_4BC7771 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v6);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           spotId,
           (const MethodInfo_32486C4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BC776C & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthSpotMaster_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_1C1ABD4(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int__Clear__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_1C1ABD4(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, v7);
    sub_1C1ABD4(&BlankEarthSpotMaster___c_TypeInfo, v8);
    byte_4BC776C = 1;
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
    (const MethodInfo_34F0188 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    _9__2_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v17, Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, 0LL);
    static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v19, v20, v21, v22, v23, v24);
  }
  targetMapIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v15,
                                                                      (System_Func_TSource__TResult__o *)_9__2_0,
                                                                      (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v11 )
LABEL_14:
    sub_1C1AE30(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_34F0D08 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7774 & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_4BC7774 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarthSpotMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
  if ( (byte_4BC7775 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)sub_1C1ABD4(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4BC7775 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)v4->fields.targetIds) == 0LL )
    sub_1C1AE30(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_34F01E8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}