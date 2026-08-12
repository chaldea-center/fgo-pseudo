void EffectSystemBehaviour___ctor(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectSystemBehaviour__Awake(EffectSystemBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x20
  void *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x20
  int v11; // w8
  void *v12; // x19
  __int64 v13; // x23
  UnityEngine_Component_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x21

  if ( (byte_596F51D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F51D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)gameObject,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)gameObject,
        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_26:
    sub_2213CDC(gameObject, v7);
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( gameObject )
  {
    v11 = *((_DWORD *)gameObject + 6);
    v12 = gameObject;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= v11 )
          sub_2213CE4(gameObject);
        v14 = (UnityEngine_Component_o *)*((_QWORD *)v12 + v13 + 4);
        if ( !v14 )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v12 + v13 + 4), 0);
        if ( !gameObject )
          goto LABEL_26;
        v17 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)gameObject,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EffectRenderBehaviour___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        gameObject = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v14, 0);
          if ( !gameObject )
            goto LABEL_26;
          gameObject = UnityEngine_GameObject__AddComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_EffectRenderBehaviour___);
        }
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          return;
      }
    }
  }
}