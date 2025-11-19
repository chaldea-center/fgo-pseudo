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

  if ( (byte_4CB7C0F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C0F = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  p_exMaterial = (CGThumbnailListItem_o *)&this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(exMaterial, 0);
  p_exMaterial->klass = 0;
  sub_1C6B9AC(p_exMaterial, 0, v5, v6);
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
  __int64 v10; // x1
  UnityEngine_Material_o *v11; // x20

  if ( (byte_4CB7C10 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_16263/*"_MaskTex"*/);
    byte_4CB7C10 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(exMaterial, 0);
  this->fields.exMaterial = mat;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.exMaterial, (int32_t)mat, v6, v7);
  v8 = this->fields.exMaterial;
  material = UISprite__get_material((UISprite_o *)this, 0);
  if ( !material
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16258/*"_MainTex"*/,
                                               0),
        !v8)
    || (UnityEngine_Material__SetTexture(
          v8,
          (System_String_o *)StringLiteral_16258/*"_MainTex"*/,
          (UnityEngine_Texture_o *)material,
          0),
        v11 = this->fields.exMaterial,
        (material = UISprite__get_material((UISprite_o *)this, 0)) == 0)
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16263/*"_MaskTex"*/,
                                               0),
        !v11) )
  {
    sub_1C6BC60(material, v10);
  }
  UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16263/*"_MaskTex"*/, (UnityEngine_Texture_o *)material, 0);
}


UnityEngine_Material_o *UISpriteAltMat__get_material(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20

  if ( (byte_4CB7C0E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C0E = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exMaterial, 0, 0) )
    return this->fields.exMaterial;
  else
    return UISprite__get_material((UISprite_o *)this, 0);
}