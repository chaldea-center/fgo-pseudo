void __fastcall BlankEarthSpotMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438ADDE & 1) == 0 )
  {
    sub_B775C4(&BlankEarthSpotMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_438ADDE = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BlankEarthSpotMaster___ctor(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438ADDD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
    byte_438ADDD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    18,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int___ctor__);
}


bool __fastcall BlankEarthSpotMaster__ContainsMapId(int32_t mapId, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *targetMapIdHashSet; // x0

  if ( (byte_438ADD7 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthSpotMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_438ADD7 = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    sub_B7769C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           targetMapIdHashSet,
           mapId,
           (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *__fastcall BlankEarthSpotMaster__EnumerateOwns(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438ADDB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
    byte_438ADDB = 1;
  }
  return (System_Collections_Generic_IEnumerable_BlankEarthSpotEntity__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                             (System_Collections_IEnumerable_o *)this->fields.list,
                                                                             (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetAll(
        BlankEarthSpotMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_438ADD9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    byte_438ADD9 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, method);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v3,
                                         (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


BlankEarthSpotEntity_array *__fastcall BlankEarthSpotMaster__GetByMapId(
        BlankEarthSpotMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  BlankEarthSpotMaster___c__DisplayClass4_0_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_438ADDA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
    sub_B775C4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
    sub_B775C4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_B775C4(&Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__);
    sub_B775C4(&BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
    byte_438ADDA = 1;
  }
  v5 = (BlankEarthSpotMaster___c__DisplayClass4_0_o *)sub_B77694(BlankEarthSpotMaster___c__DisplayClass4_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass4_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.mapId = mapId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass4_0__GetByMapId_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotEntity___);
  return (BlankEarthSpotEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v10,
                                         (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__HasAnyIds(
        BlankEarthSpotMaster_o *this,
        System_Collections_Generic_HashSet_int__o *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_438ADDC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_B775C4(&Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
    sub_B775C4(&System_Func_BlankEarthSpotEntity__bool__TypeInfo);
    sub_B775C4(&Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__);
    sub_B775C4(&BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo);
    byte_438ADDC = 1;
  }
  v5 = sub_B77694(BlankEarthSpotMaster___c__DisplayClass6_0_TypeInfo);
  BlankEarthSpotMaster___c__DisplayClass6_0___ctor((BlankEarthSpotMaster___c__DisplayClass6_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = targetIds;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)targetIds, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 16) )
    return 0;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v14);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BlankEarthSpotEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BlankEarthSpotMaster___c__DisplayClass6_0__HasAnyIds_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BlankEarthSpotEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_1D1F698 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
}


bool __fastcall BlankEarthSpotMaster__preProcess(BlankEarthSpotMaster_o *this, const MethodInfo *method)
{
  BlankEarthSpotMaster_c *v3; // x0
  System_Collections_Generic_IEnumerable_TResult__o *targetMapIdHashSet; // x0
  System_Collections_Generic_HashSet_int__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  BlankEarthSpotMaster___c_c *v8; // x8
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x21
  Il2CppObject *v11; // x22
  struct BlankEarthSpotMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438ADD8 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthSpotMaster_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
    sub_B775C4(&Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    sub_B775C4(&System_Func_BlankEarthSpotEntity__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_BlankEarthSpotMaster___c__preProcess_b__2_0__);
    sub_B775C4(&BlankEarthSpotMaster___c_TypeInfo);
    byte_438ADD8 = 1;
  }
  v3 = BlankEarthSpotMaster_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    v3 = BlankEarthSpotMaster_TypeInfo;
  }
  targetMapIdHashSet = (System_Collections_Generic_IEnumerable_TResult__o *)v3->static_fields->targetMapIdHashSet;
  if ( !targetMapIdHashSet )
    goto LABEL_17;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)targetMapIdHashSet,
    (const MethodInfo_2EDC09C *)Method_System_Collections_Generic_HashSet_int__Clear__);
  v5 = BlankEarthSpotMaster_TypeInfo->static_fields->targetMapIdHashSet;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__EnumerateOwns(this, v6);
  v8 = BlankEarthSpotMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster___c_TypeInfo);
    v8 = BlankEarthSpotMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BlankEarthSpotEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v11,
      Method_BlankEarthSpotMaster___c__preProcess_b__2_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_BlankEarthSpotEntity__int___ctor__);
    v12 = BlankEarthSpotMaster___c_TypeInfo->static_fields;
    v12->__9__2_0 = (struct System_Func_BlankEarthSpotEntity__int__o *)_9__2_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  targetMapIdHashSet = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                         v7,
                         (System_Func_TSource__TResult__o *)_9__2_0,
                         (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__int___);
  if ( !v5 )
LABEL_17:
    sub_B7769C(targetMapIdHashSet, method);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)targetMapIdHashSet,
    (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return 1;
}


void __fastcall BlankEarthSpotMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BlankEarthSpotMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388525 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthSpotMaster___c_TypeInfo);
    byte_4388525 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BlankEarthSpotMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BlankEarthSpotMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
  if ( (byte_4388526 & 1) == 0 )
  {
    this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4388526 = 1;
  }
  if ( !x || (this = (BlankEarthSpotMaster___c__DisplayClass6_0_o *)v4->fields.targetIds) == 0LL )
    sub_B7769C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.id,
           (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}