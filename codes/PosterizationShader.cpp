void __fastcall PosterizationShader___ctor(PosterizationShader_o *this, const MethodInfo *method)
{
  this->fields.divedenum = 4.0;
  this->fields.petternNumber = 1;
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0LL);
}


void __fastcall PosterizationShader__OnRenderImage(
        PosterizationShader_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v12; // x21

  if ( (byte_49FF4B6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Graphics_TypeInfo, source);
    sub_1B640C8(&StringLiteral_16122/*"_DisplayColor"*/, v7);
    sub_1B640C8(&StringLiteral_16234/*"_PetternNumber"*/, v8);
    sub_1B640C8(&StringLiteral_16124/*"_Divedenum"*/, v9);
    sub_1B640C8(&StringLiteral_16253/*"_Saturation"*/, v10);
    byte_49FF4B6 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16253/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16124/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16122/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(material);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16234/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v12 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_68973784((UnityEngine_Texture_o *)source, destination, v12, 0LL);
}