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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  __int64 v12; // x1
  bool v13; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v15; // x0

  if ( (byte_4187797 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_2756/*"Battle/CommonEffects/"*/, v9);
    sub_B2C35C(&StringLiteral_18223/*"effect/"*/, v10);
    byte_4187797 = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18223/*"effect/"*/;
LABEL_15:
    v15 = System_String__Concat_44305532((System_String_o *)*v11, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v15, 0LL);
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
    v11 = &StringLiteral_2756/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v13 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B2C434(result, v12);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}