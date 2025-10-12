void UISpriteAltMat___ctor(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


void UISpriteAltMat__ResetMaterial(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20
  CGThumbnailListItem_o *p_exMaterial; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C392D3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C392D3 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  p_exMaterial = (CGThumbnailListItem_o *)&this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(exMaterial, 0);
  p_exMaterial->klass = 0;
  sub_1C32BC4(p_exMaterial, 0, v5, v6);
}


void UISpriteAltMat__SetMaterialKeepTexture(
        UISpriteAltMat_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Material_o *v8; // x20
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v10; // x20

  if ( (byte_4C392D4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C392D4 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(exMaterial, 0);
  this->fields.exMaterial = mat;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exMaterial, (int32_t)mat, v6, v7);
  v8 = this->fields.exMaterial;
  material = UISprite__get_material((UISprite_o *)this, 0);
  if ( !material
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
                                               0),
        !v8)
    || (UnityEngine_Material__SetTexture(
          v8,
          (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
          (UnityEngine_Texture_o *)material,
          0),
        v10 = this->fields.exMaterial,
        (material = UISprite__get_material((UISprite_o *)this, 0)) == 0)
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                                               0),
        !v10) )
  {
    sub_1C32E7C(material);
  }
  UnityEngine_Material__SetTexture(v10, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, (UnityEngine_Texture_o *)material, 0);
}


UnityEngine_Material_o *UISpriteAltMat__get_material(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20

  if ( (byte_4C392D2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C392D2 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exMaterial, 0, 0) )
    return this->fields.exMaterial;
  else
    return UISprite__get_material((UISprite_o *)this, 0);
}