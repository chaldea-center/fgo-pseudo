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
  __int64 v9; // x1
  UnityEngine_Material_o *v10; // x21

  if ( (byte_597387A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Graphics_TypeInfo);
    sub_2213A60(&StringLiteral_16826/*"_Contrast"*/);
    sub_2213A60(&StringLiteral_16979/*"_Saturation"*/);
    byte_597387A = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16979/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_2213CDC(material, v8);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16826/*"_Contrast"*/, this->fields.contrast, 0);
  v10 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v9);
  UnityEngine_Graphics__Blit_83243940((UnityEngine_Texture_o *)source, destination, v10, 0);
}