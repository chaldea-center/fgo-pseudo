void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_HashSet_int__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E861E & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotMaster_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8, v9);
    byte_42E861E = 1;
  }
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E861D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E861D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    18,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BlankEarthSpotMaster_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_42E8617 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotMaster_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v5, v6, v7);
    byte_42E8617 = 1;
  }
  v8 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v8 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v8->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E861B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___, (_DWORD)method, v2, v3);
    byte_42E861B = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_42E8619 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, (_DWORD)method, v2, v3);
    byte_42E8619 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v5,
                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BlankEarthSpotMaster___c__DisplayClass4_0_o *v21; // x21
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_42E861A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___, mapId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__, v15, v16, v17);
    sub_B5D5C4(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo, v18, v19, v20);
    byte_42E861A = 1;
  }
  v21 = (BlankEarthSpotMaster___c__DisplayClass4_0_o *)sub_B5D694(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass4_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.mapId = mapId;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v23);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v26,
                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_42E861C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, (_DWORD)targetIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__, v12, v13, v14);
    sub_B5D5C4(&BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo, v15, v16, v17);
    byte_42E861C = 1;
  }
  v18 = sub_B5D694(BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass6_0___ctor((BlankEarthSpotMaster___c__DisplayClass6_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = targetIds;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)targetIds, v21, v22, v23, v24, v25, v26);
  if ( !*(_QWORD *)(v18 + 16) )
    return 0;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v27);
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v28,
           (System_Func_TSource__bool__o *)v29,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BlankEarthSpotMaster_c *v26; // x0
  System_Collections_Generic_IEnumerable_TResult__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v28; // x19
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  BlankEarthSpotMaster___c_c *v31; // x8
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x21
  Il2CppObject *v34; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42E8618 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotMaster_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotEntity__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BlankEarthSpotEntity__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17, v18, v19);
    sub_B5D5C4(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__, v20, v21, v22);
    sub_B5D5C4(&BlankEarthSpotMaster___c_TypeInfo, v23, v24, v25);
    byte_42E8618 = 1;
  }
  v26 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v26 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = (System_Collections_Generic_IEnumerable_TResult__o *)v26->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_17;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)targetMapIdHashSet,
    (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v28 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v29);
  v31 = BlankEarthSpotMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v31 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v34,
      Method_BlankEarthSpotMaster___c__preProcess_b__2_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    v35 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v35->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  targetMapIdHashSet = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                         v30,
                         (System_Func_TSource__TResult__o *)_9__2_0,
                         (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v28 )
LABEL_17:
    sub_B5D69C(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v28,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E1B & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5E1B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BlankEarthSpotMaster___c__DisplayClass6_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E5E1C & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)sub_B5D5C4(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            (_DWORD)x,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E5E1C = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)v5->fields.targetIds) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}