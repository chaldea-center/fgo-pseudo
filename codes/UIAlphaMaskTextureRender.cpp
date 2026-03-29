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

  if ( (byte_4D32186 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    this = (UIAlphaMaskTextureRender_o *)sub_1C93AD4(&StringLiteral_16734/*"a"*/);
    byte_4D32186 = 1;
  }
  if ( !assetData )
    sub_1C93D2C(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_64425724(LastName, (System_String_o *)StringLiteral_16734/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51927708(
                                      assetData,
                                      v5,
                                      (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4D32185 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    byte_4D32185 = 1;
  }
  if ( !assetData )
    sub_1C93D2C(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51927708(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
}