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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  bool v21; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v23; // x0

  if ( (byte_42E7A27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
      (_DWORD)name,
      (_DWORD)actorObject,
      method);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2809/*"Battle/CommonEffects/"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, v16, v17, v18);
    byte_42E7A27 = 1;
  }
  if ( folder == 2 )
  {
    v19 = &StringLiteral_18452/*"effect/"*/;
LABEL_15:
    v23 = System_String__Concat_44577788((System_String_o *)*v19, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v23, 0LL);
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
    v19 = &StringLiteral_2809/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v21 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B5D69C(result, v20);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}