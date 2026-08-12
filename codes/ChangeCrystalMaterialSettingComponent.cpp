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

  result = this->fields.alphaTexturePropertyName;
  if ( !result )
    return **(System_String_o ***)(qword_5984390 + 184);
  return result;
}