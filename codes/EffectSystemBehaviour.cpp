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
  int v11; // w8
  void *v12; // x19
  __int64 v13; // x23
  UnityEngine_Component_o *v14; // x20
  Il2CppObject *v15; // x21

  if ( (byte_4A6EC48 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    byte_4A6EC48 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)gameObject,
            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_2EDD680 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_26:
    sub_1B9026C(gameObject, v9);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v11 = *((_DWORD *)gameObject + 6);
    v12 = gameObject;
    if ( v11 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= v11 )
          sub_1B90274(gameObject, v9);
        v14 = (UnityEngine_Component_o *)*((_QWORD *)v12 + v13 + 4);
        if ( !v14 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v12 + v13 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_26;
        v15 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2EDD680 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          return;
      }
    }
  }
}