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
  Il2CppObject *Component_object; // x20
  void *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  int v12; // w8
  void *v13; // x19
  __int64 v14; // x23
  UnityEngine_Component_o *v15; // x20
  Il2CppObject *v16; // x21

  if ( (byte_4B1B2D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1B2D8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)gameObject,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_26:
    sub_1BCB254(gameObject, v9);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v12 = *((_DWORD *)gameObject + 6);
    v13 = gameObject;
    if ( v12 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= v12 )
          sub_1BCB25C(gameObject, v9, v11);
        v15 = (UnityEngine_Component_o *)*((_QWORD *)v13 + v14 + 4);
        if ( !v15 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v13 + v14 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_26;
        v16 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
          return;
      }
    }
  }
}