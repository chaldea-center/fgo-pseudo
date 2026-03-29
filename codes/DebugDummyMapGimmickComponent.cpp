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

  if ( (byte_4D2D211 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Last_string___);
    byte_4D2D211 = 1;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !name || (name = (System_String_o *)System_String__Split(name, 0x5Fu, 0, 0)) == 0 )
    sub_1C93D2C(name, v4);
  if ( LODWORD(name[1].klass) == 1 )
    return 0;
  else
    return (System_String_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)name,
                                (const MethodInfo_31CEB48 *)Method_System_Linq_Enumerable_Last_string___);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickLayerMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int v5; // w20
  Il2CppObject *MapGimmickId; // x19
  Il2CppObject *v7; // x0
  const MethodInfo *v9; // x1
  float z; // s2
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2D210 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_22194/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/);
    byte_4D2D210 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C93D2C(gameObject, v4);
  }
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0).fields.z;
  if ( z == INFINITY )
    v5 = 0x80000000;
  else
    v5 = (int)z;
  if ( !v5 )
    return 0;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v9);
  v11 = v5;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format_64467032((System_String_o *)StringLiteral_22194/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/, MapGimmickId, v7, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  int v6; // w24
  int v7; // w23
  Il2CppObject *MapGimmickId; // x19
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  float v12; // s0
  const MethodInfo *v13; // x1
  float v14; // s1
  int v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2D20F & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_22192/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/);
    byte_4D2D20F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C93D2C(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  v12 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0));
  if ( v12 == INFINITY )
    v6 = 0x80000000;
  else
    v6 = (int)v12;
  v14 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition(v5, 0).fields.y));
  if ( v14 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v14;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v13);
  v16 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = v7;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return System_String__Format_64467100((System_String_o *)StringLiteral_22192/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/, MapGimmickId, v9, v10, 0);
}