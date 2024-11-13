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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v18; // x0
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v20; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  MapGimmickRandomEffectComponent___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_T__o *v33; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v35; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B12F8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, method, v2);
    sub_1BCA7E0(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v9, v10);
    sub_1BCA7E0(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v11, v12);
    sub_1BCA7E0(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v13, v14);
    sub_1BCA7E0(&MapGimmickRandomEffectComponent___c_TypeInfo, v15, v16);
    byte_4B12F8E = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v18 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo, method);
    v18 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v18->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, method);
      v18 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo,
                                               method,
                                               v2,
                                               v3);
    System_Func_object__bool____ctor(
      _9__1_0,
      v20,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0LL);
    static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v32 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)v28;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo, v29);
    v32 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v32->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo,
                                              v29,
                                              v30,
                                              v31);
    System_Func_object__int____ctor(
      _9__1_1,
      v35,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0LL);
    v36 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v36->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v36->__9__1_1, (int64_t)_9__1_1, v37, v38, v39, v40, v41, v42);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v33,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_2F662F0 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12F8F & 1) == 0 )
  {
    sub_1BCA7E0(&MapGimmickRandomEffectComponent___c_TypeInfo, v1, v2);
    byte_4B12F8F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MapGimmickRandomEffectComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BCAA3C(this, 0LL);
  return v->fields.weight;
}