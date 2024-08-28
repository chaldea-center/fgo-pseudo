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

  if ( (byte_4A0BD2F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Graphics_TypeInfo, source);
    sub_1B686D4(&StringLiteral_16124/*"_DisplayColor"*/, v7);
    sub_1B686D4(&StringLiteral_16236/*"_PetternNumber"*/, v8);
    sub_1B686D4(&StringLiteral_16126/*"_Divedenum"*/, v9);
    sub_1B686D4(&StringLiteral_16255/*"_Saturation"*/, v10);
    byte_4A0BD2F = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16255/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16126/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16124/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1B68930(material, v12);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16236/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v13 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_69017864((UnityEngine_Texture_o *)source, destination, v13, 0LL);
}