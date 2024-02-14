void __fastcall EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  void *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  int v10; // w8
  void *v11; // x19
  __int64 v12; // x23
  UnityEngine_Component_o *v13; // x20
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_4218B7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4218B7B = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
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
        (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_29:
    sub_B0D97C(gameObject);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v10 = *((_DWORD *)gameObject + 6);
    v11 = gameObject;
    if ( v10 >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= v10 )
        {
          v15 = sub_B0D9A8(gameObject);
          sub_B0D948(v15, 0LL);
        }
        v13 = (UnityEngine_Component_o *)*((_QWORD *)v11 + v12 + 4);
        if ( !v13 )
          goto LABEL_29;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v11 + v12 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_29;
        v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)gameObject,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (void *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !gameObject )
            goto LABEL_29;
          gameObject = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v10 = *((_DWORD *)v11 + 6);
        if ( (int)++v12 >= v10 )
          return;
      }
    }
  }
}