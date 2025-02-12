void __fastcall ContrastImageEffect___ctor(ContrastImageEffect_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0LL);
}


void __fastcall ContrastImageEffect__OnRenderImage(
        ContrastImageEffect_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Material_o *material; // x0
  __int64 v10; // x1
  UnityEngine_Material_o *v11; // x21

  if ( (byte_4BB7268 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Graphics_TypeInfo, source);
    sub_1C13D24(&StringLiteral_16436/*"_ClipRect"*/, v7);
    sub_1C13D24(&StringLiteral_16575/*"_ProjectorPos"*/, v8);
    byte_4BB7268 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16575/*"_ProjectorPos"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(material, v10);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16436/*"_ClipRect"*/, this->fields.contrast, 0LL);
  v11 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_70567716((UnityEngine_Texture_o *)source, destination, v11, 0LL);
}