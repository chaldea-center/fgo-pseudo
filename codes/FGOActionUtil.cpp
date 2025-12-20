void FGOActionUtil___ctor(FGOActionUtil_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FGOActionUtil__getEffectObject(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  System_String_o *v8; // x0
  UnityEngine_GameObject_o *result; // x0
  __int64 v10; // x1
  bool v11; // w8

  if ( (byte_4D2E268 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_3089/*"Battle/CommonEffects/"*/);
    sub_1C94098(&StringLiteral_19005/*"effect/"*/);
    byte_4D2E268 = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_19005/*"effect/"*/;
LABEL_8:
    v8 = System_String__Concat_64417744((System_String_o *)*v7, name, 0);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v8, 0);
    if ( result )
    {
      if ( result->klass != UnityEngine_GameObject_TypeInfo )
        return 0;
    }
    return result;
  }
  if ( folder != 1 )
  {
    if ( folder )
      return 0;
    v7 = &StringLiteral_3089/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0, 0);
  result = 0;
  if ( v11 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0 )
    {
      sub_1C942F0(result, v10);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0);
  }
  return result;
}