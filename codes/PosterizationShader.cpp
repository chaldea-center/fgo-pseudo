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
  UnityEngine_Material_o *material; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x21

  if ( (byte_4A5E287 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Graphics_TypeInfo);
    sub_1B885B0(&StringLiteral_16191/*"_DisplayColor"*/);
    sub_1B885B0(&StringLiteral_16303/*"_PetternNumber"*/);
    sub_1B885B0(&StringLiteral_16193/*"_Divedenum"*/);
    sub_1B885B0(&StringLiteral_16322/*"_Saturation"*/);
    byte_4A5E287 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16322/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16193/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16191/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(material, v8);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16303/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v9 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_69305428((UnityEngine_Texture_o *)source, destination, v9, 0LL);
}