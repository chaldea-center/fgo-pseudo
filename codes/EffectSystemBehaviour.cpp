void __fastcall EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  void *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  int v18; // w8
  void *v19; // x19
  __int64 v20; // x23
  UnityEngine_Component_o *v21; // x20
  __int64 v22; // x1
  Il2CppObject *v23; // x21

  if ( (byte_4B15076 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B15076 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    v17 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_26:
    sub_1BCAA3C(gameObject, v15);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v18 = *((_DWORD *)gameObject + 6);
    v19 = gameObject;
    if ( v18 >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= v18 )
          sub_1BCAA44(gameObject, v15);
        v21 = (UnityEngine_Component_o *)*((_QWORD *)v19 + v20 + 4);
        if ( !v21 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v19 + v20 + 4), 0LL);
        if ( !gameObject )
          goto LABEL_26;
        v23 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v18 = *((_DWORD *)v19 + 6);
        if ( (int)++v20 >= v18 )
          return;
      }
    }
  }
}