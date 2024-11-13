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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  float posX; // s9
  float v22; // s8
  UnityEngine_Vector2_o v23; // x1
  UnityEngine_Vector2_o texelSize; // kr00_8
  UnityEngine_Object_o *MaskTexture; // x22
  __int64 v26; // x1
  UnityEngine_Object_o *OverTexture; // x22
  float radius; // s0
  System_String_o *v29; // x23
  PartiallyModifiableGrayScale_o *v30; // x22
  PartiallyModifiableGrayScale_o *v31; // x27
  __int64 v32; // x26
  int v33; // w2
  UnityEngine_Object_o *v34; // x24
  UnityEngine_Object_o *v35; // x22
  UnityEngine_Object_o *v36; // x24
  UnityEngine_Object_o *v37; // x24
  __int64 v38; // x1
  UnityEngine_Material_o *material; // x21
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4B18F7D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, source, destination);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16418/*"_IsSet"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16463/*"_OverTex"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16509/*"_Size"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16491/*"_Saturation"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_16548/*"_UVPosition"*/, v17, v18);
    this = (PartiallyModifiableGrayScale_o *)sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v19, v20);
    byte_4B18F7D = 1;
  }
  if ( !source )
    goto LABEL_46;
  posX = v6->fields.posX;
  v22 = v6->fields.posY + 0.5;
  texelSize = UnityEngine_Texture__get_texelSize((UnityEngine_Texture_o *)source, 0LL);
  MaskTexture = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( texelSize.fields.y < 0.0 )
    v22 = 1.0 - v22;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(MaskTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
      (UnityEngine_Texture_o *)v6->fields.MaskTexture,
      0LL);
  }
  OverTexture = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(OverTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16463/*"_OverTex"*/,
      (UnityEngine_Texture_o *)v6->fields.OverTexture,
      0LL);
  }
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !this
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16491/*"_Saturation"*/,
          v6->fields.saturation,
          0LL),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL)) == 0LL)
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)this,
          (System_String_o *)StringLiteral_16509/*"_Size"*/,
          v6->fields.radius,
          0LL),
        (this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL)) == 0LL) )
  {
LABEL_46:
    sub_1BCAA3C(this, source);
  }
  v40.fields.x = posX + 0.5;
  v40.fields.z = 0.0;
  v40.fields.w = 0.0;
  v40.fields.y = v22;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16548/*"_UVPosition"*/, v40, 0LL);
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  radius = v6->fields.radius;
  v29 = (System_String_o *)StringLiteral_16418/*"_IsSet"*/;
  v30 = this;
  if ( radius >= 0.03 )
    v31 = this;
  else
    v31 = 0LL;
  if ( radius >= 0.03 )
    v32 = StringLiteral_16418/*"_IsSet"*/;
  else
    v32 = 0LL;
  if ( radius < 0.03 )
  {
    v33 = 0;
    goto LABEL_42;
  }
  v34 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, source);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    v35 = (UnityEngine_Object_o *)v6->fields.OverTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, source);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v33 = 3;
      v30 = v31;
      v29 = (System_String_o *)v32;
      goto LABEL_42;
    }
    v30 = v31;
    v29 = (System_String_o *)v32;
  }
  v36 = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, source);
  this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v33 = 2;
  }
  else
  {
    v37 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, source);
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
    v33 = (unsigned __int8)this & 1;
  }
LABEL_42:
  if ( !v30 )
    goto LABEL_46;
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)v30, v29, v33, 0LL);
  material = ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v38);
  UnityEngine_Graphics__Blit_70000204((UnityEngine_Texture_o *)source, destination, material, 0LL);
}