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
  __int64 v8; // x1
  bool v9; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v11; // x0

  if ( (byte_593A099 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3205/*"Battle/CommonEffects/"*/);
    sub_21FFC50(&StringLiteral_19703/*"effect/"*/);
    byte_593A099 = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_19703/*"effect/"*/;
LABEL_14:
    v11 = System_String__Concat_75438412((System_String_o *)*v7, name, 0);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v11, 0);
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
    v7 = &StringLiteral_3205/*"Battle/CommonEffects/"*/;
    goto LABEL_14;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0, 0);
  result = 0;
  if ( v9 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0 )
    {
      sub_21FFECC(result, v8);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0);
  }
  return result;
}