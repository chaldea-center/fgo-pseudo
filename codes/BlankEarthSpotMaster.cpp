void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FB0B3 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotMaster_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v5);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40FB0B3 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB0AC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, method);
    byte_40FB0AC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    18,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthSpotMaster_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_40FB0AD & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v3);
    byte_40FB0AD = 1;
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
    sub_B170D4();
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB0B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, method);
    byte_40FB0B1 = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_40FB0AF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, method);
    byte_40FB0AF = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v3,
                                         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BlankEarthSpotMaster___c__DisplayClass5_0_o *v12; // x21
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_40FB0B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v7);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__, v10);
    sub_B16FFC(&BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo, v11);
    byte_40FB0B0 = 1;
  }
  v12 = (BlankEarthSpotMaster___c__DisplayClass5_0_o *)sub_B170CC(
                                                         BlankEarthSpotMaster___c__DisplayClass5_0_TypeInfo,
                                                         *(_QWORD *)&mapId,
                                                         method,
                                                         v3,
                                                         v4);
  BlankEarthSpotMaster___c__DisplayClass5_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.mapId = mapId;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v13);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BlankEarthSpotEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BlankEarthSpotMaster___c__DisplayClass5_0__GetByMapId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v14,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v20,
                                         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_40FB0B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, targetIds);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v7);
    sub_B16FFC(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__, v9);
    sub_B16FFC(&BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, v10);
    byte_40FB0B2 = 1;
  }
  v11 = sub_B170CC(BlankEarthSpotMaster___c__DisplayClass7_0_TypeInfo, targetIds, method, v3, v4);
  BlankEarthSpotMaster___c__DisplayClass7_0___ctor((BlankEarthSpotMaster___c__DisplayClass7_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = targetIds;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)targetIds, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v11 + 16) )
    return 0;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v18);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BlankEarthSpotEntity__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotMaster___c__DisplayClass7_0__HasAnyIds_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v19,
           (System_Func_TSource__bool__o *)v24,
           (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
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
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v12; // x19
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  BlankEarthSpotMaster___c_c *v19; // x8
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v22; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_T__o *v30; // x0

  if ( (byte_40FB0AE & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotMaster_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v3);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotEntity__int___ctor__, v4);
    sub_B16FFC(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_B16FFC(&Method_BlankEarthSpotMaster___c__preProcess_b__3_0__, v8);
    sub_B16FFC(&BlankEarthSpotMaster___c_TypeInfo, v9);
    byte_40FB0AE = 1;
  }
  v10 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v10 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v10->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_17;
  System_Collections_Generic_HashSet_int___Clear(
    targetMapIdHashSet,
    (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v12 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v13);
  v19 = BlankEarthSpotMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v19 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BlankEarthSpotEntity__int__TypeInfo,
                                                                                v14,
                                                                                v15,
                                                                                v16,
                                                                                v17);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v22,
      Method_BlankEarthSpotMaster___c__preProcess_b__3_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    v23 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v23->__9__3_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)_9__3_0,
                                                         (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v12 )
LABEL_17:
    sub_B170D4();
  System_Collections_Generic_HashSet_int___UnionWith(
    v12,
    v30,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F708B & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotMaster___c_TypeInfo, v1);
    byte_40F708B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BlankEarthSpotMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_Collections_Generic_HashSet_int__o *targetIds; // x0

  if ( (byte_40F708C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    byte_40F708C = 1;
  }
  if ( !x || (targetIds = this->fields.targetIds) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_HashSet_int___Contains(
           targetIds,
           x->fields.id,
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}