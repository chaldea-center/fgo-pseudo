void UIAlphaMaskTextureRender___ctor(UIAlphaMaskTextureRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetAlphaTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x0
  System_String_o *v5; // x1

  if ( (byte_4C39193 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    this = (UIAlphaMaskTextureRender_o *)sub_1C32C20(&StringLiteral_16629/*"a"*/);
    byte_4C39193 = 1;
  }
  if ( !assetData )
    sub_1C32E7C(this);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_63518544(LastName, (System_String_o *)StringLiteral_16629/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      assetData,
                                      v5,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4C39192 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    byte_4C39192 = 1;
  }
  if ( !assetData )
    sub_1C32E7C(this);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
}