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
  __int64 v12; // x1
  UnityEngine_Material_o *v13; // x21

  if ( (byte_4186B61 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Graphics_TypeInfo, source);
    sub_B2C35C(&StringLiteral_15963/*"_DisplayColor"*/, v7);
    sub_B2C35C(&StringLiteral_16036/*"_PetternNumber"*/, v8);
    sub_B2C35C(&StringLiteral_15965/*"_Divedenum"*/, v9);
    sub_B2C35C(&StringLiteral_16054/*"_Saturation"*/, v10);
    byte_4186B61 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16054/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_15965/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_15963/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(material, v12);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16036/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v13 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_40666156((UnityEngine_Texture_o *)source, destination, v13, 0LL);
}