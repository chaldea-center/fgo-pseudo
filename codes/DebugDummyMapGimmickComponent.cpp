void DebugDummyMapGimmickComponent___ctor(DebugDummyMapGimmickComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickId(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 v4; // x1

  if ( (byte_4CEAE56 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Last_string___);
    byte_4CEAE56 = 1;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !name || (name = (System_String_o *)System_String__Split(name, 0x5Fu, 0, 0)) == 0 )
    sub_1C7BD40(name, v4);
  if ( LODWORD(name[1].klass) == 1 )
    return 0;
  else
    return (System_String_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)name,
                                (const MethodInfo_319A1D0 *)Method_System_Linq_Enumerable_Last_string___);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickLayerMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int z; // w20
  Il2CppObject *MapGimmickId; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEAE55 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22130/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/);
    byte_4CEAE55 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  if ( localPosition.fields.z == INFINITY )
    z = 0x80000000;
  else
    z = (int)localPosition.fields.z;
  if ( !z )
    return 0;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v5);
  v10 = z;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_64218220((System_String_o *)StringLiteral_22130/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/, MapGimmickId, v8, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  float v6; // s0
  int v7; // w24
  const MethodInfo *v8; // x1
  int y; // w23
  Il2CppObject *MapGimmickId; // x19
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEAE54 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22128/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/);
    byte_4CEAE54 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  v6 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0));
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
  if ( localPosition.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)localPosition.fields.y;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v8);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = y;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format_64218288((System_String_o *)StringLiteral_22128/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/, MapGimmickId, v11, v12, 0);
}