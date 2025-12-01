void ContrastImageEffect___ctor(ContrastImageEffect_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0);
}


void ContrastImageEffect__OnRenderImage(
        ContrastImageEffect_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x21

  if ( (byte_4CCA3A8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Graphics_TypeInfo);
    sub_1C713B0(&StringLiteral_16180/*"_Contrast"*/);
    sub_1C713B0(&StringLiteral_16329/*"_Saturation"*/);
    byte_4CCA3A8 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16329/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_1C71608(material, v8);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16180/*"_Contrast"*/, this->fields.contrast, 0);
  v9 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71569532((UnityEngine_Texture_o *)source, destination, v9, 0);
}