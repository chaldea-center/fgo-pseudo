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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  MapGimmickRandomEffectComponent___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v14; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB2DDB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
    sub_1C6BA08(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    sub_1C6BA08(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    sub_1C6BA08(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
    sub_1C6BA08(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__);
    sub_1C6BA08(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__);
    sub_1C6BA08(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_4CB2DDB = 1;
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
    _9__1_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v6,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0);
    static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v11->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v14,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0);
    v15 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v15->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v15->__9__1_1, (int32_t)_9__1_1, v16, v17);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v12,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_3197474 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2DDC & 1) == 0 )
  {
    sub_1C6BA08(&MapGimmickRandomEffectComponent___c_TypeInfo);
    byte_4CB2DDC = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C6BC60(this, 0);
  return v->fields.weight;
}