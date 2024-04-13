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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Material_o *material; // x0
  __int64 v20; // x1
  UnityEngine_Material_o *v21; // x21

  if ( (byte_42E843E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Graphics_TypeInfo, (_DWORD)source, (_DWORD)destination, method);
    sub_B5D5C4(&StringLiteral_16155/*"_DisplayColor"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16228/*"_PetternNumber"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16157/*"_Divedenum"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16246/*"_Saturation"*/, v16, v17, v18);
    byte_42E843E = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16246/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16157/*"_Divedenum"*/, this->fields.divedenum, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16155/*"_DisplayColor"*/,
          this->fields.displaycolorwhithinrange,
          0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(material, v20);
  }
  UnityEngine_Material__SetInt(material, (System_String_o *)StringLiteral_16228/*"_PetternNumber"*/, this->fields.petternNumber, 0LL);
  v21 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_41600788((UnityEngine_Texture_o *)source, destination, v21, 0LL);
}