void PosterizationShader___ctor(PosterizationShader_o *this, const MethodInfo *method)
{
  this->fields.divedenum = 4.0;
  this->fields.petternNumber = 1;
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0);
}


void PosterizationShader__OnRenderImage(
        PosterizationShader_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v8; // x21

  if ( (byte_4C3B169 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Graphics_TypeInfo);
    sub_1C32C20(&StringLiteral_16184/*"_DisplayColor"*/);
    sub_1C32C20(&StringLiteral_16307/*"_PetternNumber"*/);
    sub_1C32C20(&StringLiteral_16186/*"_Divedenum"*/);
    sub_1C32C20(&StringLiteral_16326/*"_Saturation"*/);
    byte_4C3B169 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16326/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16186/*"_Divedenum"*/, this->fields.divedenum, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16184/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(material);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16307/*"_PetternNumber"*/, this->fields.petternNumber, 0);
  v8 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71069324((UnityEngine_Texture_o *)source, destination, v8, 0);
}