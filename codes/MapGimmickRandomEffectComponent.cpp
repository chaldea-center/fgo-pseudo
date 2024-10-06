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
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v10; // x0
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  MapGimmickRandomEffectComponent___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v20; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A6CCD5 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, method);
    sub_1B90010(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v3);
    sub_1B90010(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v4);
    sub_1B90010(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v5);
    sub_1B90010(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v6);
    sub_1B90010(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v7);
    sub_1B90010(&MapGimmickRandomEffectComponent___c_TypeInfo, v8);
    byte_4A6CCD5 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v10 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v10 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v12,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0LL);
    static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v17 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v17 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v17->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v20,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0LL);
    v21 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v21->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->__9__1_1, (int32_t)_9__1_1, v22, v23);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v18,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_2EE1388 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6CCD6 & 1) == 0 )
  {
    sub_1B90010(&MapGimmickRandomEffectComponent___c_TypeInfo, v1);
    byte_4A6CCD6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(MapGimmickRandomEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, 0LL);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B9026C(this, 0LL);
  return v->fields.weight;
}