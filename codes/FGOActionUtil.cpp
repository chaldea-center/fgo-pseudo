void __fastcall FGOActionUtil___ctor(FGOActionUtil_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FGOActionUtil__getEffectObject(
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

  if ( (byte_4A5C8AB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3210/*"Battle/CommonEffects/"*/);
    sub_1B885B0(&StringLiteral_18870/*"effect/"*/);
    byte_4A5C8AB = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_18870/*"effect/"*/;
LABEL_8:
    v8 = System_String__Concat_61707032((System_String_o *)*v7, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v8, 0LL);
    if ( result )
    {
      if ( result->klass != UnityEngine_GameObject_TypeInfo )
        return 0LL;
    }
    return result;
  }
  if ( folder != 1 )
  {
    if ( folder )
      return 0LL;
    v7 = &StringLiteral_3210/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v11 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1B8880C(result, v10);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}