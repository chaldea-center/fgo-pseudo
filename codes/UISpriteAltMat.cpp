void UISpriteAltMat___ctor(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


void UISpriteAltMat__ResetMaterial(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20
  GrandQuestFolderBoardItem_o *p_exMaterial; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC8D38 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8D38 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  p_exMaterial = (GrandQuestFolderBoardItem_o *)&this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(exMaterial, 0);
  p_exMaterial->klass = 0;
  sub_1C71354(p_exMaterial, 0, v5, v6, v7, v8, v9, v10);
}


void UISpriteAltMat__SetMaterialKeepTexture(
        UISpriteAltMat_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v14; // x1
  UnityEngine_Material_o *v15; // x20

  if ( (byte_4CC8D39 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_16265/*"_MainTex"*/);
    sub_1C713B0(&StringLiteral_16270/*"_MaskTex"*/);
    byte_4CC8D39 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(exMaterial, 0);
  this->fields.exMaterial = mat;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.exMaterial, (int32_t)mat, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.exMaterial;
  material = UISprite__get_material((UISprite_o *)this, 0);
  if ( !material
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16265/*"_MainTex"*/,
                                               0),
        !v12)
    || (UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16265/*"_MainTex"*/,
          (UnityEngine_Texture_o *)material,
          0),
        v15 = this->fields.exMaterial,
        (material = UISprite__get_material((UISprite_o *)this, 0)) == 0)
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16270/*"_MaskTex"*/,
                                               0),
        !v15) )
  {
    sub_1C71608(material, v14);
  }
  UnityEngine_Material__SetTexture(v15, (System_String_o *)StringLiteral_16270/*"_MaskTex"*/, (UnityEngine_Texture_o *)material, 0);
}


UnityEngine_Material_o *UISpriteAltMat__get_material(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20

  if ( (byte_4CC8D37 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8D37 = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exMaterial, 0, 0) )
    return this->fields.exMaterial;
  else
    return UISprite__get_material((UISprite_o *)this, 0);
}