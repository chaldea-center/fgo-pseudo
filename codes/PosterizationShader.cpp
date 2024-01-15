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
  UnityEngine_Material_o *v12; // x0
  UnityEngine_Material_o *v13; // x0
  UnityEngine_Material_o *v14; // x0
  UnityEngine_Material_o *v15; // x21

  if ( (byte_40F8FC6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Graphics_TypeInfo, source);
    sub_B16FFC(&StringLiteral_15900/*"_DisplayColor"*/, v7);
    sub_B16FFC(&StringLiteral_15973/*"_PetternNumber"*/, v8);
    sub_B16FFC(&StringLiteral_15902/*"_Divedenum"*/, v9);
    sub_B16FFC(&StringLiteral_15991/*"_Saturation"*/, v10);
    byte_40F8FC6 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_15991/*"_Saturation"*/, this->fields.saturation, 0LL),
        (v12 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(v12, (System_String_o *)StringLiteral_15902/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (v13 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          v13,
          (System_String_o *)StringLiteral_15900/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (v14 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetInt(v14, (System_String_o *)StringLiteral_15973/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v15 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_40698984((UnityEngine_Texture_o *)source, destination, v15, 0LL);
}