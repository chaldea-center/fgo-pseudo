void ChangeCrystalMaterialSettingComponent___ctor(
        ChangeCrystalMaterialSettingComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *ChangeCrystalMaterialSettingComponent__get_AlphaTexturePropertyName(
        ChangeCrystalMaterialSettingComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4E7B039 & 1) == 0 )
  {
    sub_1D0F0B4(&string_TypeInfo);
    byte_4E7B039 = 1;
  }
  result = this->fields.alphaTexturePropertyName;
  if ( !result )
    return string_TypeInfo->static_fields->Empty;
  return result;
}