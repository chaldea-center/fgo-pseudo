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
  UnityEngine_Material_o *v8; // x21

  if ( (byte_4C45ECF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    sub_1C37058(&StringLiteral_16180/*"_Contrast"*/);
    sub_1C37058(&StringLiteral_16328/*"_Saturation"*/);
    byte_4C45ECF = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16328/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_1C372B4(material);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16180/*"_Contrast"*/, this->fields.contrast, 0);
  v8 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71112436((UnityEngine_Texture_o *)source, destination, v8, 0);
}