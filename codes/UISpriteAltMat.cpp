void UISpriteAltMat___ctor(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


void UISpriteAltMat__ResetMaterial(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59721DC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721DC = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(exMaterial, 0);
  this->fields.exMaterial = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.exMaterial, 0, v4, v5, v6, v7, v8, v9);
}


void UISpriteAltMat__SetMaterialKeepTexture(
        UISpriteAltMat_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v14; // x1
  UnityEngine_Material_o *v15; // x20

  if ( (byte_59721DD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_59721DD = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mat);
  UnityEngine_Object__Destroy_83459800(exMaterial, 0);
  this->fields.exMaterial = mat;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.exMaterial, (int32_t)mat, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.exMaterial;
  material = UISprite__get_material((UISprite_o *)this, 0);
  if ( !material
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
                                               0),
        !v12)
    || (UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
          (UnityEngine_Texture_o *)material,
          0),
        v15 = this->fields.exMaterial,
        (material = UISprite__get_material((UISprite_o *)this, 0)) == 0)
    || (material = (UnityEngine_Material_o *)UnityEngine_Material__GetTexture(
                                               material,
                                               (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                                               0),
        !v15) )
  {
    sub_2213CDC(material, v14);
  }
  UnityEngine_Material__SetTexture(v15, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, (UnityEngine_Texture_o *)material, 0);
}


UnityEngine_Material_o *UISpriteAltMat__get_material(UISpriteAltMat_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exMaterial; // x20

  if ( (byte_59721DB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721DB = 1;
  }
  exMaterial = (UnityEngine_Object_o *)this->fields.exMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(exMaterial, 0, 0) )
    return this->fields.exMaterial;
  else
    return UISprite__get_material((UISprite_o *)this, 0);
}