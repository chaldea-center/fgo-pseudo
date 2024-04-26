void __fastcall EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  int v7; // w8
  void *v8; // x19
  __int64 v9; // x23
  UnityEngine_Component_o *v10; // x20
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_43563DF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43563DF = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)gameObject,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_29:
    sub_B7076C(gameObject, v5);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v7 = *((_DWORD *)gameObject + 6);
    v8 = gameObject;
    if ( v7 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v7 )
        {
          v12 = sub_B70798(gameObject);
          sub_B70738(v12, 0LL);
        }
        v10 = (UnityEngine_Component_o *)*((_QWORD *)v8 + v9 + 4);
        if ( !v10 )
          goto LABEL_29;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + v9 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_29;
        v11 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)gameObject,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (void *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( !gameObject )
            goto LABEL_29;
          gameObject = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          return;
      }
    }
  }
}