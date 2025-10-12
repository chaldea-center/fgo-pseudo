void TitleBgEffectComponent___ctor(TitleBgEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleBgEffectComponent__Release(TitleBgEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mesh; // x20
  UnityEngine_Renderer_o *v4; // x0
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *particle; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *targetCamera; // x20
  UnityEngine_Object_o *targetTexture; // x19

  if ( (byte_4C35210 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35210 = 1;
  }
  mesh = (UnityEngine_Object_o *)this->fields.mesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    v4 = (UnityEngine_Renderer_o *)this->fields.mesh;
    if ( !v4 )
      goto LABEL_28;
    UnityEngine_Renderer__set_material(v4, 0, 0);
    v4 = (UnityEngine_Renderer_o *)this->fields.mesh;
    if ( !v4 )
      goto LABEL_28;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(v4, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71223828(material, 0);
  }
  particle = (UnityEngine_Object_o *)this->fields.particle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particle, 0, 0) )
  {
    v4 = (UnityEngine_Renderer_o *)this->fields.particle;
    if ( !v4 )
      goto LABEL_28;
    UnityEngine_Renderer__set_material(v4, 0, 0);
    v4 = (UnityEngine_Renderer_o *)this->fields.particle;
    if ( !v4 )
      goto LABEL_28;
    v7 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(v4, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71223828(v7, 0);
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    v4 = (UnityEngine_Renderer_o *)this->fields.targetCamera;
    if ( v4 )
    {
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v4, 0, 0);
      v4 = (UnityEngine_Renderer_o *)this->fields.targetCamera;
      if ( v4 )
      {
        targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)v4, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_71223828(targetTexture, 0);
        return;
      }
    }
LABEL_28:
    sub_1C32E7C(v4);
  }
}