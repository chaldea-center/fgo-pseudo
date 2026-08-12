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

  if ( (byte_596CED1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Last_string___);
    byte_596CED1 = 1;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !name || (name = (System_String_o *)System_String__Split(name, 0x5Fu, 0, 0)) == 0 )
    sub_2213CDC(name, v4);
  if ( LODWORD(name[1].klass) == 1 )
    return 0;
  else
    return (System_String_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)name,
                                (const MethodInfo_3883CD8 *)Method_System_Linq_Enumerable_Last_string___);
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

  if ( (byte_596CED0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23040/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/);
    byte_596CED0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_2213CDC(gameObject, v4);
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
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  return System_String__Format_75697880((System_String_o *)StringLiteral_23040/*"mstMapGimmickLayer: mapGimmickId: {0}, z: {1}"*/, MapGimmickId, v7, 0);
}


System_String_o *DebugDummyMapGimmickComponent__GetMapGimmickMasterData(
        DebugDummyMapGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  int v6; // w23
  int v7; // w22
  Il2CppObject *MapGimmickId; // x19
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  float v12; // s0
  const MethodInfo *v13; // x1
  float v14; // s1
  int v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596CECF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23038/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/);
    byte_596CECF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_2213CDC(gameObject, v4);
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
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
  v15 = v7;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
  return System_String__Format_75697948((System_String_o *)StringLiteral_23038/*"mstMapGimmick: mapGimmickId: {0}, x: {1}, y: {2}"*/, MapGimmickId, v9, v10, 0);
}