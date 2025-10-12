void DebugDummyMapGimmickComponent___ctor(DebugDummyMapGimmickComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickId(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4C342CA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Last_string___);
    byte_4C342CA = 1;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !name || (name = (System_String_o *)System_String__Split(name, 0x5Fu, 0, 0)) == 0 )
    sub_1C32E7C(name);
  if ( LODWORD(name[1].klass) == 1 )
    return 0;
  else
    return (System_String_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)name,
                                (const MethodInfo_31082C4 *)Method_System_Linq_Enumerable_Last_string___);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickLayerMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  int z; // w20
  Il2CppObject *MapGimmickId; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C342C9 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_21923/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/);
    byte_4C342C9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  if ( localPosition.fields.z == INFINITY )
    z = 0x80000000;
  else
    z = (int)localPosition.fields.z;
  if ( !z )
    return 0;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v4);
  v15 = z;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  return System_String__Format_63559836((System_String_o *)StringLiteral_21923/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/, MapGimmickId, v13, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x20
  float v5; // s0
  int v6; // w24
  const MethodInfo *v7; // x1
  int y; // w23
  Il2CppObject *MapGimmickId; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  int v25; // [xsp+8h] [xbp-48h] BYREF
  int v26; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C342C8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_21921/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/);
    byte_4C342C8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
  }
  v4 = (UnityEngine_Transform_o *)gameObject;
  v5 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0));
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  else
    v6 = (int)v5;
  localPosition = UnityEngine_Transform__get_localPosition(v4, 0);
  if ( localPosition.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)localPosition.fields.y;
  MapGimmickId = (Il2CppObject *)DebugDummyMapGimmickComponent__GetMapGimmickId(this, v7);
  v26 = v6;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v10, v11, v12, v13, v14, v15);
  v25 = y;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v17, v18, v19, v20, v21, v22);
  return System_String__Format_63559904((System_String_o *)StringLiteral_21921/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/, MapGimmickId, v16, v23, 0);
}