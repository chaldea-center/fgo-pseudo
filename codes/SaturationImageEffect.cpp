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
  UnityEngine_Material_o *material; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x21

  if ( (byte_4A5E482 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Graphics_TypeInfo);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    sub_1B885B0(&StringLiteral_16322/*"_Saturation"*/);
    byte_4A5E482 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16322/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(material, v8);
  }
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16262/*"_MainTex"*/, this->fields.texture, 0LL);
  v9 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_69305428((UnityEngine_Texture_o *)source, destination, v9, 0LL);
}