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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_o *material; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Material_o *v18; // x21

  if ( (byte_4B1948B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, source, destination);
    sub_1BCA7E0(&StringLiteral_16358/*"_DisplayColor"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16472/*"_PetternNumber"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16360/*"_Divedenum"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16491/*"_Saturation"*/, v13, v14);
    byte_4B1948B = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16491/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16360/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16358/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(material, v16);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16472/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v18 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v17);
  UnityEngine_Graphics__Blit_70000204((UnityEngine_Texture_o *)source, destination, v18, 0LL);
}