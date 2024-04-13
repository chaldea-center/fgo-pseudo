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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Material_o *material; // x0
  __int64 v14; // x1
  UnityEngine_Material_o *v15; // x21

  if ( (byte_42EA798 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Graphics_TypeInfo, (_DWORD)source, (_DWORD)destination, method);
    sub_B5D5C4(&StringLiteral_16150/*"_Contrast"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16246/*"_Saturation"*/, v10, v11, v12);
    byte_42EA798 = 1;
  }
  material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( !material
    || (UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16246/*"_Saturation"*/, this->fields.saturation, 0LL),
        (material = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(material, v14);
  }
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16150/*"_Contrast"*/, this->fields.contrast, 0LL);
  v15 = ImageEffectBase__get_material((ImageEffectBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_41600788((UnityEngine_Texture_o *)source, destination, v15, 0LL);
}