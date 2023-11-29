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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  void *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w8
  void *v16; // x19
  __int64 v17; // x23
  UnityEngine_Component_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *v20; // x21
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_40FE276 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FE276 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    {
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v10,
        (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v11 )
LABEL_29:
    sub_B170D4();
  v12 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          v11,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( v12 )
  {
    v15 = *((_DWORD *)v12 + 6);
    v16 = v12;
    if ( v15 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= v15 )
        {
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
        v18 = (UnityEngine_Component_o *)*((_QWORD *)v16 + v17 + 4);
        if ( !v18 )
          goto LABEL_29;
        v19 = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v16 + v17 + 4), 0LL);
        if ( !v19 )
          goto LABEL_29;
        v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v19,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = (void *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          v21 = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !v21 )
            goto LABEL_29;
          v12 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  v21,
                  (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          return;
      }
    }
  }
}