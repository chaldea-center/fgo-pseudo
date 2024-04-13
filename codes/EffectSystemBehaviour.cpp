void __fastcall EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  void *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  int v21; // w8
  void *v22; // x19
  __int64 v23; // x23
  UnityEngine_Component_o *v24; // x20
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x0

  if ( (byte_42ECFC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42ECFC0 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
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
        (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_29:
    sub_B5D69C(gameObject, v19);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v21 = *((_DWORD *)gameObject + 6);
    v22 = gameObject;
    if ( v21 >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v23 >= v21 )
        {
          v26 = sub_B5D6C8(gameObject);
          sub_B5D668(v26, 0LL);
        }
        v24 = (UnityEngine_Component_o *)*((_QWORD *)v22 + v23 + 4);
        if ( !v24 )
          goto LABEL_29;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v22 + v23 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_29;
        v25 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)gameObject,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (void *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v24, 0LL);
          if ( !gameObject )
            goto LABEL_29;
          gameObject = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v21 = *((_DWORD *)v22 + 6);
        if ( (int)++v23 >= v21 )
          return;
      }
    }
  }
}