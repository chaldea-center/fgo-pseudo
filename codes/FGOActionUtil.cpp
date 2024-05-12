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
  __int64 v8; // x1
  bool v9; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v11; // x0

  if ( (byte_4389FEA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B775C4(&UnityEngine_GameObject_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2863/*"Battle/CommonEffects/"*/);
    sub_B775C4(&StringLiteral_18589/*"effect/"*/);
    byte_4389FEA = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_18589/*"effect/"*/;
LABEL_15:
    v11 = System_String__Concat_44901936((System_String_o *)*v7, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v11, 0LL);
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
    v7 = &StringLiteral_2863/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v9 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B7769C(result, v8);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}