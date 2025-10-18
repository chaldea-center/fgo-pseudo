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

  if ( (byte_4C4677C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    sub_1C37058(&StringLiteral_16186/*"_DisplayColor"*/);
    sub_1C37058(&StringLiteral_16309/*"_PetternNumber"*/);
    sub_1C37058(&StringLiteral_16188/*"_Divedenum"*/);
    sub_1C37058(&StringLiteral_16328/*"_Saturation"*/);
    byte_4C4677C = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16328/*"_Saturation"*/, this->fields.saturation, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16188/*"_Divedenum"*/, this->fields.divedenum, 0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16186/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0)) == 0) )
  {
    sub_1C372B4(material);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16309/*"_PetternNumber"*/, this->fields.petternNumber, 0);
  v8 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71112436((UnityEngine_Texture_o *)source, destination, v8, 0);
}