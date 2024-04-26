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
  float posX; // s9
  float v8; // s8
  UnityEngine_Vector2_o texelSize; // kr00_8
  UnityEngine_Object_o *MaskTexture; // x22
  UnityEngine_Object_o *OverTexture; // x22
  UnityEngine_Material_o *material; // x22
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  UnityEngine_Material_o *v17; // x23
  System_String_o *v18; // x22
  int v19; // w2
  UnityEngine_Material_o *v20; // x21
  UnityEngine_Object_o *v21; // x24
  UnityEngine_Object_o *v22; // x24
  UnityEngine_Object_o *v23; // x24
  UnityEngine_Object_o *v24; // x24
  MethodInfo v25; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4350CB3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Graphics_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16232/*"_IsSet"*/);
    sub_B70694(&StringLiteral_16260/*"_OverTex"*/);
    sub_B70694(&StringLiteral_16293/*"_Size"*/);
    sub_B70694(&StringLiteral_16286/*"_Saturation"*/);
    sub_B70694(&StringLiteral_16324/*"_UVPosition"*/);
    this = (PartiallyModifiableGrayScale_o *)sub_B70694(&StringLiteral_16243/*"_MaskTex"*/);
    byte_4350CB3 = 1;
  }
  if ( !source )
    goto LABEL_47;
  posX = v6->fields.posX;
  v8 = v6->fields.posY + 0.5;
  texelSize = UnityEngine_Texture__get_texelSize((UnityEngine_Texture_o *)source, 0LL);
  MaskTexture = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( texelSize.fields.y < 0.0 )
    v8 = 1.0 - v8;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(MaskTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_47;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16243/*"_MaskTex"*/,
      (UnityEngine_Texture_o *)v6->fields.MaskTexture,
      0LL);
  }
  OverTexture = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(OverTexture, 0LL, 0LL) )
  {
    this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
    if ( !this )
      goto LABEL_47;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16260/*"_OverTex"*/,
      (UnityEngine_Texture_o *)v6->fields.OverTexture,
      0LL);
  }
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)this,
    (System_String_o *)StringLiteral_16286/*"_Saturation"*/,
    v6->fields.saturation,
    0LL);
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)this,
    (System_String_o *)StringLiteral_16293/*"_Size"*/,
    v6->fields.radius,
    0LL);
  material = ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  v26.fields.z = 0.0;
  v26.fields.w = 0.0;
  v26.fields.x = posX + 0.5;
  v26.fields.y = v8;
  v25.methodPointer = 0LL;
  v25.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v26, v13, v14, v15, v16, &v25);
  if ( !material )
LABEL_47:
    sub_B7076C(this, source);
  *(_QWORD *)&v27.fields.x = v25.methodPointer;
  *(_QWORD *)&v27.fields.z = v25.invoker_method;
  UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16324/*"_UVPosition"*/, v27, 0LL);
  this = (PartiallyModifiableGrayScale_o *)ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  v17 = (UnityEngine_Material_o *)this;
  v18 = (System_String_o *)StringLiteral_16232/*"_IsSet"*/;
  if ( v6->fields.radius < 0.03 )
  {
    v19 = 0;
    if ( this )
      goto LABEL_23;
    goto LABEL_47;
  }
  v21 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Object_o *)v6->fields.OverTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = 3;
      if ( v17 )
        goto LABEL_23;
      goto LABEL_47;
    }
  }
  v23 = (UnityEngine_Object_o *)v6->fields.OverTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = 2;
    if ( v17 )
      goto LABEL_23;
    goto LABEL_47;
  }
  v24 = (UnityEngine_Object_o *)v6->fields.MaskTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartiallyModifiableGrayScale_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  v19 = (unsigned __int8)this & 1;
  if ( !v17 )
    goto LABEL_47;
LABEL_23:
  UnityEngine_Material__SetInt(v17, v18, v19, 0LL);
  v20 = ImageEffectBase__get_material((ImageEffectBase_o *)v6, 0LL);
  if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  }
  UnityEngine_Graphics__Blit_41098560((UnityEngine_Texture_o *)source, destination, v20, 0LL);
}