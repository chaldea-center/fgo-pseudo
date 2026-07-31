void TitleBgEffectComponent___ctor(TitleBgEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleBgEffectComponent__Release(TitleBgEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mesh; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Renderer_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *particle; // x20
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *targetTexture; // x19

  if ( (byte_5935E0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E0B = 1;
  }
  mesh = (UnityEngine_Object_o *)this->fields.mesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    v7 = (UnityEngine_Renderer_o *)this->fields.mesh;
    if ( !v7 )
      goto LABEL_28;
    UnityEngine_Renderer__set_material(v7, 0, 0);
    v7 = (UnityEngine_Renderer_o *)this->fields.mesh;
    if ( !v7 )
      goto LABEL_28;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__DestroyImmediate_83246828(material, 0);
  }
  particle = (UnityEngine_Object_o *)this->fields.particle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(particle, 0, 0) )
  {
    v7 = (UnityEngine_Renderer_o *)this->fields.particle;
    if ( !v7 )
      goto LABEL_28;
    UnityEngine_Renderer__set_material(v7, 0, 0);
    v7 = (UnityEngine_Renderer_o *)this->fields.particle;
    if ( !v7 )
      goto LABEL_28;
    v15 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__DestroyImmediate_83246828(v15, 0);
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    v7 = (UnityEngine_Renderer_o *)this->fields.targetCamera;
    if ( v7 )
    {
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v7, 0, 0);
      v7 = (UnityEngine_Renderer_o *)this->fields.targetCamera;
      if ( v7 )
      {
        targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)v7, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
        UnityEngine_Object__DestroyImmediate_83246828(targetTexture, 0);
        return;
      }
    }
LABEL_28:
    sub_21FFECC(v7, v5);
  }
}