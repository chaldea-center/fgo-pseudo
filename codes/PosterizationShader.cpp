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
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Material_o *v10; // x21

  if ( (byte_593C1CC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Graphics_TypeInfo);
    sub_21FFC50(&StringLiteral_16800/*"_DisplayColor"*/);
    sub_21FFC50(&StringLiteral_16925/*"_PetternNumber"*/);
    sub_21FFC50(&StringLiteral_16802/*"_Divedenum"*/);
    sub_21FFC50(&StringLiteral_16944/*"_Saturation"*/);
    byte_593C1CC = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16944/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16802/*"_Divedenum"*/, this->fields.divedenum, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16800/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_21FFECC(material, v8);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16925/*"_PetternNumber"*/, this->fields.petternNumber, 0);
  v10 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v9);
  UnityEngine_Graphics__Blit_83030636((UnityEngine_Texture_o *)source, destination, v10, 0);
}