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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v13; // x0
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  MapGimmickRandomEffectComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *v21; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v24; // x0

  if ( (byte_41858B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, method);
    sub_B2C35C(&Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__, v3);
    sub_B2C35C(&Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__, v4);
    sub_B2C35C(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v5);
    sub_B2C35C(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v6);
    sub_B2C35C(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v7);
    sub_B2C35C(&IEnumerableExtensions_TypeInfo, v8);
    sub_B2C35C(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v9);
    sub_B2C35C(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v10);
    sub_B2C35C(&MapGimmickRandomEffectComponent___c_TypeInfo, v11);
    byte_41858B5 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v13 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v13 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__1_0,
      v16,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_MapGimmickRandomEffectElementComponent__bool___ctor__);
    v17 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v17->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_B2C2F8(&v17->__9__1_0, _9__1_0);
  }
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v19 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)v18;
  if ( (BYTE3(MapGimmickRandomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v19 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v21->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v21 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v23,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_MapGimmickRandomEffectElementComponent__int___ctor__);
    v24 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_B2C2F8(&v24->__9__1_1, _9__1_1);
  }
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v20,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_1AA8A64 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D00 & 1) == 0 )
  {
    sub_B2C35C(&MapGimmickRandomEffectComponent___c_TypeInfo, v1);
    byte_4185D00 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, 0LL);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B2C434(this, 0LL);
  return *((_DWORD *)&v->fields + 3);
}