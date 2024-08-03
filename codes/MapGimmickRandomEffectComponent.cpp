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
  System_Collections_Generic_IEnumerable_TSource__o *mapGimmickRandomEffectElementComponents; // x19
  MapGimmickRandomEffectComponent___c_c *v11; // x0
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v13; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  MapGimmickRandomEffectComponent___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct MapGimmickRandomEffectComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49F92F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___, method);
    sub_1B640C8(&System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo, v4);
    sub_1B640C8(&System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___, v6);
    sub_1B640C8(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__, v7);
    sub_1B640C8(&Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__, v8);
    sub_1B640C8(&MapGimmickRandomEffectComponent___c_TypeInfo, v9);
    byte_49F92F4 = 1;
  }
  mapGimmickRandomEffectElementComponents = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapGimmickRandomEffectElementComponents;
  if ( !mapGimmickRandomEffectElementComponents )
    return 0LL;
  v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v11->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B64314(
                                               System_Func_MapGimmickRandomEffectElementComponent__bool__TypeInfo,
                                               method,
                                               v2);
    System_Func_object__bool____ctor(
      _9__1_0,
      v13,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_0__,
      0LL);
    static_fields = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_MapGimmickRandomEffectElementComponent__bool__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          mapGimmickRandomEffectElementComponents,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_MapGimmickRandomEffectElementComponent___);
  v20 = MapGimmickRandomEffectComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v17;
  if ( !MapGimmickRandomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickRandomEffectComponent___c_TypeInfo);
    v20 = MapGimmickRandomEffectComponent___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v20->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MapGimmickRandomEffectComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_MapGimmickRandomEffectElementComponent__int__TypeInfo,
                                              v18,
                                              v19);
    System_Func_object__int____ctor(
      _9__1_1,
      v23,
      Method_MapGimmickRandomEffectComponent___c__GetRandomElement_b__1_1__,
      0LL);
    v24 = MapGimmickRandomEffectComponent___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Func_MapGimmickRandomEffectElementComponent__int__o *)_9__1_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->__9__1_1, (int32_t)_9__1_1, v25, v26);
  }
  return (MapGimmickRandomEffectElementComponent_o *)IEnumerableExtensions__DrawLottery_object_(
                                                       v21,
                                                       (System_Func_T__int__o *)_9__1_1,
                                                       (const MethodInfo_2E8BAF8 *)Method_IEnumerableExtensions_DrawLottery_MapGimmickRandomEffectElementComponent___);
}


void __fastcall MapGimmickRandomEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F92F5 & 1) == 0 )
  {
    sub_1B640C8(&MapGimmickRandomEffectComponent___c_TypeInfo, v1);
    byte_49F92F5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MapGimmickRandomEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MapGimmickRandomEffectComponent___c_TypeInfo->static_fields->__9 = (struct MapGimmickRandomEffectComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MapGimmickRandomEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return MapGimmickRandomEffectElementComponent__get_IsValid(v, (const MethodInfo *)v);
}


int32_t __fastcall MapGimmickRandomEffectComponent___c___GetRandomElement_b__1_1(
        MapGimmickRandomEffectComponent___c_o *this,
        MapGimmickRandomEffectElementComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64324(this);
  return v->fields.weight;
}