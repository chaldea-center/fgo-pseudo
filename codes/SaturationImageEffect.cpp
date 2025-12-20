void SaturationImageEffect___ctor(SaturationImageEffect_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0);
}


void SaturationImageEffect__OnRenderImage(
        SaturationImageEffect_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x21

  if ( (byte_4D30360 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Graphics_TypeInfo);
    sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    sub_1C94098(&StringLiteral_16385/*"_Saturation"*/);
    byte_4D30360 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16385/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_1C942F0(material, v8);
  }
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16321/*"_MainTex"*/, this->fields.texture, 0);
  v9 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71955896((UnityEngine_Texture_o *)source, destination, v9, 0);
}