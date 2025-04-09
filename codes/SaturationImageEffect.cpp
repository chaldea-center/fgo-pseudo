void __fastcall SaturationImageEffect___ctor(SaturationImageEffect_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0LL);
}


void __fastcall SaturationImageEffect__OnRenderImage(
        SaturationImageEffect_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Material_o *material; // x0
  __int64 v10; // x1
  UnityEngine_Material_o *v11; // x21

  if ( (byte_49BE40F & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Graphics_TypeInfo, source);
    sub_1B4CF90(&StringLiteral_15954/*"_MainTex"*/, v7);
    sub_1B4CF90(&StringLiteral_16015/*"_Saturation"*/, v8);
    byte_49BE40F = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16015/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(material, v10);
  }
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_15954/*"_MainTex"*/, this->fields.texture, 0LL);
  v11 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_68650188((UnityEngine_Texture_o *)source, destination, v11, 0LL);
}