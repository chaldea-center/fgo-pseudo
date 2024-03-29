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
  UnityEngine_Material_o *v10; // x21

  if ( (byte_42187C8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Graphics_TypeInfo, source);
    sub_B0D8A4(&StringLiteral_16061/*"_MainTex"*/, v7);
    sub_B0D8A4(&StringLiteral_16102/*"_Saturation"*/, v8);
    byte_42187C8 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16102/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(material);
  }
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16061/*"_MainTex"*/, this->fields.texture, 0LL);
  v10 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_40790496((UnityEngine_Texture_o *)source, destination, v10, 0LL);
}