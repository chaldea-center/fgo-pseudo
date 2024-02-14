void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4214BA2 & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v3);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4214BA2 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(System_Collections_Generic_HashSet_int__TypeInfo, v1, v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214B9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_4214B9B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    18,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4214B9C & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_4214B9C = 1;
  }
  v4 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v4 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v4->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_B0D97C(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214BA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_4214BA0 = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4214B9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_4214B9E = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v3,
                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  __int64 v9; // x1
  BlankEarthSpotMaster___c__DisplayClass5_0_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4214B9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_B0D8A4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__, v8);
    sub_B0D8A4(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_4214B9F = 1;
  }
  v10 = (BlankEarthSpotMaster___c__DisplayClass5_0_o *)sub_B0D974(
                                                         BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo,
                                                         *(_QWORD *)&mapId,
                                                         method);
  BlankEarthSpotMaster___c__DisplayClass5_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.mapId = mapId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v12);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BlankEarthSpotEntity__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v13,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v17,
                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4214BA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds);
    sub_B0D8A4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__, v7);
    sub_B0D8A4(&BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, v8);
    byte_4214BA1 = 1;
  }
  v9 = sub_B0D974(BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, targetIds, method);
  BlankEarthSpotMaster___c__DisplayClass7_0___ctor((BlankEarthSpotMaster___c__DisplayClass7_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = targetIds;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)targetIds, v11, v12, v13, v14, v15, v16);
  if ( !*(_QWORD *)(v9 + 16) )
    return 0;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v17);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BlankEarthSpotEntity__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v18,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BlankEarthSpotMaster_c *v10; // x0
  System_Collections_Generic_IEnumerable_TResult__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v12; // x19
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  BlankEarthSpotMaster___c_c *v17; // x8
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v20; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4214B9D & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_B0D8A4(&Method_System_Func_BlankEarthSpotEntity__int___ctor__, v4);
    sub_B0D8A4(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_B0D8A4(&Method_BlankEarthSpotMaster___c__preProcess_b__3_0__, v8);
    sub_B0D8A4(&BlankEarthSpotMaster___c_TypeInfo, v9);
    byte_4214B9D = 1;
  }
  v10 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v10 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = (System_Collections_Generic_IEnumerable_TResult__o *)v10->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_17;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)targetMapIdHashSet,
    (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v12 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v13);
  v17 = BlankEarthSpotMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v17 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BlankEarthSpotEntity__int__TypeInfo,
                                                                                v14,
                                                                                v15);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v20,
      Method_BlankEarthSpotMaster___c__preProcess_b__3_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    v21 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v21->__9__3_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  targetMapIdHashSet = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                         v16,
                         (System_Func_TSource__TResult__o *)_9__3_0,
                         (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v12 )
LABEL_17:
    sub_B0D97C(targetMapIdHashSet);
  System_Collections_Generic_HashSet_int___UnionWith(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211DC2 & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_4211DC2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BlankEarthSpotMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall BlankEarthSpotMaster___c___ctor(BlankEarthSpotMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotMaster___c___preProcess_b__3_0(
        BlankEarthSpotMaster___c_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.mapId;
}


void __fastcall BlankEarthSpotMaster___c__DisplayClass5_0___ctor(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotMaster___c__DisplayClass5_0___GetByMapId_b__0(
        BlankEarthSpotMaster___c__DisplayClass5_0_o *this,
        BlankEarthSpotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.mapId == this->fields.mapId;
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
  if ( (byte_4211DC3 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)sub_B0D8A4(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4211DC3 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)v4->fields.targetIds) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}