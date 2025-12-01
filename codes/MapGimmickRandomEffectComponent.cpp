void MapGimmickRandomEffectComponent___ctor(MapGimmickRandomEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


MapGimmickRandomEffectElementComponent_o *MapGimmickRandomEffectComponent__GetRandomElement(
        MapGimmickRandomEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v4; // x0
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  MapGimmickRandomEffectComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v18; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC3EEE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
    sub_1C713B0(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    sub_1C713B0(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    sub_1C713B0(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
    sub_1C713B0(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__);
    sub_1C713B0(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__);
    sub_1C713B0(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_4CC3EEE = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0;
  v4 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v4 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v4->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v6,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0);
    static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v15 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v14;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v15 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v15->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v18,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0);
    v19 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v19->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->__9__1_1, (int32_t)_9__1_1, v20, v21, v22, v23, v24, v25);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v16,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_31A7218 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3EEF & 1) == 0 )
  {
    sub_1C713B0(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_4CC3EEF = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C71608(this, 0);
  return v->fields.weight;
}