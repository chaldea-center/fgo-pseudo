void EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  void *gameObject; // x0
  Il2CppObject *v5; // x20
  int v6; // w8
  void *v7; // x19
  __int64 v8; // x23
  UnityEngine_Component_o *v9; // x20
  Il2CppObject *v10; // x21

  if ( (byte_4C41D2F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41D2F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    v5 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)gameObject,
           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_26:
    sub_1C372B4(gameObject);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v6 = *((_DWORD *)gameObject + 6);
    v7 = gameObject;
    if ( v6 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= v6 )
          sub_1C372BC(gameObject);
        v9 = (UnityEngine_Component_o *)*((_QWORD *)v7 + v8 + 4);
        if ( !v9 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v7 + v8 + 4), 0);
        if ( !gameObject )
          goto LABEL_26;
        v10 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v9, 0);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v6 = *((_DWORD *)v7 + 6);
        if ( (int)++v8 >= v6 )
          return;
      }
    }
  }
}