void PartiallyModifiableGrayScale___ctor(PartiallyModifiableGrayScale_o *this, const MethodInfo *method)
{
  ImageEffectBase___ctor((ImageEffectBase_o *)this, 0);
}


void PartiallyModifiableGrayScale__OnRenderImage(
        PartiallyModifiableGrayScale_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  PartiallyModifiableGrayScale_o *v6; // x21
  float posX; // s9
  float v8; // s8
  UnityEngine_Vector2_o texelSize; // kr00_8
  UnityEngine_Object_o *MaskTexture; // x22
  UnityEngine_Object_o *OverTexture; // x22
  float radius; // s0
  System_String_o *v13; // x23
  PartiallyModifiableGrayScale_o *v14; // x22
  PartiallyModifiableGrayScale_o *v15; // x27
  __int64 v16; // x26
  int32_t v17; // w2
  UnityEngine_Object_o *v18; // x24
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Object_o *v20; // x24
  UnityEngine_Object_o *v21; // x24
  UnityEngine_Material_o *material; // x21
  UnityEngine_Vector4_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4D33EAA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16352/*"_IsSet"*/);
    sub_1C93AD4(&StringLiteral_16398/*"_OverTex"*/);
    sub_1C93AD4(&StringLiteral_16448/*"_Size"*/);
    sub_1C93AD4(&StringLiteral_16429/*"_Saturation"*/);
    sub_1C93AD4(&StringLiteral_16490/*"_UVPosition"*/);
    this = (PartiallyModifiableGrayScale_o *)sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D33EAA = 1;
  }
  if ( !source )
    goto LABEL_46;
  posX = v6->fields.posX;
  v8 = v6->fields.posY + 0.5;
  texelSize = UnityEngine_Texture__get_texelSize((UnityEngine_Texture_o *)source, 0);
  MaskTexture = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( texelSize.fields.y < 0.0 )
    v8 = 1.0 - v8;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MaskTexture, 0, 0) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16370/*"_MaskTex"*/,
      (UnityEngine_Texture_o *)v6->fields.MaskTexture,
      0);
  }
  OverTexture = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(OverTexture, 0, 0) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16398/*"_OverTex"*/,
      (UnityEngine_Texture_o *)v6->fields.OverTexture,
      0);
  }
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0);
  if ( !this
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16429/*"_Saturation"*/,
          v6->fields.saturation,
          0),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0)) == 0)
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16448/*"_Size"*/,
          v6->fields.radius,
          0),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0)) == 0) )
  {
LABEL_46:
    sub_1C93D2C(this, source);
  }
  v23.fields.x = posX + 0.5;
  v23.fields.z = 0.0;
  v23.fields.w = 0.0;
  v23.fields.y = v8;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16490/*"_UVPosition"*/, v23, 0);
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0);
  radius = v6->fields.radius;
  v13 = (System_String_o *)StringLiteral_16352/*"_IsSet"*/;
  v14 = this;
  if ( radius >= 0.03 )
    v15 = this;
  else
    v15 = 0;
  if ( radius >= 0.03 )
    v16 = StringLiteral_16352/*"_IsSet"*/;
  else
    v16 = 0;
  if ( radius < 0.03 )
  {
    v17 = 0;
    goto LABEL_42;
  }
  v18 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    v19 = (UnityEngine_Object_o *)v6->fields.OverTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = 3;
      v14 = v15;
      v13 = (System_String_o *)v16;
      goto LABEL_42;
    }
    v14 = v15;
    v13 = (System_String_o *)v16;
  }
  v20 = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = 2;
  }
  else
  {
    v21 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
    v17 = (unsigned __int8)this & 1;
  }
LABEL_42:
  if ( !v14 )
    goto LABEL_46;
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)v14, v13, v17, 0);
  material = ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71964832((UnityEngine_Texture_o *)source, destination, material, 0);
}