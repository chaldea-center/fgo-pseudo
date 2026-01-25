void EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  int v7; // w8
  void *v8; // x19
  __int64 v9; // x23
  UnityEngine_Component_o *v10; // x20
  Il2CppObject *v11; // x21

  if ( (byte_4CED40D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED40D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    v6 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)gameObject,
           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_26:
    sub_1C7BD40(gameObject, v5);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v7 = *((_DWORD *)gameObject + 6);
    v8 = gameObject;
    if ( v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v7 )
          sub_1C7BD48(gameObject);
        v10 = (UnityEngine_Component_o *)*((_QWORD *)v8 + v9 + 4);
        if ( !v10 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + v9 + 4), 0);
        if ( !gameObject )
          goto LABEL_26;
        v11 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v10, 0);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          return;
      }
    }
  }
}