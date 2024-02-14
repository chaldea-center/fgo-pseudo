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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v14; // x0
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__1_0; // x20
  Il2CppObject *v17; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  MapGimmickRandomEffectComponent___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *v30; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x20
  Il2CppObject *v32; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42129F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, method);
    sub_B0D8A4(&Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__, v4);
    sub_B0D8A4(&Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v7);
    sub_B0D8A4(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v8);
    sub_B0D8A4(&IEnumerableExtensions_TypeInfo, v9);
    sub_B0D8A4(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v10);
    sub_B0D8A4(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v11);
    sub_B0D8A4(&MapGimmickRandomEffectComponent___c_TypeInfo, v12);
    byte_42129F1 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v14 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v14 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo,
                                                                                   method,
                                                                                   v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__1_0,
      v17,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__);
    v18 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v18->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v28 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v25;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v28 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v30->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v30 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo,
                                                                                v26,
                                                                                v27);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v32,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      (const MethodInfo_2619564 *)Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__);
    v33 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v33->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v29,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_1B63D30 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212701 & 1) == 0 )
  {
    sub_B0D8A4(&MapGimmickRandomEffectComponent___c_TypeInfo, v1);
    byte_4212701 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MapGimmickRandomEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, 0LL);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B0D97C(this);
  return *((_DWORD *)&v->fields + 3);
}