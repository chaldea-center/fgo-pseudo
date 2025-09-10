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
  __int64 v7; // x2
  int v8; // w8
  void *v9; // x19
  __int64 v10; // x23
  UnityEngine_Component_o *v11; // x20
  Il2CppObject *v12; // x21

  if ( (byte_4C26069 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26069 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    v6 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)gameObject,
           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_26:
    sub_1C2D6EC(gameObject, v5);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v8 = *((_DWORD *)gameObject + 6);
    v9 = gameObject;
    if ( v8 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= v8 )
          sub_1C2D6F4(gameObject, v5, v7);
        v11 = (UnityEngine_Component_o *)*((_QWORD *)v9 + v10 + 4);
        if ( !v11 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v9 + v10 + 4), 0);
        if ( !gameObject )
          goto LABEL_26;
        v12 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v11, 0);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v8 = *((_DWORD *)v9 + 6);
        if ( (int)++v10 >= v8 )
          return;
      }
    }
  }
}