void __fastcall PartiallyModifiableGrayScale___ctor(PartiallyModifiableGrayScale_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0LL);
}


void __fastcall PartiallyModifiableGrayScale__OnRenderImage(
        PartiallyModifiableGrayScale_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  PartiallyModifiableGrayScale_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  float posX; // s9
  float v15; // s8
  UnityEngine_Vector2_o texelSize; // kr00_8
  UnityEngine_Object_o *MaskTexture; // x22
  UnityEngine_Object_o *OverTexture; // x22
  float radius; // s0
  System_String_o *v20; // x23
  PartiallyModifiableGrayScale_o *v21; // x22
  PartiallyModifiableGrayScale_o *v22; // x27
  __int64 v23; // x26
  int v24; // w2
  UnityEngine_Object_o *v25; // x24
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *v27; // x24
  UnityEngine_Object_o *v28; // x24
  UnityEngine_Material_o *material; // x21
  UnityEngine_Vector4_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4BCA8F6 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Graphics_TypeInfo, source);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_16516/*"_IsSet"*/, v8);
    sub_1C1ABD4(&StringLiteral_16561/*"_OverTex"*/, v9);
    sub_1C1ABD4(&StringLiteral_16607/*"_Size"*/, v10);
    sub_1C1ABD4(&StringLiteral_16589/*"_Saturation"*/, v11);
    sub_1C1ABD4(&StringLiteral_16646/*"_UVPosition"*/, v12);
    this = (PartiallyModifiableGrayScale_o *)sub_1C1ABD4(&StringLiteral_16534/*"_MaskTex"*/, v13);
    byte_4BCA8F6 = 1;
  }
  if ( !source )
    goto LABEL_46;
  posX = v6->fields.posX;
  v15 = v6->fields.posY + 0.5;
  texelSize = UnityEngine_Texture__get_texelSize((UnityEngine_Texture_o *)source, 0LL);
  MaskTexture = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( texelSize.fields.y < 0.0 )
    v15 = 1.0 - v15;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MaskTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16534/*"_MaskTex"*/,
      (UnityEngine_Texture_o *)v6->fields.MaskTexture,
      0LL);
  }
  OverTexture = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(OverTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16561/*"_OverTex"*/,
      (UnityEngine_Texture_o *)v6->fields.OverTexture,
      0LL);
  }
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !this
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16589/*"_Saturation"*/,
          v6->fields.saturation,
          0LL),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16607/*"_Size"*/,
          v6->fields.radius,
          0LL),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL)) == 0LL) )
  {
LABEL_46:
    sub_1C1AE30(this, source);
  }
  v30.fields.x = posX + 0.5;
  v30.fields.z = 0.0;
  v30.fields.w = 0.0;
  v30.fields.y = v15;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16646/*"_UVPosition"*/, v30, 0LL);
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  radius = v6->fields.radius;
  v20 = (System_String_o *)StringLiteral_16516/*"_IsSet"*/;
  v21 = this;
  if ( radius >= 0.03 )
    v22 = this;
  else
    v22 = 0LL;
  if ( radius >= 0.03 )
    v23 = StringLiteral_16516/*"_IsSet"*/;
  else
    v23 = 0LL;
  if ( radius < 0.03 )
  {
    v24 = 0;
    goto LABEL_42;
  }
  v25 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    v26 = (UnityEngine_Object_o *)v6->fields.OverTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v24 = 3;
      v21 = v22;
      v20 = (System_String_o *)v23;
      goto LABEL_42;
    }
    v21 = v22;
    v20 = (System_String_o *)v23;
  }
  v27 = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v24 = 2;
  }
  else
  {
    v28 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
    v24 = (unsigned __int8)this & 1;
  }
LABEL_42:
  if ( !v21 )
    goto LABEL_46;
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)v21, v20, v24, 0LL);
  material = ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_70640140((UnityEngine_Texture_o *)source, destination, material, 0LL);
}