void __fastcall MapGimmickRandomEffectComponent___ctor(
        MapGimmickRandomEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


MapGimmickRandomEffectElementComponent_o *__fastcall MapGimmickRandomEffectComponent__GetRandomElement(
        MapGimmickRandomEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v4; // x0
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  MapGimmickRandomEffectComponent___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *v18; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x20
  Il2CppObject *v20; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4354D99 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
    sub_B70694(&Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__);
    sub_B70694(&Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__);
    sub_B70694(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    sub_B70694(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    sub_B70694(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
    sub_B70694(&IEnumerableExtensions_TypeInfo);
    sub_B70694(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__);
    sub_B70694(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__);
    sub_B70694(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_4354D99 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v4 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v4 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__1_0,
      v7,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__);
    v8 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v16 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)v15;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v16 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v18->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v20,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__);
    v21 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v21->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v21->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v17,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_1D4BFB0 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434F3C1 & 1) == 0 )
  {
    sub_B70694(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_434F3C1 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall MapGimmickRandomEffectComponent___c___ctor(
        MapGimmickRandomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_0(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B7076C(this, 0LL);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, 0LL);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B7076C(this, 0LL);
  return *((_DWORD *)&v->fields + 3);
}