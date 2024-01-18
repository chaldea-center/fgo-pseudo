void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187D84 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v2);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4187D84 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D7D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_4187D7D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    18,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_4187D7E & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_4187D7E = 1;
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
    sub_B2C434(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187D82 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_4187D82 = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4187D80 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_4187D80 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v3,
                                         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4187D81 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v5);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v6);
    sub_B2C35C(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v7);
    sub_B2C35C(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__, v8);
    sub_B2C35C(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_4187D81 = 1;
  }
  v10 = (BlankEarthSpotMaster___c__DisplayClass5_0_o *)sub_B2C42C(BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass5_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.mapId = mapId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v12);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v15,
                                         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20

  if ( (byte_4187D83 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__, v7);
    sub_B2C35C(&BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, v8);
    byte_4187D83 = 1;
  }
  v9 = sub_B2C42C(BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass7_0___ctor((BlankEarthSpotMaster___c__DisplayClass7_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = targetIds;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)targetIds, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v9 + 16) )
    return 0;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v18);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v19,
           (System_Func_TSource__bool__o *)v20,
           (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
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
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  BlankEarthSpotMaster___c_c *v15; // x8
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v18; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4187D7F & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotEntity__int___ctor__, v4);
    sub_B2C35C(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_B2C35C(&Method_BlankEarthSpotMaster___c__preProcess_b__3_0__, v8);
    sub_B2C35C(&BlankEarthSpotMaster___c_TypeInfo, v9);
    byte_4187D7F = 1;
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
    (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v12 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v13);
  v15 = BlankEarthSpotMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v15 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v18,
      Method_BlankEarthSpotMaster___c__preProcess_b__3_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    v19 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v19->__9__3_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  targetMapIdHashSet = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                         v14,
                         (System_Func_TSource__TResult__o *)_9__3_0,
                         (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v12 )
LABEL_17:
    sub_B2C434(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184E93 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_4184E93 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_4184E94 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)sub_B2C35C(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4184E94 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass7_0_o *)v4->fields.targetIds) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}