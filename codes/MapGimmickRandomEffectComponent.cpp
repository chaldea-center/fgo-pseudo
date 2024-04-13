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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v33; // x0
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__1_0; // x20
  Il2CppObject *v36; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  MapGimmickRandomEffectComponent___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_T__o *v46; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *v47; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x20
  Il2CppObject *v49; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EBB17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v17, v18, v19);
    sub_B5D5C4(&IEnumerableExtensions_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v23, v24, v25);
    sub_B5D5C4(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v26, v27, v28);
    sub_B5D5C4(&MapGimmickRandomEffectComponent___c_TypeInfo, v29, v30, v31);
    byte_42EBB17 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v33 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v33 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__1_0,
      v36,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__);
    v37 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v37->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v45 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_T__o *)v44;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v45 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v47->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v47 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v49,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__);
    v50 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v50->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v46,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_1E59C50 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F24 & 1) == 0 )
  {
    sub_B5D5C4(&MapGimmickRandomEffectComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5F24 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, 0LL);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B5D69C(this, 0LL);
  return *((_DWORD *)&v->fields + 3);
}