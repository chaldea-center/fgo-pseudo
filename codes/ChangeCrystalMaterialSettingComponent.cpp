void __fastcall ChangeCrystalMaterialSettingComponent___ctor(
        ChangeCrystalMaterialSettingComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall ChangeCrystalMaterialSettingComponent__get_AlphaTexturePropertyName(
        ChangeCrystalMaterialSettingComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4B69EBE & 1) == 0 )
  {
    sub_1BE4ACC(&string_TypeInfo, method);
    byte_4B69EBE = 1;
  }
  result = this->fields.alphaTexturePropertyName;
  if ( !result )
    return string_TypeInfo->static_fields->Empty;
  return result;
}