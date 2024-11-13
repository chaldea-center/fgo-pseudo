void __fastcall ContrastImageEffect___ctor(ContrastImageEffect_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0LL);
}


void __fastcall ContrastImageEffect__OnRenderImage(
        ContrastImageEffect_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Material_o *material; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Material_o *v14; // x21

  if ( (byte_4B18CEC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, source, destination);
    sub_1BCA7E0(&StringLiteral_16352/*"_Contrast"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16491/*"_Saturation"*/, v9, v10);
    byte_4B18CEC = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16491/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(material, v12);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16352/*"_Contrast"*/, this->fields.contrast, 0LL);
  v14 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v13);
  UnityEngine_Graphics__Blit_70000204((UnityEngine_Texture_o *)source, destination, v14, 0LL);
}