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
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  BattleActorControl_o *Component_srcLineSprite; // x0
  System_String_o *v15; // x0

  if ( (byte_40FAD0F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2744/*"Battle/CommonEffects/"*/, v9);
    sub_B16FFC(&StringLiteral_18155/*"effect/"*/, v10);
    byte_40FAD0F = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18155/*"effect/"*/;
LABEL_15:
    v15 = System_String__Concat_43743732((System_String_o *)*v11, name, 0LL);
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
    v11 = &StringLiteral_2744/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    if ( !actorObject
      || (Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              actorObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B170D4();
    }
    return BattleActorControl__getActorEffect(Component_srcLineSprite, name, 0LL);
  }
  return result;
}