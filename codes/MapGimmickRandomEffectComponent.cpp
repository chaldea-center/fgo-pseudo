void MapGimmickRandomEffectComponent___ctor(MapGimmickRandomEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


MapGimmickRandomEffectElementComponent_o *MapGimmickRandomEffectComponent__GetRandomElement(
        MapGimmickRandomEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v5; // x0
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v8; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  MapGimmickRandomEffectComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  struct MapGimmickRandomEffectComponent___c_StaticFields *v21; // x9
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5934FEA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
    sub_21FFC50(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    sub_21FFC50(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    sub_21FFC50(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
    sub_21FFC50(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__);
    sub_21FFC50(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__);
    sub_21FFC50(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_5934FEA = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0;
  v5 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( !*(&MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo, method, v2);
    v5 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__1_0 = (System_Func_object__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v8,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0);
    v9 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v9->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__1_0, (int32_t)_9__1_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v19 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( !*(&MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo, v17, v18);
    v19 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__1_1 = (System_Func_object__int__o *)v21->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v23,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0);
    v24 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__1_1, (int32_t)_9__1_1, v25, v26, v27, v28, v29, v30);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v20,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_3889DCC *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934FEB & 1) == 0 )
  {
    sub_21FFC50(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_5934FEB = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapGimmickRandomEffectComponent___c___ctor(MapGimmickRandomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_0(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_21FFECC(this, 0);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_21FFECC(this, 0);
  return v->fields.weight;
}